#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0083[4086] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0,
    0, 13, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29,
    0, 30, 0, 31, 32, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0,
    0, 0, 0, 41, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0,
    46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 55, 56, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0,
    0, 0, 61, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 66, 67, 0, 0, 68, 0, 0, 69, 0, 70, 71, 0, 0,
    72, 0, 0, 73, 0, 74, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 85, 86,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 90, 91, 0, 0, 92, 0, 0, 93, 0, 94, 0, 95,
    0, 96, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0,
    105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 116, 0,
    117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 0, 123, 124, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0,
    0, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 0, 138, 139, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 148, 149, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153,
    0, 0, 0, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166, 0,
    0, 167, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172,
    0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0,
    196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215,
    0, 216, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0,
    0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 229, 230, 0, 0, 231, 0, 0, 0, 232,
    0, 0, 233, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0,
    244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0,
    252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 260, 0, 261, 0, 0,
    262, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0,
    0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 277, 0,
    0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283,
    0, 284, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0,
    293, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 303, 0, 0,
    0, 0, 0, 304, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 0, 0, 328,
    0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334,
    0, 335, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340,
    0, 341, 0, 342, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0,
    347, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 0, 0, 0, 361, 0, 0, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0,
    0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0,
    0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 0,
    381, 0, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0,
    400, 0, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 0, 406, 407, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0,
    0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 0, 414, 415, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420,
    0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 0,
    0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440,
    0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 0, 444, 445, 0, 446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 450, 0,
    0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 462,
    0, 0, 0, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 466, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 472, 0, 473, 0, 0, 0, 474, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486,
    0, 487, 0, 488, 0, 489, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 0,
    498, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 507, 0, 508, 0, 0, 0,
    0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 0, 519,
    0, 520, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 527, 528, 0, 0,
    0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0, 534, 0, 535, 0, 536, 0, 0, 537, 0,
    0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 543, 0, 544, 545, 0, 0, 546, 0, 0,
    547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0,
    559, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 567, 0, 568, 0, 569, 0, 570,
    0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 576, 0, 577, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 580,
    0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 584, 0, 0, 0, 0, 585,
    0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0,
    0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 595, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 601,
    0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0,
    609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0,
    618, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 0, 628, 0,
    629, 0, 0, 0, 630, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0,
    0, 0, 0, 0, 0, 0, 635, 0, 636, 637, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 643,
    644, 0, 645, 0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 650, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 664, 0, 0,
    0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0,
    0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681,
    0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 690, 0, 691, 0, 0, 0, 0, 0,
    0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 694, 0, 695, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701,
    0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0,
    0, 0, 708, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 0, 714, 0, 715, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 731, 732, 0, 733, 734,
    0, 0, 735, 0, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 739, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 744,
    0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 746, 0, 747, 748, 0, 749, 0, 750, 0, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0,
    756, 0, 0, 757, 0, 758, 0, 0, 759, 0, 760, 0, 761, 0, 0, 762, 0, 763, 764, 0, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0, 0, 0,
    769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 774, 0,
    0, 0, 775, 776, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 0, 782,
    0, 783, 0, 0, 784, 0, 0, 785, 0, 786, 787, 788, 0, 0, 789, 0, 0, 790, 0, 791, 792, 0, 793, 0, 794, 0, 0, 795, 0, 796, 797, 0,
    798, 0, 0, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 801, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 0, 805, 0, 0, 806, 0, 0, 807,
    0, 808, 0, 0, 809, 0, 0, 0, 810, 0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814,
    0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 822, 0,
    0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0,
    0, 0, 0, 826, 827, 0, 0, 0, 828, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 833, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 837, 0,
    0, 0, 0, 838, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 845, 0, 0,
    846, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 850, 0, 0, 851, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 854, 855, 0, 856, 0,
    0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 859, 0, 0, 0, 860, 0, 861, 862, 0, 0, 0, 863, 0, 864, 0, 865, 0, 0, 866, 0, 0, 0,
    867, 0, 868, 869, 0, 870, 871, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 0,
    0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0,
    0, 0, 879, 0, 880, 0, 0, 881, 0, 0, 0, 0, 0, 882, 0, 883, 0, 0, 0, 884, 885, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0, 889,
};
void recomp_unit_0083_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08950000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0083[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08950000;
    case 2u: goto L_0895000C;
    case 3u: goto L_08950068;
    case 4u: goto L_089500AC;
    case 5u: goto L_089500C4;
    case 6u: goto L_089500D0;
    case 7u: goto L_089500FC;
    case 8u: goto L_08950120;
    case 9u: goto L_089501FC;
    case 10u: goto L_08950244;
    case 11u: goto L_089502E4;
    case 12u: goto L_089502F4;
    case 13u: goto L_08950304;
    case 14u: goto L_08950314;
    case 15u: goto L_08950324;
    case 16u: goto L_08950334;
    case 17u: goto L_08950358;
    case 18u: goto L_0895036C;
    case 19u: goto L_08950380;
    case 20u: goto L_089503C8;
    case 21u: goto L_08950400;
    case 22u: goto L_08950430;
    case 23u: goto L_08950440;
    case 24u: goto L_0895046C;
    case 25u: goto L_089504BC;
    case 26u: goto L_089504D4;
    case 27u: goto L_089504DC;
    case 28u: goto L_089504F0;
    case 29u: goto L_089504FC;
    case 30u: goto L_08950504;
    case 31u: goto L_0895050C;
    case 32u: goto L_08950510;
    case 33u: goto L_08950514;
    case 34u: goto L_0895051C;
    case 35u: goto L_0895052C;
    case 36u: goto L_0895053C;
    case 37u: goto L_08950550;
    case 38u: goto L_08950554;
    case 39u: goto L_08950568;
    case 40u: goto L_08950578;
    case 41u: goto L_0895058C;
    case 42u: goto L_08950590;
    case 43u: goto L_089505AC;
    case 44u: goto L_089505EC;
    case 45u: goto L_089505F4;
    case 46u: goto L_08950600;
    case 47u: goto L_08950610;
    case 48u: goto L_08950640;
    case 49u: goto L_089506CC;
    case 50u: goto L_089506E0;
    case 51u: goto L_08950708;
    case 52u: goto L_08950718;
    case 53u: goto L_08950724;
    case 54u: goto L_0895072C;
    case 55u: goto L_08950734;
    case 56u: goto L_08950738;
    case 57u: goto L_0895073C;
    case 58u: goto L_08950744;
    case 59u: goto L_08950770;
    case 60u: goto L_08950778;
    case 61u: goto L_08950788;
    case 62u: goto L_08950794;
    case 63u: goto L_089507AC;
    case 64u: goto L_089507B8;
    case 65u: goto L_089507C4;
    case 66u: goto L_089507CC;
    case 67u: goto L_089507D0;
    case 68u: goto L_089507DC;
    case 69u: goto L_089507E8;
    case 70u: goto L_089507F0;
    case 71u: goto L_089507F4;
    case 72u: goto L_08950800;
    case 73u: goto L_0895080C;
    case 74u: goto L_08950814;
    case 75u: goto L_08950818;
    case 76u: goto L_08950824;
    case 77u: goto L_08950830;
    case 78u: goto L_08950838;
    case 79u: goto L_08950880;
    case 80u: goto L_089508C0;
    case 81u: goto L_089508CC;
    case 82u: goto L_089508E4;
    case 83u: goto L_089508EC;
    case 84u: goto L_089508F4;
    case 85u: goto L_089508F8;
    case 86u: goto L_089508FC;
    case 87u: goto L_08950924;
    case 88u: goto L_08950934;
    case 89u: goto L_08950948;
    case 90u: goto L_08950950;
    case 91u: goto L_08950954;
    case 92u: goto L_08950960;
    case 93u: goto L_0895096C;
    case 94u: goto L_08950974;
    case 95u: goto L_0895097C;
    case 96u: goto L_08950984;
    case 97u: goto L_0895098C;
    case 98u: goto L_0895099C;
    case 99u: goto L_089509AC;
    case 100u: goto L_089509C8;
    case 101u: goto L_089509D0;
    case 102u: goto L_089509E0;
    case 103u: goto L_089509E8;
    case 104u: goto L_089509F0;
    case 105u: goto L_08950A00;
    case 106u: goto L_08950A08;
    case 107u: goto L_08950A10;
    case 108u: goto L_08950A18;
    case 109u: goto L_08950A20;
    case 110u: goto L_08950A28;
    case 111u: goto L_08950A30;
    case 112u: goto L_08950A3C;
    case 113u: goto L_08950A4C;
    case 114u: goto L_08950A58;
    case 115u: goto L_08950A60;
    case 116u: goto L_08950A78;
    case 117u: goto L_08950A80;
    case 118u: goto L_08950A88;
    case 119u: goto L_08950A98;
    case 120u: goto L_08950AA8;
    case 121u: goto L_08950AB4;
    case 122u: goto L_08950ABC;
    case 123u: goto L_08950AC4;
    case 124u: goto L_08950AC8;
    case 125u: goto L_08950ACC;
    case 126u: goto L_08950AD4;
    case 127u: goto L_08950AF0;
    case 128u: goto L_08950AF8;
    case 129u: goto L_08950B28;
    case 130u: goto L_08950B30;
    case 131u: goto L_08950B60;
    case 132u: goto L_08950B70;
    case 133u: goto L_08950B88;
    case 134u: goto L_08950B94;
    case 135u: goto L_08950B9C;
    case 136u: goto L_08950BA4;
    case 137u: goto L_08950BB0;
    case 138u: goto L_08950BBC;
    case 139u: goto L_08950BC0;
    case 140u: goto L_08950BCC;
    case 141u: goto L_08950BF4;
    case 142u: goto L_08950C1C;
    case 143u: goto L_08950C44;
    case 144u: goto L_08950C6C;
    case 145u: goto L_08950C94;
    case 146u: goto L_08950C9C;
    case 147u: goto L_08950CA4;
    case 148u: goto L_08950CB0;
    case 149u: goto L_08950CB4;
    case 150u: goto L_08950CC4;
    case 151u: goto L_08950CCC;
    case 152u: goto L_08950CF0;
    case 153u: goto L_08950CFC;
    case 154u: goto L_08950D0C;
    case 155u: goto L_08950D18;
    case 156u: goto L_08950D24;
    case 157u: goto L_08950D2C;
    case 158u: goto L_08950D34;
    case 159u: goto L_08950D3C;
    case 160u: goto L_08950D60;
    case 161u: goto L_08950D88;
    case 162u: goto L_08950DB0;
    case 163u: goto L_08950DD8;
    case 164u: goto L_08950DE8;
    case 165u: goto L_08950DF0;
    case 166u: goto L_08950DF8;
    case 167u: goto L_08950E04;
    case 168u: goto L_08950E08;
    case 169u: goto L_08950E24;
    case 170u: goto L_08950E4C;
    case 171u: goto L_08950E74;
    case 172u: goto L_08950E7C;
    case 173u: goto L_08950E84;
    case 174u: goto L_08950E8C;
    case 175u: goto L_08950E94;
    case 176u: goto L_08950EA8;
    case 177u: goto L_08950EB8;
    case 178u: goto L_08950EE0;
    case 179u: goto L_08950EF4;
    case 180u: goto L_08950F0C;
    case 181u: goto L_08950F1C;
    case 182u: goto L_08950F24;
    case 183u: goto L_08950F30;
    case 184u: goto L_08950F40;
    case 185u: goto L_08950F54;
    case 186u: goto L_08950F60;
    case 187u: goto L_08950F6C;
    case 188u: goto L_08950F78;
    case 189u: goto L_08950FB0;
    case 190u: goto L_08950FBC;
    case 191u: goto L_08950FC4;
    case 192u: goto L_08950FD0;
    case 193u: goto L_08950FD8;
    case 194u: goto L_08950FE0;
    case 195u: goto L_08950FF0;
    case 196u: goto L_08951000;
    case 197u: goto L_08951014;
    case 198u: goto L_0895102C;
    case 199u: goto L_08951030;
    case 200u: goto L_08951050;
    case 201u: goto L_08951078;
    case 202u: goto L_08951094;
    case 203u: goto L_089510A0;
    case 204u: goto L_089510A8;
    case 205u: goto L_089510B0;
    case 206u: goto L_089510BC;
    case 207u: goto L_089510C4;
    case 208u: goto L_089510E8;
    case 209u: goto L_08951110;
    case 210u: goto L_08951118;
    case 211u: goto L_08951120;
    case 212u: goto L_0895112C;
    case 213u: goto L_08951134;
    case 214u: goto L_08951154;
    case 215u: goto L_0895117C;
    case 216u: goto L_08951184;
    case 217u: goto L_0895118C;
    case 218u: goto L_0895119C;
    case 219u: goto L_089511A8;
    case 220u: goto L_089511D0;
    case 221u: goto L_089511EC;
    case 222u: goto L_08951204;
    case 223u: goto L_08951214;
    case 224u: goto L_08951220;
    case 225u: goto L_08951228;
    case 226u: goto L_08951230;
    case 227u: goto L_08951240;
    case 228u: goto L_08951250;
    case 229u: goto L_0895125C;
    case 230u: goto L_08951260;
    case 231u: goto L_0895126C;
    case 232u: goto L_0895127C;
    case 233u: goto L_08951288;
    case 234u: goto L_0895128C;
    case 235u: goto L_08951298;
    case 236u: goto L_089512A0;
    case 237u: goto L_089512B8;
    case 238u: goto L_089512C8;
    case 239u: goto L_089512D4;
    case 240u: goto L_089512E0;
    case 241u: goto L_089512E8;
    case 242u: goto L_089512F0;
    case 243u: goto L_089512F8;
    case 244u: goto L_08951300;
    case 245u: goto L_08951308;
    case 246u: goto L_08951314;
    case 247u: goto L_0895131C;
    case 248u: goto L_08951324;
    case 249u: goto L_08951330;
    case 250u: goto L_08951360;
    case 251u: goto L_08951378;
    case 252u: goto L_08951380;
    case 253u: goto L_08951388;
    case 254u: goto L_0895139C;
    case 255u: goto L_089513A8;
    case 256u: goto L_089513B4;
    case 257u: goto L_089513BC;
    case 258u: goto L_089513C4;
    case 259u: goto L_089513DC;
    case 260u: goto L_089513EC;
    case 261u: goto L_089513F4;
    case 262u: goto L_08951400;
    case 263u: goto L_08951404;
    case 264u: goto L_0895140C;
    case 265u: goto L_08951414;
    case 266u: goto L_0895141C;
    case 267u: goto L_08951424;
    case 268u: goto L_08951464;
    case 269u: goto L_08951484;
    case 270u: goto L_0895148C;
    case 271u: goto L_08951494;
    case 272u: goto L_0895149C;
    case 273u: goto L_089514AC;
    case 274u: goto L_089514BC;
    case 275u: goto L_089514E4;
    case 276u: goto L_089514EC;
    case 277u: goto L_089514F8;
    case 278u: goto L_08951504;
    case 279u: goto L_0895150C;
    case 280u: goto L_08951514;
    case 281u: goto L_0895151C;
    case 282u: goto L_0895155C;
    case 283u: goto L_0895157C;
    case 284u: goto L_08951584;
    case 285u: goto L_0895158C;
    case 286u: goto L_08951598;
    case 287u: goto L_089515A0;
    case 288u: goto L_089515C0;
    case 289u: goto L_089515CC;
    case 290u: goto L_089515D4;
    case 291u: goto L_089515E8;
    case 292u: goto L_089515F4;
    case 293u: goto L_08951600;
    case 294u: goto L_08951608;
    case 295u: goto L_08951610;
    case 296u: goto L_0895161C;
    case 297u: goto L_08951624;
    case 298u: goto L_08951630;
    case 299u: goto L_08951638;
    case 300u: goto L_08951654;
    case 301u: goto L_0895165C;
    case 302u: goto L_08951664;
    case 303u: goto L_08951674;
    case 304u: goto L_0895168C;
    case 305u: goto L_08951690;
    case 306u: goto L_08951698;
    case 307u: goto L_089516B0;
    case 308u: goto L_089516C8;
    case 309u: goto L_089516D4;
    case 310u: goto L_089516DC;
    case 311u: goto L_089516E8;
    case 312u: goto L_089516F0;
    case 313u: goto L_08951720;
    case 314u: goto L_08951728;
    case 315u: goto L_08951740;
    case 316u: goto L_08951758;
    case 317u: goto L_08951780;
    case 318u: goto L_08951788;
    case 319u: goto L_08951794;
    case 320u: goto L_0895179C;
    case 321u: goto L_089517A8;
    case 322u: goto L_089517B0;
    case 323u: goto L_089517C4;
    case 324u: goto L_089517D0;
    case 325u: goto L_089517DC;
    case 326u: goto L_089517E4;
    case 327u: goto L_089517EC;
    case 328u: goto L_089517FC;
    case 329u: goto L_08951804;
    case 330u: goto L_0895180C;
    case 331u: goto L_08951818;
    case 332u: goto L_08951854;
    case 333u: goto L_08951874;
    case 334u: goto L_0895187C;
    case 335u: goto L_08951884;
    case 336u: goto L_0895188C;
    case 337u: goto L_08951894;
    case 338u: goto L_089518A0;
    case 339u: goto L_089518DC;
    case 340u: goto L_089518FC;
    case 341u: goto L_08951904;
    case 342u: goto L_0895190C;
    case 343u: goto L_08951918;
    case 344u: goto L_0895192C;
    case 345u: goto L_08951938;
    case 346u: goto L_08951960;
    case 347u: goto L_08951980;
    case 348u: goto L_0895198C;
    case 349u: goto L_08951998;
    case 350u: goto L_089519E0;
    case 351u: goto L_08951A00;
    case 352u: goto L_08951A28;
    case 353u: goto L_08951A30;
    case 354u: goto L_08951A38;
    case 355u: goto L_08951A58;
    case 356u: goto L_08951A80;
    case 357u: goto L_08951AA0;
    case 358u: goto L_08951AC8;
    case 359u: goto L_08951AD0;
    case 360u: goto L_08951AD8;
    case 361u: goto L_08951AEC;
    case 362u: goto L_08951B10;
    case 363u: goto L_08951B2C;
    case 364u: goto L_08951B54;
    case 365u: goto L_08951B74;
    case 366u: goto L_08951B88;
    case 367u: goto L_08951B98;
    case 368u: goto L_08951BA4;
    case 369u: goto L_08951BC4;
    case 370u: goto L_08951BD4;
    case 371u: goto L_08951BE4;
    case 372u: goto L_08951C2C;
    case 373u: goto L_08951C3C;
    case 374u: goto L_08951C48;
    case 375u: goto L_08951C78;
    case 376u: goto L_08951C90;
    case 377u: goto L_08951CA8;
    case 378u: goto L_08951CD0;
    case 379u: goto L_08951CE0;
    case 380u: goto L_08951CE8;
    case 381u: goto L_08951D00;
    case 382u: goto L_08951D0C;
    case 383u: goto L_08951D18;
    case 384u: goto L_08951D20;
    case 385u: goto L_08951D28;
    case 386u: goto L_08951D40;
    case 387u: goto L_08951D4C;
    case 388u: goto L_08951D54;
    case 389u: goto L_08951D68;
    case 390u: goto L_08951DAC;
    case 391u: goto L_08951DC0;
    case 392u: goto L_08951DD8;
    case 393u: goto L_08951DF8;
    case 394u: goto L_08951E20;
    case 395u: goto L_08951E30;
    case 396u: goto L_08951E38;
    case 397u: goto L_08951E48;
    case 398u: goto L_08951E58;
    case 399u: goto L_08951E68;
    case 400u: goto L_08951E80;
    case 401u: goto L_08951E8C;
    case 402u: goto L_08951E9C;
    case 403u: goto L_08951EA8;
    case 404u: goto L_08951EB8;
    case 405u: goto L_08951EC0;
    case 406u: goto L_08951ED0;
    case 407u: goto L_08951ED4;
    case 408u: goto L_08951EDC;
    case 409u: goto L_08951EE8;
    case 410u: goto L_08951EF8;
    case 411u: goto L_08951F08;
    case 412u: goto L_08951F14;
    case 413u: goto L_08951F1C;
    case 414u: goto L_08951F2C;
    case 415u: goto L_08951F30;
    case 416u: goto L_08951F3C;
    case 417u: goto L_08951F4C;
    case 418u: goto L_08951F5C;
    case 419u: goto L_08951F70;
    case 420u: goto L_08951F7C;
    case 421u: goto L_08951F8C;
    case 422u: goto L_08951F9C;
    case 423u: goto L_08951FA8;
    case 424u: goto L_08951FB0;
    case 425u: goto L_08951FC0;
    case 426u: goto L_08951FD0;
    case 427u: goto L_08951FE0;
    case 428u: goto L_08951FEC;
    case 429u: goto L_08951FF4;
    case 430u: goto L_08952004;
    case 431u: goto L_08952018;
    case 432u: goto L_089520C0;
    case 433u: goto L_089520D0;
    case 434u: goto L_089520E8;
    case 435u: goto L_0895210C;
    case 436u: goto L_08952114;
    case 437u: goto L_08952138;
    case 438u: goto L_08952164;
    case 439u: goto L_08952170;
    case 440u: goto L_0895217C;
    case 441u: goto L_0895218C;
    case 442u: goto L_0895219C;
    case 443u: goto L_089521A4;
    case 444u: goto L_089521AC;
    case 445u: goto L_089521B0;
    case 446u: goto L_089521B8;
    case 447u: goto L_089521C8;
    case 448u: goto L_089521D8;
    case 449u: goto L_089521EC;
    case 450u: goto L_089521F8;
    case 451u: goto L_08952210;
    case 452u: goto L_0895221C;
    case 453u: goto L_0895222C;
    case 454u: goto L_0895223C;
    case 455u: goto L_0895224C;
    case 456u: goto L_08952270;
    case 457u: goto L_08952294;
    case 458u: goto L_089522AC;
    case 459u: goto L_089522C4;
    case 460u: goto L_089522EC;
    case 461u: goto L_089522F4;
    case 462u: goto L_089522FC;
    case 463u: goto L_08952314;
    case 464u: goto L_08952324;
    case 465u: goto L_0895232C;
    case 466u: goto L_08952334;
    case 467u: goto L_08952338;
    case 468u: goto L_08952358;
    case 469u: goto L_0895238C;
    case 470u: goto L_089523AC;
    case 471u: goto L_089523B4;
    case 472u: goto L_089523BC;
    case 473u: goto L_089523C4;
    case 474u: goto L_089523D4;
    case 475u: goto L_089523D8;
    case 476u: goto L_089523E0;
    case 477u: goto L_089523FC;
    case 478u: goto L_08952424;
    case 479u: goto L_08952434;
    case 480u: goto L_0895243C;
    case 481u: goto L_08952444;
    case 482u: goto L_0895244C;
    case 483u: goto L_08952454;
    case 484u: goto L_0895246C;
    case 485u: goto L_08952474;
    case 486u: goto L_0895247C;
    case 487u: goto L_08952484;
    case 488u: goto L_0895248C;
    case 489u: goto L_08952494;
    case 490u: goto L_0895249C;
    case 491u: goto L_089524A4;
    case 492u: goto L_089524B8;
    case 493u: goto L_089524C0;
    case 494u: goto L_089524C8;
    case 495u: goto L_089524E8;
    case 496u: goto L_089524F0;
    case 497u: goto L_089524F8;
    case 498u: goto L_08952500;
    case 499u: goto L_08952518;
    case 500u: goto L_08952520;
    case 501u: goto L_08952528;
    case 502u: goto L_08952530;
    case 503u: goto L_08952538;
    case 504u: goto L_08952550;
    case 505u: goto L_08952558;
    case 506u: goto L_08952560;
    case 507u: goto L_08952568;
    case 508u: goto L_08952570;
    case 509u: goto L_08952584;
    case 510u: goto L_0895258C;
    case 511u: goto L_08952594;
    case 512u: goto L_0895259C;
    case 513u: goto L_089525A4;
    case 514u: goto L_089525C4;
    case 515u: goto L_089525CC;
    case 516u: goto L_089525D4;
    case 517u: goto L_089525DC;
    case 518u: goto L_089525F4;
    case 519u: goto L_089525FC;
    case 520u: goto L_08952604;
    case 521u: goto L_08952608;
    case 522u: goto L_08952624;
    case 523u: goto L_08952630;
    case 524u: goto L_08952638;
    case 525u: goto L_08952654;
    case 526u: goto L_08952664;
    case 527u: goto L_08952670;
    case 528u: goto L_08952674;
    case 529u: goto L_08952698;
    case 530u: goto L_089526A4;
    case 531u: goto L_089526BC;
    case 532u: goto L_089526C4;
    case 533u: goto L_089526CC;
    case 534u: goto L_089526DC;
    case 535u: goto L_089526E4;
    case 536u: goto L_089526EC;
    case 537u: goto L_089526F8;
    case 538u: goto L_0895270C;
    case 539u: goto L_08952728;
    case 540u: goto L_08952730;
    case 541u: goto L_08952740;
    case 542u: goto L_08952748;
    case 543u: goto L_0895275C;
    case 544u: goto L_08952764;
    case 545u: goto L_08952768;
    case 546u: goto L_08952774;
    case 547u: goto L_08952780;
    case 548u: goto L_0895278C;
    case 549u: goto L_089527C0;
    case 550u: goto L_089527D0;
    case 551u: goto L_089527DC;
    case 552u: goto L_089527EC;
    case 553u: goto L_089527FC;
    case 554u: goto L_08952830;
    case 555u: goto L_08952844;
    case 556u: goto L_0895284C;
    case 557u: goto L_08952870;
    case 558u: goto L_08952878;
    case 559u: goto L_08952880;
    case 560u: goto L_0895288C;
    case 561u: goto L_0895289C;
    case 562u: goto L_089528A4;
    case 563u: goto L_089528AC;
    case 564u: goto L_089528C4;
    case 565u: goto L_089528D0;
    case 566u: goto L_089528D8;
    case 567u: goto L_089528E4;
    case 568u: goto L_089528EC;
    case 569u: goto L_089528F4;
    case 570u: goto L_089528FC;
    case 571u: goto L_08952904;
    case 572u: goto L_08952914;
    case 573u: goto L_08952920;
    case 574u: goto L_08952930;
    case 575u: goto L_08952940;
    case 576u: goto L_08952948;
    case 577u: goto L_08952950;
    case 578u: goto L_0895295C;
    case 579u: goto L_08952970;
    case 580u: goto L_0895297C;
    case 581u: goto L_08952994;
    case 582u: goto L_089529D4;
    case 583u: goto L_089529E0;
    case 584u: goto L_089529E8;
    case 585u: goto L_089529FC;
    case 586u: goto L_08952A04;
    case 587u: goto L_08952A18;
    case 588u: goto L_08952A2C;
    case 589u: goto L_08952A3C;
    case 590u: goto L_08952A50;
    case 591u: goto L_08952A74;
    case 592u: goto L_08952A84;
    case 593u: goto L_08952A9C;
    case 594u: goto L_08952AB4;
    case 595u: goto L_08952AB8;
    case 596u: goto L_08952AC0;
    case 597u: goto L_08952AC8;
    case 598u: goto L_08952AD0;
    case 599u: goto L_08952AF0;
    case 600u: goto L_08952AF8;
    case 601u: goto L_08952AFC;
    case 602u: goto L_08952B1C;
    case 603u: goto L_08952B2C;
    case 604u: goto L_08952B38;
    case 605u: goto L_08952B40;
    case 606u: goto L_08952B50;
    case 607u: goto L_08952B60;
    case 608u: goto L_08952B70;
    case 609u: goto L_08952B80;
    case 610u: goto L_08952B90;
    case 611u: goto L_08952BA0;
    case 612u: goto L_08952BB0;
    case 613u: goto L_08952BC0;
    case 614u: goto L_08952BD0;
    case 615u: goto L_08952BE0;
    case 616u: goto L_08952BEC;
    case 617u: goto L_08952BF8;
    case 618u: goto L_08952C00;
    case 619u: goto L_08952C10;
    case 620u: goto L_08952C20;
    case 621u: goto L_08952C30;
    case 622u: goto L_08952C40;
    case 623u: goto L_08952C4C;
    case 624u: goto L_08952C54;
    case 625u: goto L_08952C5C;
    case 626u: goto L_08952C64;
    case 627u: goto L_08952C6C;
    case 628u: goto L_08952C78;
    case 629u: goto L_08952C80;
    case 630u: goto L_08952C90;
    case 631u: goto L_08952C9C;
    case 632u: goto L_08952CA4;
    case 633u: goto L_08952CD8;
    case 634u: goto L_08952CF4;
    case 635u: goto L_08952D18;
    case 636u: goto L_08952D20;
    case 637u: goto L_08952D24;
    case 638u: goto L_08952D2C;
    case 639u: goto L_08952D38;
    case 640u: goto L_08952D40;
    case 641u: goto L_08952D5C;
    case 642u: goto L_08952D74;
    case 643u: goto L_08952D7C;
    case 644u: goto L_08952D80;
    case 645u: goto L_08952D88;
    case 646u: goto L_08952D94;
    case 647u: goto L_08952D9C;
    case 648u: goto L_08952DB4;
    case 649u: goto L_08952DBC;
    case 650u: goto L_08952DC0;
    case 651u: goto L_08952DC8;
    case 652u: goto L_08952DD4;
    case 653u: goto L_08952DF0;
    case 654u: goto L_08952E60;
    case 655u: goto L_08952E7C;
    case 656u: goto L_08952EA8;
    case 657u: goto L_08952EB0;
    case 658u: goto L_08952F00;
    case 659u: goto L_08952F08;
    case 660u: goto L_08952F20;
    case 661u: goto L_08952F3C;
    case 662u: goto L_08952F50;
    case 663u: goto L_08952F70;
    case 664u: goto L_08952F74;
    case 665u: goto L_08952F94;
    case 666u: goto L_08952FAC;
    case 667u: goto L_08952FC0;
    case 668u: goto L_08952FDC;
    case 669u: goto L_08952FF4;
    case 670u: goto L_08953004;
    case 671u: goto L_0895301C;
    case 672u: goto L_08953034;
    case 673u: goto L_0895304C;
    case 674u: goto L_0895305C;
    case 675u: goto L_08953074;
    case 676u: goto L_089530A8;
    case 677u: goto L_089530B4;
    case 678u: goto L_089530CC;
    case 679u: goto L_089530DC;
    case 680u: goto L_089530EC;
    case 681u: goto L_089530FC;
    case 682u: goto L_0895310C;
    case 683u: goto L_0895311C;
    case 684u: goto L_0895312C;
    case 685u: goto L_0895313C;
    case 686u: goto L_0895314C;
    case 687u: goto L_08953184;
    case 688u: goto L_089531C4;
    case 689u: goto L_089531D8;
    case 690u: goto L_089531E0;
    case 691u: goto L_089531E8;
    case 692u: goto L_0895320C;
    case 693u: goto L_08953218;
    case 694u: goto L_0895322C;
    case 695u: goto L_08953234;
    case 696u: goto L_0895323C;
    case 697u: goto L_08953248;
    case 698u: goto L_08953250;
    case 699u: goto L_089532E0;
    case 700u: goto L_089532F4;
    case 701u: goto L_089532FC;
    case 702u: goto L_08953318;
    case 703u: goto L_0895332C;
    case 704u: goto L_08953334;
    case 705u: goto L_08953354;
    case 706u: goto L_08953360;
    case 707u: goto L_08953370;
    case 708u: goto L_08953388;
    case 709u: goto L_08953390;
    case 710u: goto L_08953398;
    case 711u: goto L_089533A0;
    case 712u: goto L_089533A8;
    case 713u: goto L_089533B0;
    case 714u: goto L_089533BC;
    case 715u: goto L_089533C4;
    case 716u: goto L_089533CC;
    case 717u: goto L_089533DC;
    case 718u: goto L_08953418;
    case 719u: goto L_0895343C;
    case 720u: goto L_08953444;
    case 721u: goto L_08953450;
    case 722u: goto L_08953460;
    case 723u: goto L_08953474;
    case 724u: goto L_089534AC;
    case 725u: goto L_089534C0;
    case 726u: goto L_089534D4;
    case 727u: goto L_089534E4;
    case 728u: goto L_08953528;
    case 729u: goto L_08953548;
    case 730u: goto L_08953560;
    case 731u: goto L_0895356C;
    case 732u: goto L_08953570;
    case 733u: goto L_08953578;
    case 734u: goto L_0895357C;
    case 735u: goto L_08953588;
    case 736u: goto L_08953598;
    case 737u: goto L_089535A4;
    case 738u: goto L_089535B0;
    case 739u: goto L_089535C0;
    case 740u: goto L_089535CC;
    case 741u: goto L_089535DC;
    case 742u: goto L_089535E8;
    case 743u: goto L_089535F4;
    case 744u: goto L_089535FC;
    case 745u: goto L_08953614;
    case 746u: goto L_08953630;
    case 747u: goto L_08953638;
    case 748u: goto L_0895363C;
    case 749u: goto L_08953644;
    case 750u: goto L_0895364C;
    case 751u: goto L_08953658;
    case 752u: goto L_08953660;
    case 753u: goto L_08953668;
    case 754u: goto L_08953670;
    case 755u: goto L_08953678;
    case 756u: goto L_08953680;
    case 757u: goto L_0895368C;
    case 758u: goto L_08953694;
    case 759u: goto L_089536A0;
    case 760u: goto L_089536A8;
    case 761u: goto L_089536B0;
    case 762u: goto L_089536BC;
    case 763u: goto L_089536C4;
    case 764u: goto L_089536C8;
    case 765u: goto L_089536D4;
    case 766u: goto L_089536DC;
    case 767u: goto L_089536E4;
    case 768u: goto L_089536EC;
    case 769u: goto L_08953700;
    case 770u: goto L_08953714;
    case 771u: goto L_08953728;
    case 772u: goto L_08953730;
    case 773u: goto L_08953770;
    case 774u: goto L_08953778;
    case 775u: goto L_08953788;
    case 776u: goto L_0895378C;
    case 777u: goto L_08953794;
    case 778u: goto L_089537A8;
    case 779u: goto L_089537C8;
    case 780u: goto L_089537D4;
    case 781u: goto L_089537EC;
    case 782u: goto L_089537FC;
    case 783u: goto L_08953804;
    case 784u: goto L_08953810;
    case 785u: goto L_0895381C;
    case 786u: goto L_08953824;
    case 787u: goto L_08953828;
    case 788u: goto L_0895382C;
    case 789u: goto L_08953838;
    case 790u: goto L_08953844;
    case 791u: goto L_0895384C;
    case 792u: goto L_08953850;
    case 793u: goto L_08953858;
    case 794u: goto L_08953860;
    case 795u: goto L_0895386C;
    case 796u: goto L_08953874;
    case 797u: goto L_08953878;
    case 798u: goto L_08953880;
    case 799u: goto L_08953898;
    case 800u: goto L_089538A8;
    case 801u: goto L_089538B4;
    case 802u: goto L_089538C0;
    case 803u: goto L_089538C8;
    case 804u: goto L_089538D4;
    case 805u: goto L_089538E4;
    case 806u: goto L_089538F0;
    case 807u: goto L_089538FC;
    case 808u: goto L_08953904;
    case 809u: goto L_08953910;
    case 810u: goto L_08953920;
    case 811u: goto L_08953928;
    case 812u: goto L_08953934;
    case 813u: goto L_08953954;
    case 814u: goto L_0895397C;
    case 815u: goto L_08953990;
    case 816u: goto L_089539A8;
    case 817u: goto L_089539B0;
    case 818u: goto L_089539BC;
    case 819u: goto L_089539CC;
    case 820u: goto L_089539E4;
    case 821u: goto L_089539EC;
    case 822u: goto L_089539F8;
    case 823u: goto L_08953A08;
    case 824u: goto L_08953A68;
    case 825u: goto L_08953A70;
    case 826u: goto L_08953A8C;
    case 827u: goto L_08953A90;
    case 828u: goto L_08953AA0;
    case 829u: goto L_08953AAC;
    case 830u: goto L_08953B30;
    case 831u: goto L_08953BD4;
    case 832u: goto L_08953C28;
    case 833u: goto L_08953C34;
    case 834u: goto L_08953C40;
    case 835u: goto L_08953C48;
    case 836u: goto L_08953C60;
    case 837u: goto L_08953C78;
    case 838u: goto L_08953C8C;
    case 839u: goto L_08953C9C;
    case 840u: goto L_08953CAC;
    case 841u: goto L_08953CB8;
    case 842u: goto L_08953CCC;
    case 843u: goto L_08953CDC;
    case 844u: goto L_08953CE4;
    case 845u: goto L_08953CF4;
    case 846u: goto L_08953D00;
    case 847u: goto L_08953D14;
    case 848u: goto L_08953D20;
    case 849u: goto L_08953D2C;
    case 850u: goto L_08953D34;
    case 851u: goto L_08953D40;
    case 852u: goto L_08953D54;
    case 853u: goto L_08953D64;
    case 854u: goto L_08953D6C;
    case 855u: goto L_08953D70;
    case 856u: goto L_08953D78;
    case 857u: goto L_08953D88;
    case 858u: goto L_08953D94;
    case 859u: goto L_08953DA8;
    case 860u: goto L_08953DB8;
    case 861u: goto L_08953DC0;
    case 862u: goto L_08953DC4;
    case 863u: goto L_08953DD4;
    case 864u: goto L_08953DDC;
    case 865u: goto L_08953DE4;
    case 866u: goto L_08953DF0;
    case 867u: goto L_08953E00;
    case 868u: goto L_08953E08;
    case 869u: goto L_08953E0C;
    case 870u: goto L_08953E14;
    case 871u: goto L_08953E18;
    case 872u: goto L_08953E20;
    case 873u: goto L_08953E28;
    case 874u: goto L_08953E60;
    case 875u: goto L_08953E74;
    case 876u: goto L_08953E98;
    case 877u: goto L_08953ECC;
    case 878u: goto L_08953EEC;
    case 879u: goto L_08953F08;
    case 880u: goto L_08953F10;
    case 881u: goto L_08953F1C;
    case 882u: goto L_08953F34;
    case 883u: goto L_08953F3C;
    case 884u: goto L_08953F4C;
    case 885u: goto L_08953F50;
    case 886u: goto L_08953F5C;
    case 887u: goto L_08953F94;
    case 888u: goto L_08953FC4;
    case 889u: goto L_08953FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08950000:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_0895000C;
L_0895000C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), hot_regs.g4);
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[20] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08950068u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 137u, 0x089991D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950068u) goto L_08950068;
    return;
