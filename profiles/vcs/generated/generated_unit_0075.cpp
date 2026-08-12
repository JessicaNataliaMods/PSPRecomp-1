#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0075[4096] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0,
    34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 45, 46,
    0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 52, 0, 0, 0, 0,
    0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 0, 0,
    65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0,
    0, 73, 0, 0, 0, 0, 74, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0,
    0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 84, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94,
    0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0,
    0, 112, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 151, 152, 0, 153, 0, 0, 0, 154, 0,
    0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0,
    160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0,
    0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0,
    178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 183, 184, 0, 0, 0, 0, 0, 185, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 196, 0, 197,
    0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0,
    206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0,
    211, 0, 212, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 218, 219, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 223, 0, 224, 0, 225, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 240, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252,
    253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 284,
    0, 285, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 292, 0, 293, 0, 0, 0, 294, 0, 295, 0,
    0, 0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0,
    0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308,
    0, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 322, 323, 0, 324, 0, 0, 0, 0,
    325, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 334, 0,
    0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0, 344, 0, 0,
    0, 345, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 350, 0, 351, 352, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 361, 0,
    0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 368, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 372,
    0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 380, 0, 381,
    0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 0,
    0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 398, 0,
    399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0,
    0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 416, 417, 0, 0, 0, 418, 0, 0, 419, 0, 420, 0, 0, 421, 422, 0,
    0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0,
    0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0,
    0, 0, 436, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 447,
    0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 459, 0, 460, 0,
    0, 461, 0, 462, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 473, 0,
    0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0,
    0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 485,
    0, 0, 486, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0,
    0, 493, 0, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 501,
    0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0,
    515, 0, 0, 0, 516, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 521,
    522, 0, 523, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 532, 0, 0,
    0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0,
    547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0, 0,
    555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0,
    0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 566, 0, 567, 0, 568, 0, 0, 569, 570, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0,
    578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 583, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0, 0,
    0, 0, 588, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 593, 0,
    0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0,
    599, 0, 0, 0, 0, 0, 600, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 605, 0, 0, 606, 0, 607, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0,
    0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 0, 0, 618, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0,
    621, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 628, 629,
    0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 634, 0, 0, 0, 635, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 640,
    0, 0, 0, 0, 0, 641, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0,
    646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0,
    0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660,
    0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 667, 0, 0, 0, 0, 0, 668, 0, 669, 670, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    673, 0, 0, 674, 0, 675, 0, 0, 676, 0, 0, 677, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 685,
    0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 690, 0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0,
    695, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0,
    701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0,
    0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0,
    0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0,
    0, 0, 0, 0, 0, 0, 0, 736, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 741,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 745, 0, 746, 0, 0, 0, 0, 0, 747, 748, 0,
    749, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0,
    753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 755, 756, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 762, 0, 0, 0, 763, 764, 0, 765, 0,
    0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 769, 0, 770, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772,
};
void recomp_unit_0075_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08930000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0075[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08930000;
    case 2u: goto L_08930004;
    case 3u: goto L_08930024;
    case 4u: goto L_0893002C;
    case 5u: goto L_08930034;
    case 6u: goto L_08930064;
    case 7u: goto L_0893008C;
    case 8u: goto L_089300E4;
    case 9u: goto L_089300EC;
    case 10u: goto L_0893012C;
    case 11u: goto L_089301E4;
    case 12u: goto L_089301EC;
    case 13u: goto L_0893022C;
    case 14u: goto L_08930278;
    case 15u: goto L_08930298;
    case 16u: goto L_089302F4;
    case 17u: goto L_089302FC;
    case 18u: goto L_08930348;
    case 19u: goto L_08930350;
    case 20u: goto L_08930380;
    case 21u: goto L_089303C4;
    case 22u: goto L_089303D0;
    case 23u: goto L_089303E0;
    case 24u: goto L_08930404;
    case 25u: goto L_08930430;
    case 26u: goto L_089304A0;
    case 27u: goto L_089304A8;
    case 28u: goto L_089304B0;
    case 29u: goto L_089304B4;
    case 30u: goto L_089304C8;
    case 31u: goto L_089304E0;
    case 32u: goto L_089304F0;
    case 33u: goto L_089304F8;
    case 34u: goto L_08930500;
    case 35u: goto L_08930508;
    case 36u: goto L_08930510;
    case 37u: goto L_08930520;
    case 38u: goto L_08930528;
    case 39u: goto L_08930530;
    case 40u: goto L_08930538;
    case 41u: goto L_08930540;
    case 42u: goto L_08930550;
    case 43u: goto L_08930560;
    case 44u: goto L_08930568;
    case 45u: goto L_08930578;
    case 46u: goto L_0893057C;
    case 47u: goto L_08930584;
    case 48u: goto L_089305A8;
    case 49u: goto L_089305C0;
    case 50u: goto L_089305D4;
    case 51u: goto L_089305E8;
    case 52u: goto L_089305EC;
    case 53u: goto L_08930608;
    case 54u: goto L_08930610;
    case 55u: goto L_08930620;
    case 56u: goto L_08930628;
    case 57u: goto L_08930630;
    case 58u: goto L_08930638;
    case 59u: goto L_08930640;
    case 60u: goto L_08930650;
    case 61u: goto L_08930658;
    case 62u: goto L_08930660;
    case 63u: goto L_08930668;
    case 64u: goto L_08930670;
    case 65u: goto L_08930680;
    case 66u: goto L_08930690;
    case 67u: goto L_08930698;
    case 68u: goto L_089306A8;
    case 69u: goto L_089306AC;
    case 70u: goto L_089306B4;
    case 71u: goto L_089306D8;
    case 72u: goto L_089306F0;
    case 73u: goto L_08930704;
    case 74u: goto L_08930718;
    case 75u: goto L_0893071C;
    case 76u: goto L_08930738;
    case 77u: goto L_08930744;
    case 78u: goto L_08930754;
    case 79u: goto L_0893075C;
    case 80u: goto L_08930770;
    case 81u: goto L_08930778;
    case 82u: goto L_08930784;
    case 83u: goto L_08930798;
    case 84u: goto L_089307BC;
    case 85u: goto L_089307C0;
    case 86u: goto L_0893080C;
    case 87u: goto L_08930818;
    case 88u: goto L_08930820;
    case 89u: goto L_0893084C;
    case 90u: goto L_089308C0;
    case 91u: goto L_089308D0;
    case 92u: goto L_089308EC;
    case 93u: goto L_089308F4;
    case 94u: goto L_089308FC;
    case 95u: goto L_0893090C;
    case 96u: goto L_0893091C;
    case 97u: goto L_08930924;
    case 98u: goto L_08930934;
    case 99u: goto L_08930944;
    case 100u: goto L_08930954;
    case 101u: goto L_0893095C;
    case 102u: goto L_08930964;
    case 103u: goto L_08930970;
    case 104u: goto L_0893098C;
    case 105u: goto L_089309A4;
    case 106u: goto L_089309BC;
    case 107u: goto L_089309DC;
    case 108u: goto L_08930A34;
    case 109u: goto L_08930A3C;
    case 110u: goto L_08930A58;
    case 111u: goto L_08930A74;
    case 112u: goto L_08930A84;
    case 113u: goto L_08930A88;
    case 114u: goto L_08930AC4;
    case 115u: goto L_08930AD8;
    case 116u: goto L_08930AE4;
    case 117u: goto L_08930AEC;
    case 118u: goto L_08930B0C;
    case 119u: goto L_08930B28;
    case 120u: goto L_08930B40;
    case 121u: goto L_08930B54;
    case 122u: goto L_08930B6C;
    case 123u: goto L_08930B74;
    case 124u: goto L_08930B7C;
    case 125u: goto L_08930B90;
    case 126u: goto L_08930BA8;
    case 127u: goto L_08930BC4;
    case 128u: goto L_08930BDC;
    case 129u: goto L_08930BE4;
    case 130u: goto L_08930BFC;
    case 131u: goto L_08930C0C;
    case 132u: goto L_08930C6C;
    case 133u: goto L_08930C74;
    case 134u: goto L_08930C94;
    case 135u: goto L_08930CA0;
    case 136u: goto L_08930CB0;
    case 137u: goto L_08930CE8;
    case 138u: goto L_08930D40;
    case 139u: goto L_08930D60;
    case 140u: goto L_08930D90;
    case 141u: goto L_08930D98;
    case 142u: goto L_08930DA0;
    case 143u: goto L_08930DC0;
    case 144u: goto L_08930DC4;
    case 145u: goto L_08930DCC;
    case 146u: goto L_08930DE4;
    case 147u: goto L_08930DEC;
    case 148u: goto L_08930E2C;
    case 149u: goto L_08930E34;
    case 150u: goto L_08930E3C;
    case 151u: goto L_08930E5C;
    case 152u: goto L_08930E60;
    case 153u: goto L_08930E68;
    case 154u: goto L_08930E78;
    case 155u: goto L_08930E94;
    case 156u: goto L_08930E9C;
    case 157u: goto L_08930EC0;
    case 158u: goto L_08930EDC;
    case 159u: goto L_08930EF8;
    case 160u: goto L_08930F00;
    case 161u: goto L_08930F0C;
    case 162u: goto L_08930F58;
    case 163u: goto L_08930F60;
    case 164u: goto L_08930F80;
    case 165u: goto L_08930F90;
    case 166u: goto L_08930FA0;
    case 167u: goto L_08930FB4;
    case 168u: goto L_08930FC8;
    case 169u: goto L_08930FD0;
    case 170u: goto L_08930FD8;
    case 171u: goto L_08930FE4;
    case 172u: goto L_08931008;
    case 173u: goto L_08931018;
    case 174u: goto L_08931034;
    case 175u: goto L_08931044;
    case 176u: goto L_0893105C;
    case 177u: goto L_08931070;
    case 178u: goto L_08931080;
    case 179u: goto L_089310B4;
    case 180u: goto L_089310C4;
    case 181u: goto L_089310DC;
    case 182u: goto L_08931110;
    case 183u: goto L_08931120;
    case 184u: goto L_08931124;
    case 185u: goto L_0893113C;
    case 186u: goto L_08931140;
    case 187u: goto L_08931148;
    case 188u: goto L_08931178;
    case 189u: goto L_08931198;
    case 190u: goto L_089311B0;
    case 191u: goto L_089311C4;
    case 192u: goto L_089311E4;
    case 193u: goto L_089311F8;
    case 194u: goto L_0893120C;
    case 195u: goto L_08931270;
    case 196u: goto L_08931274;
    case 197u: goto L_0893127C;
    case 198u: goto L_08931284;
    case 199u: goto L_08931290;
    case 200u: goto L_089312B0;
    case 201u: goto L_089312B8;
    case 202u: goto L_089312C0;
    case 203u: goto L_089312D4;
    case 204u: goto L_089312E0;
    case 205u: goto L_089312F8;
    case 206u: goto L_08931300;
    case 207u: goto L_08931318;
    case 208u: goto L_08931320;
    case 209u: goto L_08931344;
    case 210u: goto L_08931368;
    case 211u: goto L_08931380;
    case 212u: goto L_08931388;
    case 213u: goto L_08931390;
    case 214u: goto L_089313A4;
    case 215u: goto L_089313C0;
    case 216u: goto L_089313D4;
    case 217u: goto L_089313DC;
    case 218u: goto L_089313F0;
    case 219u: goto L_089313F4;
    case 220u: goto L_08931438;
    case 221u: goto L_08931448;
    case 222u: goto L_08931458;
    case 223u: goto L_0893145C;
    case 224u: goto L_08931464;
    case 225u: goto L_0893146C;
    case 226u: goto L_08931478;
    case 227u: goto L_08931494;
    case 228u: goto L_089314A0;
    case 229u: goto L_089314A8;
    case 230u: goto L_089314C4;
    case 231u: goto L_089314D4;
    case 232u: goto L_089314E4;
    case 233u: goto L_089314EC;
    case 234u: goto L_089314F4;
    case 235u: goto L_08931508;
    case 236u: goto L_08931524;
    case 237u: goto L_08931534;
    case 238u: goto L_08931544;
    case 239u: goto L_0893154C;
    case 240u: goto L_08931554;
    case 241u: goto L_08931558;
    case 242u: goto L_0893156C;
    case 243u: goto L_0893157C;
    case 244u: goto L_089315BC;
    case 245u: goto L_089315E0;
    case 246u: goto L_089315E8;
    case 247u: goto L_089315F0;
    case 248u: goto L_08931618;
    case 249u: goto L_08931620;
    case 250u: goto L_08931660;
    case 251u: goto L_08931674;
    case 252u: goto L_0893167C;
    case 253u: goto L_08931680;
    case 254u: goto L_089316A4;
    case 255u: goto L_089316BC;
    case 256u: goto L_08931710;
    case 257u: goto L_0893171C;
    case 258u: goto L_0893172C;
    case 259u: goto L_08931730;
    case 260u: goto L_0893176C;
    case 261u: goto L_08931798;
    case 262u: goto L_089317A4;
    case 263u: goto L_089317AC;
    case 264u: goto L_089317B4;
    case 265u: goto L_089317BC;
    case 266u: goto L_089317C4;
    case 267u: goto L_089317D0;
    case 268u: goto L_089317DC;
    case 269u: goto L_08931800;
    case 270u: goto L_0893181C;
    case 271u: goto L_08931834;
    case 272u: goto L_08931848;
    case 273u: goto L_08931880;
    case 274u: goto L_0893188C;
    case 275u: goto L_08931894;
    case 276u: goto L_089318A4;
    case 277u: goto L_089318AC;
    case 278u: goto L_089318B8;
    case 279u: goto L_089318C0;
    case 280u: goto L_089318D0;
    case 281u: goto L_089318D8;
    case 282u: goto L_089318E4;
    case 283u: goto L_089318EC;
    case 284u: goto L_089318FC;
    case 285u: goto L_08931904;
    case 286u: goto L_08931914;
    case 287u: goto L_0893191C;
    case 288u: goto L_08931928;
    case 289u: goto L_08931930;
    case 290u: goto L_08931948;
    case 291u: goto L_08931950;
    case 292u: goto L_08931958;
    case 293u: goto L_08931960;
    case 294u: goto L_08931970;
    case 295u: goto L_08931978;
    case 296u: goto L_08931988;
    case 297u: goto L_08931990;
    case 298u: goto L_08931998;
    case 299u: goto L_089319A0;
    case 300u: goto L_089319CC;
    case 301u: goto L_089319D4;
    case 302u: goto L_089319DC;
    case 303u: goto L_089319F0;
    case 304u: goto L_08931A04;
    case 305u: goto L_08931A34;
    case 306u: goto L_08931A60;
    case 307u: goto L_08931A6C;
    case 308u: goto L_08931A7C;
    case 309u: goto L_08931A88;
    case 310u: goto L_08931A98;
    case 311u: goto L_08931AA4;
    case 312u: goto L_08931AB4;
    case 313u: goto L_08931AD0;
    case 314u: goto L_08931AE8;
    case 315u: goto L_08931AF4;
    case 316u: goto L_08931B20;
    case 317u: goto L_08931B28;
    case 318u: goto L_08931B30;
    case 319u: goto L_08931B3C;
    case 320u: goto L_08931B48;
    case 321u: goto L_08931B54;
    case 322u: goto L_08931B60;
    case 323u: goto L_08931B64;
    case 324u: goto L_08931B6C;
    case 325u: goto L_08931B80;
    case 326u: goto L_08931B94;
    case 327u: goto L_08931BA4;
    case 328u: goto L_08931BAC;
    case 329u: goto L_08931BB8;
    case 330u: goto L_08931BC0;
    case 331u: goto L_08931BC8;
    case 332u: goto L_08931BD8;
    case 333u: goto L_08931BE8;
    case 334u: goto L_08931BF8;
    case 335u: goto L_08931C0C;
    case 336u: goto L_08931C1C;
    case 337u: goto L_08931C2C;
    case 338u: goto L_08931C3C;
    case 339u: goto L_08931C48;
    case 340u: goto L_08931C50;
    case 341u: goto L_08931C58;
    case 342u: goto L_08931C60;
    case 343u: goto L_08931C68;
    case 344u: goto L_08931C74;
    case 345u: goto L_08931C84;
    case 346u: goto L_08931C90;
    case 347u: goto L_08931CA0;
    case 348u: goto L_08931CB0;
    case 349u: goto L_08931CB8;
    case 350u: goto L_08931CC4;
    case 351u: goto L_08931CCC;
    case 352u: goto L_08931CD0;
    case 353u: goto L_08931CE0;
    case 354u: goto L_08931CEC;
    case 355u: goto L_08931D08;
    case 356u: goto L_08931D3C;
    case 357u: goto L_08931D44;
    case 358u: goto L_08931D4C;
    case 359u: goto L_08931D5C;
    case 360u: goto L_08931D70;
    case 361u: goto L_08931D78;
    case 362u: goto L_08931D84;
    case 363u: goto L_08931D90;
    case 364u: goto L_08931D9C;
    case 365u: goto L_08931DA8;
    case 366u: goto L_08931DB4;
    case 367u: goto L_08931DC0;
    case 368u: goto L_08931DC8;
    case 369u: goto L_08931DCC;
    case 370u: goto L_08931DDC;
    case 371u: goto L_08931DE8;
    case 372u: goto L_08931DFC;
    case 373u: goto L_08931E04;
    case 374u: goto L_08931E18;
    case 375u: goto L_08931E28;
    case 376u: goto L_08931E34;
    case 377u: goto L_08931E44;
    case 378u: goto L_08931E54;
    case 379u: goto L_08931E60;
    case 380u: goto L_08931E74;
    case 381u: goto L_08931E7C;
    case 382u: goto L_08931E90;
    case 383u: goto L_08931EA0;
    case 384u: goto L_08931EAC;
    case 385u: goto L_08931EBC;
    case 386u: goto L_08931ECC;
    case 387u: goto L_08931ED8;
    case 388u: goto L_08931EEC;
    case 389u: goto L_08931EF4;
    case 390u: goto L_08931F08;
    case 391u: goto L_08931F18;
    case 392u: goto L_08931F24;
    case 393u: goto L_08931F34;
    case 394u: goto L_08931F44;
    case 395u: goto L_08931F54;
    case 396u: goto L_08931F5C;
    case 397u: goto L_08931F64;
    case 398u: goto L_08931F78;
    case 399u: goto L_08931F80;
    case 400u: goto L_08931F98;
    case 401u: goto L_08931FA8;
    case 402u: goto L_08931FB4;
    case 403u: goto L_08931FC4;
    case 404u: goto L_08931FD0;
    case 405u: goto L_08931FE8;
    case 406u: goto L_08932014;
    case 407u: goto L_08932040;
    case 408u: goto L_0893204C;
    case 409u: goto L_08932058;
    case 410u: goto L_08932068;
    case 411u: goto L_08932078;
    case 412u: goto L_08932084;
    case 413u: goto L_089320A0;
    case 414u: goto L_089320AC;
    case 415u: goto L_089320B4;
    case 416u: goto L_089320C0;
    case 417u: goto L_089320C4;
    case 418u: goto L_089320D4;
    case 419u: goto L_089320E0;
    case 420u: goto L_089320E8;
    case 421u: goto L_089320F4;
    case 422u: goto L_089320F8;
    case 423u: goto L_08932104;
    case 424u: goto L_0893211C;
    case 425u: goto L_08932154;
    case 426u: goto L_0893216C;
    case 427u: goto L_08932198;
    case 428u: goto L_089321B8;
    case 429u: goto L_089321E4;
    case 430u: goto L_089321F8;
    case 431u: goto L_08932270;
    case 432u: goto L_08932288;
    case 433u: goto L_089322B8;
    case 434u: goto L_089322D0;
    case 435u: goto L_089322EC;
    case 436u: goto L_08932308;
    case 437u: goto L_0893231C;
    case 438u: goto L_08932324;
    case 439u: goto L_0893232C;
    case 440u: goto L_08932334;
    case 441u: goto L_08932340;
    case 442u: goto L_08932348;
    case 443u: goto L_08932350;
    case 444u: goto L_08932360;
    case 445u: goto L_0893236C;
    case 446u: goto L_08932374;
    case 447u: goto L_0893237C;
    case 448u: goto L_08932384;
    case 449u: goto L_08932390;
    case 450u: goto L_08932398;
    case 451u: goto L_089323A0;
    case 452u: goto L_089323A8;
    case 453u: goto L_089323B4;
    case 454u: goto L_089323BC;
    case 455u: goto L_089323C4;
    case 456u: goto L_089323D4;
    case 457u: goto L_089323E0;
    case 458u: goto L_089323E8;
    case 459u: goto L_089323F0;
    case 460u: goto L_089323F8;
    case 461u: goto L_08932404;
    case 462u: goto L_0893240C;
    case 463u: goto L_08932414;
    case 464u: goto L_0893241C;
    case 465u: goto L_08932428;
    case 466u: goto L_08932430;
    case 467u: goto L_08932438;
    case 468u: goto L_08932448;
    case 469u: goto L_08932454;
    case 470u: goto L_0893245C;
    case 471u: goto L_08932464;
    case 472u: goto L_0893246C;
    case 473u: goto L_08932478;
    case 474u: goto L_0893249C;
    case 475u: goto L_089324B0;
    case 476u: goto L_089324F4;
    case 477u: goto L_08932510;
    case 478u: goto L_08932530;
    case 479u: goto L_0893255C;
    case 480u: goto L_08932574;
    case 481u: goto L_08932598;
    case 482u: goto L_089325A8;
    case 483u: goto L_089325D0;
    case 484u: goto L_089325F8;
    case 485u: goto L_089325FC;
    case 486u: goto L_08932608;
    case 487u: goto L_08932614;
    case 488u: goto L_0893261C;
    case 489u: goto L_08932624;
    case 490u: goto L_0893262C;
    case 491u: goto L_0893263C;
    case 492u: goto L_08932668;
    case 493u: goto L_08932684;
    case 494u: goto L_08932690;
    case 495u: goto L_089326A0;
    case 496u: goto L_089326AC;
    case 497u: goto L_089326C0;
    case 498u: goto L_089326CC;
    case 499u: goto L_089326DC;
    case 500u: goto L_089326E8;
    case 501u: goto L_089326FC;
    case 502u: goto L_08932704;
    case 503u: goto L_0893270C;
    case 504u: goto L_08932714;
    case 505u: goto L_08932720;
    case 506u: goto L_0893272C;
    case 507u: goto L_08932734;
    case 508u: goto L_08932758;
    case 509u: goto L_0893279C;
    case 510u: goto L_089327B8;
    case 511u: goto L_089327CC;
    case 512u: goto L_089327E4;
    case 513u: goto L_089327EC;
    case 514u: goto L_089327F4;
    case 515u: goto L_08932800;
    case 516u: goto L_08932810;
    case 517u: goto L_08932814;
    case 518u: goto L_08932824;
    case 519u: goto L_08932864;
    case 520u: goto L_0893286C;
    case 521u: goto L_0893287C;
    case 522u: goto L_08932880;
    case 523u: goto L_08932888;
    case 524u: goto L_08932890;
    case 525u: goto L_089328A0;
    case 526u: goto L_089328BC;
    case 527u: goto L_089328C4;
    case 528u: goto L_089328D0;
    case 529u: goto L_089328D8;
    case 530u: goto L_089328E0;
    case 531u: goto L_089328E8;
    case 532u: goto L_089328F4;
    case 533u: goto L_08932908;
    case 534u: goto L_08932928;
    case 535u: goto L_0893293C;
    case 536u: goto L_0893295C;
    case 537u: goto L_08932964;
    case 538u: goto L_0893296C;
    case 539u: goto L_08932978;
    case 540u: goto L_089329A4;
    case 541u: goto L_089329A8;
    case 542u: goto L_089329BC;
    case 543u: goto L_089329DC;
    case 544u: goto L_089329E4;
    case 545u: goto L_089329F0;
    case 546u: goto L_089329F8;
    case 547u: goto L_08932A00;
    case 548u: goto L_08932A08;
    case 549u: goto L_08932A14;
    case 550u: goto L_08932A28;
    case 551u: goto L_08932A44;
    case 552u: goto L_08932A58;
    case 553u: goto L_08932A60;
    case 554u: goto L_08932A70;
    case 555u: goto L_08932A80;
    case 556u: goto L_08932AC0;
    case 557u: goto L_08932ACC;
    case 558u: goto L_08932ADC;
    case 559u: goto L_08932AF0;
    case 560u: goto L_08932AF8;
    case 561u: goto L_08932B04;
    case 562u: goto L_08932B10;
    case 563u: goto L_08932B1C;
    case 564u: goto L_08932B34;
    case 565u: goto L_08932B3C;
    case 566u: goto L_08932B48;
    case 567u: goto L_08932B50;
    case 568u: goto L_08932B58;
    case 569u: goto L_08932B64;
    case 570u: goto L_08932B68;
    case 571u: goto L_08932B90;
    case 572u: goto L_08932BA8;
    case 573u: goto L_08932BB0;
    case 574u: goto L_08932BB8;
    case 575u: goto L_08932BC0;
    case 576u: goto L_08932BD4;
    case 577u: goto L_08932BF4;
    case 578u: goto L_08932C00;
    case 579u: goto L_08932C14;
    case 580u: goto L_08932C2C;
    case 581u: goto L_08932C40;
    case 582u: goto L_08932C48;
    case 583u: goto L_08932C50;
    case 584u: goto L_08932C58;
    case 585u: goto L_08932C64;
    case 586u: goto L_08932C6C;
    case 587u: goto L_08932C74;
    case 588u: goto L_08932C88;
    case 589u: goto L_08932C94;
    case 590u: goto L_08932C9C;
    case 591u: goto L_08932CA4;
    case 592u: goto L_08932CD8;
    case 593u: goto L_08932CF8;
    case 594u: goto L_08932D14;
    case 595u: goto L_08932D38;
    case 596u: goto L_08932D4C;
    case 597u: goto L_08932D54;
    case 598u: goto L_08932D74;
    case 599u: goto L_08932D80;
    case 600u: goto L_08932D98;
    case 601u: goto L_08932D9C;
    case 602u: goto L_08932DB0;
    case 603u: goto L_08932DCC;
    case 604u: goto L_08932DDC;
    case 605u: goto L_08932E04;
    case 606u: goto L_08932E10;
    case 607u: goto L_08932E18;
    case 608u: goto L_08932E1C;
    case 609u: goto L_08932E28;
    case 610u: goto L_08932E40;
    case 611u: goto L_08932E58;
    case 612u: goto L_08932E60;
    case 613u: goto L_08932E68;
    case 614u: goto L_08932E84;
    case 615u: goto L_08932E8C;
    case 616u: goto L_08932EAC;
    case 617u: goto L_08932EB8;
    case 618u: goto L_08932ED0;
    case 619u: goto L_08932ED4;
    case 620u: goto L_08932EE8;
    case 621u: goto L_08932F00;
    case 622u: goto L_08932F08;
    case 623u: goto L_08932F10;
    case 624u: goto L_08932F2C;
    case 625u: goto L_08932F34;
    case 626u: goto L_08932F54;
    case 627u: goto L_08932F60;
    case 628u: goto L_08932F78;
    case 629u: goto L_08932F7C;
    case 630u: goto L_08932F90;
    case 631u: goto L_08932F98;
    case 632u: goto L_08932FC0;
    case 633u: goto L_08932FE8;
    case 634u: goto L_08933010;
    case 635u: goto L_08933020;
    case 636u: goto L_08933024;
    case 637u: goto L_08933048;
    case 638u: goto L_08933050;
    case 639u: goto L_08933070;
    case 640u: goto L_0893307C;
    case 641u: goto L_08933094;
    case 642u: goto L_08933098;
    case 643u: goto L_089330B0;
    case 644u: goto L_0893310C;
    case 645u: goto L_089331F0;
    case 646u: goto L_08933200;
    case 647u: goto L_08933218;
    case 648u: goto L_0893322C;
    case 649u: goto L_0893323C;
    case 650u: goto L_08933250;
    case 651u: goto L_08933264;
    case 652u: goto L_08933274;
    case 653u: goto L_0893328C;
    case 654u: goto L_0893329C;
    case 655u: goto L_089332A8;
    case 656u: goto L_089332BC;
    case 657u: goto L_089332F8;
    case 658u: goto L_08933330;
    case 659u: goto L_08933338;
    case 660u: goto L_0893337C;
    case 661u: goto L_08933384;
    case 662u: goto L_089333E8;
    case 663u: goto L_08933438;
    case 664u: goto L_08933440;
    case 665u: goto L_08933494;
    case 666u: goto L_089334DC;
    case 667u: goto L_08933504;
    case 668u: goto L_0893351C;
    case 669u: goto L_08933524;
    case 670u: goto L_08933528;
    case 671u: goto L_08933534;
    case 672u: goto L_0893354C;
    case 673u: goto L_08933580;
    case 674u: goto L_0893358C;
    case 675u: goto L_08933594;
    case 676u: goto L_089335A0;
    case 677u: goto L_089335AC;
    case 678u: goto L_089335B4;
    case 679u: goto L_089335C8;
    case 680u: goto L_089335E8;
    case 681u: goto L_08933614;
    case 682u: goto L_08933624;
    case 683u: goto L_0893363C;
    case 684u: goto L_08933670;
    case 685u: goto L_0893367C;
    case 686u: goto L_08933684;
    case 687u: goto L_08933698;
    case 688u: goto L_089336B0;
    case 689u: goto L_089336D0;
    case 690u: goto L_0893370C;
    case 691u: goto L_08933718;
    case 692u: goto L_08933720;
    case 693u: goto L_08933734;
    case 694u: goto L_0893375C;
    case 695u: goto L_08933780;
    case 696u: goto L_089337A0;
    case 697u: goto L_089337B8;
    case 698u: goto L_089337C4;
    case 699u: goto L_089337CC;
    case 700u: goto L_089337E0;
    case 701u: goto L_08933800;
    case 702u: goto L_08933820;
    case 703u: goto L_08933850;
    case 704u: goto L_08933898;
    case 705u: goto L_089338A8;
    case 706u: goto L_089338C0;
    case 707u: goto L_089338D0;
    case 708u: goto L_089338E0;
    case 709u: goto L_089338F4;
    case 710u: goto L_08933904;
    case 711u: goto L_08933914;
    case 712u: goto L_08933928;
    case 713u: goto L_089339A0;
    case 714u: goto L_089339BC;
    case 715u: goto L_089339F4;
    case 716u: goto L_08933AA4;
    case 717u: goto L_08933AB4;
    case 718u: goto L_08933ACC;
    case 719u: goto L_08933AE0;
    case 720u: goto L_08933AF0;
    case 721u: goto L_08933B04;
    case 722u: goto L_08933B18;
    case 723u: goto L_08933B28;
    case 724u: goto L_08933B40;
    case 725u: goto L_08933B50;
    case 726u: goto L_08933B5C;
    case 727u: goto L_08933B70;
    case 728u: goto L_08933BD8;
    case 729u: goto L_08933BE0;
    case 730u: goto L_08933C30;
    case 731u: goto L_08933C38;
    case 732u: goto L_08933C98;
    case 733u: goto L_08933CBC;
    case 734u: goto L_08933CDC;
    case 735u: goto L_08933CF8;
    case 736u: goto L_08933D1C;
    case 737u: goto L_08933D20;
    case 738u: goto L_08933D3C;
    case 739u: goto L_08933D58;
    case 740u: goto L_08933D6C;
    case 741u: goto L_08933D7C;
    case 742u: goto L_08933DB4;
    case 743u: goto L_08933DC0;
    case 744u: goto L_08933DCC;
    case 745u: goto L_08933DD4;
    case 746u: goto L_08933DDC;
    case 747u: goto L_08933DF4;
    case 748u: goto L_08933DF8;
    case 749u: goto L_08933E00;
    case 750u: goto L_08933E24;
    case 751u: goto L_08933E38;
    case 752u: goto L_08933E74;
    case 753u: goto L_08933E80;
    case 754u: goto L_08933EA8;
    case 755u: goto L_08933EB0;
    case 756u: goto L_08933EB4;
    case 757u: goto L_08933ED0;
    case 758u: goto L_08933EF4;
    case 759u: goto L_08933F0C;
    case 760u: goto L_08933F44;
    case 761u: goto L_08933F4C;
    case 762u: goto L_08933F5C;
    case 763u: goto L_08933F6C;
    case 764u: goto L_08933F70;
    case 765u: goto L_08933F78;
    case 766u: goto L_08933F94;
    case 767u: goto L_08933FA4;
    case 768u: goto L_08933FB4;
    case 769u: goto L_08933FC0;
    case 770u: goto L_08933FC8;
    case 771u: goto L_08933FCC;
    case 772u: goto L_08933FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08930000:
    // nop
    goto L_08930004;
L_08930004:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930034;
      }
      goto L_08930024;
    }
}
L_08930024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930064;
      }
      goto L_0893002C;
    }