L_08950068:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x089500ACu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089500ACu) goto L_089500AC;
    return;
L_089500AC:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(320)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(324)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(328)));
    hot_regs.g31 = (0x089500C4u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089500C4u) goto L_089500C4;
    return;
L_089500C4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089500D0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089500D0u) goto L_089500D0;
    return;
L_089500D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(400), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(408)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(408), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089500FCu);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089500FCu) goto L_089500FC;
    return;
L_089500FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08950120u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 518u, 0x08946B14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950120u) goto L_08950120;
    return;
L_08950120:
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17204u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f12 / hot_regs.f20;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(304)));
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    { const float fs = hot_regs.f14; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(292)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(308)));
    hot_regs.f12 = ctx.fpr[16] - hot_regs.f13;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f14 + hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(312)));
    hot_regs.f15 = hot_regs.f15 - ctx.fpr[17];
    { const float fs = hot_regs.f15; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f15;
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[28]) || std::isnan(hot_regs.f22)) && ctx.fpr[28] == hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950358;
      }
      goto L_089501FC;
    }
L_089501FC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (17723u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 32768u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(600)));
    { const float fs = ctx.fpr[28]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f14 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(576));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08950244u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 518u, 0x08946B14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950244u) goto L_08950244;
    return;
L_08950244:
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17204u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[28] = hot_regs.f12 / ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(592));
      if (branch_taken) {
          goto L_08950304;
      }
      goto L_089502E4;
    }
L_089502E4:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950358;
      }
      goto L_089502F4;
    }
L_089502F4:
    ctx.set_fpu_condition((hot_regs.f20 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950358;
      }
      goto L_08950304;
    }
L_08950304:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950334;
      }
      goto L_08950314;
    }
L_08950314:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950358;
      }
      goto L_08950324;
    }
L_08950324:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950358;
      }
      goto L_08950334;
    }
L_08950334:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = g4;
    goto L_08950358;
}
L_08950358:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(788)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089505AC;
      }
      goto L_0895036C;
    }
}
L_0895036C:
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(608));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08950380u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 518u, 0x08946B14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950380u) goto L_08950380;
    return;
L_08950380:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x089503C8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089503C8u) goto L_089503C8;
    return;
L_089503C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08950400u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950400u) goto L_08950400;
    return;
L_08950400:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(788)));
    hot_regs.g4 = (14749u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 18770u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08950430u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950430u) goto L_08950430;
    return;
L_08950430:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08950440u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 518u, 0x08946B14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950440u) goto L_08950440;
    return;
L_08950440:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(640));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0895046Cu);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 518u, 0x08946B14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895046Cu) goto L_0895046C;
    return;
L_0895046C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(656)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(660)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089504BCu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EF1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089504BCu) goto L_089504BC;
    return;
L_089504BC:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(640)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(644)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x089504D4u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 561u, 0x08A8EF1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089504D4u) goto L_089504D4;
    return;
L_089504D4:
    hot_regs.g31 = (0x089504DCu);
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 563u, 0x08A8EF4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089504DCu) goto L_089504DC;
    return;
L_089504DC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950510;
      }
      goto L_089504F0;
    }
}
L_089504F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950514;
      }
      goto L_089504FC;
    }
}
L_089504FC:
    hot_regs.g31 = (0x08950504u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950504u) goto L_08950504;
    return;
L_08950504:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08950514;
      }
      goto L_0895050C;
    }
L_0895050C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08950510;
L_08950510:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_08950514;
L_08950514:
    if (hot_regs.g4 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
        goto L_08950590;
    }
    goto L_0895051C;
L_0895051C:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (49884u << 16u);
      if (branch_taken) {
          goto L_08950554;
      }
      goto L_0895052C;
    }
L_0895052C:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089505AC;
      }
      goto L_0895053C;
    }
L_0895053C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17872)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089505AC;
      }
      goto L_08950550;
    }
L_08950550:
    hot_regs.g4 = (49884u << 16u);
    goto L_08950554;
L_08950554:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
        goto L_08950590;
    }
    goto L_08950568;
L_08950568:
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089505AC;
      }
      goto L_08950578;
    }
L_08950578:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17872)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089505AC;
      }
      goto L_0895058C;
    }
L_0895058C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    goto L_08950590;
L_08950590:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17872), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_089505AC;
}
L_089505AC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    hot_regs.g2 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x089505ECu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089505ECu) goto L_089505EC;
    return;
L_089505EC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950708;
      }
      goto L_089505F4;
    }
L_089505F4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(464)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08950708;
      }
      goto L_08950600;
    }
L_08950600:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (16256u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950708;
      }
      goto L_08950610;
    }
}
L_08950610:
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17204u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08950640u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 518u, 0x08946B14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950640u) goto L_08950640;
    return;
L_08950640:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    hot_regs.f22 = hot_regs.f22 / ctx.fpr[26];
    hot_regs.g4 = (16948u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (17144u << 16u);
      if (branch_taken) {
          goto L_08950708;
      }
      goto L_089506CC;
    }
L_089506CC:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08950708;
      }
      goto L_089506E0;
    }
L_089506E0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3304)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(432)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(436)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(f12));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(440)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f14));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08950708;
}
}
L_08950708:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950738;
      }
      goto L_08950718;
    }
}
L_08950718:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895073C;
      }
      goto L_08950724;
    }
}
L_08950724:
    hot_regs.g31 = (0x0895072Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895072Cu) goto L_0895072C;
    return;
L_0895072C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_0895073C;
      }
      goto L_08950734;
    }
L_08950734:
    ctx.gpr[17] = (0u | 1u);
    goto L_08950738;
L_08950738:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_0895073C;
L_0895073C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950778;
      }
      goto L_08950744;
    }
L_08950744:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(3312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(256));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08950770u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950770u) goto L_08950770;
    return;
L_08950770:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(408)));
      if (branch_taken) {
          goto L_089507AC;
      }
      goto L_08950778;
    }
L_08950778:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 32u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(408)));
    hot_regs.g4 = g4;
        goto L_089507AC;
    }
    goto L_08950788;
}
L_08950788:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(408)));
    hot_regs.g4 = g4;
        goto L_089507AC;
    }
    goto L_08950794;
}
L_08950794:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(3312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(408)));
    hot_regs.g4 = g4;
    goto L_089507AC;
}
L_089507AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
        goto L_089507D0;
    }
    goto L_089507B8;
}
L_089507B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(400)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = g4;
        goto L_089507D0;
    }
    goto L_089507C4;
}
L_089507C4:
    hot_regs.g31 = (0x089507CCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(400)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089507CCu) goto L_089507CC;
    return;
L_089507CC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    goto L_089507D0;
L_089507D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = g4;
        goto L_089507F4;
    }
    goto L_089507DC;
}
L_089507DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = g4;
        goto L_089507F4;
    }
    goto L_089507E8;
}
L_089507E8:
    hot_regs.g31 = (0x089507F0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089507F0u) goto L_089507F0;
    return;
L_089507F0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    goto L_089507F4;
L_089507F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    hot_regs.g4 = g4;
        goto L_08950818;
    }
    goto L_08950800;
}
L_08950800:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    hot_regs.g4 = g4;
        goto L_08950818;
    }
    goto L_0895080C;
}
L_0895080C:
    hot_regs.g31 = (0x08950814u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950814u) goto L_08950814;
    return;
L_08950814:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    goto L_08950818;
L_08950818:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950838;
      }
      goto L_08950824;
    }
}
L_08950824:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950838;
      }
      goto L_08950830;
    }
L_08950830:
    hot_regs.g31 = (0x08950838u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950838u) goto L_08950838;
    return;
L_08950838:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(796)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(800)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(804)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(808)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(812)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(816)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(820)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(824)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(828)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(832)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(836)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(840)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(844)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(848)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(852)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(856)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(864));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08950880:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(508), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(520), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(512), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(516), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(524), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(528), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(532), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(536), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(540), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), hot_regs.g31);
    hot_regs.g31 = (0x089508C0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 496u, 0x0898D5BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089508C0u) goto L_089508C0;
    return;
L_089508C0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3260)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    ctx.gpr[20] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089508F8;
      }
      goto L_089508CC;
    }
L_089508CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3260)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3260), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3260)));
    if (g4 != 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1929))))));
    hot_regs.g4 = g4;
        goto L_089508FC;
    }
    goto L_089508E4;
}
L_089508E4:
    hot_regs.g31 = (0x089508ECu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089508ECu) goto L_089508EC;
    return;
L_089508EC:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_089508FC;
    }
    goto L_089508F4;
L_089508F4:
    ctx.gpr[20] = (0u | 1u);
    goto L_089508F8;
L_089508F8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_089508FC;
L_089508FC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g6 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g6 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.gpr[18] = (hot_regs.g5 & 256u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
    hot_regs.g31 = (0x08950924u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950924u) goto L_08950924;
    return;
L_08950924:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895097C;
      }
      goto L_08950934;
    }
}
L_08950934:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    hot_regs.g4 = g4;
        goto L_08950954;
    }
    goto L_08950948;
}
L_08950948:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895097C;
      }
      goto L_08950950;
    }
L_08950950:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    goto L_08950954;
L_08950954:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895097C;
      }
      goto L_08950960;
    }
}
L_08950960:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x0895096Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895096Cu) goto L_0895096C;
    return;
L_0895096C:
    hot_regs.g31 = (0x08950974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 606u, 0x08A17A04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950974u) goto L_08950974;
    return;
L_08950974:
    hot_regs.g31 = (0x0895097Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895097Cu) goto L_0895097C;
    return;
L_0895097C:
    hot_regs.g31 = (0x08950984u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 507u, 0x0898D638u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950984u) goto L_08950984;
    return;
L_08950984:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089509D0;
      }
      goto L_0895098C;
    }
L_0895098C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 8192u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089509D0;
      }
      goto L_0895099C;
    }
}
L_0895099C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089509D0;
      }
      goto L_089509AC;
    }
L_089509AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (0u | 60000u);
    hot_regs.g4 = (hot_regs.g4 | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089509C8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 654u, 0x089AB1F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089509C8u) goto L_089509C8;
    return;
L_089509C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950A4C;
      }
      goto L_089509D0;
    }
L_089509D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 8192u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950A4C;
      }
      goto L_089509E0;
    }
}
L_089509E0:
    hot_regs.g31 = (0x089509E8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 507u, 0x0898D638u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089509E8u) goto L_089509E8;
    return;
L_089509E8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08950A30;
      }
      goto L_089509F0;
    }
L_089509F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08950A30;
      }
      goto L_08950A00;
    }
L_08950A00:
    hot_regs.g31 = (0x08950A08u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 543u, 0x0898D7C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950A08u) goto L_08950A08;
    return;
L_08950A08:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08950A30;
      }
      goto L_08950A10;
    }
L_08950A10:
    hot_regs.g31 = (0x08950A18u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 508u, 0x0898D640u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950A18u) goto L_08950A18;
    return;
L_08950A18:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08950A30;
      }
      goto L_08950A20;
    }
L_08950A20:
    hot_regs.g31 = (0x08950A28u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 400u, 0x0898D1B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950A28u) goto L_08950A28;
    return;
L_08950A28:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950A4C;
      }
      goto L_08950A30;
    }
L_08950A30:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08950A3Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950A3Cu) goto L_08950A3C;
    return;
L_08950A3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-4097));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(460), g4);
    hot_regs.g4 = g4;
    goto L_08950A4C;
}
L_08950A4C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08950A58u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 436u, 0x0894E260u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950A58u) goto L_08950A58;
    return;
L_08950A58:
    if (ctx.gpr[18] != 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
        goto L_08950AF8;
    }
    goto L_08950A60;
L_08950A60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950AD4;
      }
      goto L_08950A78;
    }
}
L_08950A78:
    hot_regs.g31 = (0x08950A80u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950A80u) goto L_08950A80;
    return;
L_08950A80:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08950AD4;
      }
      goto L_08950A88;
    }
L_08950A88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950AD4;
      }
      goto L_08950A98;
    }
}
L_08950A98:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950AC8;
      }
      goto L_08950AA8;
    }
}
L_08950AA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950ACC;
      }
      goto L_08950AB4;
    }
}
L_08950AB4:
    hot_regs.g31 = (0x08950ABCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950ABCu) goto L_08950ABC;
    return;