L_0893002C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08930350;
      }
      goto L_08930034;
    }
L_08930034:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0893008C;
      }
      goto L_08930064;
    }
}
}
L_08930064:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_0893008C;
}
}
L_0893008C:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x089300E4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089300E4u) goto L_089300E4;
    return;
L_089300E4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893012C;
      }
      goto L_089300EC;
    }
L_089300EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(208));
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
    g4 = (g29 + static_cast<std::uint32_t>(336));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930350;
      }
      goto L_0893012C;
    }
}
L_0893012C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[24];
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
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
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x089301E4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089301E4u) goto L_089301E4;
    return;
L_089301E4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893022C;
      }
      goto L_089301EC;
    }
L_089301EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g29 + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(160));
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
    g5 = (g29 + static_cast<std::uint32_t>(432));
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
    g5 = (g29 + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08930350;
      }
      goto L_0893022C;
    }
}
L_0893022C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g29 + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(160));
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
    g4 = (g29 + static_cast<std::uint32_t>(480));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08930298;
      }
      goto L_08930278;
    }
}
}
L_08930278:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089302FC;
      }
      goto L_08930298;
    }
}
L_08930298:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(528));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(544));
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
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089302FC;
      }
      goto L_089302F4;
    }
L_089302F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08930350;
      }
      goto L_089302FC;
    }