L_08950ABC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08950ACC;
      }
      goto L_08950AC4;
    }
L_08950AC4:
    ctx.gpr[18] = (0u | 1u);
    goto L_08950AC8;
L_08950AC8:
    hot_regs.g4 = (ctx.gpr[18] & 255u);
    goto L_08950ACC;
L_08950ACC:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
        goto L_08950AF8;
    }
    goto L_08950AD4;
L_08950AD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (17096u << 16u);
    g4 = (g4 & 64u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950B30;
      }
      goto L_08950AF0;
    }
}
L_08950AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08950B70;
      }
      goto L_08950AF8;
    }
L_08950AF8:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-9));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08950B28u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950B28u) goto L_08950B28;
    return;
L_08950B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_08950B30;
    }
L_08950B30:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17980)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (16288u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
        goto L_08950B60;
    }
    goto L_08950B60;
}
}
L_08950B60:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08950B94;
      }
      goto L_08950B70;
    }
L_08950B70:
{
    float f13 = hot_regs.f13;
    hot_regs.g4 = (17146u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = f13;
        goto L_08950B88;
    }
    goto L_08950B88;
}
L_08950B88:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08950B94;
L_08950B94:
    hot_regs.g31 = (0x08950B9Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950B9Cu) goto L_08950B9C;
    return;
L_08950B9C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950BB0;
      }
      goto L_08950BA4;
    }
L_08950BA4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08950BC0;
      }
      goto L_08950BB0;
    }
L_08950BB0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7580)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950BC0;
      }
      goto L_08950BBC;
    }
L_08950BBC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-7580), static_cast<std::uint8_t>(0u));
    goto L_08950BC0;
L_08950BC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08950DD8;
      }
      goto L_08950BCC;
    }
L_08950BCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[18] = (0u | 32u);
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == ctx.gpr[18];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950C94;
      }
      goto L_08950BF4;
    }
}
L_08950BF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 30u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950C94;
      }
      goto L_08950C1C;
    }
}
L_08950C1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 31u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950C94;
      }
      goto L_08950C44;
    }
}
L_08950C44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 38u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950C94;
      }
      goto L_08950C6C;
    }
}
L_08950C6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 39u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950DD8;
      }
      goto L_08950C94;
    }
}
L_08950C94:
    hot_regs.g31 = (0x08950C9Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 496u, 0x0898D5BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950C9Cu) goto L_08950C9C;
    return;
L_08950C9C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08950CB4;
      }
      goto L_08950CA4;
    }
L_08950CA4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950CC4;
      }
      goto L_08950CB0;
    }
L_08950CB0:
    hot_regs.g4 = (2236u << 16u);
    goto L_08950CB4;
L_08950CB4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1957)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950D2C;
      }
      goto L_08950CC4;
    }
}
L_08950CC4:
    hot_regs.g31 = (0x08950CCCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 84u, 0x0894857Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950CCCu) goto L_08950CCC;
    return;
L_08950CCC:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3156), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[8] = (17530u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08950CF0u);
    hot_regs.g7 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 163u, 0x089088F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950CF0u) goto L_08950CF0;
    return;
L_08950CF0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950D18;
      }
      goto L_08950CFC;
    }
L_08950CFC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08950D0Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950D0Cu) goto L_08950D0C;
    return;
L_08950D0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950D2C;
      }
      goto L_08950D18;
    }
}
L_08950D18:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08950D24u);
    hot_regs.g5 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950D24u) goto L_08950D24;
    return;
L_08950D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_08950D2C;
    }
L_08950D2C:
    hot_regs.g31 = (0x08950D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 274u, 0x08A1D7C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950D34u) goto L_08950D34;
    return;
L_08950D34:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08950DD8;
      }
      goto L_08950D3C;
    }
L_08950D3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == ctx.gpr[18];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950DF0;
      }
      goto L_08950D60;
    }
}
L_08950D60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 30u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950DF0;
      }
      goto L_08950D88;
    }
}
L_08950D88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 31u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950DF0;
      }
      goto L_08950DB0;
    }
}
L_08950DB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 38u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950DF0;
      }
      goto L_08950DD8;
    }
}
L_08950DD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 51u);
    if (g4 == hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g4 = g4;
        goto L_08950E08;
    }
    goto L_08950DE8;
}
L_08950DE8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_08950DF8;
      }
      goto L_08950DF0;
    }
L_08950DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_08950DF8;
    }
L_08950DF8:
    hot_regs.g5 = (0u | 50u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08950E74;
      }
      goto L_08950E04;
    }
L_08950E04:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_08950E08;
L_08950E08:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950E74;
      }
      goto L_08950E24;
    }
}
L_08950E24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 24u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950E74;
      }
      goto L_08950E4C;
    }
}
L_08950E4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 25u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950E8C;
      }
      goto L_08950E74;
    }
}
L_08950E74:
    hot_regs.g31 = (0x08950E7Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 412u, 0x0898D22Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950E7Cu) goto L_08950E7C;
    return;
L_08950E7C:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
        goto L_08950E94;
    }
    goto L_08950E84;
L_08950E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951134;
      }
      goto L_08950E8C;
    }
L_08950E8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_08950E94;
    }
L_08950E94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951134;
      }
      goto L_08950EA8;
    }
}
L_08950EA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08951134;
      }
      goto L_08950EB8;
    }
L_08950EB8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 39u);
    { const bool branch_taken = g4 != g5;
    g5 = (2236u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950EF4;
      }
      goto L_08950EE0;
    }
}
L_08950EE0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(1976))))));
    hot_regs.g4 = (0u | 47u);
    { const bool branch_taken = g5 == hot_regs.g4;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951134;
      }
      goto L_08950EF4;
    }
}
L_08950EF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08950F30;
      }
      goto L_08950F0C;
    }
}
L_08950F0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 50u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08950F24;
      }
      goto L_08950F1C;
    }
L_08950F1C:
    hot_regs.g31 = (0x08950F24u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 36u, 0x08A08730u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950F24u) goto L_08950F24;
    return;
L_08950F24:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), g4);
    hot_regs.g4 = g4;
    goto L_08950F30;
}
L_08950F30:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_08950F40;
    }
L_08950F40:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08950FC4;
      }
      goto L_08950F54;
    }
}
L_08950F54:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950FC4;
      }
      goto L_08950F60;
    }
L_08950F60:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08950F78;
      }
      goto L_08950F6C;
    }
L_08950F6C:
    hot_regs.f12 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3168), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08950FB0;
      }
      goto L_08950F78;
    }
L_08950F78:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17976)));
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
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3168)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3168), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08950FB0;
}
}
L_08950FB0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g31 = (0x08950FBCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950FBCu) goto L_08950FBC;
    return;
L_08950FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_08950FC4;
    }
L_08950FC4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08951014;
      }
      goto L_08950FD0;
    }
L_08950FD0:
    hot_regs.g31 = (0x08950FD8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 419u, 0x0898D270u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08950FD8u) goto L_08950FD8;
    return;
L_08950FD8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08950FF0;
      }
      goto L_08950FE0;
    }
L_08950FE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    g4 = (g4 | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895102C;
      }
      goto L_08950FF0;
    }
}
L_08950FF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    g4 = (g4 & 2u);
    if (g4 != 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g4 = g4;
        goto L_08951030;
    }
    goto L_08951000;
}
L_08951000:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3168)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    f12 = f12 + hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3168), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895102C;
      }
      goto L_08951014;
    }
}
L_08951014:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3261))))));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3168), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_0895102C;
}
L_0895102C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_08951030;
L_08951030:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_08951050;
    }
}
L_08951050:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 1u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_08951078;
    }
}
L_08951078:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (1u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_08951094;
    }
}
L_08951094:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (g4 != 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g4 = g4;
        goto L_089510C4;
    }
    goto L_089510A0;
}
L_089510A0:
    hot_regs.g31 = (0x089510A8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 419u, 0x0898D270u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089510A8u) goto L_089510A8;
    return;
L_089510A8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_089510B0;
    }
L_089510B0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089510BCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089510BCu) goto L_089510BC;
    return;
L_089510BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_089510C4;
    }
L_089510C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 36u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951110;
      }
      goto L_089510E8;
    }
}
L_089510E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 13u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951120;
      }
      goto L_08951110;
    }
}
L_08951110:
    hot_regs.g31 = (0x08951118u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 419u, 0x0898D270u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951118u) goto L_08951118;
    return;
L_08951118:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_08951120;
    }
L_08951120:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0895112Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 716u, 0x088E76D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895112Cu) goto L_0895112C;
    return;
L_0895112C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_08951134;
    }
L_08951134:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(860)));
    g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(860), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 16u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_08951154;
    }
}
L_08951154:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3261))))));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(456)));
    g4 = (g4 | 2u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(g4));
    g4 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (hot_regs.g5 & g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = g4 == 0u;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_0895117C;
    }
}
L_0895117C:
    hot_regs.g31 = (0x08951184u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 274u, 0x08A1D7C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951184u) goto L_08951184;
    return;
L_08951184:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895119C;
      }
      goto L_0895118C;
    }
L_0895118C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x0895119Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 594u, 0x088EB074u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895119Cu) goto L_0895119C;
    return;
L_0895119C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951220;
      }
      goto L_089511A8;
    }
L_089511A8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (g6 - g5);
    g5 = (ctx.gpr[16] + g5);
    g5 = (g5 + static_cast<std::uint32_t>(1396));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g6 = (0u | 11u);
    { const bool branch_taken = g5 != g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08951220;
      }
      goto L_089511D0;
    }
}
L_089511D0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951220;
      }
      goto L_089511EC;
    }
}
L_089511EC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08951220;
      }
      goto L_08951204;
    }
L_08951204:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951220;
      }
      goto L_08951214;
    }
}
L_08951214:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08951220u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951220u) goto L_08951220;
    return;
L_08951220:
    hot_regs.g31 = (0x08951228u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 489u, 0x0898D560u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951228u) goto L_08951228;
    return;
L_08951228:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
        goto L_08951260;
    }
    goto L_08951230;
L_08951230:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 50u);
    if (g4 == hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
    hot_regs.g4 = g4;
        goto L_08951260;
    }
    goto L_08951240;
}
L_08951240:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951CE8;
      }
      goto L_08951250;
    }
}
L_08951250:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951CE8;
      }
      goto L_0895125C;
    }
L_0895125C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
    goto L_08951260;
L_08951260:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08951CE8;
      }
      goto L_0895126C;
    }
L_0895126C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2244)));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[18] = (2236u << 16u);
      if (branch_taken) {
          goto L_0895128C;
      }
      goto L_0895127C;
    }
L_0895127C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08951CE8;
      }
      goto L_08951288;
    }
L_08951288:
    ctx.gpr[18] = (2236u << 16u);
    goto L_0895128C;
L_0895128C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32304));
    hot_regs.g31 = (0x08951298u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 274u, 0x08A1D7C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951298u) goto L_08951298;
    return;
L_08951298:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08951CE8;
      }
      goto L_089512A0;
    }
L_089512A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 64u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951CE8;
      }
      goto L_089512B8;
    }
}
L_089512B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089512D4;
      }
      goto L_089512C8;
    }
}
L_089512C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951300;
      }
      goto L_089512D4;
    }
L_089512D4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3260)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    // nop
      if (branch_taken) {
          goto L_089512F8;
      }
      goto L_089512E0;
    }
L_089512E0:
    hot_regs.g31 = (0x089512E8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 28u, 0x0898C0E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089512E8u) goto L_089512E8;
    return;
L_089512E8:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
        goto L_08951308;
    }
    goto L_089512F0;
L_089512F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951388;
      }
      goto L_089512F8;
    }
L_089512F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_08951300;
    }
L_08951300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_08951308;
    }
L_08951308:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951388;
      }
      goto L_08951314;
    }
}
L_08951314:
    hot_regs.g31 = (0x0895131Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 219u, 0x08908C50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895131Cu) goto L_0895131C;
    return;
L_0895131C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08951388;
      }
      goto L_08951324;
    }
L_08951324:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951388;
      }
      goto L_08951330;
    }
L_08951330:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[18]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 15u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951388;
      }
      goto L_08951360;
    }
}
L_08951360:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951388;
      }
      goto L_08951378;
    }
}
L_08951378:
    hot_regs.g31 = (0x08951380u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 261u, 0x0894D1B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951380u) goto L_08951380;
    return;
L_08951380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08951D54;
      }
      goto L_08951388;
    }
L_08951388:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089513B4;
      }
      goto L_0895139C;
    }
}
L_0895139C:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_089513BC;
    }
    goto L_089513A8;
L_089513A8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_089513BC;
      }
      goto L_089513B4;
    }
L_089513B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_089513BC;
}
L_089513BC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089515D4;
      }
      goto L_089513C4;
    }
L_089513C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089515D4;
      }
      goto L_089513DC;
    }
}
L_089513DC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7580)));
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_089514EC;
      }
      goto L_089513EC;
    }
L_089513EC:
    if (ctx.gpr[20] == 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1957)));
        goto L_08951404;
    }
    goto L_089513F4;
L_089513F4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895140C;
      }
      goto L_08951400;
    }
L_08951400:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1957)));
    goto L_08951404;
L_08951404:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895158C;
      }
      goto L_0895140C;
    }
L_0895140C:
    hot_regs.g31 = (0x08951414u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 113u, 0x08B14BD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951414u) goto L_08951414;
    return;
L_08951414:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951494;
      }
      goto L_0895141C;
    }
L_0895141C:
    hot_regs.g31 = (0x08951424u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 23u, 0x08B143A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951424u) goto L_08951424;
    return;
L_08951424:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17908)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17912)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 31u));
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08951464u);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951464u) goto L_08951464;
    return;
L_08951464:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17860)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17864)));
    hot_regs.g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17852)));
    hot_regs.g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17856)));
    g5 = (ctx.gpr[3] & g5);
    g4 = (hot_regs.g2 & g4);
    { const bool branch_taken = g4 != hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895148C;
      }
      goto L_08951484;
    }
}
L_08951484:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08951494;
      }
      goto L_0895148C;
    }
L_0895148C:
    hot_regs.g31 = (0x08951494u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 403u, 0x08949CE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951494u) goto L_08951494;
    return;
L_08951494:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895158C;
      }
      goto L_0895149C;
    }
L_0895149C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & 1024u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895158C;
      }
      goto L_089514AC;
    }
}
L_089514AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895158C;
      }
      goto L_089514BC;
    }
}
L_089514BC:
    ctx.gpr[10] = (16204u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 52429u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089514E4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 670u, 0x08A17F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089514E4u) goto L_089514E4;
    return;
L_089514E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895158C;
      }
      goto L_089514EC;
    }
L_089514EC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7580)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08951504;
      }
      goto L_089514F8;
    }
L_089514F8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1957)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895158C;
      }
      goto L_08951504;
    }
L_08951504:
    hot_regs.g31 = (0x0895150Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 113u, 0x08B14BD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895150Cu) goto L_0895150C;
    return;
L_0895150C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895158C;
      }
      goto L_08951514;
    }
L_08951514:
    hot_regs.g31 = (0x0895151Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 23u, 0x08B143A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895151Cu) goto L_0895151C;
    return;
L_0895151C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17908)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17912)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 31u));
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0895155Cu);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895155Cu) goto L_0895155C;
    return;
L_0895155C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17860)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17864)));
    hot_regs.g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17852)));
    hot_regs.g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17856)));
    g5 = (ctx.gpr[3] & g5);
    g4 = (hot_regs.g2 & g4);
    { const bool branch_taken = g4 != hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951584;
      }
      goto L_0895157C;
    }
}
L_0895157C:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0895158C;
      }
      goto L_08951584;
    }
L_08951584:
    hot_regs.g31 = (0x0895158Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 403u, 0x08949CE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895158Cu) goto L_0895158C;
    return;
L_0895158C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089515CC;
      }
      goto L_08951598;
    }
L_08951598:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089515CC;
      }
      goto L_089515A0;
    }
L_089515A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089515CC;
      }
      goto L_089515C0;
    }
}
L_089515C0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3284), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3288), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089515CC;
}
L_089515CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D54;
      }
      goto L_089515D4;
    }
L_089515D4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951600;
      }
      goto L_089515E8;
    }
}
L_089515E8:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_08951608;
    }
    goto L_089515F4;
L_089515F4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08951608;
      }
      goto L_08951600;
    }
L_08951600:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08951608;
}
L_08951608:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951624;
      }
      goto L_08951610;
    }
L_08951610:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = g4;
        goto L_08951638;
    }
    goto L_0895161C;
}
L_0895161C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089516C8;
      }
      goto L_08951624;
    }
L_08951624:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08951630u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951630u) goto L_08951630;
    return;
L_08951630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_08951638;
    }
L_08951638:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089516C8;
      }
      goto L_08951654;
    }
}
L_08951654:
    hot_regs.g31 = (0x0895165Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895165Cu) goto L_0895165C;
    return;