L_089302FC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08930348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930348u) goto L_08930348;
    return;
L_08930348:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08930350;
L_08930350:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(916)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(920)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(924)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(928)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(932)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(936)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(940)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(944)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(948)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(952)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(960));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08930380:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089303C4u);
    hot_regs.g6 = (0u | 235u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089303C4u) goto L_089303C4;
    return;
L_089303C4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089303E0;
      }
      goto L_089303D0;
    }
L_089303D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089304A8;
      }
      goto L_089303E0;
    }
}
L_089303E0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g31 = (0x08930404u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930404u) goto L_08930404;
    return;
L_08930404:
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08930430u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 178u, 0x08904B64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930430u) goto L_08930430;
    return;
L_08930430:
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_089304B0;
      }
      goto L_089304A0;
    }
L_089304A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089304B4;
      }
      goto L_089304A8;
    }
L_089304A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930820;
      }
      goto L_089304B0;
    }
L_089304B0:
    hot_regs.g4 = (0u | 1u);
    goto L_089304B4;
L_089304B4:
    ctx.gpr[17] = (hot_regs.g4 & 255u);
    ctx.set_fpu_condition((ctx.fpr[24] < hot_regs.f20));
    ctx.gpr[18] = (0u | 0u);
    if (!ctx.fpu_condition()) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089304C8;
    }
    goto L_089304C8;
L_089304C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    hot_regs.g5 = (32768u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (0u | 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930610;
      }
      goto L_089304E0;
    }
}
L_089304E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930510;
      }
      goto L_089304F0;
    }
}
L_089304F0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930510;
      }
      goto L_089304F8;
    }
L_089304F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930508;
      }
      goto L_08930500;
    }
L_08930500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 241u);
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930508;
    }
L_08930508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 239u);
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930510;
    }
L_08930510:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930540;
      }
      goto L_08930520;
    }
}
L_08930520:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08930540;
      }
      goto L_08930528;
    }
L_08930528:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930538;
      }
      goto L_08930530;
    }
L_08930530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 240u);
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930538;
    }
L_08930538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 238u);
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930540;
    }
L_08930540:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930568;
      }
      goto L_08930550;
    }
}
L_08930550:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08930560u);
    hot_regs.g6 = (0u | 237u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930560u) goto L_08930560;
    return;
L_08930560:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_0893057C;
      }
      goto L_08930568;
    }
L_08930568:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08930578u);
    hot_regs.g6 = (0u | 236u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930578u) goto L_08930578;
    return;
L_08930578:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_0893057C;
L_0893057C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08930608;
      }
      goto L_08930584;
    }
L_08930584:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (49049u << 16u);
    g6 = (g6 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g6);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g6 = (16281u << 16u);
    g6 = (g6 | 39322u);
    g5 = (g5 & 2u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.f13 = std::bit_cast<float>(g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089305C0;
      }
      goto L_089305A8;
    }
}
L_089305A8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (49075u << 16u);
    g5 = (g5 | 13107u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    g5 = (16268u << 16u);
    g5 = (g5 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    goto L_089305C0;
}
L_089305C0:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((ctx.fpr[24] < f14));
    // nop
    if (ctx.fpu_condition()) {
    f14 = f14 - hot_regs.f12;
    hot_regs.f14 = f14;
        goto L_089305EC;
    }
    goto L_089305D4;
}
L_089305D4:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((f14 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = f14;
        goto L_089305E8;
    }
    goto L_089305E8;
}
L_089305E8:
    hot_regs.f14 = hot_regs.f14 - hot_regs.f12;
    goto L_089305EC;
L_089305EC:
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.f12 = hot_regs.f14 / hot_regs.f12;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = hot_regs.f22 - hot_regs.f12;
    hot_regs.g31 = (0x08930608u);
    { const float fs = hot_regs.f15; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930608u) goto L_08930608;
    return;
L_08930608:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930610;
    }
L_08930610:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930640;
      }
      goto L_08930620;
    }
}
L_08930620:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08930640;
      }
      goto L_08930628;
    }
L_08930628:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930638;
      }
      goto L_08930630;
    }
L_08930630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 248u);
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930638;
    }
L_08930638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 246u);
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930640;
    }
L_08930640:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930670;
      }
      goto L_08930650;
    }
}
L_08930650:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08930670;
      }
      goto L_08930658;
    }
L_08930658:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08930668;
      }
      goto L_08930660;
    }
L_08930660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 247u);
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930668;
    }
L_08930668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 245u);
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_08930670;
    }
L_08930670:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930698;
      }
      goto L_08930680;
    }
}
L_08930680:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08930690u);
    hot_regs.g6 = (0u | 243u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930690u) goto L_08930690;
    return;
L_08930690:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089306AC;
      }
      goto L_08930698;
    }
L_08930698:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089306A8u);
    hot_regs.g6 = (0u | 244u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089306A8u) goto L_089306A8;
    return;
L_089306A8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_089306AC;
L_089306AC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08930738;
      }
      goto L_089306B4;
    }
L_089306B4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (49049u << 16u);
    g6 = (g6 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g6);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    g6 = (16281u << 16u);
    g6 = (g6 | 39322u);
    g5 = (g5 & 2u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.f13 = std::bit_cast<float>(g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089306F0;
      }
      goto L_089306D8;
    }
}
L_089306D8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (49075u << 16u);
    g5 = (g5 | 13107u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    g5 = (16268u << 16u);
    g5 = (g5 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    goto L_089306F0;
}
L_089306F0:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((ctx.fpr[24] < f14));
    // nop
    if (ctx.fpu_condition()) {
    f14 = f14 - hot_regs.f12;
    hot_regs.f14 = f14;
        goto L_0893071C;
    }
    goto L_08930704;
}
L_08930704:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_fpu_condition((f14 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = f14;
        goto L_08930718;
    }
    goto L_08930718;
}
L_08930718:
    hot_regs.f14 = hot_regs.f14 - hot_regs.f12;
    goto L_0893071C;
L_0893071C:
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.f12 = hot_regs.f14 / hot_regs.f12;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = hot_regs.f22 - hot_regs.f12;
    hot_regs.g31 = (0x08930738u);
    { const float fs = hot_regs.f15; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930738u) goto L_08930738;
    return;
L_08930738:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 2u);
    if (ctx.gpr[19] == g4) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g4 = g4;
        goto L_089307C0;
    }
    goto L_08930744;
}
L_08930744:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08930754u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930754u) goto L_08930754;
    return;
L_08930754:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089307BC;
      }
      goto L_0893075C;
    }
L_0893075C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g5 & ctx.gpr[20]);
    hot_regs.g31 = (0x08930770u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(860), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 454u, 0x08909B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930770u) goto L_08930770;
    return;
L_08930770:
    hot_regs.g31 = (0x08930778u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 410u, 0x08909880u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930778u) goto L_08930778;
    return;
L_08930778:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08930784u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 197u, 0x0886D43Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930784u) goto L_08930784;
    return;
L_08930784:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 59u);
    hot_regs.g31 = (0x08930798u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930798u) goto L_08930798;
    return;
L_08930798:
    hot_regs.g4 = (16153u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (2193u << 16u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-12812));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089307BCu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089307BCu) goto L_089307BC;
    return;
L_089307BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    goto L_089307C0;
L_089307C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g6 = (0u + static_cast<std::uint32_t>(-257));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(472)));
    g4 = (g4 & g6);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-3));
    g6 = (ctx.gpr[17] & 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    g5 = (g5 & hot_regs.g7);
    g4 = (g6 << 1u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(472), g4);
    g5 = (ctx.gpr[18] & 1u);
    g4 = (g4 & ctx.gpr[20]);
    g5 = (g5 << 2u);
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(472), g4);
    g4 = (g5 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08930820;
      }
      goto L_0893080C;
    }
}
L_0893080C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08930820;
      }
      goto L_08930818;
    }
L_08930818:
    hot_regs.g31 = (0x08930820u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930820u) goto L_08930820;
    return;
L_08930820:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893084C:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-480));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(f24));
    f24 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.gpr[8] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(436), ctx.gpr[16]);
    g7 = (48665u << 16u);
    ctx.gpr[16] = (g4 | 0u);
    g7 = (g7 | 39322u);
    g4 = (ctx.gpr[8] & 512u);
    hot_regs.f12 = std::bit_cast<float>(g7);
    g4 = (0u < g4 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(444), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(448), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(452), ctx.gpr[20]);
    { const float fs = f24; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    g4 = (g4 & 255u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(440), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(456), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(460), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(464), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_089308D0;
      }
      goto L_089308C0;
    }
}
}
L_089308C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 32768u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089308F4;
      }
      goto L_089308D0;
    }
}
L_089308D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089308FC;
      }
      goto L_089308EC;
    }
}
L_089308EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930944;
      }
      goto L_089308F4;
    }
L_089308F4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08931730;
      }
      goto L_089308FC;
    }
L_089308FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0893091C;
      }
      goto L_0893090C;
    }
L_0893090C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08930924;
      }
      goto L_0893091C;
    }
L_0893091C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08930944;
      }
      goto L_08930924;
    }
L_08930924:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08930944;
      }
      goto L_08930934;
    }
L_08930934:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0893095C;
      }
      goto L_08930944;
    }
L_08930944:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 16384u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g4 = g4;
        goto L_08930964;
    }
    goto L_08930954;
}
L_08930954:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_089313F4;
      }
      goto L_0893095C;
    }
L_0893095C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08931730;
      }
      goto L_08930964;
    }
L_08930964:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 4096u);
    if (g4 != 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = g4;
        goto L_089313F4;
    }
    goto L_08930970;
}
L_08930970:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 != 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = g4;
        goto L_089313F4;
    }
    goto L_0893098C;
}
L_0893098C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1024u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[21] = (256u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930BFC;
      }
      goto L_089309A4;
    }
}
L_089309A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1300), 0u);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[22] = (g16 + static_cast<std::uint32_t>(320));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089309DC;
      }
      goto L_089309BC;
    }
}
L_089309BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & g5);
    g5 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    g4 = (g4 & g5);
    g4 = (g4 | 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089309DC;
}
L_089309DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1025));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 1024u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (65280u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), hot_regs.g4);
    hot_regs.g31 = (0x08930A34u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930A34u) goto L_08930A34;
    return;