L_0895165C:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
        goto L_08951690;
    }
    goto L_08951664;
L_08951664:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089516DC;
      }
      goto L_08951674;
    }
}
L_08951674:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (0u | 6u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089516DC;
      }
      goto L_0895168C;
    }
}
L_0895168C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    goto L_08951690;
L_08951690:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089516C8;
      }
      goto L_08951698;
    }
L_08951698:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (0u | 57u);
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089516DC;
      }
      goto L_089516B0;
    }
}
L_089516B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (0u | 58u);
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089516DC;
      }
      goto L_089516C8;
    }
}
L_089516C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = g4;
        goto L_089516F0;
    }
    goto L_089516D4;
}
L_089516D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951728;
      }
      goto L_089516DC;
    }
L_089516DC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089516E8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089516E8u) goto L_089516E8;
    return;
L_089516E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_089516F0;
    }
L_089516F0:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g6 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g6 - hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08951720u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 378u, 0x08949AC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951720u) goto L_08951720;
    return;
L_08951720:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08951788;
      }
      goto L_08951728;
    }
L_08951728:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08951740u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951740u) goto L_08951740;
    return;
L_08951740:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08951758u);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951758u) goto L_08951758;
    return;
L_08951758:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    hot_regs.g5 = (hot_regs.g2 << 6u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + hot_regs.g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(42))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895179C;
      }
      goto L_08951780;
    }
}
L_08951780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895190C;
      }
      goto L_08951788;
    }
L_08951788:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08951794u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951794u) goto L_08951794;
    return;
L_08951794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952358;
      }
      goto L_0895179C;
    }
L_0895179C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089517B0;
      }
      goto L_089517A8;
    }
L_089517A8:
    hot_regs.g31 = (0x089517B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 356u, 0x089498DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089517B0u) goto L_089517B0;
    return;
L_089517B0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089517DC;
      }
      goto L_089517C4;
    }
}
L_089517C4:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_089517E4;
    }
    goto L_089517D0;
L_089517D0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_089517E4;
      }
      goto L_089517DC;
    }
L_089517DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_089517E4;
}
L_089517E4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895190C;
      }
      goto L_089517EC;
    }
L_089517EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895190C;
      }
      goto L_089517FC;
    }
}
L_089517FC:
    hot_regs.g31 = (0x08951804u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 561u, 0x0898D8A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951804u) goto L_08951804;
    return;
L_08951804:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951884;
      }
      goto L_0895180C;
    }
L_0895180C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08951818u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 215u, 0x08B15190u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951818u) goto L_08951818;
    return;
L_08951818:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17908)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17912)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 31u));
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x08951854u);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951854u) goto L_08951854;
    return;
L_08951854:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17860)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17864)));
    hot_regs.g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17852)));
    hot_regs.g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17856)));
    g5 = (ctx.gpr[3] & g5);
    g4 = (hot_regs.g2 & g4);
    { const bool branch_taken = g4 != hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895187C;
      }
      goto L_08951874;
    }
}
L_08951874:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08951884;
      }
      goto L_0895187C;
    }
L_0895187C:
    hot_regs.g31 = (0x08951884u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 403u, 0x08949CE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951884u) goto L_08951884;
    return;
L_08951884:
    hot_regs.g31 = (0x0895188Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 569u, 0x0898D8F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895188Cu) goto L_0895188C;
    return;
L_0895188C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895190C;
      }
      goto L_08951894;
    }
L_08951894:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089518A0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 215u, 0x08B15190u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089518A0u) goto L_089518A0;
    return;
L_089518A0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17908)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17912)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 31u));
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x089518DCu);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 178u, 0x08B60E84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089518DCu) goto L_089518DC;
    return;
L_089518DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17860)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17864)));
    hot_regs.g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17852)));
    hot_regs.g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17856)));
    g5 = (ctx.gpr[3] & g5);
    g4 = (hot_regs.g2 & g4);
    { const bool branch_taken = g4 != hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951904;
      }
      goto L_089518FC;
    }
}
L_089518FC:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0895190C;
      }
      goto L_08951904;
    }
L_08951904:
    hot_regs.g31 = (0x0895190Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 403u, 0x08949CE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895190Cu) goto L_0895190C;
    return;
L_0895190C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7580)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08951CE0;
      }
      goto L_08951918;
    }
L_08951918:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 11u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x0895192Cu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 167u, 0x08A1D018u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895192Cu) goto L_0895192C;
    return;
L_0895192C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951C3C;
      }
      goto L_08951938;
    }
L_08951938:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 33u);
    { const bool branch_taken = g4 == g5;
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895198C;
      }
      goto L_08951960;
    }
}
L_08951960:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08951980u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951980u) goto L_08951980;
    return;
L_08951980:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != 0u;
    g4 = (16968u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951998;
      }
      goto L_0895198C;
    }
}
L_0895198C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3220), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3216), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_08951C3C;
      }
      goto L_08951998;
    }
L_08951998:
{
    float f12 = hot_regs.f12;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f14 = std::bit_cast<float>(g4);
    f16 = f12 / hot_regs.f14;
    g4 = (17530u << 16u);
    hot_regs.g5 = (20224u << 16u);
    g6 = (17692u << 16u);
    g6 = (g6 | 16384u);
    hot_regs.g7 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3284)));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    ctx.fpr[17] = std::bit_cast<float>(g6);
    f12 = std::bit_cast<float>(g4);
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    ctx.set_fpu_condition((f16 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08951A00;
      }
      goto L_089519E0;
    }
}
}
L_089519E0:
{
    float f16 = ctx.fpr[16];
    f16 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f16 = f16 / hot_regs.f14;
    { const float fs = f16; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f16));
    f16 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08951A28;
      }
      goto L_08951A00;
    }
}
L_08951A00:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f16 = f16 / hot_regs.f14;
    g4 = (32768u << 16u);
    { const float fs = f16; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f16 = f16 - hot_regs.f15;
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f16));
    g4 = (hot_regs.g5 + g4);
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    hot_regs.g4 = g4;
    ctx.fpr[16] = f16;
    goto L_08951A28;
}
}
L_08951A28:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    hot_regs.g4 = (20352u << 16u);
      if (branch_taken) {
          goto L_08951A38;
      }
      goto L_08951A30;
    }
L_08951A30:
    ctx.fpr[19] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[19];
    goto L_08951A38;
L_08951A38:
{
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
    f16 = f13 + f16;
    f13 = f16 / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3284), std::bit_cast<std::uint32_t>(f16));
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((f13 < f16));
    // nop
    if (ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
        goto L_08951A58;
    }
    goto L_08951A58;
}
L_08951A58:
{
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g16 = ctx.gpr[16];
    f13 = ctx.fpr[18] - f16;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3276), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3276), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f13 = f13 / hot_regs.f14;
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f13 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(3288)));
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08951AA0;
      }
      goto L_08951A80;
    }
}
}
L_08951A80:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f13 = f13 / hot_regs.f14;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08951AC8;
      }
      goto L_08951AA0;
    }
}
L_08951AA0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f13 = f13 / hot_regs.f14;
    g4 = (32768u << 16u);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 - hot_regs.f15;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (hot_regs.g5 + g4);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08951AC8;
}
}
L_08951AC8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    hot_regs.g4 = (20352u << 16u);
      if (branch_taken) {
          goto L_08951AD8;
      }
      goto L_08951AD0;
    }
L_08951AD0:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08951AD8;
L_08951AD8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = ctx.fpr[16] + f12;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3261))))));
    g4 = (g4 & 128u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3288), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08951B10;
      }
      goto L_08951AEC;
    }
}
}
L_08951AEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(3288)));
    g4 = (17146u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3261))))));
    f12 = f12 - hot_regs.f13;
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3288), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08951B10;
}
}
L_08951B10:
{
    float f12 = hot_regs.f12;
    float f17 = ctx.fpr[17];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3288)));
    f17 = f12 / f17;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((f12 <= f17));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f17));
    hot_regs.f12 = f12;
    ctx.fpr[17] = f17;
        goto L_08951B2C;
    }
    goto L_08951B2C;
}
L_08951B2C:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f13 = ctx.fpr[18] - hot_regs.f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3220), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3220), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3216), std::bit_cast<std::uint32_t>(f20));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951C3C;
      }
      goto L_08951B54;
    }
}
}
L_08951B54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951C3C;
      }
      goto L_08951B74;
    }
}
L_08951B74:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(352)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08951BA4;
      }
      goto L_08951B88;
    }
L_08951B88:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.g31 = (0x08951B98u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951B98u) goto L_08951B98;
    return;
L_08951B98:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08951BA4;
L_08951BA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    g4 = (g4 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    g19 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(352)));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
        goto L_08951BE4;
    }
    goto L_08951BC4;
}
L_08951BC4:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(321));
    hot_regs.g31 = (0x08951BD4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951BD4u) goto L_08951BD4;
    return;
L_08951BD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(321)));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08951BE4;
}
L_08951BE4:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08951C2Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951C2Cu) goto L_08951C2C;
    return;
L_08951C2C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 / f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3216), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08951C3C;
}
L_08951C3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951CE0;
      }
      goto L_08951C48;
    }
L_08951C48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[18]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 15u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951CE0;
      }
      goto L_08951C78;
    }
}
L_08951C78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08951C90u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951C90u) goto L_08951C90;
    return;
L_08951C90:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08951CA8u);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951CA8u) goto L_08951CA8;
    return;
L_08951CA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    hot_regs.g5 = (hot_regs.g2 << 6u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + hot_regs.g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(42))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951CE0;
      }
      goto L_08951CD0;
    }
}
L_08951CD0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08951CE0u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 269u, 0x08A1D614u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951CE0u) goto L_08951CE0;
    return;
L_08951CE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D54;
      }
      goto L_08951CE8;
    }
L_08951CE8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = (0u | 0u);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08951D18;
      }
      goto L_08951D00;
    }
}
L_08951D00:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_08951D20;
    }
    goto L_08951D0C;
L_08951D0C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08951D20;
      }
      goto L_08951D18;
    }
L_08951D18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08951D20;
}
L_08951D20:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951D54;
      }
      goto L_08951D28;
    }
L_08951D28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951D54;
      }
      goto L_08951D40;
    }
}
L_08951D40:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08951D4Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951D4Cu) goto L_08951D4C;
    return;
L_08951D4C:
    hot_regs.g4 = (0u | 6u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3260), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08951D54;
L_08951D54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952338;
      }
      goto L_08951D68;
    }
}
L_08951D68:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f20 = std::bit_cast<float>(0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f20));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(112));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(128));
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08951DD8;
      }
      goto L_08951DAC;
    }
}
}
L_08951DAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08951DC0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951DC0u) goto L_08951DC0;
    return;
L_08951DC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (g4 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952004;
      }
      goto L_08951DD8;
    }
}
L_08951DD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951FF4;
      }
      goto L_08951DF8;
    }
}
L_08951DF8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08951E20u);
    ctx.gpr[30] = (hot_regs.g4 + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 419u, 0x089D273Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951E20u) goto L_08951E20;
    return;
L_08951E20:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08951E30u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951E30u) goto L_08951E30;
    return;
L_08951E30:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951FB0;
      }
      goto L_08951E38;
    }
L_08951E38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(352)));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
        goto L_08951E68;
    }
    goto L_08951E48;
}
L_08951E48:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    hot_regs.g31 = (0x08951E58u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951E58u) goto L_08951E58;
    return;
L_08951E58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08951E68;
}
L_08951E68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(176)));
    g4 = (g4 ^ 65535u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951F70;
      }
      goto L_08951E80;
    }
}
L_08951E80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[23] = (0u | 65535u);
      if (branch_taken) {
          goto L_08951EA8;
      }
      goto L_08951E8C;
    }
L_08951E8C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(353));
    hot_regs.g31 = (0x08951E9Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951E9Cu) goto L_08951E9C;
    return;
L_08951E9C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(353)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08951EA8;
L_08951EA8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(176)));
    if (g5 != ctx.gpr[23]) {
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    hot_regs.g5 = g5;
        goto L_08951EC0;
    }
    goto L_08951EB8;
}
L_08951EB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08951ED4;
      }
      goto L_08951EC0;
    }
L_08951EC0:
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(176)));
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x08951ED0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951ED0u) goto L_08951ED0;
    return;
L_08951ED0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08951ED4;
L_08951ED4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08951F70;
      }
      goto L_08951EDC;
    }
L_08951EDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08951F08;
    }
    goto L_08951EE8;
}
L_08951EE8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(354));
    hot_regs.g31 = (0x08951EF8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951EF8u) goto L_08951EF8;
    return;
L_08951EF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(354)));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08951F08;
}
L_08951F08:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(176)));
    if (g5 != ctx.gpr[23]) {
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    hot_regs.g5 = g5;
        goto L_08951F1C;
    }
    goto L_08951F14;
}
L_08951F14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08951F30;
      }
      goto L_08951F1C;
    }
L_08951F1C:
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(176)));
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x08951F2Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951F2Cu) goto L_08951F2C;
    return;
L_08951F2C:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    goto L_08951F30;
L_08951F30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08951F5C;
    }
    goto L_08951F3C;
}
L_08951F3C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(355));
    hot_regs.g31 = (0x08951F4Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951F4Cu) goto L_08951F4C;
    return;
L_08951F4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(355)));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08951F5C;
}
L_08951F5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08951FA8;
      }
      goto L_08951F70;
    }
}
L_08951F70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08951F9C;
    }
    goto L_08951F7C;
}
L_08951F7C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(356));
    hot_regs.g31 = (0x08951F8Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951F8Cu) goto L_08951F8C;
    return;
L_08951F8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(356)));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08951F9C;
}
L_08951F9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = g4;
    goto L_08951FA8;
}
L_08951FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08951FEC;
      }
      goto L_08951FB0;
    }
L_08951FB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(352)));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
        goto L_08951FE0;
    }
    goto L_08951FC0;
}
L_08951FC0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(357));
    hot_regs.g31 = (0x08951FD0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08951FD0u) goto L_08951FD0;
    return;
L_08951FD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(357)));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08951FE0;
}
L_08951FE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = g4;
    goto L_08951FEC;
}
L_08951FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952004;
      }
      goto L_08951FF4;
    }
L_08951FF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = g4;
    goto L_08952004;
}
L_08952004:
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
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089520C0;
      }
      goto L_08952018;
    }
L_08952018:
    hot_regs.g4 = (16416u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3276)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3216)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3276)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3216)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089520C0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089520C0u) goto L_089520C0;
    return;
L_089520C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952138;
      }
      goto L_089520D0;
    }
}
L_089520D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g5 = (16204u << 16u);
    g5 = (g5 | 52429u);
    g4 = (g4 & 1024u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f12 = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952114;
      }
      goto L_089520E8;
    }
}
L_089520E8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0895210Cu);
    ctx.gpr[8] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 670u, 0x08A17F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895210Cu) goto L_0895210C;
    return;
L_0895210C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952138;
      }
      goto L_08952114;
    }
L_08952114:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08952138u);
    ctx.gpr[8] = (0u | 225u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 670u, 0x08A17F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952138u) goto L_08952138;
    return;
L_08952138:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(3200));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089521F8;
      }
      goto L_08952164;
    }
}
L_08952164:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089521F8;
      }
      goto L_08952170;
    }
L_08952170:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(352)));
    if (g18 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = g18;
        goto L_089521B0;
    }
    goto L_0895217C;
}
L_0895217C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 43u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0895219C;
      }
      goto L_0895218C;
    }
L_0895218C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 44u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_089521A4;
      }
      goto L_0895219C;
    }
L_0895219C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_089521A4;
}
L_089521A4:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089521EC;
      }
      goto L_089521AC;
    }
L_089521AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_089521B0;
L_089521B0:
    if (hot_regs.g4 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_089521D8;
    }
    goto L_089521B8;
L_089521B8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    hot_regs.g31 = (0x089521C8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089521C8u) goto L_089521C8;
    return;
L_089521C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_089521D8;
}
L_089521D8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 48u);
    g4 = (g4 + static_cast<std::uint32_t>(180));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089521F8;
      }
      goto L_089521EC;
    }
}
L_089521EC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089521F8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089521F8u) goto L_089521F8;
    return;
L_089521F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895223C;
      }
      goto L_08952210;
    }
}
L_08952210:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08952338;
      }
      goto L_0895221C;
    }
L_0895221C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0895223C;
      }
      goto L_0895222C;
    }
L_0895222C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 16u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08952338;
      }
      goto L_0895223C;
    }
L_0895223C:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08952270;
      }
      goto L_0895224C;
    }
L_0895224C:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952294;
      }
      goto L_08952270;
    }
}
L_08952270:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g6 = (g6 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08952294;
}
L_08952294:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(216));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089522ACu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089522ACu) goto L_089522AC;
    return;
L_089522AC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089522C4u);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089522C4u) goto L_089522C4;
    return;
L_089522C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    hot_regs.g5 = (hot_regs.g2 << 6u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + hot_regs.g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(42))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952338;
      }
      goto L_089522EC;
    }
}
L_089522EC:
    hot_regs.g31 = (0x089522F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 80u, 0x0894854Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089522F4u) goto L_089522F4;
    return;