L_08930A34:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08930BE4;
      }
      goto L_08930A3C;
    }
L_08930A3C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = f12;
        goto L_08930A88;
    }
    goto L_08930A58;
}
L_08930A58:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08930BE4;
      }
      goto L_08930A74;
    }
L_08930A74:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08930BE4;
      }
      goto L_08930A84;
    }
L_08930A84:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    goto L_08930A88;
L_08930A88:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f14));
    g5 = (16261u << 16u);
    g5 = (g5 | 7864u);
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(32));
    g5 = (hot_regs.g6 & 2u);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.f12 = f14 - hot_regs.f22;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08930AD8;
      }
      goto L_08930AC4;
    }
}
}
L_08930AC4:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (48768u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    f13 = f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    goto L_08930AD8;
}
L_08930AD8:
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    hot_regs.g31 = (0x08930AE4u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 225u, 0x088B1AB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930AE4u) goto L_08930AE4;
    return;
L_08930AE4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BC4;
      }
      goto L_08930AEC;
    }
L_08930AEC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(460)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(464)));
    g4 = (g4 | ctx.gpr[21]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(460), g4);
    g4 = (8192u << 16u);
    g5 = (g5 & g4);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08930B28;
      }
      goto L_08930B0C;
    }
}
L_08930B0C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    f12 = f12 + hot_regs.f22;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08930B54;
      }
      goto L_08930B28;
    }
}
L_08930B28:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    f12 = f12 + hot_regs.f22;
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08930B54;
      }
      goto L_08930B40;
    }
}
}
L_08930B40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g5 = (57344u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08930B54;
}
L_08930B54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08930B6Cu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930B6Cu) goto L_08930B6C;
    return;
L_08930B6C:
    hot_regs.g31 = (0x08930B74u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930B74u) goto L_08930B74;
    return;
L_08930B74:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08930B90;
      }
      goto L_08930B7C;
    }
L_08930B7C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08930BDC;
      }
      goto L_08930B90;
    }
L_08930B90:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08930BA8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930BA8u) goto L_08930BA8;
    return;
L_08930BA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930BDC;
      }
      goto L_08930BC4;
    }
}
L_08930BC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_08930BDC;
}
L_08930BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08930BFC;
      }
      goto L_08930BE4;
    }
L_08930BE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(464)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_08930BFC;
}
L_08930BFC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & ctx.gpr[21]);
    { const bool branch_taken = g4 != 0u;
    g4 = (16133u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089313F0;
      }
      goto L_08930C0C;
    }
}
L_08930C0C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    g4 = (g4 | 7864u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    f14 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    f12 = f12 - f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (g5 & 2u);
    f20 = f12 + f14;
    g4 = (0u < g4 ? 1u : 0u);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(96));
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    f20 = f20 - ctx.fpr[24];
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08930CA0;
      }
      goto L_08930C6C;
    }
}
}
L_08930C6C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g4 = (16384u << 16u);
      if (branch_taken) {
          goto L_08930C94;
      }
      goto L_08930C74;
    }
L_08930C74:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[24]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) & 0x7FFFFFFFu);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = hot_regs.f20 + f12;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08930CA0;
      }
      goto L_08930C94;
    }
}
L_08930C94:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    f12 = f12 + ctx.fpr[24];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08930CA0;
}
L_08930CA0:
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08930CB0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 389u, 0x08905CECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930CB0u) goto L_08930CB0;
    return;
L_08930CB0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089313F0;
      }
      goto L_08930CE8;
    }
L_08930CE8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f14));
    g4 = (16261u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f13));
    g4 = (g4 | 7864u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f14));
    f12 = f13 - hot_regs.f22;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (16256u << 16u);
    g4 = (g4 & 2u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(304));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08930D60;
      }
      goto L_08930D40;
    }
}
}
L_08930D40:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (48768u << 16u);
    f12 = f12 + ctx.fpr[24];
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    f13 = f13 + hot_regs.f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08930D60;
}
}
L_08930D60:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08930D90u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 207u, 0x088B1820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930D90u) goto L_08930D90;
    return;
L_08930D90:
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08930DA0;
      }
      goto L_08930D98;
    }
L_08930D98:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08930DC4;
      }
      goto L_08930DA0;
    }
L_08930DA0:
    ctx.gpr[11] = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08930DC0u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 23u, 0x088B426Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930DC0u) goto L_08930DC0;
    return;
L_08930DC0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08930DC4;
L_08930DC4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08930E60;
      }
      goto L_08930DCC;
    }
L_08930DCC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g5 = (g5 & 2u);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08930E60;
      }
      goto L_08930DE4;
    }
}
L_08930DE4:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08930E60;
      }
      goto L_08930DEC;
    }
L_08930DEC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.f13 = hot_regs.f12 + ctx.fpr[24];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08930E2Cu);
    hot_regs.g6 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 207u, 0x088B1820u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930E2Cu) goto L_08930E2C;
    return;
L_08930E2C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08930E3C;
      }
      goto L_08930E34;
    }
L_08930E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08930E60;
      }
      goto L_08930E3C;
    }
L_08930E3C:
    ctx.gpr[11] = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08930E5Cu);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 23u, 0x088B426Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930E5Cu) goto L_08930E5C;
    return;
L_08930E5C:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    goto L_08930E60;
L_08930E60:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089313DC;
      }
      goto L_08930E68;
    }
L_08930E68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930EC0;
      }
      goto L_08930E78;
    }
}
L_08930E78:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    f12 = f12 + hot_regs.f22;
    ctx.set_fpu_condition((hot_regs.f13 < f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08930EC0;
      }
      goto L_08930E94;
    }
}
L_08930E94:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g4 = (16455u << 16u);
      if (branch_taken) {
          goto L_089310B4;
      }
      goto L_08930E9C;
    }
L_08930E9C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g4 = (g4 | 44564u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    f12 = f12 + hot_regs.f13;
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089310B4;
      }
      goto L_08930EC0;
    }
}
}
L_08930EC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (8192u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930EF8;
      }
      goto L_08930EDC;
    }
}
L_08930EDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930FD0;
      }
      goto L_08930EF8;
    }
}
L_08930EF8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1300), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08930F0C;
      }
      goto L_08930F00;
    }
L_08930F00:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(1300));
    hot_regs.g31 = (0x08930F0Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930F0Cu) goto L_08930F0C;
    return;
L_08930F0C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g18 + static_cast<std::uint32_t>(48));
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
    g4 = (g29 + static_cast<std::uint32_t>(160));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1328), g18);
    { const bool branch_taken = g18 == 0u;
    hot_regs.g5 = (g16 + static_cast<std::uint32_t>(1328));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08930F60;
      }
      goto L_08930F58;
    }
}
}
L_08930F58:
    hot_regs.g31 = (0x08930F60u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930F60u) goto L_08930F60;
    return;
L_08930F60:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930FB4;
      }
      goto L_08930F80;
    }
}
L_08930F80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08930FA0;
      }
      goto L_08930F90;
    }
L_08930F90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08930FB4;
      }
      goto L_08930FA0;
    }
L_08930FA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (4096u << 16u);
    g4 = (g4 | hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08930FC8;
      }
      goto L_08930FB4;
    }
}
L_08930FB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g5 = (61440u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08930FC8;
}
L_08930FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931008;
      }
      goto L_08930FD0;
    }
L_08930FD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08930FE4;
      }
      goto L_08930FD8;
    }
L_08930FD8:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(1328));
    hot_regs.g31 = (0x08930FE4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08930FE4u) goto L_08930FE4;
    return;
L_08930FE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(464)));
    g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(464), g4);
    g4 = (61440u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (g5 & g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08931008;
}
L_08931008:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g4 = (g4 & ctx.gpr[19]);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08931034;
      }
      goto L_08931018;
    }
}
L_08931018:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    f12 = f12 + hot_regs.f22;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08931070;
      }
      goto L_08931034;
    }
}
L_08931034:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 44u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08931070;
      }
      goto L_08931044;
    }
L_08931044:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    f12 = f12 + hot_regs.f22;
    g4 = (g4 & ctx.gpr[19]);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08931070;
      }
      goto L_0893105C;
    }
}
}
L_0893105C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g5 = (57344u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08931070;
}
L_08931070:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(30)));
    hot_regs.g5 = (0u | 26u);
    { const bool branch_taken = g4 != hot_regs.g5;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(311), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089310B4;
      }
      goto L_08931080;
    }
}
L_08931080:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(464)));
    g4 = (g4 | 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(464), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089310B4;
}
}
L_089310B4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089310C4u);
    hot_regs.g6 = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089310C4u) goto L_089310C4;
    return;
L_089310C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08931300;
      }
      goto L_089310DC;
    }
}
L_089310DC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (16168u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 62915u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
        goto L_08931124;
    }
    goto L_08931110;
L_08931110:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    g6 = (g6 & 32u);
    if (g6 == 0u) {
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2116)));
    hot_regs.g6 = g6;
        goto L_08931140;
    }
    goto L_08931120;
}
L_08931120:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    goto L_08931124;
L_08931124:
    hot_regs.g6 = (48768u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08931300;
      }
      goto L_0893113C;
    }
L_0893113C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2116)));
    goto L_08931140;
L_08931140:
    { const bool branch_taken = hot_regs.g6 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08931300;
      }
      goto L_08931148;
    }
L_08931148:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16000u << 16u);
    f22 = std::bit_cast<float>(g5);
    g5 = (15395u << 16u);
    f22 = hot_regs.f12 - f22;
    g5 = (g5 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    g5 = (48768u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((ctx.fpr[26] <= f22));
    // nop
    if (!ctx.fpu_condition()) {
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = g5;
    hot_regs.f22 = f22;
        goto L_08931178;
    }
    goto L_08931178;
}
}
L_08931178:
{
    float f24 = ctx.fpr[24];
    hot_regs.g5 = (17096u << 16u);
    f24 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const float fs = hot_regs.f22; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24));
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_089311B0;
      }
      goto L_08931198;
    }
}
L_08931198:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    hot_regs.g5 = (17302u << 16u);
    f12 = f12 - hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    f22 = ctx.fpr[24] + f22;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
    goto L_089311B0;
}
L_089311B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_0893120C;
      }
      goto L_089311C4;
    }
L_089311C4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (48163u << 16u);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    g5 = (g5 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893120C;
      }
      goto L_089311E4;
    }
}
L_089311E4:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893120C;
      }
      goto L_089311F8;
    }
L_089311F8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(324)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08931274;
      }
      goto L_0893120C;
    }
L_0893120C:
    hot_regs.g5 = (49024u << 16u);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(228)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(216));
    hot_regs.g31 = (0x08931270u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931270u) goto L_08931270;
    return;
L_08931270:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    goto L_08931274;
L_08931274:
    hot_regs.g31 = (0x0893127Cu);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(30)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 250u, 0x08A91F58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893127Cu) goto L_0893127C;
    return;
L_0893127C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08931290;
      }
      goto L_08931284;
    }
L_08931284:
{
    float f22 = hot_regs.f22;
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f22; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
    goto L_08931290;
}
L_08931290:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 47u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089312B0u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089312B0u) goto L_089312B0;
    return;
L_089312B0:
    hot_regs.g31 = (0x089312B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089312B8u) goto L_089312B8;
    return;
L_089312B8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (16544u << 16u);
      if (branch_taken) {
          goto L_089312F8;
      }
      goto L_089312C0;
    }
L_089312C0:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089312F8;
      }
      goto L_089312D4;
    }
L_089312D4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089312E0u);
    hot_regs.g5 = (0u | 105u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089312E0u) goto L_089312E0;
    return;
L_089312E0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089312F8u);
    hot_regs.g6 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089312F8u) goto L_089312F8;
    return;
L_089312F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931368;
      }
      goto L_08931300;
    }
L_08931300:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08931368;
      }
      goto L_08931318;
    }
}
L_08931318:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (48259u << 16u);
      if (branch_taken) {
          goto L_08931368;
      }
      goto L_08931320;
    }
L_08931320:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08931368;
      }
      goto L_08931344;
    }
}
}
L_08931344:
    ctx.gpr[10] = (16752u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[10]);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 47u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 2u);
    hot_regs.g31 = (0x08931368u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931368u) goto L_08931368;
    return;
L_08931368:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08931380u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931380u) goto L_08931380;
    return;
L_08931380:
    hot_regs.g31 = (0x08931388u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 563u, 0x0881F274u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931388u) goto L_08931388;
    return;
L_08931388:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089313A4;
      }
      goto L_08931390;
    }
L_08931390:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089313D4;
      }
      goto L_089313A4;
    }
L_089313A4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x089313C0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089313C0u) goto L_089313C0;
    return;
L_089313C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    goto L_089313D4;
}
L_089313D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089313F0;
      }
      goto L_089313DC;
    }
L_089313DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g5 = (61440u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089313F0;
}
L_089313F0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    goto L_089313F4;
L_089313F4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x08931438u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931438u) goto L_08931438;
    return;
L_08931438:
{
    std::uint32_t g2 = hot_regs.g2;
    if (g2 != 0u &&
        (aot_mem.aot_load32(ctx.gpr[16] + 72u) & 14u) == 6u &&
        (aot_mem.aot_load32(ctx.gpr[18] + 72u) & 14u) == 2u) {
        const float ped_vz = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + 328u));
        if (ped_vz <= 0.0f) {
            const std::uint32_t count = g2 > 32u ? 32u : g2;
            for (std::uint32_t i = 0; i < count; ++i) {
                const std::uint32_t point = ctx.gpr[17] + i * 32u;
                const float nz = std::bit_cast<float>(aot_mem.aot_load32(point + 24u));
                if (nz < -0.5f) {
                    for (std::uint32_t component = 16u; component <= 24u; component += 4u) {
                        const std::uint32_t bits = aot_mem.aot_load32(point + component);
                        aot_mem.aot_store32(point + component, bits ^ 0x80000000u);
                    }
                }
            }
        }
    }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 345u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (g2 | 0u);
      if (branch_taken) {
          goto L_0893145C;
      }
      goto L_08931448;
    }
}
L_08931448:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0893145C;
      }
      goto L_08931458;
    }
L_08931458:
    ctx.gpr[19] = (0u | 0u);
    goto L_0893145C;
L_0893145C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) > 0;
    // nop
      if (branch_taken) {
          goto L_0893146C;
      }
      goto L_08931464;
    }
L_08931464:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08931508;
      }
      goto L_0893146C;
    }
L_0893146C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931478u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 570u, 0x08A66AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931478u) goto L_08931478;
    return;
L_08931478:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 2u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089314A0;
      }
      goto L_08931494;
    }
}
L_08931494:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089314A0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 570u, 0x08A66AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089314A0u) goto L_089314A0;
    return;
L_089314A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08931508;
      }
      goto L_089314A8;
    }
L_089314A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 2u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089314F4;
      }
      goto L_089314C4;
    }
}
L_089314C4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089314E4;
      }
      goto L_089314D4;
    }
}
L_089314D4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089314EC;
      }
      goto L_089314E4;
    }
}
L_089314E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_089314EC;
}
L_089314EC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08931508;
      }
      goto L_089314F4;
    }
L_089314F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), g4);
    hot_regs.g4 = g4;
    goto L_08931508;
}
L_08931508:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 2u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g4 = g4;
        goto L_08931558;
    }
    goto L_08931524;
}
L_08931524:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08931544;
      }
      goto L_08931534;
    }
}
L_08931534:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0893154C;
      }
      goto L_08931544;
    }
}
L_08931544:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_0893154C;
}
L_0893154C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0893172C;
      }
      goto L_08931554;
    }
L_08931554:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    goto L_08931558;
L_08931558:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893172C;
      }
      goto L_0893156C;
    }
}
L_0893156C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (49021u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0893172C;
      }
      goto L_0893157C;
    }
}
L_0893157C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (g4 | 28836u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g21 = (0u | 0u);
    g4 = (14979u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (g4 | 4719u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g21 = (ctx.gpr[17] + g21);
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    g4 = (49024u << 16u);
    ctx.gpr[18] = (0u | 26u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[17] = (8192u << 16u);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    goto L_089315BC;
}
L_089315BC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0893167C;
      }
      goto L_089315E0;
    }
}
}
L_089315E0:
    hot_regs.g31 = (0x089315E8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089315E8u) goto L_089315E8;
    return;
L_089315E8:
    if (hot_regs.g2 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
        goto L_08931680;
    }
    goto L_089315F0;
L_089315F0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(320)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(324)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f12 = std::sqrt(f12);
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(320)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08931620;
    }
    goto L_08931618;
}
}
L_08931618:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(320)));
    goto L_08931620;
L_08931620:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    f13 = f13 / f12;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(324)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(56)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(464)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    g4 = (g4 | ctx.gpr[17]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(464), g4);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) ^ 0x80000000u);
    f12 = f14 / f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f13));
    f13 = hot_regs.f15 - ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[16] < hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f13));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089316BC;
      }
      goto L_08931660;
    }
}
}
L_08931660:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089316BC;
      }
      goto L_08931674;
    }
L_08931674:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089316BC;
      }
      goto L_0893167C;
    }
L_0893167C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    goto L_08931680;
L_08931680:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f12 = std::sqrt(f12);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089316BC;
      }
      goto L_089316A4;
    }
}
L_089316A4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    f13 = f13 / f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    f12 = hot_regs.f14 / f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089316BC;
}
}
L_089316BC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0893171C;
      }
      goto L_08931710;
    }
L_08931710:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g4 = (g4 | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_0893171C;
}
L_0893171C:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089315BC;
      }
      goto L_0893172C;
    }
}
L_0893172C:
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    goto L_08931730;
L_08931730:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(416)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(420)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(424)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(428)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(440)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(444)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(456)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(460)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(464)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893176C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 1792u);
    g4 = (g4 >> 8u);
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089319F0;
      }
      goto L_08931798;
    }
}
L_08931798:
{
    std::uint32_t g1 = ctx.gpr[1];
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g4 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_08931894;
      }
      goto L_089317A4;
    }
}
L_089317A4:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08931894;
      }
      goto L_089317AC;
    }
L_089317AC:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08931894;
      }
      goto L_089317B4;
    }
L_089317B4:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08931894;
      }
      goto L_089317BC;
    }
L_089317BC:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08931960;
      }
      goto L_089317C4;
    }
L_089317C4:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089317D0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 765u, 0x0892FCA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089317D0u) goto L_089317D0;
    return;
L_089317D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g4 == 0u;
    g4 = (15692u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08931800;
      }
      goto L_089317DC;
    }
}
L_089317DC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931800u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 789u, 0x0890F6ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931800u) goto L_08931800;
    return;
L_08931800:
    hot_regs.g6 = (16025u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 39322u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893181Cu);
    hot_regs.g6 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 571u, 0x088E3E88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893181Cu) goto L_0893181C;
    return;
L_0893181C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f20 = hot_regs.f12 + hot_regs.f20;
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08931834u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 797u, 0x0890F7BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931834u) goto L_08931834;
    return;
L_08931834:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893188C;
      }
      goto L_08931848;
    }
L_08931848:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1793));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 | 256u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.g4 = (32768u << 16u);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g31 = (0x08931880u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931880u) goto L_08931880;
    return;
L_08931880:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893188Cu);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 801u, 0x0890F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893188Cu) goto L_0893188C;
    return;
L_0893188C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089319F0;
      }
      goto L_08931894;
    }
L_08931894:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089318A4u);
    hot_regs.g6 = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089318A4u) goto L_089318A4;
    return;
L_089318A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089318C0;
      }
      goto L_089318AC;
    }
L_089318AC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089318B8u);
    hot_regs.g5 = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 801u, 0x0890F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089318B8u) goto L_089318B8;
    return;
L_089318B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931958;
      }
      goto L_089318C0;
    }
L_089318C0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089318D0u);
    hot_regs.g6 = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089318D0u) goto L_089318D0;
    return;
L_089318D0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089318EC;
      }
      goto L_089318D8;
    }
L_089318D8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089318E4u);
    hot_regs.g5 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 801u, 0x0890F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089318E4u) goto L_089318E4;
    return;
L_089318E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931958;
      }
      goto L_089318EC;
    }
L_089318EC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089318FCu);
    hot_regs.g6 = (0u | 257u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089318FCu) goto L_089318FC;
    return;
L_089318FC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893191C;
      }
      goto L_08931904;
    }
L_08931904:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931914u);
    hot_regs.g6 = (0u | 258u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931914u) goto L_08931914;
    return;
L_08931914:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08931930;
      }
      goto L_0893191C;
    }
L_0893191C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931928u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 801u, 0x0890F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931928u) goto L_08931928;
    return;
L_08931928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931958;
      }
      goto L_08931930;
    }
L_08931930:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1793));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.g31 = (0x08931948u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890F994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931948u) goto L_08931948;
    return;
L_08931948:
    hot_regs.g31 = (0x08931950u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931950u) goto L_08931950;
    return;
L_08931950:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089319F0;
      }
      goto L_08931958;
    }
L_08931958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089319F0;
      }
      goto L_08931960;
    }
L_08931960:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931970u);
    hot_regs.g6 = (0u | 260u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 216u, 0x08908C10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931970u) goto L_08931970;
    return;
L_08931970:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08931990;
      }
      goto L_08931978;
    }
L_08931978:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 44u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08931998;
      }
      goto L_08931988;
    }
L_08931988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089319CC;
      }
      goto L_08931990;
    }
L_08931990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089319F0;
      }
      goto L_08931998;
    }
L_08931998:
    hot_regs.g31 = (0x089319A0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 808u, 0x0890F908u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089319A0u) goto L_089319A0;
    return;
L_089319A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), hot_regs.g4);
    hot_regs.g4 = (32768u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.g31 = (0x089319CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 403u, 0x089117B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089319CCu) goto L_089319CC;
    return;
L_089319CC:
    hot_regs.g31 = (0x089319D4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890F994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089319D4u) goto L_089319D4;
    return;
L_089319D4:
    hot_regs.g31 = (0x089319DCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 78u, 0x08A08AE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089319DCu) goto L_089319DC;
    return;
L_089319DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1793));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089319F0;
      }
      goto L_089319F0;
    }
}
L_089319F0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08931A04:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(0u);
    g4 = (48896u << 16u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-20368), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-20364), std::bit_cast<std::uint32_t>(f12));
    g4 = (49024u << 16u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-20360), std::bit_cast<std::uint32_t>(hot_regs.f13));
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8848), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8852), std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8856), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08931A34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08931A60u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 462u, 0x08807220u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931A60u) goto L_08931A60;
    return;
L_08931A60:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931A6Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931A6Cu) goto L_08931A6C;
    return;
L_08931A6C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g31 = (0x08931A7Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931A7Cu) goto L_08931A7C;
    return;
L_08931A7C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931A88u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931A88u) goto L_08931A88;
    return;
L_08931A88:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g31 = (0x08931A98u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931A98u) goto L_08931A98;
    return;
L_08931A98:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931AA4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931AA4u) goto L_08931AA4;
    return;
L_08931AA4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g31 = (0x08931AB4u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 489u, 0x0880748Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931AB4u) goto L_08931AB4;
    return;
L_08931AB4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
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
L_08931AD0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08931AE8u);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g29 = g29;
    goto L_08931A34;
}
L_08931AE8:
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
L_08931AF4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g7 & 255u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) >= 0;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08931B30;
      }
      goto L_08931B20;
    }
}
L_08931B20:
    hot_regs.g31 = (0x08931B28u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931B28u) goto L_08931B28;
    return;
L_08931B28:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (hot_regs.g2 + g16);
    g16 = (g16 + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = g16;
    goto L_08931B30;
}
L_08931B30:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931B3Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931B3Cu) goto L_08931B3C;
    return;
L_08931B3C:
    hot_regs.g4 = (0u | 5u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08931C0C;
      }
      goto L_08931B48;
    }
L_08931B48:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08931B64;
      }
      goto L_08931B54;
    }
L_08931B54:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931B60u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931B60u) goto L_08931B60;
    return;
L_08931B60:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    goto L_08931B64;
L_08931B64:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08931B80;
      }
      goto L_08931B6C;
    }
L_08931B6C:
    hot_regs.g6 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931B80u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-11512));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 213u, 0x0889D0C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931B80u) goto L_08931B80;
    return;
L_08931B80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08931B94u);
    ctx.gpr[17] = (ctx.gpr[19] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 639u, 0x08823710u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931B94u) goto L_08931B94;
    return;
L_08931B94:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08931BA4u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931BA4u) goto L_08931BA4;
    return;
L_08931BA4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08931BC0;
      }
      goto L_08931BAC;
    }
L_08931BAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08931BD8;
      }
      goto L_08931BB8;
    }
L_08931BB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08931BF8;
      }
      goto L_08931BC0;
    }
L_08931BC0:
    hot_regs.g31 = (0x08931BC8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 19u, 0x08824204u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931BC8u) goto L_08931BC8;
    return;
L_08931BC8:
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
          goto L_08931CEC;
      }
      goto L_08931BD8;
    }
L_08931BD8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08931BE8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931BE8u) goto L_08931BE8;
    return;
L_08931BE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08931BF8;
}
L_08931BF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08931CEC;
      }
      goto L_08931C0C;
    }
}
L_08931C0C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931C1Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931C1Cu) goto L_08931C1C;
    return;
L_08931C1C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931C2Cu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931C2Cu) goto L_08931C2C;
    return;
L_08931C2C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931C3Cu);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931C3Cu) goto L_08931C3C;
    return;
L_08931C3C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931C48u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931C48u) goto L_08931C48;
    return;
L_08931C48:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08931C60;
      }
      goto L_08931C50;
    }
L_08931C50:
    hot_regs.g31 = (0x08931C58u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931C58u) goto L_08931C58;
    return;
L_08931C58:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08931C84;
      }
      goto L_08931C60;
    }
L_08931C60:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19944));
      if (branch_taken) {
          goto L_08931C74;
      }
      goto L_08931C68;
    }
L_08931C68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2232u << 16u);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-11512));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08931C74;
      }
      goto L_08931C74;
    }
}
L_08931C74:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931C84u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 213u, 0x0889D0C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931C84u) goto L_08931C84;
    return;
L_08931C84:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931C90u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931C90u) goto L_08931C90;
    return;
L_08931C90:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931CA0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931CA0u) goto L_08931CA0;
    return;
L_08931CA0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931CB0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931CB0u) goto L_08931CB0;
    return;
L_08931CB0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (49864u << 16u);
      if (branch_taken) {
          goto L_08931CCC;
      }
      goto L_08931CB8;
    }
L_08931CB8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931CC4u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931CC4u) goto L_08931CC4;
    return;
L_08931CC4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08931CD0;
      }
      goto L_08931CCC;
    }
L_08931CCC:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    goto L_08931CD0;
L_08931CD0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931CE0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931CE0u) goto L_08931CE0;
    return;
L_08931CE0:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    goto L_08931CEC;
L_08931CEC:
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
L_08931D08:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g31 = (0x08931D3Cu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931D3Cu) goto L_08931D3C;
    return;
L_08931D3C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08931D78;
      }
      goto L_08931D44;
    }
L_08931D44:
    hot_regs.g31 = (0x08931D4Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931D4Cu) goto L_08931D4C;
    return;
L_08931D4C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931D5Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931D5Cu) goto L_08931D5C;
    return;
L_08931D5C:
    hot_regs.g5 = (20224u << 16u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 5u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_08931D90;
      }
      goto L_08931D70;
    }
L_08931D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931DCC;
      }
      goto L_08931D78;
    }
L_08931D78:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931D84u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931D84u) goto L_08931D84;
    return;
L_08931D84:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08931FE8;
      }
      goto L_08931D90;
    }
L_08931D90:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19936));
    hot_regs.g31 = (0x08931D9Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931D9Cu) goto L_08931D9C;
    return;
L_08931D9C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931DA8u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 453u, 0x088070DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931DA8u) goto L_08931DA8;
    return;
L_08931DA8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931DB4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931DB4u) goto L_08931DB4;
    return;
L_08931DB4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931DC0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 456u, 0x08807148u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931DC0u) goto L_08931DC0;
    return;
L_08931DC0:
    hot_regs.g31 = (0x08931DC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931DC8u) goto L_08931DC8;
    return;
L_08931DC8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    goto L_08931DCC;
L_08931DCC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931DDCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931DDCu) goto L_08931DDC;
    return;
L_08931DDC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931DE8u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931DE8u) goto L_08931DE8;
    return;
L_08931DE8:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (17279u << 16u);
      if (branch_taken) {
          goto L_08931E04;
      }
      goto L_08931DFC;
    }
L_08931DFC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08931E18;
      }
      goto L_08931E04;
    }
L_08931E04:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
        goto L_08931E18;
    }
    goto L_08931E18;
}
L_08931E18:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f20;
    hot_regs.f12 = f12;
        goto L_08931E34;
    }
    goto L_08931E28;
}
L_08931E28:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08931E44;
      }
      goto L_08931E34;
    }
}
L_08931E34:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g19 = (hot_regs.g4 + g19);
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
    goto L_08931E44;
}
}
L_08931E44:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931E54u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931E54u) goto L_08931E54;
    return;
L_08931E54:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931E60u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931E60u) goto L_08931E60;
    return;
L_08931E60:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (17279u << 16u);
      if (branch_taken) {
          goto L_08931E7C;
      }
      goto L_08931E74;
    }