L_089522F4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08952338;
      }
      goto L_089522FC;
    }
L_089522FC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08952324;
      }
      goto L_08952314;
    }
}
L_08952314:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f20)) && hot_regs.f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08952334;
      }
      goto L_08952324;
    }
L_08952324:
    hot_regs.g31 = (0x0895232Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895232Cu) goto L_0895232C;
    return;
L_0895232C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08952334;
      }
      goto L_08952334;
    }
L_08952334:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08952338;
L_08952338:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(2076)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3262))))));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 1u);
    g5 = (g5 & ctx.gpr[22]);
    g4 = (g5 | g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3262), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08952358;
}
L_08952358:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(524)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(528)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(532)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(536)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(540)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895238C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x089523ACu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089523ACu) goto L_089523AC;
    return;
L_089523AC:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
        goto L_089523D8;
    }
    goto L_089523B4;
L_089523B4:
    hot_regs.g31 = (0x089523BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089523BCu) goto L_089523BC;
    return;
L_089523BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08952914;
      }
      goto L_089523C4;
    }
L_089523C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
    hot_regs.g5 = (0u | 13u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08952914;
      }
      goto L_089523D4;
    }
L_089523D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    goto L_089523D8;
L_089523D8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08952914;
      }
      goto L_089523E0;
    }
L_089523E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17963)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 | hot_regs.g5);
    if (g4 != 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g4 = g4;
        goto L_08952608;
    }
    goto L_089523FC;
}
L_089523FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (g16 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 36u);
    if (g4 == g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1929))))));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08952608;
    }
    goto L_08952424;
}
L_08952424:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 55u);
    if (g4 == hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g4 = g4;
        goto L_08952608;
    }
    goto L_08952434;
}
L_08952434:
    hot_regs.g31 = (0x0895243Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 482u, 0x0898D50Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895243Cu) goto L_0895243C;
    return;
L_0895243C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08952518;
      }
      goto L_08952444;
    }
L_08952444:
    hot_regs.g31 = (0x0895244Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895244Cu) goto L_0895244C;
    return;
L_0895244C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08952518;
      }
      goto L_08952454;
    }
L_08952454:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(1976))))));
    g5 = (0u | 34u);
    { const bool branch_taken = g4 == g5;
    g5 = (0u | 42u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_0895246C;
    }
}
L_0895246C:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 7u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_08952474;
    }
L_08952474:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 39u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_0895247C;
    }
L_0895247C:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 8u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_08952484;
    }
L_08952484:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 40u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_0895248C;
    }
L_0895248C:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 47u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_08952494;
    }
L_08952494:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 46u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_0895249C;
    }
L_0895249C:
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_08952608;
    }
    goto L_089524A4;
L_089524A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1929))))));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(g4));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3256))))));
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < 10 ? 1u : 0u);
    hot_regs.g4 = g4;
    goto L_089524B8;
}
L_089524B8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089524C8;
      }
      goto L_089524C0;
    }
L_089524C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_089524C8;
    }
L_089524C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 5u);
    g5 = (g5 << 2u);
    g4 = (g4 - g5);
    g5 = (ctx.gpr[16] + g4);
    g5 = (g5 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952500;
      }
      goto L_089524E8;
    }
}
L_089524E8:
    hot_regs.g31 = (0x089524F0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 283u, 0x08A417DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089524F0u) goto L_089524F0;
    return;
L_089524F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08952500;
      }
      goto L_089524F8;
    }
L_089524F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_08952608;
      }
      goto L_08952500;
    }
L_08952500:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3256))))));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(g4));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3256))))));
    { const bool branch_taken = 0u == 0u;
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < 10 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089524B8;
      }
      goto L_08952518;
    }
}
L_08952518:
    hot_regs.g31 = (0x08952520u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 475u, 0x0898D4B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952520u) goto L_08952520;
    return;
L_08952520:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_08952608;
    }
    goto L_08952528;
L_08952528:
    hot_regs.g31 = (0x08952530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 562u, 0x08A363C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952530u) goto L_08952530;
    return;
L_08952530:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_08952608;
    }
    goto L_08952538;
L_08952538:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(1976))))));
    g5 = (0u | 34u);
    { const bool branch_taken = g4 == g5;
    g5 = (0u | 7u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_08952550;
    }
}
L_08952550:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 8u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_08952558;
    }
L_08952558:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 47u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_08952560;
    }
L_08952560:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 46u);
      if (branch_taken) {
          goto L_08952604;
      }
      goto L_08952568;
    }
L_08952568:
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_08952608;
    }
    goto L_08952570;
L_08952570:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[18] = (0u | 9u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3256))))));
    hot_regs.g4 = g4;
    goto L_08952584;
}
L_08952584:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_08952594;
      }
      goto L_0895258C;
    }
L_0895258C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
    goto L_08952594;
L_08952594:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089525A4;
      }
      goto L_0895259C;
    }
L_0895259C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_08952608;
      }
      goto L_089525A4;
    }
L_089525A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089525DC;
      }
      goto L_089525C4;
    }
}
L_089525C4:
    hot_regs.g31 = (0x089525CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 283u, 0x08A417DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089525CCu) goto L_089525CC;
    return;
L_089525CC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089525DC;
      }
      goto L_089525D4;
    }
L_089525D4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_08952608;
      }
      goto L_089525DC;
    }
L_089525DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3256))))));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3256))))));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089525FC;
      }
      goto L_089525F4;
    }
}
L_089525F4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
      if (branch_taken) {
          goto L_08952608;
      }
      goto L_089525FC;
    }
L_089525FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952584;
      }
      goto L_08952604;
    }
L_08952604:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_08952608;
L_08952608:
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08952624u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952624u) goto L_08952624;
    return;
L_08952624:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    if (hot_regs.g4 == 0u) {
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_08952674;
    }
    goto L_08952630;
L_08952630:
    hot_regs.g31 = (0x08952638u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 412u, 0x0898D22Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952638u) goto L_08952638;
    return;
L_08952638:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g4 = (g17 << 5u);
    hot_regs.g5 = (g17 << 2u);
    g4 = (g4 - hot_regs.g5);
    g4 = (ctx.gpr[16] + g4);
    { const bool branch_taken = hot_regs.g2 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08952664;
      }
      goto L_08952654;
    }
}
L_08952654:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 35u);
    if (hot_regs.g5 == hot_regs.g6) {
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_08952674;
    }
    goto L_08952664;
L_08952664:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
      if (branch_taken) {
          goto L_089526A4;
      }
      goto L_08952670;
    }
L_08952670:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_08952674;
L_08952674:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (0u | 36u);
    g4 = (ctx.gpr[17] << 5u);
    g5 = (ctx.gpr[17] << 2u);
    g4 = (g4 - g5);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 != hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952914;
      }
      goto L_08952698;
    }
}
L_08952698:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
      if (branch_taken) {
          goto L_08952914;
      }
      goto L_089526A4;
    }
L_089526A4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(1976))))));
    g6 = (0u | 34u);
    { const bool branch_taken = g5 == g6;
    g6 = (0u | 7u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089526E4;
      }
      goto L_089526BC;
    }
}
L_089526BC:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    hot_regs.g6 = (0u | 8u);
      if (branch_taken) {
          goto L_089526E4;
      }
      goto L_089526C4;
    }
L_089526C4:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089526E4;
      }
      goto L_089526CC;
    }
L_089526CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 36u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089526EC;
      }
      goto L_089526DC;
    }
}
L_089526DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952880;
      }
      goto L_089526E4;
    }
L_089526E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895297C;
      }
      goto L_089526EC;
    }
L_089526EC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x089526F8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089526F8u) goto L_089526F8;
    return;
L_089526F8:
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (hot_regs.g7 | 0u);
      if (branch_taken) {
          goto L_08952844;
      }
      goto L_0895270C;
    }
L_0895270C:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g7 << 5u);
    ctx.gpr[9] = (0u + g8);
    g8 = (g8 << 6u);
    ctx.gpr[3] = (0u | 80u);
    ctx.gpr[12] = (0u | 2u);
    ctx.gpr[13] = (0u + static_cast<std::uint32_t>(-8));
    g8 = (ctx.gpr[9] + g8);
    ctx.gpr[8] = g8;
    goto L_08952728;
}
L_08952728:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g7) < 0;
    // nop
      if (branch_taken) {
          goto L_08952740;
      }
      goto L_08952730;
    }
L_08952730:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g9 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    if (g9 != 0u) {
    g9 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = g9;
        goto L_08952748;
    }
    goto L_08952740;
}
L_08952740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08952768;
      }
      goto L_08952748;
    }
L_08952748:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + hot_regs.g7);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 & 128u);
    if (g9 == 0u) {
    g9 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = g9;
        goto L_08952764;
    }
    goto L_0895275C;
}
L_0895275C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08952768;
      }
      goto L_08952764;
    }
L_08952764:
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    goto L_08952768;
L_08952768:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08952830;
      }
      goto L_08952774;
    }
L_08952774:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g10 != 0u;
    // nop
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08952830;
      }
      goto L_08952780;
    }
}
L_08952780:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(1656)));
    { const bool branch_taken = ctx.gpr[10] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08952830;
      }
      goto L_0895278C;
    }
L_0895278C:
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g10 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g11 = (g10 << 5u);
    g10 = (g10 << 2u);
    g10 = (g11 - g10);
    g10 = (ctx.gpr[16] + g10);
    g10 = (g10 + static_cast<std::uint32_t>(1396));
    g11 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(16)));
    hot_regs.g6 = (0u | 1u);
    g11 = (g11 + static_cast<std::uint32_t>(1));
    hot_regs.g2 = (hot_regs.g6 | 0u);
    ctx.gpr[14] = (static_cast<std::int32_t>(g11) < 1 ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    hot_regs.g2 = (g11 | 0u);
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
        goto L_089527C0;
    }
    goto L_089527C0;
}
L_089527C0:
{
    std::uint32_t g10 = ctx.gpr[10];
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(16), hot_regs.g2);
    g10 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(668)));
    { const bool branch_taken = g10 != hot_regs.g5;
    // nop
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08952830;
      }
      goto L_089527D0;
    }
}
L_089527D0:
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(666)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) > 0;
    // nop
      if (branch_taken) {
          goto L_08952830;
      }
      goto L_089527DC;
    }
L_089527DC:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(615))))));
    g10 = (g10 & 64u);
    { const bool branch_taken = g10 == 0u;
    // nop
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08952830;
      }
      goto L_089527EC;
    }
}
L_089527EC:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(72)));
    g10 = (g10 & 496u);
    { const bool branch_taken = g10 != ctx.gpr[3];
    // nop
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08952830;
      }
      goto L_089527FC;
    }
}
L_089527FC:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g16 = ctx.gpr[16];
    g10 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[11] = (g10 << 5u);
    g10 = (g10 << 2u);
    g10 = (ctx.gpr[11] - g10);
    g10 = (g16 + g10);
    g10 = (g10 + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(g10 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(ctx.gpr[12]));
    g10 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(1653))))));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(668), 0u);
    g10 = (g10 & ctx.gpr[13]);
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g10));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(1656), 0u);
    ctx.gpr[10] = g10;
    goto L_08952830;
}
L_08952830:
{
    std::uint32_t g7 = hot_regs.g7;
    ctx.gpr[9] = (g7 | 0u);
    g7 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (g7 | 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2080));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08952728;
      }
      goto L_08952844;
    }
}
L_08952844:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08952878;
      }
      goto L_0895284C;
    }
L_0895284C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952878;
      }
      goto L_08952870;
    }
}
L_08952870:
    hot_regs.g4 = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08952878;
L_08952878:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
      if (branch_taken) {
          goto L_0895288C;
      }
      goto L_08952880;
    }
L_08952880:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
    hot_regs.g4 = g4;
    goto L_0895288C;
}
L_0895288C:
    hot_regs.g6 = (0u | 6u);
    hot_regs.g7 = (0u | 17u);
    ctx.gpr[8] = (0u | 16u);
    ctx.gpr[9] = (0u | 12u);
    goto L_0895289C;
L_0895289C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_089528AC;
      }
      goto L_089528A4;
    }
L_089528A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08952914;
      }
      goto L_089528AC;
    }
L_089528AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 5u);
    ctx.gpr[10] = (g4 << 2u);
    g5 = (g5 - ctx.gpr[10]);
    g5 = (ctx.gpr[16] + g5);
    { const bool branch_taken = g4 != hot_regs.g6;
    g5 = (g5 + static_cast<std::uint32_t>(1396));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089528D8;
      }
      goto L_089528C4;
    }
}
L_089528C4:
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089528D8;
      }
      goto L_089528D0;
    }
L_089528D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952914;
      }
      goto L_089528D8;
    }
L_089528D8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(g5) <= 0;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952904;
      }
      goto L_089528E4;
    }
}
L_089528E4:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08952904;
      }
      goto L_089528EC;
    }
L_089528EC:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08952904;
      }
      goto L_089528F4;
    }
L_089528F4:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08952904;
      }
      goto L_089528FC;
    }
L_089528FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952914;
      }
      goto L_08952904;
    }
L_08952904:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895289C;
      }
      goto L_08952914;
    }
}
L_08952914:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895297C;
      }
      goto L_08952920;
    }
L_08952920:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0895297C;
      }
      goto L_08952930;
    }
L_08952930:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    g6 = (0u | 16u);
    { const bool branch_taken = hot_regs.g5 == g6;
    g6 = (0u | 22u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0895297C;
      }
      goto L_08952940;
    }
}
L_08952940:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    hot_regs.g6 = (0u | 17u);
      if (branch_taken) {
          goto L_0895297C;
      }
      goto L_08952948;
    }
L_08952948:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_0895297C;
      }
      goto L_08952950;
    }
L_08952950:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24896)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895297C;
      }
      goto L_0895295C;
    }
L_0895295C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (50298u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08952970u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952970u) goto L_08952970;
    return;
L_08952970:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3256))))));
    hot_regs.g31 = (0x0895297Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 610u, 0x08947198u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895297Cu) goto L_0895297C;
    return;
L_0895297C:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08952994:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089529D4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089529D4u) goto L_089529D4;
    return;
L_089529D4:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x089529E0u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089529E0u) goto L_089529E0;
    return;
L_089529E0:
    hot_regs.g31 = (0x089529E8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089529E8u) goto L_089529E8;
    return;
L_089529E8:
    hot_regs.g4 = (0u - hot_regs.g2);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x089529FCu);
    hot_regs.f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089529FCu) goto L_089529FC;
    return;
L_089529FC:
    hot_regs.g31 = (0x08952A04u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 134u, 0x0898C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952A04u) goto L_08952A04;
    return;
L_08952A04:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08952A18u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952A18u) goto L_08952A18;
    return;
L_08952A18:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[17] = (0u | 32u);
      if (branch_taken) {
          goto L_08952AB8;
      }
      goto L_08952A2C;
    }
L_08952A2C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3262))))));
    g5 = (g5 & 8u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952AB8;
      }
      goto L_08952A3C;
    }
}
L_08952A3C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952AB8;
      }
      goto L_08952A50;
    }
}
L_08952A50:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (g6 - g5);
    g5 = (ctx.gpr[16] + g5);
    g5 = (g5 + static_cast<std::uint32_t>(1396));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08952AB8;
      }
      goto L_08952A74;
    }
}
L_08952A74:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 11u);
    { const bool branch_taken = g5 == hot_regs.g6;
    g5 = (48991u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952AB8;
      }
      goto L_08952A84;
    }
}
L_08952A84:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 26355u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g5 = (16223u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952AB4;
      }
      goto L_08952A9C;
    }
}
L_08952A9C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 26355u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952AB8;
      }
      goto L_08952AB4;
    }
}
L_08952AB4:
    hot_regs.g4 = (0u | 1u);
    goto L_08952AB8;
L_08952AB8:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_08952AFC;
    }
    goto L_08952AC0;
L_08952AC0:
    hot_regs.g31 = (0x08952AC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 668u, 0x08906FA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952AC8u) goto L_08952AC8;
    return;
L_08952AC8:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
        goto L_08952AFC;
    }
    goto L_08952AD0;
L_08952AD0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    hot_regs.g31 = (0x08952AF0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 268u, 0x08A41764u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952AF0u) goto L_08952AF0;
    return;
L_08952AF0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08952CA4;
      }
      goto L_08952AF8;
    }
L_08952AF8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    goto L_08952AFC;
L_08952AFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g5 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952B40;
      }
      goto L_08952B1C;
    }
}
L_08952B1C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    hot_regs.g4 = (0u | 31u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952B2C;
    }
L_08952B2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), hot_regs.g4);
    hot_regs.g31 = (0x08952B38u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 577u, 0x08946F38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952B38u) goto L_08952B38;
    return;
L_08952B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952B40;
    }
L_08952B40:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 19u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952B50;
    }
L_08952B50:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 20u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952B60;
    }
L_08952B60:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 24u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952B70;
    }
L_08952B70:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 25u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952B80;
    }
L_08952B80:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 26u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952B90;
    }
L_08952B90:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 27u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952BA0;
    }
L_08952BA0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 3u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952BB0;
    }
L_08952BB0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 10u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952BC0;
    }
L_08952BC0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 6u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952BE0;
      }
      goto L_08952BD0;
    }
L_08952BD0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 9u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952C00;
      }
      goto L_08952BE0;
    }
L_08952BE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952BEC;
    }
L_08952BEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), ctx.gpr[17]);
    hot_regs.g31 = (0x08952BF8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 577u, 0x08946F38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952BF8u) goto L_08952BF8;
    return;
L_08952BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952C00;
    }
L_08952C00:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 11u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952C30;
      }
      goto L_08952C10;
    }
L_08952C10:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 33u);
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08952C30;
      }
      goto L_08952C20;
    }
L_08952C20:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 35u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08952C54;
      }
      goto L_08952C30;
    }
L_08952C30:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
    hot_regs.g4 = (0u | 36u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952C40;
    }
L_08952C40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), hot_regs.g4);
    hot_regs.g31 = (0x08952C4Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 577u, 0x08946F38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952C4Cu) goto L_08952C4C;
    return;
L_08952C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952C54;
    }
L_08952C54:
    hot_regs.g31 = (0x08952C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 161u, 0x08A40D58u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952C5Cu) goto L_08952C5C;
    return;
L_08952C5C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(776)));
      if (branch_taken) {
          goto L_08952C80;
      }
      goto L_08952C64;
    }
L_08952C64:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952C6C;
    }
L_08952C6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), ctx.gpr[17]);
    hot_regs.g31 = (0x08952C78u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 577u, 0x08946F38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952C78u) goto L_08952C78;
    return;
L_08952C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952C80;
    }
L_08952C80:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (g4 | 0u);
    g4 = (0u | 30u);
    { const bool branch_taken = hot_regs.g5 == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952C90;
    }
}
L_08952C90:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), hot_regs.g4);
    hot_regs.g31 = (0x08952C9Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 577u, 0x08946F38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952C9Cu) goto L_08952C9C;
    return;
L_08952C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952CA4;
    }
L_08952CA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1929))))));
    hot_regs.f20 = hot_regs.f20 + hot_regs.f22;
    g5 = (49169u << 16u);
    hot_regs.g6 = (g4 << 5u);
    g4 = (g4 << 2u);
    g5 = (g5 | 13854u);
    g4 = (hot_regs.g6 - g4);
    hot_regs.f12 = std::bit_cast<float>(g5);
    g4 = (g16 + g4);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = ctx.fpu_condition();
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(776)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08952CF4;
      }
      goto L_08952CD8;
    }
}
L_08952CD8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (16401u << 16u);
    g6 = (g6 | 13854u);
    hot_regs.f12 = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08952D40;
      }
      goto L_08952CF4;
    }
}
L_08952CF4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (16457u << 16u);
    g6 = (g6 | 4059u);
    f12 = std::bit_cast<float>(g6);
    f12 = hot_regs.f20 + f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08952D20;
      }
      goto L_08952D18;
    }
}
}
L_08952D18:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 56u);
      if (branch_taken) {
          goto L_08952D24;
      }
      goto L_08952D20;
    }
L_08952D20:
    hot_regs.g4 = (0u | 53u);
    goto L_08952D24;
L_08952D24:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952D2C;
    }
L_08952D2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), hot_regs.g4);
    hot_regs.g31 = (0x08952D38u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 577u, 0x08946F38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952D38u) goto L_08952D38;
    return;
L_08952D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952D40;
    }
L_08952D40:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g6 = hot_regs.g6;
    f12 = std::bit_cast<float>(0u);
    g6 = (16329u << 16u);
    g6 = (g6 | 4059u);
    ctx.set_fpu_condition((hot_regs.f22 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    f12 = std::bit_cast<float>(g6);
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08952D9C;
      }
      goto L_08952D5C;
    }
}
}
L_08952D5C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f20 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08952D7C;
      }
      goto L_08952D74;
    }
}
}
L_08952D74:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 57u);
      if (branch_taken) {
          goto L_08952D80;
      }
      goto L_08952D7C;
    }
L_08952D7C:
    hot_regs.g4 = (0u | 54u);
    goto L_08952D80;
L_08952D80:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952D88;
    }
L_08952D88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), hot_regs.g4);
    hot_regs.g31 = (0x08952D94u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 577u, 0x08946F38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952D94u) goto L_08952D94;
    return;
L_08952D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952D9C;
    }
L_08952D9C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f20 + f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08952DBC;
      }
      goto L_08952DB4;
    }
}
}
L_08952DB4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 58u);
      if (branch_taken) {
          goto L_08952DC0;
      }
      goto L_08952DBC;
    }
L_08952DBC:
    hot_regs.g4 = (0u | 55u);
    goto L_08952DC0;
L_08952DC0:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08952DD4;
      }
      goto L_08952DC8;
    }
L_08952DC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(776), hot_regs.g4);
    hot_regs.g31 = (0x08952DD4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 577u, 0x08946F38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952DD4u) goto L_08952DD4;
    return;
L_08952DD4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
L_08952DF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(76)));
    g6 = (16320u << 16u);
    g5 = (g5 & g6);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g5 = (g5 >> 22u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    g5 = (g6 + g5);
    g16 = (g4 + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (g4 | 0u);
    g5 = (g5 + static_cast<std::uint32_t>(7));
    g4 = (16384u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[20]);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g5 = (g5 & 3u);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g16);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08952F74;
      }
      goto L_08952E60;
    }
}
L_08952E60:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(3328))))));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (hot_regs.g5 << 24u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 24u));
    hot_regs.g31 = (0x08952E7Cu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 320u, 0x0894965Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952E7Cu) goto L_08952E7C;
    return;
L_08952E7C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08952EA8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952EA8u) goto L_08952EA8;
    return;
L_08952EA8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08952F08;
      }
      goto L_08952EB0;
    }
L_08952EB0:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (16076u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(3328))))));
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(6288)));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08952F00u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08952F00u) goto L_08952F00;
    return;
L_08952F00:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08952F20;
      }
      goto L_08952F08;
    }
L_08952F08:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(3328))))));
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(3292)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6288), g17);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952F50;
      }
      goto L_08952F20;
    }
}
L_08952F20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(3328))))));
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(3292)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    { const bool branch_taken = g4 != g17;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952F50;
      }
      goto L_08952F3C;
    }
}
L_08952F3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(3328))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6288), 0u);
    hot_regs.g4 = g4;
    goto L_08952F50;
}
L_08952F50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(3328))))));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (g4 << 16u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(3328), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    g4 = (static_cast<std::int32_t>(g4) < 6 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952F74;
      }
      goto L_08952F70;
    }
}
L_08952F70:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(3328), static_cast<std::uint16_t>(0u));
    goto L_08952F74;
L_08952F74:
    hot_regs.g4 = (16708u << 16u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[30] = (0u | 58u);
    ctx.gpr[23] = (0u | 8u);
    ctx.gpr[22] = (0u | 9u);
    ctx.gpr[21] = (0u | 50u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    goto L_08952F94;
L_08952F94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[16] = (ctx.gpr[18] << 2u);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089530B4;
      }
      goto L_08952FAC;
    }
}
L_08952FAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    { const bool branch_taken = g4 == ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089530B4;
      }
      goto L_08952FC0;
    }
}
L_08952FC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == ctx.gpr[30];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08952FF4;
      }
      goto L_08952FDC;
    }
}
L_08952FDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = g4 == ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08953004;
      }
      goto L_08952FF4;
    }
}
L_08952FF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6288), 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089530B4;
      }
      goto L_08953004;
    }
}
L_08953004:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = g4 == ctx.gpr[23];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895305C;
      }
      goto L_0895301C;
    }
}
L_0895301C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = g4 == ctx.gpr[22];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895305C;
      }
      goto L_08953034;
    }
}
L_08953034:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = g4 == ctx.gpr[21];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895305C;
      }
      goto L_0895304C;
    }
}
L_0895304C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6288), 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089530B4;
      }
      goto L_0895305C;
    }
}
L_0895305C:
    hot_regs.g6 = (ctx.gpr[18] << 24u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 24u));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08953074u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 320u, 0x0894965Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953074u) goto L_08953074;
    return;
L_08953074:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089530B4;
      }
      goto L_089530A8;
    }
L_089530A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (g4 + ctx.gpr[16]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6288), 0u);
    hot_regs.g4 = g4;
    goto L_089530B4;
}
L_089530B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(1));
    g18 = (g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g4 = (static_cast<std::int32_t>(g18) < 6 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08952F94;
      }
      goto L_089530CC;
    }
}
L_089530CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6288)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895313C;
      }
      goto L_089530DC;
    }
}
L_089530DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6292)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895313C;
      }
      goto L_089530EC;
    }
}
L_089530EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6296)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895313C;
      }
      goto L_089530FC;
    }
}
L_089530FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6296)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895313C;
      }
      goto L_0895310C;
    }
}
L_0895310C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6304)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895313C;
      }
      goto L_0895311C;
    }
}
L_0895311C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3292)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(6308)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895313C;
      }
      goto L_0895312C;
    }
}
L_0895312C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3261))))));
    g4 = (g4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895314C;
      }
      goto L_0895313C;
    }
}
L_0895313C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3261))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_0895314C;
}
L_0895314C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08953184:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-176));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1037)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089531E0;
      }
      goto L_089531C4;
    }
}
L_089531C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[22] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089531E8;
      }
      goto L_089531D8;
    }
}
L_089531D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953474;
      }
      goto L_089531E0;
    }
L_089531E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953474;
      }
      goto L_089531E8;
    }
L_089531E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g4);
    g4 = (16656u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[30] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    g4 = (16840u << 16u);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(16));
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    goto L_0895320C;
}
L_0895320C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_08953218;
    }
L_08953218:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1756)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_0895322C;
    }
}
L_0895322C:
    hot_regs.g31 = (0x08953234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953234u) goto L_08953234;
    return;
L_08953234:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_0895323C;
    }
L_0895323C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x08953248u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 293u, 0x089C914Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953248u) goto L_08953248;
    return;
L_08953248:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953390;
      }
      goto L_08953250;
    }
L_08953250:
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089532E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089532E0u) goto L_089532E0;
    return;
L_089532E0:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17844)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17848)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089532F4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089532F4u) goto L_089532F4;
    return;
L_089532F4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    // nop
      if (branch_taken) {
          goto L_08953388;
      }
      goto L_089532FC;
    }
L_089532FC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08953318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953318u) goto L_08953318;
    return;
L_08953318:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17836)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17840)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x0895332Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895332Cu) goto L_0895332C;
    return;
L_0895332C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) >= 0;
    // nop
      if (branch_taken) {
          goto L_08953388;
      }
      goto L_08953334;
    }
L_08953334:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08953388;
      }
      goto L_08953354;
    }
L_08953354:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08953388;
      }
      goto L_08953360;
    }
L_08953360:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 51u);
    hot_regs.g31 = (0x08953370u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953370u) goto L_08953370;
    return;
L_08953370:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1756), hot_regs.g5);
    hot_regs.g31 = (0x08953388u);
    hot_regs.g5 = (0u | 147u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953388u) goto L_08953388;
    return;
L_08953388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_08953390;
    }
L_08953390:
    hot_regs.g31 = (0x08953398u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 294u, 0x089C9154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953398u) goto L_08953398;
    return;
L_08953398:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_089533A0;
    }
L_089533A0:
    hot_regs.g31 = (0x089533A8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089533A8u) goto L_089533A8;
    return;
L_089533A8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_089533B0;
    }
L_089533B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_089533BC;
    }
L_089533BC:
    hot_regs.g31 = (0x089533C4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 439u, 0x08B01AA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089533C4u) goto L_089533C4;
    return;
L_089533C4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_089533CC;
    }
L_089533CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_089533DC;
    }
}
L_089533DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_08953418;
    }
L_08953418:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(352));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    jump_target = ctx.gpr[8];
    hot_regs.g31 = (0x0895343Cu);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895343Cu) goto L_0895343C;
    return;
L_0895343C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_08953444;
    }
L_08953444:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08953460;
      }
      goto L_08953450;
    }
L_08953450:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08953460u);
    hot_regs.g5 = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953460u) goto L_08953460;
    return;
L_08953460:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    g22 = (g22 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g22) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_0895320C;
      }
      goto L_08953474;
    }
}
L_08953474:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
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
L_089534AC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089534C0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_089534D4;
}
L_089534C0:
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
L_089534D4:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089534E4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 << 8u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g31 = (0x08953528u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953528u) goto L_08953528;
    return;
L_08953528:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08953548u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 445u, 0x08A8E3D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953548u) goto L_08953548;
    return;
L_08953548:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08953560u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 445u, 0x08A8E3D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953560u) goto L_08953560;
    return;
L_08953560:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08953570;
      }
      goto L_0895356C;
    }
L_0895356C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08953570;
L_08953570:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895357C;
      }
      goto L_08953578;
    }
L_08953578:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0895357C;
L_0895357C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08953598;
      }
      goto L_08953588;
    }
L_08953588:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = (0u | 250u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089535F4;
      }
      goto L_08953598;
    }
L_08953598:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089535C0;
      }
      goto L_089535A4;
    }
L_089535A4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089535C0;
      }
      goto L_089535B0;
    }
L_089535B0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), g4);
    g4 = (0u | 250u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089535F4;
      }
      goto L_089535C0;
    }
}
L_089535C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] | g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089535DC;
      }
      goto L_089535CC;
    }
}
L_089535CC:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_089535F4;
      }
      goto L_089535DC;
    }
}
L_089535DC:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089535F4;
      }
      goto L_089535E8;
    }
L_089535E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_089535F4;
}
L_089535F4:
    hot_regs.g31 = (0x089535FCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08953614;
L_089535FC:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08953614:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g17 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895363C;
      }
      goto L_08953630;
    }
}
L_08953630:
    hot_regs.g31 = (0x08953638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953638u) goto L_08953638;
    return;
L_08953638:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0895363C;
L_0895363C:
    hot_regs.g31 = (0x08953644u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 582u, 0x089BABBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953644u) goto L_08953644;
    return;
L_08953644:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953694;
      }
      goto L_0895364C;
    }
L_0895364C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (ctx.gpr[17] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08953668;
    }
    goto L_08953658;
L_08953658:
    hot_regs.g31 = (0x08953660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953660u) goto L_08953660;
    return;
L_08953660:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08953668;
L_08953668:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08953678;
      }
      goto L_08953670;
    }
L_08953670:
    hot_regs.g31 = (0x08953678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953678u) goto L_08953678;
    return;
L_08953678:
    hot_regs.g31 = (0x08953680u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 582u, 0x089BABBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953680u) goto L_08953680;
    return;
L_08953680:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0895368Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 685u, 0x089BB278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895368Cu) goto L_0895368C;
    return;
L_0895368C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089536EC;
      }
      goto L_08953694;
    }
L_08953694:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089536B0;
      }
      goto L_089536A0;
    }
L_089536A0:
    hot_regs.g31 = (0x089536A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 292u, 0x08A8D904u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089536A8u) goto L_089536A8;
    return;
L_089536A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089536C8;
      }
      goto L_089536B0;
    }
L_089536B0:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g16 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089536C8;
      }
      goto L_089536BC;
    }
}
L_089536BC:
    hot_regs.g31 = (0x089536C4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 292u, 0x08A8D904u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089536C4u) goto L_089536C4;
    return;
L_089536C4:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    goto L_089536C8;
L_089536C8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = g17 != 0u;
    hot_regs.g4 = (g17 | 0u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089536E4;
      }
      goto L_089536D4;
    }
}
L_089536D4:
    hot_regs.g31 = (0x089536DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089536DCu) goto L_089536DC;
    return;
L_089536DC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089536E4;
L_089536E4:
    hot_regs.g31 = (0x089536ECu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 685u, 0x089BB278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089536ECu) goto L_089536EC;
    return;
L_089536EC:
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
L_08953700:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08953714u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_08953728;
}
L_08953714:
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
L_08953728:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08953730:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g5 << 8u);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08953770u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953770u) goto L_08953770;
    return;
L_08953770:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953788;
      }
      goto L_08953778;
    }
L_08953778:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895378C;
      }
      goto L_08953788;
    }
}
L_08953788:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0895378C;
L_0895378C:
    hot_regs.g31 = (0x08953794u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089537A8;
L_08953794:
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
L_089537A8:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g16 == 0u;
    // nop
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08953860;
      }
      goto L_089537C8;
    }
}
L_089537C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08953860;
      }
      goto L_089537D4;
    }
L_089537D4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[16] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089537FC;
      }
      goto L_089537EC;
    }
}
L_089537EC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089537FC;
}
L_089537FC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(344));
      if (branch_taken) {
          goto L_0895382C;
      }
      goto L_08953804;
    }
L_08953804:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08953810u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953810u) goto L_08953810;
    return;