L_08931E74:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08931E90;
      }
      goto L_08931E7C;
    }
L_08931E7C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
        goto L_08931E90;
    }
    goto L_08931E90;
}
L_08931E90:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f20;
    hot_regs.f12 = f12;
        goto L_08931EAC;
    }
    goto L_08931EA0;
}
L_08931EA0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08931EBC;
      }
      goto L_08931EAC;
    }
}
L_08931EAC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g20 = (hot_regs.g4 + g20);
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
    goto L_08931EBC;
}
}
L_08931EBC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931ECCu);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931ECCu) goto L_08931ECC;
    return;
L_08931ECC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931ED8u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931ED8u) goto L_08931ED8;
    return;
L_08931ED8:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (17279u << 16u);
      if (branch_taken) {
          goto L_08931EF4;
      }
      goto L_08931EEC;
    }
L_08931EEC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08931F08;
      }
      goto L_08931EF4;
    }
L_08931EF4:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
        goto L_08931F08;
    }
    goto L_08931F08;
}
L_08931F08:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f20;
    hot_regs.f12 = f12;
        goto L_08931F24;
    }
    goto L_08931F18;
}
L_08931F18:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08931F34;
      }
      goto L_08931F24;
    }
}
L_08931F24:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g21 = (hot_regs.g4 + g21);
    ctx.gpr[21] = g21;
    hot_regs.f12 = f12;
    goto L_08931F34;
}
}
L_08931F34:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08931F44u);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931F44u) goto L_08931F44;
    return;
L_08931F44:
    ctx.gpr[17] = (0u | 255u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931F54u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931F54u) goto L_08931F54;
    return;
L_08931F54:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08931FC4;
      }
      goto L_08931F5C;
    }
L_08931F5C:
    hot_regs.g31 = (0x08931F64u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931F64u) goto L_08931F64;
    return;
L_08931F64:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
        goto L_08931F80;
    }
    goto L_08931F78;
}
L_08931F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08931F98;
      }
      goto L_08931F80;
    }
L_08931F80:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (17279u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
        goto L_08931F98;
    }
    goto L_08931F98;
}
L_08931F98:
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
        goto L_08931FB4;
    }
    goto L_08931FA8;
L_08931FA8:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f22));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08931FC4;
      }
      goto L_08931FB4;
    }
L_08931FB4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g17 = (hot_regs.g4 + g17);
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    goto L_08931FC4;
}
}
L_08931FC4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08931FD0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08931FD0u) goto L_08931FD0;
    return;
L_08931FD0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[21] << 8u);
    g4 = (ctx.gpr[17] + g4);
    hot_regs.g5 = (ctx.gpr[20] << 16u);
    g2 = (g4 + hot_regs.g5);
    g4 = (ctx.gpr[19] << 24u);
    g2 = (g2 + g4);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    goto L_08931FE8;
}
L_08931FE8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
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
L_08932014:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x08932040u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932040u) goto L_08932040;
    return;
L_08932040:
    hot_regs.g4 = (0u | 5u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08932068;
      }
      goto L_0893204C;
    }
L_0893204C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08932058u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932058u) goto L_08932058;
    return;
L_08932058:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f0));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f0));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f0));
      if (branch_taken) {
          goto L_08932104;
      }
      goto L_08932068;
    }
}
}
L_08932068:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932078u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932078u) goto L_08932078;
    return;
L_08932078:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08932084u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932084u) goto L_08932084;
    return;
L_08932084:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089320A0u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089320A0u) goto L_089320A0;
    return;
L_089320A0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089320ACu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089320ACu) goto L_089320AC;
    return;
L_089320AC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089320C4;
      }
      goto L_089320B4;
    }
L_089320B4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089320C0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089320C0u) goto L_089320C0;
    return;
L_089320C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089320C4;
L_089320C4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089320D4u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 459u, 0x088071ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089320D4u) goto L_089320D4;
    return;
L_089320D4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089320E0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089320E0u) goto L_089320E0;
    return;
L_089320E0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089320F8;
      }
      goto L_089320E8;
    }
L_089320E8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089320F4u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089320F4u) goto L_089320F4;
    return;
L_089320F4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089320F8;
L_089320F8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08932104u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932104u) goto L_08932104;
    return;
L_08932104:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_0893211C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    g16 = (hot_regs.g4 | 0u);
    g17 = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g4 = (g17 | 0u);
    hot_regs.g5 = (g16 | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08932154u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08931AF4;
}
L_08932154:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x0893216Cu);
    hot_regs.g7 = (0u | 1u);
    goto L_08931AF4;
L_0893216C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08932198u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932198u) goto L_08932198;
    return;
L_08932198:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
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
L_089321B8:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g5 = (g16 | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    hot_regs.g31 = (0x089321E4u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08931AF4;
}
L_089321E4:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x089321F8u);
    hot_regs.g7 = (0u | 1u);
    goto L_08931AF4;
L_089321F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[16] = hot_regs.f12 - hot_regs.f14;
    ctx.fpr[17] = hot_regs.f13 - hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = hot_regs.f14 + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    hot_regs.g31 = (0x08932270u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932270u) goto L_08932270;
    return;
L_08932270:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08932288:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), hot_regs.g31);
    g16 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g4 = (g29 | 0u);
    hot_regs.g5 = (g16 | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x089322B8u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08931AF4;
}
L_089322B8:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x089322D0u);
    hot_regs.g7 = (0u | 1u);
    goto L_08931AF4;
L_089322D0:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089322ECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08931AD0;
L_089322EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08932308:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_0893232C;
    }
    goto L_0893231C;
}
L_0893231C:
    hot_regs.g31 = (0x08932324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932324u) goto L_08932324;
    return;
L_08932324:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_0893232C;
}
L_0893232C:
    hot_regs.g31 = (0x08932334u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19928));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932334u) goto L_08932334;
    return;
L_08932334:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (2195u << 16u);
      if (branch_taken) {
          goto L_08932350;
      }
      goto L_08932340;
    }
L_08932340:
    hot_regs.g31 = (0x08932348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932348u) goto L_08932348;
    return;
L_08932348:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g5 = (2195u << 16u);
    goto L_08932350;
L_08932350:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08932360u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8476));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932360u) goto L_08932360;
    return;
L_08932360:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
        goto L_0893237C;
    }
    goto L_0893236C;
}
L_0893236C:
    hot_regs.g31 = (0x08932374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932374u) goto L_08932374;
    return;
L_08932374:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_0893237C;
}
L_0893237C:
    hot_regs.g31 = (0x08932384u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932384u) goto L_08932384;
    return;
L_08932384:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
        goto L_089323A0;
    }
    goto L_08932390;
}
L_08932390:
    hot_regs.g31 = (0x08932398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932398u) goto L_08932398;
    return;
L_08932398:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_089323A0;
}
L_089323A0:
    hot_regs.g31 = (0x089323A8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19916));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089323A8u) goto L_089323A8;
    return;
L_089323A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (2195u << 16u);
      if (branch_taken) {
          goto L_089323C4;
      }
      goto L_089323B4;
    }
L_089323B4:
    hot_regs.g31 = (0x089323BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089323BCu) goto L_089323BC;
    return;
L_089323BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g5 = (2195u << 16u);
    goto L_089323C4;
L_089323C4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x089323D4u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8632));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089323D4u) goto L_089323D4;
    return;
L_089323D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
        goto L_089323F0;
    }
    goto L_089323E0;
}
L_089323E0:
    hot_regs.g31 = (0x089323E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089323E8u) goto L_089323E8;
    return;
L_089323E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_089323F0;
}
L_089323F0:
    hot_regs.g31 = (0x089323F8u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089323F8u) goto L_089323F8;
    return;
L_089323F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
        goto L_08932414;
    }
    goto L_08932404;
}
L_08932404:
    hot_regs.g31 = (0x0893240Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893240Cu) goto L_0893240C;
    return;
L_0893240C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_08932414;
}
L_08932414:
    hot_regs.g31 = (0x0893241Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-19904));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893241Cu) goto L_0893241C;
    return;
L_0893241C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (2195u << 16u);
      if (branch_taken) {
          goto L_08932438;
      }
      goto L_08932428;
    }
L_08932428:
    hot_regs.g31 = (0x08932430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932430u) goto L_08932430;
    return;
L_08932430:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g5 = (2195u << 16u);
    goto L_08932438;
L_08932438:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08932448u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8840));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 444u, 0x08806FA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932448u) goto L_08932448;
    return;
L_08932448:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
        goto L_08932464;
    }
    goto L_08932454;
}
L_08932454:
    hot_regs.g31 = (0x0893245Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893245Cu) goto L_0893245C;
    return;
L_0893245C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_08932464;
}
L_08932464:
    hot_regs.g31 = (0x0893246Cu);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893246Cu) goto L_0893246C;
    return;
L_0893246C:
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
L_08932478:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g31 = (0x0893249Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893249Cu) goto L_0893249C;
    return;
L_0893249C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089324B0u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089324B0u) goto L_089324B0;
    return;
L_089324B0:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (0u | 8u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8884)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(3)));
    hot_regs.g6 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(244), hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089324F4u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089324F4u) goto L_089324F4;
    return;
L_089324F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_08932510:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g31 = (0x08932530u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932530u) goto L_08932530;
    return;
L_08932530:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (2237u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x0893255Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893255Cu) goto L_0893255C;
    return;
L_0893255C:
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
L_08932574:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g5 = (2237u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(252)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g31 = (0x08932598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932598u) goto L_08932598;
    return;
L_08932598:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089325A8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g5 = (2237u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-28736));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(252)));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08932624;
      }
      goto L_089325D0;
    }
}
L_089325D0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g7 = (g7 << 2u);
    g6 = (g6 + g7);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g5 | 0u);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 == 0u;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089325FC;
      }
      goto L_089325F8;
    }
}
L_089325F8:
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), hot_regs.g5);
    goto L_089325FC;
L_089325FC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g7);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g7) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08932614;
      }
      goto L_08932608;
    }
}
L_08932608:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08932614;
L_08932614:
    hot_regs.g31 = (0x0893261Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893261Cu) goto L_0893261C;
    return;
L_0893261C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893262C;
      }
      goto L_08932624;
    }
L_08932624:
    hot_regs.g31 = (0x0893262Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893262Cu) goto L_0893262C;
    return;
L_0893262C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0893263C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    hot_regs.g31 = (0x08932668u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932668u) goto L_08932668;
    return;
L_08932668:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (20224u << 16u);
    f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 < f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - f20;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_08932690;
    }
    goto L_08932684;
}
L_08932684:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089326A0;
      }
      goto L_08932690;
    }
}
L_08932690:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g18 = ctx.gpr[18];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g18 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (32768u << 16u);
    g18 = (g18 + hot_regs.g4);
    ctx.gpr[18] = g18;
    hot_regs.f12 = f12;
    goto L_089326A0;
}
}
L_089326A0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089326ACu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089326ACu) goto L_089326AC;
    return;
L_089326AC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f20;
    hot_regs.f12 = f12;
        goto L_089326CC;
    }
    goto L_089326C0;
}
L_089326C0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089326DC;
      }
      goto L_089326CC;
    }
}
L_089326CC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g17 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (32768u << 16u);
    g17 = (g17 + hot_regs.g4);
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    goto L_089326DC;
}
}
L_089326DC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089326E8u);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089326E8u) goto L_089326E8;
    return;
L_089326E8:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[18] = (ctx.gpr[18] & ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08932704;
      }
      goto L_089326FC;
    }
L_089326FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] << (hot_regs.g4 & 31u));
      if (branch_taken) {
          goto L_08932714;
      }
      goto L_08932704;
    }
L_08932704:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_08932714;
      }
      goto L_0893270C;
    }
L_0893270C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u - g4);
    ctx.gpr[18] = (ctx.gpr[18] >> (g4 & 31u));
    hot_regs.g4 = g4;
    goto L_08932714;
}
L_08932714:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0893272C;
      }
      goto L_08932720;
    }
}
L_08932720:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_0893272C;
L_0893272C:
    hot_regs.g31 = (0x08932734u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932734u) goto L_08932734;
    return;
L_08932734:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08932758:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g5 = (0u | 7u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8885)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(18));
    rt.memory().aot_store_word_right(hot_regs.g29 + static_cast<std::uint32_t>(21), hot_regs.g4);
    rt.memory().aot_store_word_left(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0893279Cu);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893279Cu) goto L_0893279C;
    return;
L_0893279C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16))))));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089327B8u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 753u, 0x08A36ECCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089327B8u) goto L_089327B8;
    return;
L_089327B8:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_089327CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089327E4u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089327E4u) goto L_089327E4;
    return;
L_089327E4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089327F4;
      }
      goto L_089327EC;
    }
L_089327EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08932814;
      }
      goto L_089327F4;
    }
L_089327F4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932800u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932800u) goto L_08932800;
    return;
L_08932800:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08932810u);
    // nop
    goto L_08932758;
L_08932810:
    hot_regs.g2 = (0u | 0u);
    goto L_08932814;
L_08932814:
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
L_08932824:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    g4 = (2237u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(252)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    g5 = (g6 | 0u);
    g4 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g4 & 255u);
    { const bool branch_taken = g6 != 0u;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08932880;
      }
      goto L_08932864;
    }
}
L_08932864:
{
    std::uint32_t g5 = hot_regs.g5;
    if (g5 != 0u) {
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = g5;
        goto L_0893286C;
    }
    goto L_0893286C;
}
L_0893286C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08932864;
      }
      goto L_0893287C;
    }
}
L_0893287C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    goto L_08932880;
L_08932880:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08932890;
      }
      goto L_08932888;
    }
L_08932888:
    hot_regs.g31 = (0x08932890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932890u) goto L_08932890;
    return;
L_08932890:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089328A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089328BCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089328BCu) goto L_089328BC;
    return;
L_089328BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089328E0;
      }
      goto L_089328C4;
    }
L_089328C4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089328D0u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089328D0u) goto L_089328D0;
    return;
L_089328D0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089328E8;
      }
      goto L_089328D8;
    }
L_089328D8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08932928;
      }
      goto L_089328E0;
    }
L_089328E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08932928;
      }
      goto L_089328E8;
    }
L_089328E8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089328F4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089328F4u) goto L_089328F4;
    return;
L_089328F4:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932908u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932908u) goto L_08932908;
    return;
L_08932908:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g5 = (ctx.gpr[17] << 2u);
    g6 = (2237u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-28736));
    g5 = (g5 + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(256), hot_regs.g4);
    hot_regs.g2 = (0u | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08932928;
}
L_08932928:
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
L_0893293C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g31 = (0x0893295Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893295Cu) goto L_0893295C;
    return;
L_0893295C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0893296C;
      }
      goto L_08932964;
    }
L_08932964:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089329A8;
      }
      goto L_0893296C;
    }
L_0893296C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932978u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932978u) goto L_08932978;
    return;
L_08932978:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (2237u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(256)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x089329A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089329A4u) goto L_089329A4;
    return;
L_089329A4:
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    goto L_089329A8;
L_089329A8:
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
L_089329BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g31 = (0x089329DCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089329DCu) goto L_089329DC;
    return;
L_089329DC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08932A00;
      }
      goto L_089329E4;
    }
L_089329E4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089329F0u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089329F0u) goto L_089329F0;
    return;
L_089329F0:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08932A08;
      }
      goto L_089329F8;
    }
L_089329F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08932A44;
      }
      goto L_08932A00;
    }
L_08932A00:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08932A44;
      }
      goto L_08932A08;
    }
L_08932A08:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932A14u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932A14u) goto L_08932A14;
    return;
L_08932A14:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932A28u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932A28u) goto L_08932A28;
    return;
L_08932A28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < hot_regs.g2 ? 1u : 0u);
    g4 = (g4 & 255u);
    g5 = (2237u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-28736));
    g5 = (ctx.gpr[17] + g5);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08932A44;
}
L_08932A44:
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
L_08932A58:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932A60:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08932A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 696u, 0x08AD3BF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932A70u) goto L_08932A70;
    return;
L_08932A70:
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
L_08932A80:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), hot_regs.g31);
    ctx.gpr[20] = (0u | 1u);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (g29 | 0u);
    hot_regs.g5 = (g16 | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08932AC0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08931AF4;
}
L_08932AC0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932ACCu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932ACCu) goto L_08932ACC;
    return;
L_08932ACC:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932ADCu);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932ADCu) goto L_08932ADC;
    return;
L_08932ADC:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[19] = (0u | 0u);
    g18 = (2237u << 16u);
    g18 = (g18 + static_cast<std::uint32_t>(-28736));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = g18;
    goto L_08932AF0;
}
L_08932AF0:
    hot_regs.g31 = (0x08932AF8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932AF8u) goto L_08932AF8;
    return;
L_08932AF8:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(hot_regs.g2) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08932B58;
      }
      goto L_08932B04;
    }
L_08932B04:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08932B10u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932B10u) goto L_08932B10;
    return;
L_08932B10:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08932B50;
      }
      goto L_08932B1C;
    }
L_08932B1C:
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
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08932B34u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 38u, 0x08824354u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932B34u) goto L_08932B34;
    return;
L_08932B34:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08932B50;
      }
      goto L_08932B3C;
    }
L_08932B3C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932B48u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932B48u) goto L_08932B48;
    return;
L_08932B48:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08932B68;
      }
      goto L_08932B50;
    }
L_08932B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08932AF0;
      }
      goto L_08932B58;
    }
L_08932B58:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08932B64u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932B64u) goto L_08932B64;
    return;
L_08932B64:
    hot_regs.g2 = (ctx.gpr[20] | 0u);
    goto L_08932B68;
L_08932B68:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08932B90:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08932BB8;
      }
      goto L_08932BA8;
    }
}
L_08932BA8:
    hot_regs.g31 = (0x08932BB0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932BB0u) goto L_08932BB0;
    return;
L_08932BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08932BC0;
      }
      goto L_08932BB8;
    }
L_08932BB8:
    hot_regs.g31 = (0x08932BC0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932BC0u) goto L_08932BC0;
    return;
L_08932BC0:
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
L_08932BD4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08932C00;
      }
      goto L_08932BF4;
    }
}
L_08932BF4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), ctx.gpr[17]);
    hot_regs.g31 = (0x08932C00u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932C00u) goto L_08932C00;
    return;
L_08932C00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x08932C14u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932C14u) goto L_08932C14;
    return;
L_08932C14:
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
L_08932C2C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_08932C50;
    }
    goto L_08932C40;
}
L_08932C40:
    hot_regs.g31 = (0x08932C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932C48u) goto L_08932C48;
    return;
L_08932C48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_08932C50;
}
L_08932C50:
    hot_regs.g31 = (0x08932C58u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 322u, 0x0880682Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932C58u) goto L_08932C58;
    return;
L_08932C58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
        goto L_08932C74;
    }
    goto L_08932C64;
}
L_08932C64:
    hot_regs.g31 = (0x08932C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932C6Cu) goto L_08932C6C;
    return;
L_08932C6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    goto L_08932C74;
}
L_08932C74:
    hot_regs.g6 = (2232u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-11400));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08932C88u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932C88u) goto L_08932C88;
    return;
L_08932C88:
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
L_08932C94:
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8886), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932C9C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932CA4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08932CD8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932CD8u) goto L_08932CD8;
    return;
L_08932CD8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08932CF8u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 79u, 0x0886481Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932CF8u) goto L_08932CF8;
    return;
L_08932CF8:
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
L_08932D14:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g7 = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08932D38u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932D38u) goto L_08932D38;
    return;
L_08932D38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (0u < g4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08932D54;
      }
      goto L_08932D4C;
    }
}
L_08932D4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08932D9C;
      }
      goto L_08932D54;
    }
L_08932D54:
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
          goto L_08932D80;
      }
      goto L_08932D74;
    }
}
L_08932D74:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08932D9C;
      }
      goto L_08932D80;
    }
}
L_08932D80:
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
          goto L_08932D9C;
      }
      goto L_08932D98;
    }
}
L_08932D98:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08932D9C;
L_08932D9C:
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
L_08932DB0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08932DCCu);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932DCCu) goto L_08932DCC;
    return;
L_08932DCC:
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
L_08932DDC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08932E04u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932E04u) goto L_08932E04;
    return;
L_08932E04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
        goto L_08932E1C;
    }
    goto L_08932E10;
}
L_08932E10:
    hot_regs.g31 = (0x08932E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932E18u) goto L_08932E18;
    return;
L_08932E18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08932E1C;
L_08932E1C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08932E28u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 70u, 0x08954310u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932E28u) goto L_08932E28;
    return;
L_08932E28:
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
L_08932E40:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08932E60;
      }
      goto L_08932E58;
    }
}
L_08932E58:
    hot_regs.g31 = (0x08932E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932E60u) goto L_08932E60;
    return;
L_08932E60:
    hot_regs.g31 = (0x08932E68u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 113u, 0x08954704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932E68u) goto L_08932E68;
    return;
L_08932E68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (hot_regs.g2 & 255u);
    g4 = (0u < g4 ? 1u : 0u);
    g5 = (g5 ^ g4);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08932E8C;
      }
      goto L_08932E84;
    }
}
L_08932E84:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08932ED4;
      }
      goto L_08932E8C;
    }
L_08932E8C:
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
          goto L_08932EB8;
      }
      goto L_08932EAC;
    }
}
L_08932EAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08932ED4;
      }
      goto L_08932EB8;
    }
}
L_08932EB8:
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
          goto L_08932ED4;
      }
      goto L_08932ED0;
    }
}
L_08932ED0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08932ED4;
L_08932ED4:
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
L_08932EE8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08932F08;
      }
      goto L_08932F00;
    }
}
L_08932F00:
    hot_regs.g31 = (0x08932F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932F08u) goto L_08932F08;
    return;
L_08932F08:
    hot_regs.g31 = (0x08932F10u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932F10u) goto L_08932F10;
    return;
L_08932F10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (hot_regs.g2 & 255u);
    g4 = (0u < g4 ? 1u : 0u);
    g5 = (g5 ^ g4);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08932F34;
      }
      goto L_08932F2C;
    }
}
L_08932F2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08932F7C;
      }
      goto L_08932F34;
    }
L_08932F34:
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
          goto L_08932F60;
      }
      goto L_08932F54;
    }
}
L_08932F54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08932F7C;
      }
      goto L_08932F60;
    }
}
L_08932F60:
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
          goto L_08932F7C;
      }
      goto L_08932F78;
    }
}
L_08932F78:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08932F7C;
L_08932F7C:
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
L_08932F90:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08932F98:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08932FC0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08932FC0u) goto L_08932FC0;
    return;
L_08932FC0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8040), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8044), hot_regs.g5);
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
L_08932FE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08933010u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933010u) goto L_08933010;
    return;
L_08933010:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08933024;
      }
      goto L_08933020;
    }
L_08933020:
    hot_regs.g4 = (0u | 1u);
    goto L_08933024;
L_08933024:
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
          goto L_08933050;
      }
      goto L_08933048;
    }
}
L_08933048:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08933098;
      }
      goto L_08933050;
    }
L_08933050:
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
          goto L_0893307C;
      }
      goto L_08933070;
    }
}
L_08933070:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08933098;
      }
      goto L_0893307C;
    }
}
L_0893307C:
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
          goto L_08933098;
      }
      goto L_08933094;
    }
}
L_08933094:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08933098;
L_08933098:
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
L_089330B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), hot_regs.g31);
    ctx.gpr[30] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 13u);
    hot_regs.g31 = (0x0893310Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893310Cu) goto L_0893310C;
    return;
L_0893310C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (hot_regs.g5 & 1u);
    hot_regs.g5 = (hot_regs.g5 & 2u);
    hot_regs.g5 = (0u < hot_regs.g5 ? 1u : 0u);
    hot_regs.g6 = (17154u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (16704u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (ctx.gpr[30] + hot_regs.g7);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (20224u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = hot_regs.f22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08933200;
      }
      goto L_089331F0;
    }
L_089331F0:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08933218;
      }
      goto L_08933200;
    }
}
L_08933200:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g8 = ctx.gpr[8];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    f14 = f14 - hot_regs.f13;
    g8 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f14));
    g8 = (ctx.gpr[9] + g8);
    ctx.gpr[8] = g8;
    hot_regs.f14 = f14;
    goto L_08933218;
}
}
L_08933218:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((f14 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = f14;
        goto L_0893323C;
    }
    goto L_0893322C;
}
L_0893322C:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08933250;
      }
      goto L_0893323C;
    }
}
L_0893323C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g9 = ctx.gpr[9];
    f14 = f14 - hot_regs.f13;
    g9 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(f14));
    g9 = (ctx.gpr[10] + g9);
    ctx.gpr[9] = g9;
    hot_regs.f14 = f14;
    goto L_08933250;
}
}
L_08933250:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08933274;
      }
      goto L_08933264;
    }
L_08933264:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0893328C;
      }
      goto L_08933274;
    }
}
L_08933274:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g16 = ctx.gpr[16];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    f14 = f14 - hot_regs.f13;
    g16 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f14));
    g16 = (ctx.gpr[8] + g16);
    ctx.gpr[16] = g16;
    hot_regs.f14 = f14;
    goto L_0893328C;
}
}
L_0893328C:
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[9]);
      if (branch_taken) {
          goto L_089332A8;
      }
      goto L_0893329C;
    }
L_0893329C:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f22));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_089332BC;
      }
      goto L_089332A8;
    }
L_089332A8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g8 = ctx.gpr[8];
    f13 = hot_regs.f22 - f13;
    g8 = (32768u << 16u);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f13));
    g8 = (ctx.gpr[9] + g8);
    ctx.gpr[8] = g8;
    hot_regs.f13 = f13;
    goto L_089332BC;
}
}
L_089332BC:
    ctx.gpr[16] = (hot_regs.g7 + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[8]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089333E8;
      }
      goto L_089332F8;
    }
L_089332F8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08933330u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933330u) goto L_08933330;
    return;
L_08933330:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089333E8;
      }
      goto L_08933338;
    }
L_08933338:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    f12 = f12 + ctx.fpr[26];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08933384;
      }
      goto L_0893337C;
    }
}
}
L_0893337C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08933384;
L_08933384:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5048)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g2 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (49152u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[8] = (ctx.gpr[22] << 16u);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g2 = (17056u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[9] = (ctx.gpr[19] & 255u);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g2);
    ctx.gpr[10] = (ctx.gpr[20] & 255u);
    ctx.gpr[11] = (ctx.gpr[21] & 255u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g7 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x089333E8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089333E8u) goto L_089333E8;
    return;
L_089333E8:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[19]);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[20]);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[21]);
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08933438u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933438u) goto L_08933438;
    return;
L_08933438:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08933494;
      }
      goto L_08933440;
    }
L_08933440:
    hot_regs.g4 = (16448u << 16u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (16968u << 16u);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[9] = (16320u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g5 = (ctx.gpr[19] & 255u);
    hot_regs.g6 = (ctx.gpr[20] & 255u);
    hot_regs.g7 = (ctx.gpr[21] & 255u);
    ctx.gpr[8] = (ctx.gpr[22] & 255u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08933494u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933494u) goto L_08933494;
    return;
L_08933494:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089334DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08933504u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933504u) goto L_08933504;
    return;
L_08933504:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (g4 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
        goto L_08933528;
    }
    goto L_0893351C;
}
L_0893351C:
    hot_regs.g31 = (0x08933524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933524u) goto L_08933524;
    return;
L_08933524:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08933528;
L_08933528:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08933534u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 77u, 0x0895439Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933534u) goto L_08933534;
    return;
L_08933534:
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
L_0893354C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08933580u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933580u) goto L_08933580;
    return;
L_08933580:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_08933594;
      }
      goto L_0893358C;
    }
L_0893358C:
    hot_regs.g31 = (0x08933594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933594u) goto L_08933594;
    return;
L_08933594:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g31 = (0x089335A0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 104u, 0x08954624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089335A0u) goto L_089335A0;
    return;
L_089335A0:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089335B4;
      }
      goto L_089335AC;
    }
L_089335AC:
    hot_regs.g4 = (256u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] | hot_regs.g4);
    goto L_089335B4;
L_089335B4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089335C8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089335C8u) goto L_089335C8;
    return;
L_089335C8:
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
L_089335E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g7 = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08933614u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933614u) goto L_08933614;
    return;
L_08933614:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08933624u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933624u) goto L_08933624;
    return;
L_08933624:
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
L_0893363C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g31 = (0x08933670u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933670u) goto L_08933670;
    return;
L_08933670:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_08933684;
      }
      goto L_0893367C;
    }
L_0893367C:
    hot_regs.g31 = (0x08933684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933684u) goto L_08933684;
    return;
L_08933684:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08933698u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 95u, 0x089544E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933698u) goto L_08933698;
    return;
L_08933698:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089336B0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089336B0u) goto L_089336B0;
    return;
L_089336B0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089336D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g31 = (0x0893370Cu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893370Cu) goto L_0893370C;
    return;
L_0893370C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_08933720;
      }
      goto L_08933718;
    }
L_08933718:
    hot_regs.g31 = (0x08933720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933720u) goto L_08933720;
    return;
L_08933720:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08933734u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 95u, 0x089544E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933734u) goto L_08933734;
    return;
L_08933734:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0893375Cu);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0893375Cu) goto L_0893375C;
    return;
L_0893375C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08933780:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089337A0u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089337A0u) goto L_089337A0;
    return;
L_089337A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (49024u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089337C4;
      }
      goto L_089337B8;
    }
}
L_089337B8:
    hot_regs.f12 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089337CC;
      }
      goto L_089337C4;
    }