L_08953810:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08953828;
      }
      goto L_0895381C;
    }
L_0895381C:
    hot_regs.g31 = (0x08953824u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953824u) goto L_08953824;
    return;
L_08953824:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08953828;
L_08953828:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_0895382C;
L_0895382C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08953838u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953838u) goto L_08953838;
    return;
L_08953838:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08953850;
      }
      goto L_08953844;
    }
L_08953844:
    hot_regs.g31 = (0x0895384Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895384Cu) goto L_0895384C;
    return;
L_0895384C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08953850;
L_08953850:
    hot_regs.g31 = (0x08953858u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 682u, 0x089BB260u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953858u) goto L_08953858;
    return;
L_08953858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08953880;
      }
      goto L_08953860;
    }
L_08953860:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08953878;
      }
      goto L_0895386C;
    }
L_0895386C:
    hot_regs.g31 = (0x08953874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953874u) goto L_08953874;
    return;
L_08953874:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08953878;
L_08953878:
    hot_regs.g31 = (0x08953880u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 682u, 0x089BB260u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953880u) goto L_08953880;
    return;
L_08953880:
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
L_08953898:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089538A8u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8952));
    hot_regs.g29 = g29;
    goto L_089534D4;
}
L_089538A8:
    hot_regs.g4 = (2240u << 16u);
    hot_regs.g31 = (0x089538B4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 881u, 0x08AA3900u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089538B4u) goto L_089538B4;
    return;
L_089538B4:
    hot_regs.g4 = (2247u << 16u);
    hot_regs.g31 = (0x089538C0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8968));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 596u, 0x0893A860u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089538C0u) goto L_089538C0;
    return;
L_089538C0:
    hot_regs.g31 = (0x089538C8u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8964));
    goto L_08953728;
L_089538C8:
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
L_089538D4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089538E4u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8952));
    hot_regs.g29 = g29;
    goto L_089534E4;
}
L_089538E4:
    hot_regs.g4 = (2240u << 16u);
    hot_regs.g31 = (0x089538F0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-25888));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 909u, 0x08AA3B90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089538F0u) goto L_089538F0;
    return;
L_089538F0:
    hot_regs.g4 = (2247u << 16u);
    hot_regs.g31 = (0x089538FCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8968));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 599u, 0x0893A8A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089538FCu) goto L_089538FC;
    return;
L_089538FC:
    hot_regs.g31 = (0x08953904u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8964));
    goto L_08953730;
L_08953904:
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
L_08953910:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08953920u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8952));
    hot_regs.g29 = g29;
    goto L_089534AC;
}
L_08953920:
    hot_regs.g31 = (0x08953928u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8964));
    goto L_08953700;
L_08953928:
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
L_08953934:
{
    std::uint32_t g5 = hot_regs.g5;
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
L_08953954:
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
L_0895397C:
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
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
L_08953990:
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
          goto L_089539B0;
      }
      goto L_089539A8;
    }
}
L_089539A8:
    hot_regs.g31 = (0x089539B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089539B0u) goto L_089539B0;
    return;
L_089539B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g31 = (0x089539BCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 435u, 0x089563C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089539BCu) goto L_089539BC;
    return;
L_089539BC:
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
L_089539CC:
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
          goto L_089539EC;
      }
      goto L_089539E4;
    }
}
L_089539E4:
    hot_regs.g31 = (0x089539ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089539ECu) goto L_089539EC;
    return;
L_089539EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g31 = (0x089539F8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 435u, 0x089563C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089539F8u) goto L_089539F8;
    return;
L_089539F8:
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
L_08953A08:
{
    float f14 = hot_regs.f14;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g5 = (g5 + static_cast<std::uint32_t>(48));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g5 = (16768u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    f14 = f14 + hot_regs.f15;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g5 = (0u + static_cast<std::uint32_t>(-32));
    g4 = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f24));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    f24 = std::bit_cast<float>(g4);
    { const bool branch_taken = hot_regs.g6 != 0u;
    f24 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f24)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    hot_regs.f14 = f14;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08953A70;
      }
      goto L_08953A68;
    }
}
}
L_08953A68:
    hot_regs.g31 = (0x08953A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953A70u) goto L_08953A70;
    return;
L_08953A70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g4 = (g4 ^ 2u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08953A90;
      }
      goto L_08953A8C;
    }
}
L_08953A8C:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    goto L_08953A90;
L_08953A90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    hot_regs.g5 = (0u | 3u);
    if (hot_regs.g4 != hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
        goto L_08953AAC;
    }
    goto L_08953AA0;
L_08953AA0:
    hot_regs.g4 = (50022u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    goto L_08953AAC;
L_08953AAC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16128u << 16u);
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = hot_regs.f22 + f13;
    g5 = (17112u << 16u);
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & 1u);
    f12 = hot_regs.f20 + f13;
    f15 = std::bit_cast<float>(g4);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g4 = (17146u << 16u);
    g5 = (g5 | 32768u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    ctx.fpr[18] = std::bit_cast<float>(g5);
    g4 = (50454u << 16u);
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(g4);
    g4 = (50426u << 16u);
    f13 = hot_regs.f14 - f13;
    f15 = std::bit_cast<float>(g4);
    f12 = f12 + f15;
    { const float fs = f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f13 = f13 + ctx.fpr[17];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08953B30:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(1), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(5), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(9), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(17), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(21), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(25), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(33), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(37), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(41), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(49), ctx.gpr[25]));
    hot_regs.g2 = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(53), hot_regs.g2));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(57), ctx.gpr[3]));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[9] = ((ctx.gpr[9] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[11] = ((ctx.gpr[11] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[24] = ((ctx.gpr[24] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[25] = ((ctx.gpr[25] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    hot_regs.g2 = ((hot_regs.g2 & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[3] = ((ctx.gpr[3] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(40), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08953BD4:
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
          goto L_08953C34;
      }
      goto L_08953C28;
    }
}
L_08953C28:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g7);
      if (branch_taken) {
          goto L_08953C40;
      }
      goto L_08953C34;
    }
L_08953C34:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + g7);
    hot_regs.g7 = g7;
    goto L_08953C40;
}
L_08953C40:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08953C9C;
      }
      goto L_08953C48;
    }
L_08953C48:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x08953C60u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953C60u) goto L_08953C60;
    return;
L_08953C60:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08953C9C;
      }
      goto L_08953C78;
    }
}
L_08953C78:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x08953C8Cu);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953C8Cu) goto L_08953C8C;
    return;
L_08953C8C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    goto L_08953C9C;
}
L_08953C9C:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08953CE4;
      }
      goto L_08953CAC;
    }
L_08953CAC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
        goto L_08953CDC;
    }
    goto L_08953CB8;
L_08953CB8:
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
        goto L_08953CDC;
    }
    goto L_08953CCC;
}
L_08953CCC:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    g9 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g9);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = g9;
    goto L_08953CDC;
}
L_08953CDC:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08953CAC;
      }
      goto L_08953CE4;
    }
L_08953CE4:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08953D2C;
      }
      goto L_08953CF4;
    }
L_08953CF4:
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953D20;
      }
      goto L_08953D00;
    }
L_08953D00:
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
          goto L_08953D20;
      }
      goto L_08953D14;
    }
}
L_08953D14:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), g6);
    hot_regs.g6 = g6;
    goto L_08953D20;
}
L_08953D20:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08953D70;
      }
      goto L_08953D2C;
    }
L_08953D2C:
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08953D6C;
      }
      goto L_08953D34;
    }
L_08953D34:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
        goto L_08953D64;
    }
    goto L_08953D40;
L_08953D40:
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
        goto L_08953D64;
    }
    goto L_08953D54;
}
L_08953D54:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    g9 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g9);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = g9;
    goto L_08953D64;
}
L_08953D64:
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08953D34;
      }
      goto L_08953D6C;
    }
L_08953D6C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08953D70;
L_08953D70:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08953DC4;
      }
      goto L_08953D78;
    }
L_08953D78:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08953DC4;
      }
      goto L_08953D88;
    }
}
L_08953D88:
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
        goto L_08953DB8;
    }
    goto L_08953D94;
L_08953D94:
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
        goto L_08953DB8;
    }
    goto L_08953DA8;
}
L_08953DA8:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g7);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
    goto L_08953DB8;
}
L_08953DB8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08953D88;
      }
      goto L_08953DC0;
    }
L_08953DC0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08953DC4;
L_08953DC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08953E18;
      }
      goto L_08953DD4;
    }
L_08953DD4:
{
    std::uint32_t g21 = ctx.gpr[21];
    if (g21 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08953E0C;
    }
    goto L_08953DDC;
}
L_08953DDC:
{
    std::uint32_t g21 = ctx.gpr[21];
    if (g21 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08953E0C;
    }
    goto L_08953DE4;
}
L_08953DE4:
{
    std::uint32_t g21 = ctx.gpr[21];
    hot_regs.g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g4 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08953E0C;
    }
    goto L_08953DF0;
}
L_08953DF0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08953E08;
      }
      goto L_08953E00;
    }
}
L_08953E00:
    hot_regs.g31 = (0x08953E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953E08u) goto L_08953E08;
    return;
L_08953E08:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08953E0C;
L_08953E0C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08953DD4;
      }
      goto L_08953E14;
    }
L_08953E14:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08953E18;
L_08953E18:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08953E28;
      }
      goto L_08953E20;
    }
L_08953E20:
    hot_regs.g31 = (0x08953E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953E28u) goto L_08953E28;
    return;
L_08953E28:
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
L_08953E60:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08953F10;
      }
      goto L_08953E74;
    }
}
L_08953E74:
    hot_regs.g5 = (71u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12144));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), hot_regs.g5);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g5 = (71u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    hot_regs.g31 = (0x08953E98u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12144));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953E98u) goto L_08953E98;
    return;
L_08953E98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g5 = (59u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(24576));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), hot_regs.g2);
    g5 = (hot_regs.g2 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(536), g5);
    g4 = (2232u << 16u);
    g5 = (0u | 512u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08953ECCu);
    g4 = (g4 + static_cast<std::uint32_t>(-9040));
    ctx.pc = 0x08B734C4u;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    return;
}
L_08953ECC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17776));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(616), hot_regs.g2);
    g5 = (0u | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08953EECu);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B7341Cu;
    hot_regs.g5 = g5;
    return;
}
L_08953EEC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g5 = (2236u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(620), hot_regs.g2);
    g4 = (g5 + static_cast<std::uint32_t>(29232));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08953F10;
      }
      goto L_08953F08;
    }
}
L_08953F08:
    hot_regs.g31 = (0x08953F10u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953F10u) goto L_08953F10;
    return;
L_08953F10:
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
L_08953F1C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08953F34u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 468u, 0x08956594u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953F34u) goto L_08953F34;
    return;
L_08953F34:
    hot_regs.g31 = (0x08953F3Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 607u, 0x08956E7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953F3Cu) goto L_08953F3C;
    return;
L_08953F3C:
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(1040));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(1440));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g4;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08953F5C;
      }
      goto L_08953F4C;
    }
L_08953F4C:
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    goto L_08953F50;
L_08953F50:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    if (g6 != hot_regs.g4) {
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g6 = g6;
        goto L_08953F50;
    }
    goto L_08953F5C;
}
L_08953F5C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(580)));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(596)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(604), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1480), std::bit_cast<std::uint32_t>(f12));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08953F94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == g4;
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08953FD4;
      }
      goto L_08953FC4;
    }
}
L_08953FC4:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08953FD4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 753u, 0x089579B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08953FD4u) goto L_08953FD4;
    return;
L_08953FD4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g4 = (50426u << 16u);
    f13 = std::bit_cast<float>(g4);
    f12 = f12 - f13;
    g4 = (15383u << 16u);
    g4 = (g4 | 23157u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (50454u << 16u);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.pc = 0x08954000u; return;}
}

}

void recomp_unit_0083(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0083_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_83(Runtime &runtime) {
    runtime.register_generated_unit(83u, 0x08950000u, 16384u, &recomp_unit_0083, &recomp_unit_0083_entry);
    runtime.register_function(0x08950000u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895000Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950068u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089500FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950120u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089501FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950244u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089502F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950304u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950314u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950324u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950334u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950358u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895036Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950380u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089503C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950400u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950430u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950440u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895046Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089504FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950504u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895050Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950510u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950514u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895051Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895052Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895053Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950550u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950554u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950568u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950578u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895058Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950590u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089505F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950600u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950610u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950640u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089506E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950708u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950718u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950724u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895072Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950734u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950738u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895073Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950744u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950770u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950778u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950788u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089507F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950800u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895080Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950814u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950818u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950824u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950830u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950838u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950880u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089508FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950924u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950934u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950948u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950950u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950954u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950960u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895096Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950974u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895097Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950984u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895098Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895099Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089509F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950A98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950ABCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950ACCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950AF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950B9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950BF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C44u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950C9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950CFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950D88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950DF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950E94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950EF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950F78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08950FF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951000u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951014u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895102Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951030u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951050u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951078u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951094u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089510E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951110u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951118u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951120u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895112Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951134u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951154u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895117Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951184u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895118Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895119Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089511ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951204u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951214u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951220u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951228u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951230u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951240u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951250u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895125Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951260u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895126Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895127Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951288u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895128Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951298u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089512F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951300u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951308u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951314u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895131Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951324u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951330u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951360u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951378u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951380u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951388u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895139Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089513F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951400u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951404u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895140Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951414u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895141Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951424u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951464u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951484u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895148Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951494u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895149Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089514F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951504u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895150Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951514u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895151Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895155Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895157Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951584u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895158Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951598u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089515F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951600u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951608u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951610u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895161Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951624u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951630u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951638u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951654u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895165Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951664u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951674u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895168Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951690u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951698u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089516F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951720u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951728u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951740u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951758u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951780u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951788u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895179Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089517FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951804u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895180Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951818u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951854u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951874u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895187Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951884u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895188Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951894u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089518FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951904u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895190Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951918u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895192Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951938u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951960u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951980u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895198Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951998u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089519E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951A80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951AECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951B98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951BE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951C90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951CE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951D68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951DF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E58u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951E9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951ED0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951ED4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EE8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951EF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951F9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08951FF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952004u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952018u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089520E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895210Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952114u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952138u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952164u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952170u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895217Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895218Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895219Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089521F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952210u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895221Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895222Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895223Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895224Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952270u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952294u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089522FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952314u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952324u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895232Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952334u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952338u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952358u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895238Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089523FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952424u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952434u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895243Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952444u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895244Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952454u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895246Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952474u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895247Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952484u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895248Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952494u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895249Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524B8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089524F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952500u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952518u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952520u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952528u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952530u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952538u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952550u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952558u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952560u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952568u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952570u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952584u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895258Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952594u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895259Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089525FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952604u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952608u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952624u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952630u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952638u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952654u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952664u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952670u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952674u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952698u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089526F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895270Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952728u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952730u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952740u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952748u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895275Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952764u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952768u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952774u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952780u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895278Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089527FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952830u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952844u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895284Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952870u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952878u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952880u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895288Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895289Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528D0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089528FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952904u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952914u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952920u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952930u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952940u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952948u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952950u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895295Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952970u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895297Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952994u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089529FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A04u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A84u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952A9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952AFCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952B90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BD0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BE0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952BF8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952C9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CA4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CD8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952CF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D24u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D38u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D80u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952D9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DB4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DBCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DC8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952DF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952E7Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952EB0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952F94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08952FF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953004u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895301Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953034u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895304Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895305Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953074u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089530FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895310Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895311Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895312Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895313Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895314Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953184u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531D8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089531E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895320Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953218u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895322Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953234u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895323Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953248u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953250u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532E0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089532FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953318u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895332Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953334u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953354u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953360u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953370u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953388u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953390u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953398u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089533DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953418u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895343Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953444u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953450u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953460u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953474u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534ACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089534E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953528u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953548u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953560u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895356Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953570u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953578u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895357Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953588u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953598u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535A4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535E8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535F4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089535FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953614u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953630u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953638u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895363Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953644u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895364Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953658u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953660u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953668u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953670u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953678u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953680u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895368Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953694u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536A0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536C4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536DCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089536ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953700u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953714u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953728u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953730u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953770u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953778u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953788u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895378Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953794u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089537FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953804u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953810u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895381Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953824u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953828u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895382Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953838u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953844u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895384Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953850u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953858u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953860u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895386Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953874u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953878u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953880u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953898u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538B4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538C0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538C8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538D4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538F0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089538FCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953904u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953910u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953920u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953928u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953934u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953954u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x0895397Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953990u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539A8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539B0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539BCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539CCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539E4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539ECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x089539F8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A68u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953A90u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AA0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953AACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953B30u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953BD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C48u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C8Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953C9Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CACu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CCCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953CF4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D2Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D40u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D54u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D64u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D6Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D70u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D78u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D88u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953D94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DA8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DB8u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DC0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DD4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DDCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DE4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953DF0u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E00u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E0Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E14u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E18u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E20u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E28u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E60u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E74u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953E98u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953ECCu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953EECu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F08u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F10u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F1Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F34u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F3Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F4Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F50u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F5Cu, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953F94u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FC4u, &recomp_unit_0083, "recomp_unit_0083");
    runtime.register_function(0x08953FD4u, &recomp_unit_0083, "recomp_unit_0083");
}
} // namespace psprecomp