L_089337C4:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089337CC;
L_089337CC:
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
L_089337E0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08933800u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933800u) goto L_08933800;
    return;
L_08933800:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g2 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(5481), static_cast<std::uint8_t>(g4));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08933820:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g31 = (0x08933850u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933850u) goto L_08933850;
    return;
L_08933850:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(24)));
    ctx.gpr[10] = (20224u << 16u);
    g9 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((f16 < hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = !ctx.fpu_condition();
    g9 = (ctx.gpr[16] + g9);
    ctx.gpr[9] = g9;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_089338A8;
      }
      goto L_08933898;
    }
}
}
L_08933898:
{
    float f16 = ctx.fpr[16];
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(f16));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_089338C0;
      }
      goto L_089338A8;
    }
}
L_089338A8:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g10 = ctx.gpr[10];
    f16 = f16 - hot_regs.f12;
    g10 = (32768u << 16u);
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(f16));
    g10 = (ctx.gpr[11] + g10);
    ctx.gpr[9] = (ctx.gpr[9] + g10);
    ctx.gpr[10] = g10;
    ctx.fpr[16] = f16;
    goto L_089338C0;
}
}
L_089338C0:
{
    float f15 = hot_regs.f15;
    ctx.set_fpu_condition((f15 < hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    f15 = f15 - hot_regs.f12;
    hot_regs.f15 = f15;
        goto L_089338E0;
    }
    goto L_089338D0;
}
L_089338D0:
{
    float f15 = hot_regs.f15;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(f15));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_089338F4;
      }
      goto L_089338E0;
    }
}
L_089338E0:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (32768u << 16u);
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(f15));
    g10 = (ctx.gpr[11] + g10);
    ctx.gpr[9] = (ctx.gpr[9] + g10);
    ctx.gpr[10] = g10;
    hot_regs.f15 = f15;
    goto L_089338F4;
}
}
L_089338F4:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = hot_regs.f14 - f12;
    hot_regs.f12 = f12;
        goto L_08933914;
    }
    goto L_08933904;
}
L_08933904:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08933928;
      }
      goto L_08933914;
    }
L_08933914:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(f12));
    g10 = (ctx.gpr[11] + g10);
    ctx.gpr[9] = (ctx.gpr[9] + g10);
    ctx.gpr[10] = g10;
    hot_regs.f12 = f12;
    goto L_08933928;
}
}
L_08933928:
    ctx.gpr[10] = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[10]);
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5008)));
    ctx.gpr[10] = (49152u << 16u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[10]);
    hot_regs.g4 = (hot_regs.g4 << 16u);
    ctx.gpr[10] = (hot_regs.g6 & 255u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.f14 = std::bit_cast<float>(0u);
    hot_regs.g2 = (16704u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[9] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g2 = (16256u << 16u);
    ctx.gpr[9] = (hot_regs.g7 & 255u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[11] = (hot_regs.g5 & 255u);
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g2 = (17224u << 16u);
    hot_regs.g5 = (0u | 1u);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g2);
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089339A0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089339A0u) goto L_089339A0;
    return;
L_089339A0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_089339BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), hot_regs.g31);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 9u);
    hot_regs.g31 = (0x089339F4u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089339F4u) goto L_089339F4;
    return;
L_089339F4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (17154u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g7 = (16704u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (ctx.gpr[18] + hot_regs.g7);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (20224u << 16u);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08933AB4;
      }
      goto L_08933AA4;
    }
L_08933AA4:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08933ACC;
      }
      goto L_08933AB4;
    }
}
L_08933AB4:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g8 = ctx.gpr[8];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    f14 = f14 - hot_regs.f13;
    g8 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f14));
    g8 = (ctx.gpr[9] + g8);
    ctx.gpr[8] = g8;
    hot_regs.f14 = f14;
    goto L_08933ACC;
}
}
L_08933ACC:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((f14 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = f14;
        goto L_08933AF0;
    }
    goto L_08933AE0;
}
L_08933AE0:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08933B04;
      }
      goto L_08933AF0;
    }
}
L_08933AF0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g9 = ctx.gpr[9];
    f14 = f14 - hot_regs.f13;
    g9 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(f14));
    g9 = (ctx.gpr[10] + g9);
    ctx.gpr[9] = g9;
    hot_regs.f14 = f14;
    goto L_08933B04;
}
}
L_08933B04:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08933B28;
      }
      goto L_08933B18;
    }
L_08933B18:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08933B40;
      }
      goto L_08933B28;
    }
}
L_08933B28:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g16 = ctx.gpr[16];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    f14 = f14 - hot_regs.f13;
    g16 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f14));
    g16 = (ctx.gpr[8] + g16);
    ctx.gpr[16] = g16;
    hot_regs.f14 = f14;
    goto L_08933B40;
}
}
L_08933B40:
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08933B5C;
      }
      goto L_08933B50;
    }
L_08933B50:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08933B70;
      }
      goto L_08933B5C;
    }
L_08933B5C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g8 = ctx.gpr[8];
    f13 = hot_regs.f20 - f13;
    g8 = (32768u << 16u);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(f13));
    g8 = (ctx.gpr[9] + g8);
    ctx.gpr[8] = g8;
    hot_regs.f13 = f13;
    goto L_08933B70;
}
}
L_08933B70:
    ctx.gpr[16] = (hot_regs.g7 + ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[8]);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x08933BD8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933BD8u) goto L_08933BD8;
    return;
L_08933BD8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08933C98;
      }
      goto L_08933BE0;
    }
L_08933BE0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g4 = (16384u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f13 + f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08933C38;
      }
      goto L_08933C30;
    }
}
}
L_08933C30:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08933C38;
L_08933C38:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5064)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g2 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (49152u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[8] = (ctx.gpr[17] << 16u);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g2 = (17136u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08933C98u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 490u, 0x08A97518u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933C98u) goto L_08933C98;
    return;
L_08933C98:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08933CBC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08933CDCu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933CDCu) goto L_08933CDC;
    return;
L_08933CDC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g2 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8432), static_cast<std::uint8_t>(hot_regs.g4));
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
L_08933CF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08933D6C;
      }
      goto L_08933D1C;
    }
}
L_08933D1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08933D20;
L_08933D20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(8));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (g4 + static_cast<std::uint32_t>(16));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08933D58;
      }
      goto L_08933D3C;
    }
}
L_08933D3C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(60)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08933D58u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933D58u) goto L_08933D58;
    return;
L_08933D58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08933D20;
    }
    goto L_08933D6C;
}
L_08933D6C:
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
L_08933D7C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g5 + static_cast<std::uint32_t>(8));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    g5 = (g4 ^ g5);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08933E24;
      }
      goto L_08933DB4;
    }
}
L_08933DB4:
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08933DF8;
      }
      goto L_08933DC0;
    }
L_08933DC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08933DD4;
      }
      goto L_08933DCC;
    }
L_08933DCC:
    hot_regs.g31 = (0x08933DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933DD4u) goto L_08933DD4;
    return;
L_08933DD4:
    hot_regs.g31 = (0x08933DDCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 601u, 0x08A53394u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933DDCu) goto L_08933DDC;
    return;
L_08933DDC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08933DF4u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933DF4u) goto L_08933DF4;
    return;
L_08933DF4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    goto L_08933DF8;
L_08933DF8:
    hot_regs.g31 = (0x08933E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933E00u) goto L_08933E00;
    return;
L_08933E00:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g6 = (hot_regs.g4 ^ g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g5);
    g5 = (0u < hot_regs.g6 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08933DB4;
      }
      goto L_08933E24;
    }
}
L_08933E24:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08933E38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(8));
    g18 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (g18 ^ g4);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g18);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08933EF4;
      }
      goto L_08933E74;
    }
}
L_08933E74:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    hot_regs.g31 = (0x08933E80u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 391u, 0x08B6A5DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933E80u) goto L_08933E80;
    return;
L_08933E80:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08933EA8u);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933EA8u) goto L_08933EA8;
    return;
L_08933EA8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08933EB4;
      }
      goto L_08933EB0;
    }
L_08933EB0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08933EB4;
L_08933EB4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08933ED0u);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933ED0u) goto L_08933ED0;
    return;
L_08933ED0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g4 = (ctx.gpr[18] ^ g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08933E74;
      }
      goto L_08933EF4;
    }
}
L_08933EF4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08933F0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g18);
    ctx.gpr[17] = (g5 | 0u);
    g18 = (g4 | 0u);
    g5 = (g18 + static_cast<std::uint32_t>(4));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08933F78;
      }
      goto L_08933F44;
    }
}
L_08933F44:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    goto L_08933F4C;
L_08933F4C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    g6 = (g6 & 255u);
    if (g6 != 0u) {
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12));
    hot_regs.g6 = g6;
        goto L_08933F6C;
    }
    goto L_08933F5C;
}
L_08933F5C:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[18] = (g5 | 0u);
    g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08933F70;
      }
      goto L_08933F6C;
    }
}
L_08933F6C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    goto L_08933F70;
L_08933F70:
    if (hot_regs.g5 != 0u) {
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
        goto L_08933F4C;
    }
    goto L_08933F78;
L_08933F78:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    hot_regs.g5 = (ctx.gpr[18] ^ g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), g4);
    g4 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08933FA4;
      }
      goto L_08933F94;
    }
}
L_08933F94:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 3u, 0x0893402Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08933FA4;
    }
L_08933FA4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x08933FB4u);
    hot_regs.g4 = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933FB4u) goto L_08933FB4;
    return;
L_08933FB4:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g19 == 0u;
    hot_regs.g4 = (g19 | 0u);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08933FCC;
      }
      goto L_08933FC0;
    }
}
L_08933FC0:
    hot_regs.g31 = (0x08933FC8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 850u, 0x08AB33F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933FC8u) goto L_08933FC8;
    return;
L_08933FC8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08933FCC;
L_08933FCC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(44));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    hot_regs.g31 = (0x08933FFCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 571u, 0x08B6B034u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08933FFCu) goto L_08933FFC;
    return;
L_08933FFC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08934000u; return;
}

void recomp_unit_0075(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0075_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_75(Runtime &runtime) {
    runtime.register_generated_unit(75u, 0x08930000u, 16384u, &recomp_unit_0075, &recomp_unit_0075_entry);
    runtime.register_function(0x08930000u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930004u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930024u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893002Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930034u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930064u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893008Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089300E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089300ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893012Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089301ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893022Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930278u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930298u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089302FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930348u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930350u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930380u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089303E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930404u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930430u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089304F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930500u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930508u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930510u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930520u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930528u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930530u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930538u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930540u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930550u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930560u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930568u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930578u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893057Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930584u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089305ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930608u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930610u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930620u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930628u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930630u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930638u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930640u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930650u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930658u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930660u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930668u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930670u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930680u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930690u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930698u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089306F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930704u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930718u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893071Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930738u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930744u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930754u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893075Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930770u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930778u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930784u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930798u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089307BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089307C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893080Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930818u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930820u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893084Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089308FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893090Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893091Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930924u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930934u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930944u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930954u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893095Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930964u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930970u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893098Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089309DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930A88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930AECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930B90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930BFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930C94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930CE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930D98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930DECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930E9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930EF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930F90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08930FE4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931008u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931018u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931034u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931044u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893105Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931070u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931080u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089310DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931110u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931120u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931124u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893113Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931140u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931148u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931178u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931198u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089311B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089311C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089311E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089311F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893120Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931270u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931274u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893127Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931284u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931290u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089312F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931300u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931318u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931320u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931344u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931368u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931380u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931388u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931390u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089313F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931438u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931448u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931458u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893145Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931464u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893146Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931478u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931494u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089314F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931508u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931524u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931534u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931544u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893154Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931554u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931558u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893156Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893157Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089315F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931618u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931620u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931660u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931674u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893167Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931680u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089316BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931710u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893171Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893172Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931730u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893176Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931798u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089317DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931800u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893181Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931834u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931848u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931880u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893188Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931894u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089318FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931904u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931914u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893191Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931928u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931930u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931948u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931950u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931958u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931960u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931970u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931978u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931988u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931990u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931998u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089319F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931A98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931AF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B30u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931B94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931BF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931C90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931CECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931D9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931DFCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931E90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EA0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EBCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931ECCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931ED8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931EF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931F98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FC4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FD0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08931FE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932014u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932040u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893204Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932058u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932068u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932078u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932084u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089320F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932104u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893211Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932154u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893216Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932198u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089321F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932270u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932288u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089322ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932308u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893231Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932324u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893232Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932334u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932340u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932348u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932350u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932360u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893236Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932374u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893237Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932384u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932390u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932398u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323D4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089323F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932404u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893240Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932414u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893241Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932428u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932430u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932438u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932448u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932454u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893245Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932464u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893246Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932478u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893249Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089324B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089324F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932510u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932530u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893255Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932574u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932598u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089325FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932608u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932614u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893261Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932624u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893262Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893263Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932668u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932684u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932690u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089326FCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932704u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893270Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932714u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932720u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893272Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932734u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932758u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893279Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327ECu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089327F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932800u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932810u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932814u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932824u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932864u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893286Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893287Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932880u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932888u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932890u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328D8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089328F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932908u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932928u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893293Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893295Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932964u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893296Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932978u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329A4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329E4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089329F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932A80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932ACCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932ADCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932AF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932B90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932BF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C48u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C64u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C88u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932C9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932CF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D14u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932D9Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932DDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E68u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E84u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932E8Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EB8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932ED0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932ED4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932EE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F08u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F10u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F2Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F34u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F54u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F60u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F90u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932F98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08932FE8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933010u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933020u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933024u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933048u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933050u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933070u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893307Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933094u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933098u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089330B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893310Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089331F0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933200u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933218u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893322Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893323Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933250u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933264u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933274u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893328Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893329Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089332A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089332BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089332F8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933330u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933338u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893337Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933384u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089333E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933438u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933440u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933494u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089334DCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933504u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893351Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933524u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933528u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933534u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893354Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933580u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893358Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933594u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335ACu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335B4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335C8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089335E8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933614u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933624u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893363Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933670u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893367Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933684u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933698u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089336B0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089336D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893370Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933718u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933720u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933734u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x0893375Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933780u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337B8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337C4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337CCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089337E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933800u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933820u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933850u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933898u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338A8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338C0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338D0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338E0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089338F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933904u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933914u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933928u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339A0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339BCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x089339F4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933ACCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933AF0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B04u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B18u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B28u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B40u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B50u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933B70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BD8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933BE0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C30u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933C98u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CBCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933CF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D1Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D20u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D3Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D58u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933D7Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DD4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DDCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933DF8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E00u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E24u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E38u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E74u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933E80u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EA8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EB0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933ED0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933EF4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F0Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F44u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F4Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F5Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F6Cu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F70u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F78u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933F94u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FA4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FB4u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FC0u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FC8u, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FCCu, &recomp_unit_0075, "recomp_unit_0075");
    runtime.register_function(0x08933FFCu, &recomp_unit_0075, "recomp_unit_0075");
}
} // namespace psprecomp
