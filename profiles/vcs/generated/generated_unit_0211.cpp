#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include "vcs_resident_regions.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0211[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0,
    33, 0, 34, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 42, 0,
    43, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 0, 0,
    0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 59, 0, 60,
    0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73,
    0, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86,
    87, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 92, 0, 93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 122, 0, 123, 124, 0, 0, 0, 125, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 132, 133, 0, 0, 134, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0,
    0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 156, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 159, 0, 160, 161, 0, 162, 0, 0, 163, 0, 164, 0, 165, 166, 0, 167, 0, 168, 0, 169, 0, 170, 171, 0, 172, 0, 173, 0, 0, 174,
    0, 175, 176, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 180, 0, 181, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0,
    0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0,
    0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 213,
    0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 0,
    222, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 234, 0, 235, 236, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0,
    0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 243, 0, 0, 0, 0, 0, 0, 244, 0, 245, 246, 0, 247, 0, 0, 248, 0, 249, 0, 0, 250, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 254, 0, 0, 255, 256, 0, 0, 257, 0, 0, 258, 259, 0,
    0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0,
    0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 281, 0, 282, 0, 0, 0, 0,
    0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0,
    291, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    300, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 305, 0, 306, 0, 0, 307, 0, 0, 0,
    0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0,
    0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 335, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339,
    0, 0, 340, 341, 0, 0, 0, 342, 0, 0, 343, 0, 344, 345, 0, 346, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 358, 0, 0, 359, 0, 0, 360,
    0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369,
    370, 0, 371, 0, 0, 372, 0, 0, 373, 0, 374, 375, 0, 376, 0, 0, 0, 377, 0, 378, 379, 0, 380, 0, 0, 381, 0, 382, 0, 383, 384, 0,
    385, 0, 386, 0, 0, 387, 0, 388, 389, 0, 390, 0, 0, 391, 0, 0, 392, 0, 393, 394, 0, 395, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0,
    399, 400, 0, 401, 0, 402, 0, 0, 403, 0, 404, 405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0,
    0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0,
    418, 0, 0, 419, 420, 421, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 425, 426, 427, 0, 428, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 432,
    433, 434, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0,
    0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 451, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0,
    0, 0, 0, 0, 0, 455, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 463, 464, 0, 465,
    0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472,
    0, 473, 0, 474, 475, 0, 0, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 482, 0, 0, 0, 0, 0,
    0, 483, 0, 484, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0,
    0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0,
    497, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0,
    0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0,
    0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 517, 518, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 522,
    523, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 529, 0, 0,
    0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0,
    0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 545, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 550, 0, 0, 551,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560,
    0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 578, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583,
    0, 0, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0,
    589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0,
    0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 605, 0,
    0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0,
    0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 0,
    622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 624, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 631, 0, 0, 632, 0,
    633, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 0,
    0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 654, 0, 0, 655, 0, 0, 656, 0, 0,
    657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0,
    0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 670, 0, 671, 672, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0,
    676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0,
    680, 0, 681, 0, 0, 682, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 0, 692, 0, 0, 693,
    694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0,
    0, 0, 0, 701, 702, 0, 0, 703, 0, 704, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 709,
    0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 713, 0, 0, 714, 0, 715, 716, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 718, 0, 0,
    719, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 722, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 0, 727, 0,
    0, 0, 728, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 734, 0, 0, 735, 0, 736, 0, 0, 0, 737,
    738, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0,
    745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 749, 0,
    0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 752, 0, 753, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0,
    0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 762, 0, 763, 764, 0, 0, 0, 0, 765, 0, 0, 0,
    0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 773, 0, 774, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0,
    777, 0, 0, 778, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0,
    786, 0, 0, 0, 787, 0, 0, 0, 788, 0, 0, 789, 0, 0, 0, 790, 791, 0, 0, 0, 792, 0, 793, 794, 0, 0, 0, 0, 0, 795, 0, 0,
    0, 0, 0, 0, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 803,
    0, 804, 0, 0, 805, 0, 806, 807, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 0,
    812, 0, 0, 0, 813, 0, 0, 0, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 817, 0, 818, 819, 0, 0, 0, 0, 0, 820, 0, 0,
    0, 0, 0, 0, 0, 0, 821, 0, 0, 822, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0, 830, 0, 831, 0, 0, 0, 832, 0, 833, 0, 0, 0, 834, 835, 0, 0, 0, 0, 0,
    836, 0, 0, 0, 0, 0, 837, 0, 0, 838, 0, 0, 0, 0, 0, 0, 0, 0, 0, 839, 0, 0, 0, 840, 0, 0, 841, 0, 0, 0, 0, 842,
    0, 0, 843, 0, 844, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    849, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 852, 0, 853, 0, 854, 0, 855, 0, 856, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 859, 0, 860, 0, 0, 861,
    862, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 0, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 0, 0, 872, 0, 873, 0, 0, 874,
    875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 878, 0, 879, 0, 880, 0, 881, 0, 882, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 885, 0, 886, 0, 0, 887, 888,
    0, 0, 0, 0, 0, 889, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 891, 0, 892, 0, 893, 0, 894, 0, 895, 0, 896, 0, 897, 0, 0,
    0, 0, 0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 0, 0, 0, 0, 900, 0, 0, 901, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 903, 0, 0, 0, 0, 904, 0, 0, 905, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 907, 908, 0, 0, 0, 0, 0, 909, 0, 0, 0, 0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 911, 0, 912,
};
void recomp_unit_0211_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,6,2 fprs=12,13,14,20 gpr_occ=4693 fpr_occ=338 gpr_total=6653 fpr_total=375
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[2] = aot_gpr_2; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_2 = ctx.gpr[2]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B50000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0211[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B50000;
    case 2u: goto L_08B50024;
    case 3u: goto L_08B5002C;
    case 4u: goto L_08B50034;
    case 5u: goto L_08B5004C;
    case 6u: goto L_08B50068;
    case 7u: goto L_08B500A0;
    case 8u: goto L_08B500D8;
    case 9u: goto L_08B50110;
    case 10u: goto L_08B50148;
    case 11u: goto L_08B50164;
    case 12u: goto L_08B50188;
    case 13u: goto L_08B50194;
    case 14u: goto L_08B501A8;
    case 15u: goto L_08B501AC;
    case 16u: goto L_08B501B4;
    case 17u: goto L_08B501BC;
    case 18u: goto L_08B501C4;
    case 19u: goto L_08B501CC;
    case 20u: goto L_08B501D4;
    case 21u: goto L_08B501D8;
    case 22u: goto L_08B501E0;
    case 23u: goto L_08B501EC;
    case 24u: goto L_08B501F4;
    case 25u: goto L_08B50208;
    case 26u: goto L_08B50234;
    case 27u: goto L_08B50240;
    case 28u: goto L_08B5024C;
    case 29u: goto L_08B50254;
    case 30u: goto L_08B5025C;
    case 31u: goto L_08B50264;
    case 32u: goto L_08B50274;
    case 33u: goto L_08B50280;
    case 34u: goto L_08B50288;
    case 35u: goto L_08B50290;
    case 36u: goto L_08B5029C;
    case 37u: goto L_08B502A8;
    case 38u: goto L_08B502C4;
    case 39u: goto L_08B502DC;
    case 40u: goto L_08B502E4;
    case 41u: goto L_08B502EC;
    case 42u: goto L_08B502F8;
    case 43u: goto L_08B50300;
    case 44u: goto L_08B50308;
    case 45u: goto L_08B50310;
    case 46u: goto L_08B50320;
    case 47u: goto L_08B50340;
    case 48u: goto L_08B5034C;
    case 49u: goto L_08B50360;
    case 50u: goto L_08B50368;
    case 51u: goto L_08B50370;
    case 52u: goto L_08B50390;
    case 53u: goto L_08B503A0;
    case 54u: goto L_08B503A8;
    case 55u: goto L_08B503B0;
    case 56u: goto L_08B503B8;
    case 57u: goto L_08B503D4;
    case 58u: goto L_08B503E8;
    case 59u: goto L_08B503F4;
    case 60u: goto L_08B503FC;
    case 61u: goto L_08B50404;
    case 62u: goto L_08B5040C;
    case 63u: goto L_08B50414;
    case 64u: goto L_08B5041C;
    case 65u: goto L_08B50424;
    case 66u: goto L_08B5042C;
    case 67u: goto L_08B50434;
    case 68u: goto L_08B5043C;
    case 69u: goto L_08B50444;
    case 70u: goto L_08B50464;
    case 71u: goto L_08B5046C;
    case 72u: goto L_08B50474;
    case 73u: goto L_08B5047C;
    case 74u: goto L_08B50488;
    case 75u: goto L_08B50494;
    case 76u: goto L_08B5049C;
    case 77u: goto L_08B504A4;
    case 78u: goto L_08B504AC;
    case 79u: goto L_08B504B4;
    case 80u: goto L_08B504C0;
    case 81u: goto L_08B504CC;
    case 82u: goto L_08B504D4;
    case 83u: goto L_08B504E0;
    case 84u: goto L_08B504E8;
    case 85u: goto L_08B504F4;
    case 86u: goto L_08B504FC;
    case 87u: goto L_08B50500;
    case 88u: goto L_08B50508;
    case 89u: goto L_08B50514;
    case 90u: goto L_08B50520;
    case 91u: goto L_08B50528;
    case 92u: goto L_08B5052C;
    case 93u: goto L_08B50534;
    case 94u: goto L_08B50548;
    case 95u: goto L_08B50550;
    case 96u: goto L_08B50568;
    case 97u: goto L_08B50570;
    case 98u: goto L_08B505B8;
    case 99u: goto L_08B505C4;
    case 100u: goto L_08B505D0;
    case 101u: goto L_08B505D8;
    case 102u: goto L_08B505F8;
    case 103u: goto L_08B50610;
    case 104u: goto L_08B50624;
    case 105u: goto L_08B50634;
    case 106u: goto L_08B50644;
    case 107u: goto L_08B5064C;
    case 108u: goto L_08B50684;
    case 109u: goto L_08B5068C;
    case 110u: goto L_08B5069C;
    case 111u: goto L_08B506A4;
    case 112u: goto L_08B506D8;
    case 113u: goto L_08B506E4;
    case 114u: goto L_08B506EC;
    case 115u: goto L_08B506F4;
    case 116u: goto L_08B5072C;
    case 117u: goto L_08B50734;
    case 118u: goto L_08B50738;
    case 119u: goto L_08B50740;
    case 120u: goto L_08B50750;
    case 121u: goto L_08B50758;
    case 122u: goto L_08B50790;
    case 123u: goto L_08B50798;
    case 124u: goto L_08B5079C;
    case 125u: goto L_08B507AC;
    case 126u: goto L_08B507B0;
    case 127u: goto L_08B507B8;
    case 128u: goto L_08B507C0;
    case 129u: goto L_08B507C8;
    case 130u: goto L_08B50800;
    case 131u: goto L_08B50854;
    case 132u: goto L_08B50898;
    case 133u: goto L_08B5089C;
    case 134u: goto L_08B508A8;
    case 135u: goto L_08B508AC;
    case 136u: goto L_08B508B4;
    case 137u: goto L_08B508D8;
    case 138u: goto L_08B508E0;
    case 139u: goto L_08B508E8;
    case 140u: goto L_08B508F0;
    case 141u: goto L_08B5090C;
    case 142u: goto L_08B50914;
    case 143u: goto L_08B5091C;
    case 144u: goto L_08B50924;
    case 145u: goto L_08B50960;
    case 146u: goto L_08B50968;
    case 147u: goto L_08B509A4;
    case 148u: goto L_08B509B0;
    case 149u: goto L_08B509D0;
    case 150u: goto L_08B509D4;
    case 151u: goto L_08B509E0;
    case 152u: goto L_08B50A0C;
    case 153u: goto L_08B50A24;
    case 154u: goto L_08B50A30;
    case 155u: goto L_08B50A38;
    case 156u: goto L_08B50A3C;
    case 157u: goto L_08B50A44;
    case 158u: goto L_08B50A54;
    case 159u: goto L_08B50A88;
    case 160u: goto L_08B50A90;
    case 161u: goto L_08B50A94;
    case 162u: goto L_08B50A9C;
    case 163u: goto L_08B50AA8;
    case 164u: goto L_08B50AB0;
    case 165u: goto L_08B50AB8;
    case 166u: goto L_08B50ABC;
    case 167u: goto L_08B50AC4;
    case 168u: goto L_08B50ACC;
    case 169u: goto L_08B50AD4;
    case 170u: goto L_08B50ADC;
    case 171u: goto L_08B50AE0;
    case 172u: goto L_08B50AE8;
    case 173u: goto L_08B50AF0;
    case 174u: goto L_08B50AFC;
    case 175u: goto L_08B50B04;
    case 176u: goto L_08B50B08;
    case 177u: goto L_08B50B10;
    case 178u: goto L_08B50B18;
    case 179u: goto L_08B50B24;
    case 180u: goto L_08B50B34;
    case 181u: goto L_08B50B3C;
    case 182u: goto L_08B50B40;
    case 183u: goto L_08B50B48;
    case 184u: goto L_08B50B50;
    case 185u: goto L_08B50B6C;
    case 186u: goto L_08B50B84;
    case 187u: goto L_08B50B9C;
    case 188u: goto L_08B50BD0;
    case 189u: goto L_08B50BE0;
    case 190u: goto L_08B50BE8;
    case 191u: goto L_08B50C04;
    case 192u: goto L_08B50C0C;
    case 193u: goto L_08B50C2C;
    case 194u: goto L_08B50C60;
    case 195u: goto L_08B50C6C;
    case 196u: goto L_08B50CA0;
    case 197u: goto L_08B50CB0;
    case 198u: goto L_08B50CB8;
    case 199u: goto L_08B50CD4;
    case 200u: goto L_08B50CDC;
    case 201u: goto L_08B50CFC;
    case 202u: goto L_08B50D30;
    case 203u: goto L_08B50D3C;
    case 204u: goto L_08B50D7C;
    case 205u: goto L_08B50D88;
    case 206u: goto L_08B50D90;
    case 207u: goto L_08B50D9C;
    case 208u: goto L_08B50DBC;
    case 209u: goto L_08B50DD0;
    case 210u: goto L_08B50DDC;
    case 211u: goto L_08B50DE4;
    case 212u: goto L_08B50DF0;
    case 213u: goto L_08B50DFC;
    case 214u: goto L_08B50E04;
    case 215u: goto L_08B50E0C;
    case 216u: goto L_08B50E14;
    case 217u: goto L_08B50E44;
    case 218u: goto L_08B50E58;
    case 219u: goto L_08B50E60;
    case 220u: goto L_08B50E68;
    case 221u: goto L_08B50E70;
    case 222u: goto L_08B50E80;
    case 223u: goto L_08B50E84;
    case 224u: goto L_08B50E9C;
    case 225u: goto L_08B50F04;
    case 226u: goto L_08B50F0C;
    case 227u: goto L_08B50F14;
    case 228u: goto L_08B50F40;
    case 229u: goto L_08B50F68;
    case 230u: goto L_08B50F94;
    case 231u: goto L_08B50FA0;
    case 232u: goto L_08B50FAC;
    case 233u: goto L_08B50FC0;
    case 234u: goto L_08B50FC8;
    case 235u: goto L_08B50FD0;
    case 236u: goto L_08B50FD4;
    case 237u: goto L_08B50FE8;
    case 238u: goto L_08B50FF0;
    case 239u: goto L_08B50FF8;
    case 240u: goto L_08B51014;
    case 241u: goto L_08B5101C;
    case 242u: goto L_08B51024;
    case 243u: goto L_08B51028;
    case 244u: goto L_08B51044;
    case 245u: goto L_08B5104C;
    case 246u: goto L_08B51050;
    case 247u: goto L_08B51058;
    case 248u: goto L_08B51064;
    case 249u: goto L_08B5106C;
    case 250u: goto L_08B51078;
    case 251u: goto L_08B51090;
    case 252u: goto L_08B510A8;
    case 253u: goto L_08B510C8;
    case 254u: goto L_08B510CC;
    case 255u: goto L_08B510D8;
    case 256u: goto L_08B510DC;
    case 257u: goto L_08B510E8;
    case 258u: goto L_08B510F4;
    case 259u: goto L_08B510F8;
    case 260u: goto L_08B5110C;
    case 261u: goto L_08B5111C;
    case 262u: goto L_08B51124;
    case 263u: goto L_08B5113C;
    case 264u: goto L_08B51150;
    case 265u: goto L_08B51164;
    case 266u: goto L_08B51174;
    case 267u: goto L_08B5117C;
    case 268u: goto L_08B51198;
    case 269u: goto L_08B511B0;
    case 270u: goto L_08B511C4;
    case 271u: goto L_08B511D0;
    case 272u: goto L_08B511D8;
    case 273u: goto L_08B511E8;
    case 274u: goto L_08B511F8;
    case 275u: goto L_08B5120C;
    case 276u: goto L_08B51218;
    case 277u: goto L_08B51220;
    case 278u: goto L_08B51230;
    case 279u: goto L_08B51244;
    case 280u: goto L_08B51258;
    case 281u: goto L_08B51264;
    case 282u: goto L_08B5126C;
    case 283u: goto L_08B51284;
    case 284u: goto L_08B51294;
    case 285u: goto L_08B512A8;
    case 286u: goto L_08B512B4;
    case 287u: goto L_08B512BC;
    case 288u: goto L_08B512CC;
    case 289u: goto L_08B512E0;
    case 290u: goto L_08B512F4;
    case 291u: goto L_08B51300;
    case 292u: goto L_08B51308;
    case 293u: goto L_08B51318;
    case 294u: goto L_08B51324;
    case 295u: goto L_08B51338;
    case 296u: goto L_08B51340;
    case 297u: goto L_08B51348;
    case 298u: goto L_08B51354;
    case 299u: goto L_08B51370;
    case 300u: goto L_08B51380;
    case 301u: goto L_08B51388;
    case 302u: goto L_08B51398;
    case 303u: goto L_08B513C0;
    case 304u: goto L_08B513D4;
    case 305u: goto L_08B513DC;
    case 306u: goto L_08B513E4;
    case 307u: goto L_08B513F0;
    case 308u: goto L_08B5140C;
    case 309u: goto L_08B5141C;
    case 310u: goto L_08B51424;
    case 311u: goto L_08B51434;
    case 312u: goto L_08B51458;
    case 313u: goto L_08B51468;
    case 314u: goto L_08B514A8;
    case 315u: goto L_08B514D8;
    case 316u: goto L_08B514E4;
    case 317u: goto L_08B51514;
    case 318u: goto L_08B51524;
    case 319u: goto L_08B5152C;
    case 320u: goto L_08B51538;
    case 321u: goto L_08B51540;
    case 322u: goto L_08B51548;
    case 323u: goto L_08B51550;
    case 324u: goto L_08B51570;
    case 325u: goto L_08B51578;
    case 326u: goto L_08B515B0;
    case 327u: goto L_08B515B8;
    case 328u: goto L_08B515C0;
    case 329u: goto L_08B515D8;
    case 330u: goto L_08B515E0;
    case 331u: goto L_08B515F8;
    case 332u: goto L_08B51604;
    case 333u: goto L_08B51624;
    case 334u: goto L_08B5162C;
    case 335u: goto L_08B51634;
    case 336u: goto L_08B51638;
    case 337u: goto L_08B5164C;
    case 338u: goto L_08B5166C;
    case 339u: goto L_08B5167C;
    case 340u: goto L_08B51688;
    case 341u: goto L_08B5168C;
    case 342u: goto L_08B5169C;
    case 343u: goto L_08B516A8;
    case 344u: goto L_08B516B0;
    case 345u: goto L_08B516B4;
    case 346u: goto L_08B516BC;
    case 347u: goto L_08B516C4;
    case 348u: goto L_08B516D0;
    case 349u: goto L_08B516D8;
    case 350u: goto L_08B516E0;
    case 351u: goto L_08B51704;
    case 352u: goto L_08B51714;
    case 353u: goto L_08B5171C;
    case 354u: goto L_08B51728;
    case 355u: goto L_08B51748;
    case 356u: goto L_08B51754;
    case 357u: goto L_08B5175C;
    case 358u: goto L_08B51764;
    case 359u: goto L_08B51770;
    case 360u: goto L_08B5177C;
    case 361u: goto L_08B51784;
    case 362u: goto L_08B5178C;
    case 363u: goto L_08B51794;
    case 364u: goto L_08B5179C;
    case 365u: goto L_08B517AC;
    case 366u: goto L_08B517C0;
    case 367u: goto L_08B517D4;
    case 368u: goto L_08B517F4;
    case 369u: goto L_08B517FC;
    case 370u: goto L_08B51800;
    case 371u: goto L_08B51808;
    case 372u: goto L_08B51814;
    case 373u: goto L_08B51820;
    case 374u: goto L_08B51828;
    case 375u: goto L_08B5182C;
    case 376u: goto L_08B51834;
    case 377u: goto L_08B51844;
    case 378u: goto L_08B5184C;
    case 379u: goto L_08B51850;
    case 380u: goto L_08B51858;
    case 381u: goto L_08B51864;
    case 382u: goto L_08B5186C;
    case 383u: goto L_08B51874;
    case 384u: goto L_08B51878;
    case 385u: goto L_08B51880;
    case 386u: goto L_08B51888;
    case 387u: goto L_08B51894;
    case 388u: goto L_08B5189C;
    case 389u: goto L_08B518A0;
    case 390u: goto L_08B518A8;
    case 391u: goto L_08B518B4;
    case 392u: goto L_08B518C0;
    case 393u: goto L_08B518C8;
    case 394u: goto L_08B518CC;
    case 395u: goto L_08B518D4;
    case 396u: goto L_08B518E8;
    case 397u: goto L_08B518F0;
    case 398u: goto L_08B518F8;
    case 399u: goto L_08B51900;
    case 400u: goto L_08B51904;
    case 401u: goto L_08B5190C;
    case 402u: goto L_08B51914;
    case 403u: goto L_08B51920;
    case 404u: goto L_08B51928;
    case 405u: goto L_08B5192C;
    case 406u: goto L_08B51934;
    case 407u: goto L_08B5195C;
    case 408u: goto L_08B51968;
    case 409u: goto L_08B51970;
    case 410u: goto L_08B51978;
    case 411u: goto L_08B51994;
    case 412u: goto L_08B5199C;
    case 413u: goto L_08B519A8;
    case 414u: goto L_08B519BC;
    case 415u: goto L_08B519D0;
    case 416u: goto L_08B519E8;
    case 417u: goto L_08B519F0;
    case 418u: goto L_08B51A00;
    case 419u: goto L_08B51A0C;
    case 420u: goto L_08B51A10;
    case 421u: goto L_08B51A14;
    case 422u: goto L_08B51A1C;
    case 423u: goto L_08B51A24;
    case 424u: goto L_08B51A34;
    case 425u: goto L_08B51A40;
    case 426u: goto L_08B51A44;
    case 427u: goto L_08B51A48;
    case 428u: goto L_08B51A50;
    case 429u: goto L_08B51A58;
    case 430u: goto L_08B51A60;
    case 431u: goto L_08B51A70;
    case 432u: goto L_08B51A7C;
    case 433u: goto L_08B51A80;
    case 434u: goto L_08B51A84;
    case 435u: goto L_08B51A8C;
    case 436u: goto L_08B51A94;
    case 437u: goto L_08B51AA4;
    case 438u: goto L_08B51ABC;
    case 439u: goto L_08B51AC8;
    case 440u: goto L_08B51AD4;
    case 441u: goto L_08B51ADC;
    case 442u: goto L_08B51AE4;
    case 443u: goto L_08B51AF8;
    case 444u: goto L_08B51B08;
    case 445u: goto L_08B51B90;
    case 446u: goto L_08B51B98;
    case 447u: goto L_08B51BA4;
    case 448u: goto L_08B51BEC;
    case 449u: goto L_08B51BF4;
    case 450u: goto L_08B51C3C;
    case 451u: goto L_08B51C40;
    case 452u: goto L_08B51C48;
    case 453u: goto L_08B51C68;
    case 454u: goto L_08B51C70;
    case 455u: goto L_08B51C94;
    case 456u: goto L_08B51C98;
    case 457u: goto L_08B51CA0;
    case 458u: goto L_08B51CBC;
    case 459u: goto L_08B51CC4;
    case 460u: goto L_08B51CD0;
    case 461u: goto L_08B51CDC;
    case 462u: goto L_08B51CE8;
    case 463u: goto L_08B51CF0;
    case 464u: goto L_08B51CF4;
    case 465u: goto L_08B51CFC;
    case 466u: goto L_08B51D04;
    case 467u: goto L_08B51D20;
    case 468u: goto L_08B51D28;
    case 469u: goto L_08B51D30;
    case 470u: goto L_08B51D54;
    case 471u: goto L_08B51D74;
    case 472u: goto L_08B51D7C;
    case 473u: goto L_08B51D84;
    case 474u: goto L_08B51D8C;
    case 475u: goto L_08B51D90;
    case 476u: goto L_08B51DA4;
    case 477u: goto L_08B51DAC;
    case 478u: goto L_08B51DB4;
    case 479u: goto L_08B51DD4;
    case 480u: goto L_08B51DDC;
    case 481u: goto L_08B51DE4;
    case 482u: goto L_08B51DE8;
    case 483u: goto L_08B51E04;
    case 484u: goto L_08B51E0C;
    case 485u: goto L_08B51E10;
    case 486u: goto L_08B51E18;
    case 487u: goto L_08B51E44;
    case 488u: goto L_08B51E50;
    case 489u: goto L_08B51E58;
    case 490u: goto L_08B51E74;
    case 491u: goto L_08B51E98;
    case 492u: goto L_08B51EA4;
    case 493u: goto L_08B51EAC;
    case 494u: goto L_08B51ECC;
    case 495u: goto L_08B51EF0;
    case 496u: goto L_08B51EF8;
    case 497u: goto L_08B51F00;
    case 498u: goto L_08B51F08;
    case 499u: goto L_08B51F14;
    case 500u: goto L_08B51F34;
    case 501u: goto L_08B51F40;
    case 502u: goto L_08B51F60;
    case 503u: goto L_08B51F68;
    case 504u: goto L_08B51F70;
    case 505u: goto L_08B51F94;
    case 506u: goto L_08B51FDC;
    case 507u: goto L_08B51FE4;
    case 508u: goto L_08B51FF0;
    case 509u: goto L_08B5200C;
    case 510u: goto L_08B52030;
    case 511u: goto L_08B52060;
    case 512u: goto L_08B52098;
    case 513u: goto L_08B520A0;
    case 514u: goto L_08B520B0;
    case 515u: goto L_08B520B8;
    case 516u: goto L_08B520C0;
    case 517u: goto L_08B520CC;
    case 518u: goto L_08B520D0;
    case 519u: goto L_08B520DC;
    case 520u: goto L_08B520EC;
    case 521u: goto L_08B520F8;
    case 522u: goto L_08B520FC;
    case 523u: goto L_08B52100;
    case 524u: goto L_08B52124;
    case 525u: goto L_08B52130;
    case 526u: goto L_08B52154;
    case 527u: goto L_08B52164;
    case 528u: goto L_08B5216C;
    case 529u: goto L_08B52174;
    case 530u: goto L_08B52190;
    case 531u: goto L_08B521B4;
    case 532u: goto L_08B521DC;
    case 533u: goto L_08B521F0;
    case 534u: goto L_08B521F8;
    case 535u: goto L_08B52208;
    case 536u: goto L_08B52238;
    case 537u: goto L_08B5224C;
    case 538u: goto L_08B52254;
    case 539u: goto L_08B52260;
    case 540u: goto L_08B522A0;
    case 541u: goto L_08B522B4;
    case 542u: goto L_08B522BC;
    case 543u: goto L_08B522CC;
    case 544u: goto L_08B52304;
    case 545u: goto L_08B52310;
    case 546u: goto L_08B52318;
    case 547u: goto L_08B52320;
    case 548u: goto L_08B52354;
    case 549u: goto L_08B52368;
    case 550u: goto L_08B52370;
    case 551u: goto L_08B5237C;
    case 552u: goto L_08B523B0;
    case 553u: goto L_08B523C4;
    case 554u: goto L_08B523CC;
    case 555u: goto L_08B523D8;
    case 556u: goto L_08B52418;
    case 557u: goto L_08B5242C;
    case 558u: goto L_08B52434;
    case 559u: goto L_08B52444;
    case 560u: goto L_08B5247C;
    case 561u: goto L_08B52488;
    case 562u: goto L_08B52490;
    case 563u: goto L_08B52498;
    case 564u: goto L_08B524D0;
    case 565u: goto L_08B524E4;
    case 566u: goto L_08B524EC;
    case 567u: goto L_08B524FC;
    case 568u: goto L_08B52530;
    case 569u: goto L_08B52544;
    case 570u: goto L_08B5254C;
    case 571u: goto L_08B5255C;
    case 572u: goto L_08B52598;
    case 573u: goto L_08B525A8;
    case 574u: goto L_08B525B0;
    case 575u: goto L_08B525BC;
    case 576u: goto L_08B525E8;
    case 577u: goto L_08B525F0;
    case 578u: goto L_08B525F8;
    case 579u: goto L_08B52620;
    case 580u: goto L_08B52634;
    case 581u: goto L_08B5263C;
    case 582u: goto L_08B5264C;
    case 583u: goto L_08B5267C;
    case 584u: goto L_08B52690;
    case 585u: goto L_08B52698;
    case 586u: goto L_08B526A4;
    case 587u: goto L_08B526E4;
    case 588u: goto L_08B526F8;
    case 589u: goto L_08B52700;
    case 590u: goto L_08B52710;
    case 591u: goto L_08B52748;
    case 592u: goto L_08B52754;
    case 593u: goto L_08B5275C;
    case 594u: goto L_08B52764;
    case 595u: goto L_08B52798;
    case 596u: goto L_08B527AC;
    case 597u: goto L_08B527B4;
    case 598u: goto L_08B527C0;
    case 599u: goto L_08B527F4;
    case 600u: goto L_08B52808;
    case 601u: goto L_08B52810;
    case 602u: goto L_08B5281C;
    case 603u: goto L_08B5285C;
    case 604u: goto L_08B52870;
    case 605u: goto L_08B52878;
    case 606u: goto L_08B52888;
    case 607u: goto L_08B528C0;
    case 608u: goto L_08B528CC;
    case 609u: goto L_08B528D4;
    case 610u: goto L_08B528DC;
    case 611u: goto L_08B52914;
    case 612u: goto L_08B52928;
    case 613u: goto L_08B52930;
    case 614u: goto L_08B52940;
    case 615u: goto L_08B52974;
    case 616u: goto L_08B52988;
    case 617u: goto L_08B52990;
    case 618u: goto L_08B529A0;
    case 619u: goto L_08B529DC;
    case 620u: goto L_08B529EC;
    case 621u: goto L_08B529F4;
    case 622u: goto L_08B52A00;
    case 623u: goto L_08B52A2C;
    case 624u: goto L_08B52A30;
    case 625u: goto L_08B52A54;
    case 626u: goto L_08B52A68;
    case 627u: goto L_08B52A98;
    case 628u: goto L_08B52AB8;
    case 629u: goto L_08B52AC4;
    case 630u: goto L_08B52ADC;
    case 631u: goto L_08B52AEC;
    case 632u: goto L_08B52AF8;
    case 633u: goto L_08B52B00;
    case 634u: goto L_08B52B0C;
    case 635u: goto L_08B52B28;
    case 636u: goto L_08B52B34;
    case 637u: goto L_08B52B44;
    case 638u: goto L_08B52B98;
    case 639u: goto L_08B52BA0;
    case 640u: goto L_08B52BAC;
    case 641u: goto L_08B52BC0;
    case 642u: goto L_08B52BCC;
    case 643u: goto L_08B52BDC;
    case 644u: goto L_08B52C24;
    case 645u: goto L_08B52C2C;
    case 646u: goto L_08B52C3C;
    case 647u: goto L_08B52C4C;
    case 648u: goto L_08B52C58;
    case 649u: goto L_08B52C6C;
    case 650u: goto L_08B52C90;
    case 651u: goto L_08B52CC8;
    case 652u: goto L_08B52D48;
    case 653u: goto L_08B52D54;
    case 654u: goto L_08B52D5C;
    case 655u: goto L_08B52D68;
    case 656u: goto L_08B52D74;
    case 657u: goto L_08B52D80;
    case 658u: goto L_08B52D90;
    case 659u: goto L_08B52DA0;
    case 660u: goto L_08B52DAC;
    case 661u: goto L_08B52DBC;
    case 662u: goto L_08B52DCC;
    case 663u: goto L_08B52DF4;
    case 664u: goto L_08B52E10;
    case 665u: goto L_08B52E20;
    case 666u: goto L_08B52E28;
    case 667u: goto L_08B52E6C;
    case 668u: goto L_08B52E88;
    case 669u: goto L_08B52E90;
    case 670u: goto L_08B52EA8;
    case 671u: goto L_08B52EB0;
    case 672u: goto L_08B52EB4;
    case 673u: goto L_08B52EC8;
    case 674u: goto L_08B52EE8;
    case 675u: goto L_08B52EF4;
    case 676u: goto L_08B52F00;
    case 677u: goto L_08B52F40;
    case 678u: goto L_08B52F54;
    case 679u: goto L_08B52F70;
    case 680u: goto L_08B52F80;
    case 681u: goto L_08B52F88;
    case 682u: goto L_08B52F94;
    case 683u: goto L_08B52F98;
    case 684u: goto L_08B52FB0;
    case 685u: goto L_08B52FD0;
    case 686u: goto L_08B52FDC;
    case 687u: goto L_08B52FE8;
    case 688u: goto L_08B53028;
    case 689u: goto L_08B5303C;
    case 690u: goto L_08B53058;
    case 691u: goto L_08B53068;
    case 692u: goto L_08B53070;
    case 693u: goto L_08B5307C;
    case 694u: goto L_08B53080;
    case 695u: goto L_08B53098;
    case 696u: goto L_08B530B8;
    case 697u: goto L_08B530C4;
    case 698u: goto L_08B530D4;
    case 699u: goto L_08B530E4;
    case 700u: goto L_08B530F4;
    case 701u: goto L_08B5310C;
    case 702u: goto L_08B53110;
    case 703u: goto L_08B5311C;
    case 704u: goto L_08B53124;
    case 705u: goto L_08B53128;
    case 706u: goto L_08B53140;
    case 707u: goto L_08B53160;
    case 708u: goto L_08B5316C;
    case 709u: goto L_08B5317C;
    case 710u: goto L_08B5318C;
    case 711u: goto L_08B5319C;
    case 712u: goto L_08B531A8;
    case 713u: goto L_08B531AC;
    case 714u: goto L_08B531B8;
    case 715u: goto L_08B531C0;
    case 716u: goto L_08B531C4;
    case 717u: goto L_08B531DC;
    case 718u: goto L_08B531F4;
    case 719u: goto L_08B53200;
    case 720u: goto L_08B5321C;
    case 721u: goto L_08B53224;
    case 722u: goto L_08B5322C;
    case 723u: goto L_08B53230;
    case 724u: goto L_08B53240;
    case 725u: goto L_08B53260;
    case 726u: goto L_08B5326C;
    case 727u: goto L_08B53278;
    case 728u: goto L_08B53288;
    case 729u: goto L_08B53298;
    case 730u: goto L_08B532A4;
    case 731u: goto L_08B532B4;
    case 732u: goto L_08B532C4;
    case 733u: goto L_08B532D4;
    case 734u: goto L_08B532D8;
    case 735u: goto L_08B532E4;
    case 736u: goto L_08B532EC;
    case 737u: goto L_08B532FC;
    case 738u: goto L_08B53300;
    case 739u: goto L_08B53318;
    case 740u: goto L_08B53338;
    case 741u: goto L_08B53348;
    case 742u: goto L_08B53354;
    case 743u: goto L_08B53360;
    case 744u: goto L_08B53370;
    case 745u: goto L_08B53380;
    case 746u: goto L_08B53398;
    case 747u: goto L_08B533E8;
    case 748u: goto L_08B533F0;
    case 749u: goto L_08B533F8;
    case 750u: goto L_08B53414;
    case 751u: goto L_08B5341C;
    case 752u: goto L_08B53434;
    case 753u: goto L_08B5343C;
    case 754u: goto L_08B53440;
    case 755u: goto L_08B53458;
    case 756u: goto L_08B53474;
    case 757u: goto L_08B5348C;
    case 758u: goto L_08B53494;
    case 759u: goto L_08B53514;
    case 760u: goto L_08B53530;
    case 761u: goto L_08B53538;
    case 762u: goto L_08B53550;
    case 763u: goto L_08B53558;
    case 764u: goto L_08B5355C;
    case 765u: goto L_08B53570;
    case 766u: goto L_08B5358C;
    case 767u: goto L_08B5359C;
    case 768u: goto L_08B535A8;
    case 769u: goto L_08B535B8;
    case 770u: goto L_08B53604;
    case 771u: goto L_08B53620;
    case 772u: goto L_08B53628;
    case 773u: goto L_08B53640;
    case 774u: goto L_08B53648;
    case 775u: goto L_08B5364C;
    case 776u: goto L_08B53660;
    case 777u: goto L_08B53680;
    case 778u: goto L_08B5368C;
    case 779u: goto L_08B53698;
    case 780u: goto L_08B536A8;
    case 781u: goto L_08B536B8;
    case 782u: goto L_08B536C8;
    case 783u: goto L_08B536D4;
    case 784u: goto L_08B536E4;
    case 785u: goto L_08B536F4;
    case 786u: goto L_08B53700;
    case 787u: goto L_08B53710;
    case 788u: goto L_08B53720;
    case 789u: goto L_08B5372C;
    case 790u: goto L_08B5373C;
    case 791u: goto L_08B53740;
    case 792u: goto L_08B53750;
    case 793u: goto L_08B53758;
    case 794u: goto L_08B5375C;
    case 795u: goto L_08B53774;
    case 796u: goto L_08B53798;
    case 797u: goto L_08B537A4;
    case 798u: goto L_08B537B0;
    case 799u: goto L_08B537C0;
    case 800u: goto L_08B537D0;
    case 801u: goto L_08B537E0;
    case 802u: goto L_08B537F0;
    case 803u: goto L_08B537FC;
    case 804u: goto L_08B53804;
    case 805u: goto L_08B53810;
    case 806u: goto L_08B53818;
    case 807u: goto L_08B5381C;
    case 808u: goto L_08B53834;
    case 809u: goto L_08B53858;
    case 810u: goto L_08B53864;
    case 811u: goto L_08B53870;
    case 812u: goto L_08B53880;
    case 813u: goto L_08B53890;
    case 814u: goto L_08B538A4;
    case 815u: goto L_08B538B8;
    case 816u: goto L_08B538C0;
    case 817u: goto L_08B538D0;
    case 818u: goto L_08B538D8;
    case 819u: goto L_08B538DC;
    case 820u: goto L_08B538F4;
    case 821u: goto L_08B53918;
    case 822u: goto L_08B53924;
    case 823u: goto L_08B53930;
    case 824u: goto L_08B53940;
    case 825u: goto L_08B53950;
    case 826u: goto L_08B53964;
    case 827u: goto L_08B53978;
    case 828u: goto L_08B539A0;
    case 829u: goto L_08B539AC;
    case 830u: goto L_08B539B4;
    case 831u: goto L_08B539BC;
    case 832u: goto L_08B539CC;
    case 833u: goto L_08B539D4;
    case 834u: goto L_08B539E4;
    case 835u: goto L_08B539E8;
    case 836u: goto L_08B53A00;
    case 837u: goto L_08B53A18;
    case 838u: goto L_08B53A24;
    case 839u: goto L_08B53A4C;
    case 840u: goto L_08B53A5C;
    case 841u: goto L_08B53A68;
    case 842u: goto L_08B53A7C;
    case 843u: goto L_08B53A88;
    case 844u: goto L_08B53A90;
    case 845u: goto L_08B53A9C;
    case 846u: goto L_08B53AAC;
    case 847u: goto L_08B53AC0;
    case 848u: goto L_08B53AC8;
    case 849u: goto L_08B53B00;
    case 850u: goto L_08B53B18;
    case 851u: goto L_08B53B3C;
    case 852u: goto L_08B53B4C;
    case 853u: goto L_08B53B54;
    case 854u: goto L_08B53B5C;
    case 855u: goto L_08B53B64;
    case 856u: goto L_08B53B6C;
    case 857u: goto L_08B53BA0;
    case 858u: goto L_08B53BD4;
    case 859u: goto L_08B53BE8;
    case 860u: goto L_08B53BF0;
    case 861u: goto L_08B53BFC;
    case 862u: goto L_08B53C00;
    case 863u: goto L_08B53C18;
    case 864u: goto L_08B53C34;
    case 865u: goto L_08B53C44;
    case 866u: goto L_08B53C4C;
    case 867u: goto L_08B53C54;
    case 868u: goto L_08B53C5C;
    case 869u: goto L_08B53C64;
    case 870u: goto L_08B53C98;
    case 871u: goto L_08B53CD4;
    case 872u: goto L_08B53CE8;
    case 873u: goto L_08B53CF0;
    case 874u: goto L_08B53CFC;
    case 875u: goto L_08B53D00;
    case 876u: goto L_08B53D14;
    case 877u: goto L_08B53D38;
    case 878u: goto L_08B53D48;
    case 879u: goto L_08B53D50;
    case 880u: goto L_08B53D58;
    case 881u: goto L_08B53D60;
    case 882u: goto L_08B53D68;
    case 883u: goto L_08B53D9C;
    case 884u: goto L_08B53DD0;
    case 885u: goto L_08B53DE4;
    case 886u: goto L_08B53DEC;
    case 887u: goto L_08B53DF8;
    case 888u: goto L_08B53DFC;
    case 889u: goto L_08B53E14;
    case 890u: goto L_08B53E34;
    case 891u: goto L_08B53E44;
    case 892u: goto L_08B53E4C;
    case 893u: goto L_08B53E54;
    case 894u: goto L_08B53E5C;
    case 895u: goto L_08B53E64;
    case 896u: goto L_08B53E6C;
    case 897u: goto L_08B53E74;
    case 898u: goto L_08B53E98;
    case 899u: goto L_08B53EA4;
    case 900u: goto L_08B53EC0;
    case 901u: goto L_08B53ECC;
    case 902u: goto L_08B53EDC;
    case 903u: goto L_08B53F04;
    case 904u: goto L_08B53F18;
    case 905u: goto L_08B53F24;
    case 906u: goto L_08B53F34;
    case 907u: goto L_08B53FA0;
    case 908u: goto L_08B53FA4;
    case 909u: goto L_08B53FBC;
    case 910u: goto L_08B53FE0;
    case 911u: goto L_08B53FF4;
    case 912u: goto L_08B53FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B50000:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5588)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(244), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5002C;
      }
      goto L_08B50024;
    }
L_08B50024:
    aot_gpr_31 = (0x08B5002Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5002Cu) goto L_08B5002C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5002C:
    aot_gpr_31 = (0x08B50034u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50034u) goto L_08B50034;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50034:
    aot_gpr_4 = (aot_gpr_2 ^ 1u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08B5004Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B50800;
L_08B5004C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5576), ctx.gpr[16]);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 255u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    aot_gpr_31 = (0x08B50068u);
    ctx.gpr[8] = (0u | 200u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50068u) goto L_08B50068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50068:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 249u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u | 232u);
    ctx.gpr[7] = (0u | 91u);
    aot_gpr_31 = (0x08B500A0u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B500A0u) goto L_08B500A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B500A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(229), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(230), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 32u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(231), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u | 32u);
    ctx.gpr[7] = (0u | 32u);
    aot_gpr_31 = (0x08B500D8u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B500D8u) goto L_08B500D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B500D8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(233), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(234), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(235), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08B50110u);
    ctx.gpr[8] = (0u | 255u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08A3550C, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50110u) goto L_08B50110;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50110:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(237), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(238), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(3)));
    aot_gpr_2 = (ctx.gpr[16] | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(239), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50148:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B501F4;
      }
      goto L_08B50164;
    }
L_08B50164:
    aot_gpr_4 = (2235u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-29984));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5576), 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    aot_gpr_4 = (0u | 0u);
    aot_gpr_31 = (0x08B50188u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 230u, 0x08861824u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50188u) goto L_08B50188;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50188:
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(204));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B501D8;
      }
      goto L_08B50194;
    }
L_08B50194:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B501B4;
      }
      goto L_08B501A8;
    }
L_08B501A8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    goto L_08B501AC;
L_08B501AC:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B501AC;
      }
      goto L_08B501B4;
    }
L_08B501B4:
    if (ctx.gpr[7] == 0u) {
    aot_gpr_4 = (ctx.gpr[17] | 0u);
        goto L_08B501D8;
    }
    goto L_08B501BC;
L_08B501BC:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[17] | 0u);
        goto L_08B501D8;
    }
    goto L_08B501C4;
L_08B501C4:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (ctx.gpr[17] | 0u);
        goto L_08B501D8;
    }
    goto L_08B501CC;
L_08B501CC:
    aot_gpr_31 = (0x08B501D4u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B501D4u) goto L_08B501D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B501D4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    goto L_08B501D8;
L_08B501D8:
    aot_gpr_31 = (0x08B501E0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B501E0u) goto L_08B501E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B501E0:
    aot_gpr_4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B501F4;
      }
      goto L_08B501EC;
    }
L_08B501EC:
    aot_gpr_31 = (0x08B501F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE2C0, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B501F4u) goto L_08B501F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B501F4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50208:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(252)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[16] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B50240;
      }
      goto L_08B50234;
    }
L_08B50234:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B50240u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 516u, 0x08AC5D44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50240u) goto L_08B50240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50240:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B50254;
      }
      goto L_08B5024C;
    }
L_08B5024C:
    aot_gpr_31 = (0x08B50254u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50254u) goto L_08B50254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50254:
    aot_gpr_31 = (0x08B5025Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5025Cu) goto L_08B5025C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5025C:
    { const bool branch_taken = aot_gpr_2 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08B502A8;
      }
      goto L_08B50264;
    }
L_08B50264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[18] = (2237u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08B50288;
      }
      goto L_08B50274;
    }
L_08B50274:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[19]);
    aot_gpr_31 = (0x08B50280u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50280u) goto L_08B50280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50280:
    aot_gpr_31 = (0x08B50288u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5592));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50288u) goto L_08B50288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50288:
    aot_gpr_31 = (0x08B50290u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50290u) goto L_08B50290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50290:
    aot_gpr_4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[16] != aot_gpr_4;
    ctx.gpr[18] = (aot_gpr_2 | 0u);
      if (branch_taken) {
          goto L_08B502A8;
      }
      goto L_08B5029C;
    }
L_08B5029C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    aot_gpr_31 = (0x08B502A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 516u, 0x08AC5D44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B502A8u) goto L_08B502A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B502A8:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B502C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B502E4;
      }
      goto L_08B502DC;
    }
L_08B502DC:
    aot_gpr_31 = (0x08B502E4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B502E4u) goto L_08B502E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B502E4:
    aot_gpr_31 = (0x08B502ECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B502ECu) goto L_08B502EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B502EC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B50310;
      }
      goto L_08B502F8;
    }
L_08B502F8:
    aot_gpr_31 = (0x08B50300u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50300u) goto L_08B50300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50300:
    aot_gpr_31 = (0x08B50308u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B51514;
L_08B50308:
    aot_gpr_31 = (0x08B50310u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B51B08;
L_08B50310:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50320:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    jump_target = aot_gpr_5;
    aot_gpr_31 = (0x08B50340u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50340u) goto L_08B50340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50340:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5034C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B50360u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50360u) goto L_08B50360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50360:
    if (aot_gpr_2 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_08B50370;
    }
    goto L_08B50368;
L_08B50368:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B50390;
      }
      goto L_08B50370;
    }
L_08B50370:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), aot_gpr_5);
    aot_gpr_2 = (0u | 1u);
    goto L_08B50390;
L_08B50390:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B503A0:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B503A8:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B503B0:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B503B8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08B503D4u);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 585u, 0x08AC62A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B503D4u) goto L_08B503D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B503D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08B503FC;
      }
      goto L_08B503E8;
    }
L_08B503E8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), ctx.gpr[18]);
    aot_gpr_31 = (0x08B503F4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B503F4u) goto L_08B503F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B503F4:
    aot_gpr_31 = (0x08B503FCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5592));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B503FCu) goto L_08B503FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B503FC:
    aot_gpr_31 = (0x08B50404u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 613u, 0x0882E9C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50404u) goto L_08B50404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50404:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B5042C;
      }
      goto L_08B5040C;
    }
L_08B5040C:
    aot_gpr_31 = (0x08B50414u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(0u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 412u, 0x08AABB88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50414u) goto L_08B50414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50414:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50424;
      }
      goto L_08B5041C;
    }
L_08B5041C:
    aot_gpr_31 = (0x08B50424u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 561u, 0x08A0638Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50424u) goto L_08B50424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50550;
      }
      goto L_08B5042C;
    }
L_08B5042C:
    aot_gpr_31 = (0x08B50434u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B51514;
L_08B50434:
    aot_gpr_31 = (0x08B5043Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B517D4;
L_08B5043C:
    aot_gpr_31 = (0x08B50444u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B51AA4;
L_08B50444:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_6 = (0u | 20u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B504D4;
      }
      goto L_08B50464;
    }
L_08B50464:
    aot_gpr_31 = (0x08B5046Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 563u, 0x08AC6170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5046Cu) goto L_08B5046C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5046C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B504D4;
      }
      goto L_08B50474;
    }
L_08B50474:
    aot_gpr_31 = (0x08B5047Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B519D0;
L_08B5047C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50548;
      }
      goto L_08B50488;
    }
L_08B50488:
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(244), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08B50494u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B50E9C;
L_08B50494:
    aot_gpr_31 = (0x08B5049Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B50D3C;
L_08B5049C:
    aot_gpr_31 = (0x08B504A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B52060;
L_08B504A4:
    aot_gpr_31 = (0x08B504ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B51538;
L_08B504AC:
    aot_gpr_31 = (0x08B504B4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B51548;
L_08B504B4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B504C0u);
    aot_gpr_5 = (0u | 0u);
    goto L_08B5164C;
L_08B504C0:
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    aot_gpr_31 = (0x08B504CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B50A0C;
L_08B504CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50548;
      }
      goto L_08B504D4;
    }
L_08B504D4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(253)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B50548;
      }
      goto L_08B504E0;
    }
L_08B504E0:
    aot_gpr_31 = (0x08B504E8u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B504E8u) goto L_08B504E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B504E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08B50500;
      }
      goto L_08B504F4;
    }
L_08B504F4:
    aot_gpr_31 = (0x08B504FCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B504FCu) goto L_08B504FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B504FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B50500;
L_08B50500:
    aot_gpr_31 = (0x08B50508u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50508u) goto L_08B50508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50508:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B50514u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50514u) goto L_08B50514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08B5052C;
      }
      goto L_08B50520;
    }
L_08B50520:
    aot_gpr_31 = (0x08B50528u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50528u) goto L_08B50528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B5052C;
L_08B5052C:
    aot_gpr_31 = (0x08B50534u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50534u) goto L_08B50534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50534:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B50548u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50548u) goto L_08B50548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50548:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B50550;
L_08B50550:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50568:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50570:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 20u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[9] & 255u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[17] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08B505C4;
      }
      goto L_08B505B8;
    }
L_08B505B8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08B505D0;
      }
      goto L_08B505C4;
    }
L_08B505C4:
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
    goto L_08B505D0;
L_08B505D0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08B50634;
      }
      goto L_08B505D8;
    }
L_08B505D8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (ctx.gpr[17] << 4u);
    aot_gpr_6 = (ctx.gpr[17] << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_31 = (0x08B505F8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B505F8u) goto L_08B505F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B505F8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      ctx.gpr[7] = aot_run_words[2];
    }
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08B50634;
      }
      goto L_08B50610;
    }
L_08B50610:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_gpr_31 = (0x08B50624u);
    aot_gpr_4 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50624u) goto L_08B50624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50624:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    goto L_08B50634;
L_08B50634:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B5068C;
      }
      goto L_08B50644;
    }
L_08B50644:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
        goto L_08B50684;
    }
    goto L_08B5064C;
L_08B5064C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(20));
    goto L_08B50684;
L_08B50684:
    { const bool branch_taken = ctx.gpr[7] != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B50644;
      }
      goto L_08B5068C;
    }
L_08B5068C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B506E4;
      }
      goto L_08B5069C;
    }
L_08B5069C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B506D8;
      }
      goto L_08B506A4;
    }
L_08B506A4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), aot_gpr_6);
    goto L_08B506D8;
L_08B506D8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B50738;
      }
      goto L_08B506E4;
    }
L_08B506E4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B50734;
      }
      goto L_08B506EC;
    }
L_08B506EC:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
        goto L_08B5072C;
    }
    goto L_08B506F4;
L_08B506F4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08B5072C;
L_08B5072C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B506EC;
      }
      goto L_08B50734;
    }
L_08B50734:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B50738;
L_08B50738:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5079C;
      }
      goto L_08B50740;
    }
L_08B50740:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B5079C;
      }
      goto L_08B50750;
    }
L_08B50750:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
        goto L_08B50790;
    }
    goto L_08B50758;
L_08B50758:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), aot_gpr_6);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), aot_gpr_6);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    goto L_08B50790;
L_08B50790:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B50750;
      }
      goto L_08B50798;
    }
L_08B50798:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08B5079C;
L_08B5079C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B507B8;
      }
      goto L_08B507AC;
    }
L_08B507AC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    goto L_08B507B0;
L_08B507B0:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B507B0;
      }
      goto L_08B507B8;
    }
L_08B507B8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B507C8;
      }
      goto L_08B507C0;
    }
L_08B507C0:
    aot_gpr_31 = (0x08B507C8u);
    // nop
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08ABE398, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[8], ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B507C8u) goto L_08B507C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B507C8:
    aot_gpr_4 = (ctx.gpr[17] << 4u);
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), aot_gpr_4);
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50800:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[7]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_6 = (aot_gpr_5 - aot_gpr_5);
    ctx.gpr[7] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B5089C;
      }
      goto L_08B50854;
    }
L_08B50854:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B50854;
      }
      goto L_08B50898;
    }
L_08B50898:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_08B5089C;
L_08B5089C:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B508B4;
      }
      goto L_08B508A8;
    }
L_08B508A8:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
    goto L_08B508AC;
L_08B508AC:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B508AC;
      }
      goto L_08B508B4;
    }
L_08B508B4:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 12u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(23));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    ctx.gpr[19] = (0u | 0u);
    goto L_08B508D8;
L_08B508D8:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B508F0;
    }
    goto L_08B508E0;
L_08B508E0:
    aot_gpr_31 = (0x08B508E8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B508E8u) goto L_08B508E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B508E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B508F0;
L_08B508F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B509E0;
      }
      goto L_08B5090C;
    }
L_08B5090C:
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
        goto L_08B50924;
    }
    goto L_08B50914;
L_08B50914:
    aot_gpr_31 = (0x08B5091Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5091Cu) goto L_08B5091C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5091C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    goto L_08B50924;
L_08B50924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(aot_gpr_5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (ctx.lo);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B509B0;
      }
      goto L_08B50960;
    }
L_08B50960:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
        goto L_08B509A4;
    }
    goto L_08B50968;
L_08B50968:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
    goto L_08B509A4;
L_08B509A4:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
      if (branch_taken) {
          goto L_08B509D4;
      }
      goto L_08B509B0;
    }
L_08B509B0:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_gpr_31 = (0x08B509D0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08B50570;
L_08B509D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B509D4;
L_08B509D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B508D8;
      }
      goto L_08B509E0;
    }
L_08B509E0:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50A0C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B50A44;
      }
      goto L_08B50A24;
    }
L_08B50A24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
        goto L_08B50A3C;
    }
    goto L_08B50A30;
L_08B50A30:
    aot_gpr_31 = (0x08B50A38u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50A38u) goto L_08B50A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50A38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B50A3C;
L_08B50A3C:
    aot_gpr_31 = (0x08B50A44u);
    aot_gpr_5 = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 512u, 0x088B6B44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50A44u) goto L_08B50A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50A44:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50A54:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[19] = (aot_gpr_5 & 255u);
    ctx.gpr[18] = (0u | 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28416));
      if (branch_taken) {
          goto L_08B50A94;
      }
      goto L_08B50A88;
    }
L_08B50A88:
    aot_gpr_31 = (0x08B50A90u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50A90u) goto L_08B50A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50A90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B50A94;
L_08B50A94:
    aot_gpr_31 = (0x08B50A9Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50A9Cu) goto L_08B50A9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50A9C:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_2);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
      if (branch_taken) {
          goto L_08B50ACC;
      }
      goto L_08B50AA8;
    }
L_08B50AA8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B50ABC;
      }
      goto L_08B50AB0;
    }
L_08B50AB0:
    aot_gpr_31 = (0x08B50AB8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50AB8u) goto L_08B50AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50AB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B50ABC;
L_08B50ABC:
    aot_gpr_31 = (0x08B50AC4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 713u, 0x089C70D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50AC4u) goto L_08B50AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50AC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B50B10;
      }
      goto L_08B50ACC;
    }
L_08B50ACC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B50AE0;
      }
      goto L_08B50AD4;
    }
L_08B50AD4:
    aot_gpr_31 = (0x08B50ADCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50ADCu) goto L_08B50ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50ADC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B50AE0;
L_08B50AE0:
    aot_gpr_31 = (0x08B50AE8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50AE8u) goto L_08B50AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50AE8:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B50B10;
      }
      goto L_08B50AF0;
    }
L_08B50AF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B50B08;
      }
      goto L_08B50AFC;
    }
L_08B50AFC:
    aot_gpr_31 = (0x08B50B04u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50B04u) goto L_08B50B04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B50B08;
L_08B50B08:
    aot_gpr_31 = (0x08B50B10u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 713u, 0x089C70D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50B10u) goto L_08B50B10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B10:
    aot_gpr_31 = (0x08B50B18u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B50800;
L_08B50B18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5612));
      if (branch_taken) {
          goto L_08B50B40;
      }
      goto L_08B50B24;
    }
L_08B50B24:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), aot_gpr_4);
    aot_gpr_31 = (0x08B50B34u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50B34u) goto L_08B50B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B34:
    aot_gpr_31 = (0x08B50B3Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5592));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60680, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, ctx.pc, ctx.gpr[1], aot_gpr_2, aot_gpr_4, aot_gpr_5, ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50B3Cu) goto L_08B50B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B3C:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5612));
    goto L_08B50B40;
L_08B50B40:
    aot_gpr_31 = (0x08B50B48u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0010_entry, 10u, 592u, 0x0882E880u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50B48u) goto L_08B50B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B48:
    aot_gpr_31 = (0x08B50B50u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0183_entry, 183u, 623u, 0x08AE2438u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50B50u) goto L_08B50B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B50:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B50B84u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 561u, 0x08A0638Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50B84u) goto L_08B50B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B84:
    aot_gpr_4 = (0u | 20u);
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), aot_gpr_4);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50B9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (0u | 20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[8] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B50C60;
      }
      goto L_08B50BD0;
    }
L_08B50BD0:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[9] = (0u | 0u);
    goto L_08B50BE0;
L_08B50BE0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B50C2C;
      }
      goto L_08B50BE8;
    }
L_08B50BE8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B50C04u);
    aot_gpr_4 = (ctx.gpr[10] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50C04u) goto L_08B50C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50C04:
    aot_gpr_31 = (0x08B50C0Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50C0Cu) goto L_08B50C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50C0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (0u | 20u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08B50C2C;
L_08B50C2C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[8] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B50BE0;
      }
      goto L_08B50C60;
    }
L_08B50C60:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50C6C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_6 = (0u | 20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 2u));
    ctx.gpr[8] = (0u | 0u);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[8] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B50D30;
      }
      goto L_08B50CA0;
    }
L_08B50CA0:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[9] = (0u | 0u);
    goto L_08B50CB0;
L_08B50CB0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (ctx.gpr[7] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08B50CFC;
      }
      goto L_08B50CB8;
    }
L_08B50CB8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B50CD4u);
    aot_gpr_4 = (ctx.gpr[10] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50CD4u) goto L_08B50CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50CD4:
    aot_gpr_31 = (0x08B50CDCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50CDCu) goto L_08B50CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50CDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (0u | 20u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (ctx.gpr[7] + ctx.gpr[9]);
    goto L_08B50CFC;
L_08B50CFC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[8] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B50CB0;
      }
      goto L_08B50D30;
    }
L_08B50D30:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50D3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 20u);
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[18]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08B50D9C;
      }
      goto L_08B50D7C;
    }
L_08B50D7C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08B50D88u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50D88u) goto L_08B50D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50D88:
    aot_gpr_31 = (0x08B50D90u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50D90u) goto L_08B50D90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50D90:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 << 4u);
    goto L_08B50D9C;
L_08B50D9C:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x08B50DBCu);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B514A8;
L_08B50DBC:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50DE4;
      }
      goto L_08B50DD0;
    }
L_08B50DD0:
    aot_gpr_5 = (ctx.gpr[18] - aot_gpr_4);
    aot_gpr_31 = (0x08B50DDCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B50B9C;
L_08B50DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50DFC;
      }
      goto L_08B50DE4;
    }
L_08B50DE4:
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50DFC;
      }
      goto L_08B50DF0;
    }
L_08B50DF0:
    aot_gpr_5 = (aot_gpr_4 - ctx.gpr[18]);
    aot_gpr_31 = (0x08B50DFCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B50C6C;
L_08B50DFC:
    aot_gpr_31 = (0x08B50E04u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50E04u) goto L_08B50E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50E04:
    aot_gpr_31 = (0x08B50E0Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 998u, 0x0898BD24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50E0Cu) goto L_08B50E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50E0C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50E58;
      }
      goto L_08B50E14;
    }
L_08B50E14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), aot_gpr_5);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_6 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50E84;
      }
      goto L_08B50E44;
    }
L_08B50E44:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), aot_gpr_4);
      if (branch_taken) {
          goto L_08B50E84;
      }
      goto L_08B50E58;
    }
L_08B50E58:
    aot_gpr_31 = (0x08B50E60u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50E60u) goto L_08B50E60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50E60:
    aot_gpr_31 = (0x08B50E68u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0097_entry, 97u, 988u, 0x0898BCCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50E68u) goto L_08B50E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50E68:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B50E84;
      }
      goto L_08B50E70;
    }
L_08B50E70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), aot_gpr_4);
      if (branch_taken) {
          goto L_08B50E84;
      }
      goto L_08B50E80;
    }
L_08B50E80:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), 0u);
    goto L_08B50E84;
L_08B50E84:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50E9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-240));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(228), ctx.gpr[30]);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), ctx.gpr[16]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(216), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), aot_gpr_31);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[30] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_fpr_20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08B50F14;
      }
      goto L_08B50F04;
    }
L_08B50F04:
    aot_gpr_31 = (0x08B50F0Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50F0Cu) goto L_08B50F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50F0C:
    aot_gpr_31 = (0x08B50F14u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50F14u) goto L_08B50F14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50F14:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (ctx.gpr[30] << 4u);
    aot_gpr_6 = (ctx.gpr[30] << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B50F40u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_5);
    goto L_08B514A8;
L_08B50F40:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B51468;
      }
      goto L_08B50F68;
    }
L_08B50F68:
    aot_gpr_4 = (17948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (0u | 12u);
    aot_gpr_4 = (16000u << 16u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    goto L_08B50F94;
L_08B50F94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B513C0;
      }
      goto L_08B50FA0;
    }
L_08B50FA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08B513C0;
      }
      goto L_08B50FAC;
    }
L_08B50FAC:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B50FD4;
      }
      goto L_08B50FC0;
    }
L_08B50FC0:
    aot_gpr_31 = (0x08B50FC8u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50FC8u) goto L_08B50FC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50FC8:
    aot_gpr_31 = (0x08B50FD0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50FD0u) goto L_08B50FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50FD0:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    goto L_08B50FD4;
L_08B50FD4:
    aot_gpr_4 = (ctx.gpr[16] + ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B50FF8;
    }
    goto L_08B50FE8;
L_08B50FE8:
    aot_gpr_31 = (0x08B50FF0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B50FF0u) goto L_08B50FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B50FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B50FF8;
L_08B50FF8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[16] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51028;
      }
      goto L_08B51014;
    }
L_08B51014:
    aot_gpr_31 = (0x08B5101Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5101Cu) goto L_08B5101C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5101C:
    aot_gpr_31 = (0x08B51024u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51024u) goto L_08B51024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51024:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B51028;
L_08B51028:
    aot_gpr_5 = (ctx.gpr[16] + ctx.gpr[16]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[16] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B51050;
      }
      goto L_08B51044;
    }
L_08B51044:
    aot_gpr_31 = (0x08B5104Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5104Cu) goto L_08B5104C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5104C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B51050;
L_08B51050:
    aot_gpr_31 = (0x08B51058u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 440u, 0x088B6698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51058u) goto L_08B51058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51058:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B51064u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51064u) goto L_08B51064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51064:
    aot_gpr_31 = (0x08B5106Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 96u, 0x08B0C748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5106Cu) goto L_08B5106C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5106C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B51078u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 283u, 0x08AFD8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51078u) goto L_08B51078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51078:
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08B51090u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51090u) goto L_08B51090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51090:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B510A8u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B510A8u) goto L_08B510A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B510A8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_gpr_6 - ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
      if (branch_taken) {
          goto L_08B510CC;
      }
      goto L_08B510C8;
    }
L_08B510C8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    goto L_08B510CC;
L_08B510CC:
    ctx.gpr[9] = (static_cast<std::int32_t>(aot_gpr_6) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B510DC;
      }
      goto L_08B510D8;
    }
L_08B510D8:
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    goto L_08B510DC;
L_08B510DC:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51324;
      }
      goto L_08B510E8;
    }
L_08B510E8:
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[8]) < 25 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(220)));
      if (branch_taken) {
          goto L_08B510F8;
      }
      goto L_08B510F4;
    }
L_08B510F4:
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08B510F8;
L_08B510F8:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[18] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08B5113C;
      }
      goto L_08B5110C;
    }
L_08B5110C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), ctx.gpr[8]);
    aot_gpr_31 = (0x08B5111Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5111Cu) goto L_08B5111C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5111C:
    aot_gpr_31 = (0x08B51124u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51124u) goto L_08B51124;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51124:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    goto L_08B5113C;
L_08B5113C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B51244;
      }
      goto L_08B51150;
    }
L_08B51150:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[18] < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
        goto L_08B51198;
    }
    goto L_08B51164;
L_08B51164:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), ctx.gpr[8]);
    aot_gpr_31 = (0x08B51174u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51174u) goto L_08B51174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51174:
    aot_gpr_31 = (0x08B5117Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5117Cu) goto L_08B5117C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5117C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(172)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    goto L_08B51198;
L_08B51198:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B511F8;
      }
      goto L_08B511B0;
    }
L_08B511B0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B511E8;
    }
    goto L_08B511C4;
L_08B511C4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B511D0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B511D0u) goto L_08B511D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B511D0:
    aot_gpr_31 = (0x08B511D8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B511D8u) goto L_08B511D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B511D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B511E8;
L_08B511E8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
      if (branch_taken) {
          goto L_08B51324;
      }
      goto L_08B511F8;
    }
L_08B511F8:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B51230;
    }
    goto L_08B5120C;
L_08B5120C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B51218u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51218u) goto L_08B51218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51218:
    aot_gpr_31 = (0x08B51220u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51220u) goto L_08B51220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51220:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    goto L_08B51230;
L_08B51230:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
      if (branch_taken) {
          goto L_08B51324;
      }
      goto L_08B51244;
    }
L_08B51244:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[18] < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
        goto L_08B51284;
    }
    goto L_08B51258;
L_08B51258:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B51264u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51264u) goto L_08B51264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51264:
    aot_gpr_31 = (0x08B5126Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5126Cu) goto L_08B5126C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5126C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    goto L_08B51284;
L_08B51284:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B512E0;
      }
      goto L_08B51294;
    }
L_08B51294:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
        goto L_08B512CC;
    }
    goto L_08B512A8;
L_08B512A8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B512B4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B512B4u) goto L_08B512B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B512B4:
    aot_gpr_31 = (0x08B512BCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B512BCu) goto L_08B512BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B512BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    goto L_08B512CC;
L_08B512CC:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
      if (branch_taken) {
          goto L_08B51324;
      }
      goto L_08B512E0;
    }
L_08B512E0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B51318;
    }
    goto L_08B512F4;
L_08B512F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B51300u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51300u) goto L_08B51300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51300:
    aot_gpr_31 = (0x08B51308u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51308u) goto L_08B51308;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51308:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(176)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B51318;
L_08B51318:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    goto L_08B51324;
L_08B51324:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[18] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51354;
      }
      goto L_08B51338;
    }
L_08B51338:
    aot_gpr_31 = (0x08B51340u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51340u) goto L_08B51340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51340:
    aot_gpr_31 = (0x08B51348u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51348u) goto L_08B51348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51348:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    goto L_08B51354;
L_08B51354:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[19]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (ctx.gpr[18] < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B51398;
      }
      goto L_08B51370;
    }
L_08B51370:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B51380u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51380u) goto L_08B51380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51380:
    aot_gpr_31 = (0x08B51388u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51388u) goto L_08B51388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51388:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(164)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(168)));
    goto L_08B51398;
L_08B51398:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51458;
      }
      goto L_08B513C0;
    }
L_08B513C0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B513F0;
      }
      goto L_08B513D4;
    }
L_08B513D4:
    aot_gpr_31 = (0x08B513DCu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B513DCu) goto L_08B513DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B513DC:
    aot_gpr_31 = (0x08B513E4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B513E4u) goto L_08B513E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B513E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[16]);
    goto L_08B513F0;
L_08B513F0:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[18] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B51434;
      }
      goto L_08B5140C;
    }
L_08B5140C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B5141Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5141Cu) goto L_08B5141C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5141C:
    aot_gpr_31 = (0x08B51424u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51424u) goto L_08B51424;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51424:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(160)));
    goto L_08B51434;
L_08B51434:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[16]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    goto L_08B51458;
L_08B51458:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B50F94;
      }
      goto L_08B51468;
    }
L_08B51468:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.gpr[16] = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      ctx.gpr[21] = aot_run_words[9];
      ctx.gpr[22] = aot_run_words[10];
      ctx.gpr[23] = aot_run_words[11];
      ctx.gpr[30] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B514A8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(216)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_5 = (ctx.lo);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B514E4;
      }
      goto L_08B514D8;
    }
L_08B514D8:
    aot_gpr_5 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    goto L_08B514E4;
L_08B514E4:
    ctx.fpr[0] = aot_fpr_13 / aot_fpr_12;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(200)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(196)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_6 = (aot_gpr_6 >> 31u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 1u));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    jump_target = aot_gpr_31;
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51514:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08B51524u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(240)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51524u) goto L_08B51524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51524:
    aot_gpr_31 = (0x08B5152Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 66u, 0x08B0C510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5152Cu) goto L_08B5152C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5152C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51540;
      }
      goto L_08B51540;
    }
L_08B51540:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51548:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51550:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B51578;
      }
      goto L_08B51570;
    }
L_08B51570:
    aot_gpr_31 = (0x08B51578u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51578u) goto L_08B51578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51578:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_2 = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_2 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B51634;
      }
      goto L_08B515B0;
    }
L_08B515B0:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    aot_gpr_4 = (0u | 0u);
    goto L_08B515B8;
L_08B515B8:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_4);
      if (branch_taken) {
          goto L_08B515F8;
      }
      goto L_08B515C0;
    }
L_08B515C0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_2);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08B515D8u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B515D8u) goto L_08B515D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B515D8:
    aot_gpr_31 = (0x08B515E0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B515E0u) goto L_08B515E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B515E0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_2 = aot_run_words[2];
      ctx.gpr[8] = aot_run_words[3];
    }
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_4);
    goto L_08B515F8;
L_08B515F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08B5162C;
      }
      goto L_08B51604;
    }
L_08B51604:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_2 = (aot_gpr_2 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_2 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B515B8;
      }
      goto L_08B51624;
    }
L_08B51624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51634;
      }
      goto L_08B5162C;
    }
L_08B5162C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51638;
      }
      goto L_08B51634;
    }
L_08B51634:
    aot_gpr_2 = (0u | 0u);
    goto L_08B51638;
L_08B51638:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5164C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B5166Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5166Cu) goto L_08B5166C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5166C:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B5168C;
      }
      goto L_08B5167C;
    }
L_08B5167C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5168C;
      }
      goto L_08B51688;
    }
L_08B51688:
    aot_gpr_4 = (0u | 1u);
    goto L_08B5168C;
L_08B5168C:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (aot_gpr_4 | ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B517C0;
      }
      goto L_08B5169C;
    }
L_08B5169C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B516B4;
      }
      goto L_08B516A8;
    }
L_08B516A8:
    aot_gpr_31 = (0x08B516B0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B516B0u) goto L_08B516B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B516B0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B516B4;
L_08B516B4:
    aot_gpr_31 = (0x08B516BCu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6860u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B516BCu) goto L_08B516BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B516BC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B517C0;
      }
      goto L_08B516C4;
    }
L_08B516C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_08B516E0;
    }
    goto L_08B516D0;
L_08B516D0:
    aot_gpr_31 = (0x08B516D8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B516D8u) goto L_08B516D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B516D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_08B516E0;
L_08B516E0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    ctx.gpr[7] = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08B51728;
      }
      goto L_08B51704;
    }
L_08B51704:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08B51714u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51714u) goto L_08B51714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51714:
    aot_gpr_31 = (0x08B5171Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5171Cu) goto L_08B5171C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5171C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_gpr_4 << 4u);
    goto L_08B51728;
L_08B51728:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08B51748u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 556u, 0x088B6ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51748u) goto L_08B51748;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51748:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5175C;
      }
      goto L_08B51754;
    }
L_08B51754:
    aot_gpr_31 = (0x08B5175Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5175Cu) goto L_08B5175C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5175C:
    aot_gpr_31 = (0x08B51764u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51764u) goto L_08B51764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51764:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B517C0;
      }
      goto L_08B51770;
    }
L_08B51770:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08B5178C;
      }
      goto L_08B5177C;
    }
L_08B5177C:
    aot_gpr_31 = (0x08B51784u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51784u) goto L_08B51784;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51784:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08B5178C;
L_08B5178C:
    aot_gpr_31 = (0x08B51794u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51794u) goto L_08B51794;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51794:
    aot_gpr_31 = (0x08B5179Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5179Cu) goto L_08B5179C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5179C:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B517ACu);
    aot_gpr_5 = (0u | 111u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B517ACu) goto L_08B517AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B517AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (0u | 111u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B517C0u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B517C0u) goto L_08B517C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B517C0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B517D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51800;
      }
      goto L_08B517F4;
    }
L_08B517F4:
    aot_gpr_31 = (0x08B517FCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B517FCu) goto L_08B517FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B517FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B51800;
L_08B51800:
    aot_gpr_31 = (0x08B51808u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51808u) goto L_08B51808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51808:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B519BC;
      }
      goto L_08B51814;
    }
L_08B51814:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B5182C;
      }
      goto L_08B51820;
    }
L_08B51820:
    aot_gpr_31 = (0x08B51828u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51828u) goto L_08B51828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51828:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B5182C;
L_08B5182C:
    aot_gpr_31 = (0x08B51834u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51834u) goto L_08B51834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51834:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51850;
      }
      goto L_08B51844;
    }
L_08B51844:
    aot_gpr_31 = (0x08B5184Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5184Cu) goto L_08B5184C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5184C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B51850;
L_08B51850:
    aot_gpr_31 = (0x08B51858u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 712u, 0x089C70C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51858u) goto L_08B51858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51858:
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_5;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
      if (branch_taken) {
          goto L_08B518F0;
      }
      goto L_08B51864;
    }
L_08B51864:
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08B51878;
      }
      goto L_08B5186C;
    }
L_08B5186C:
    aot_gpr_31 = (0x08B51874u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51874u) goto L_08B51874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51874:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B51878;
L_08B51878:
    aot_gpr_31 = (0x08B51880u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51880u) goto L_08B51880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51880:
    aot_gpr_31 = (0x08B51888u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51888u) goto L_08B51888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51888:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B518A0;
      }
      goto L_08B51894;
    }
L_08B51894:
    aot_gpr_31 = (0x08B5189Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5189Cu) goto L_08B5189C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5189C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B518A0;
L_08B518A0:
    aot_gpr_31 = (0x08B518A8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B518A8u) goto L_08B518A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B518A8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B518B4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B518B4u) goto L_08B518B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B518B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08B518CC;
      }
      goto L_08B518C0;
    }
L_08B518C0:
    aot_gpr_31 = (0x08B518C8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B518C8u) goto L_08B518C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B518C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_08B518CC;
L_08B518CC:
    aot_gpr_31 = (0x08B518D4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B518D4u) goto L_08B518D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B518D4:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B518E8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B518E8u) goto L_08B518E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B518E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B519BC;
      }
      goto L_08B518F0;
    }
L_08B518F0:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51904;
      }
      goto L_08B518F8;
    }
L_08B518F8:
    aot_gpr_31 = (0x08B51900u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51900u) goto L_08B51900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51900:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B51904;
L_08B51904:
    aot_gpr_31 = (0x08B5190Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 472u, 0x088B6860u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5190Cu) goto L_08B5190C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5190C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B519BC;
      }
      goto L_08B51914;
    }
L_08B51914:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08B5192C;
      }
      goto L_08B51920;
    }
L_08B51920:
    aot_gpr_31 = (0x08B51928u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51928u) goto L_08B51928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B5192C;
L_08B5192C:
    aot_gpr_31 = (0x08B51934u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 277u, 0x088B5BCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51934u) goto L_08B51934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51934:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_6 = (0u | 20u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51994;
      }
      goto L_08B5195C;
    }
L_08B5195C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
        goto L_08B51978;
    }
    goto L_08B51968;
L_08B51968:
    aot_gpr_31 = (0x08B51970u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51970u) goto L_08B51970;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51970:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    goto L_08B51978;
L_08B51978:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_31 = (0x08B51994u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 556u, 0x088B6ED4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51994u) goto L_08B51994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51994:
    aot_gpr_31 = (0x08B5199Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0169_entry, 169u, 404u, 0x08AABAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5199Cu) goto L_08B5199C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5199C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B519A8u);
    aot_gpr_5 = (0u | 111u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 627u, 0x08A06798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B519A8u) goto L_08B519A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B519A8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 111u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B519BCu);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B519BCu) goto L_08B519BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B519BC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B519D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(252)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[16] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B51A58;
      }
      goto L_08B519E8;
    }
L_08B519E8:
    aot_gpr_31 = (0x08B519F0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B519F0u) goto L_08B519F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B519F0:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(40))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B51A10;
      }
      goto L_08B51A00;
    }
L_08B51A00:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(90))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08B51A14;
      }
      goto L_08B51A0C;
    }
L_08B51A0C:
    aot_gpr_4 = (0u | 1u);
    goto L_08B51A10;
L_08B51A10:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08B51A14;
L_08B51A14:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51A50;
      }
      goto L_08B51A1C;
    }
L_08B51A1C:
    aot_gpr_31 = (0x08B51A24u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51A24u) goto L_08B51A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51A24:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(44))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B51A44;
      }
      goto L_08B51A34;
    }
L_08B51A34:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(94))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08B51A48;
      }
      goto L_08B51A40;
    }
L_08B51A40:
    aot_gpr_4 = (0u | 1u);
    goto L_08B51A44;
L_08B51A44:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08B51A48;
L_08B51A48:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51A94;
      }
      goto L_08B51A50;
    }
L_08B51A50:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08B51A94;
      }
      goto L_08B51A58;
    }
L_08B51A58:
    aot_gpr_31 = (0x08B51A60u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51A60u) goto L_08B51A60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51A60:
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(42))))));
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B51A80;
      }
      goto L_08B51A70;
    }
L_08B51A70:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(92))))));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08B51A84;
      }
      goto L_08B51A7C;
    }
L_08B51A7C:
    aot_gpr_4 = (0u | 1u);
    goto L_08B51A80;
L_08B51A80:
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08B51A84;
L_08B51A84:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51A94;
      }
      goto L_08B51A8C;
    }
L_08B51A8C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B51A94;
L_08B51A94:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51AA4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B51AC8;
      }
      goto L_08B51ABC;
    }
L_08B51ABC:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(256), aot_gpr_5);
      if (branch_taken) {
          goto L_08B51AF8;
      }
      goto L_08B51AC8;
    }
L_08B51AC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08B51ADC;
      }
      goto L_08B51AD4;
    }
L_08B51AD4:
    aot_gpr_31 = (0x08B51ADCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51ADCu) goto L_08B51ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51ADC:
    aot_gpr_31 = (0x08B51AE4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51AE4u) goto L_08B51AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51AE4:
    aot_gpr_5 = (aot_gpr_2 & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B51AF8u);
    ctx.gpr[7] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51AF8u) goto L_08B51AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51AF8:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51B08:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), ctx.gpr[18]);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_run_words); }
    aot_gpr_31 = (0x08B51B90u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08873400, 27u, 732u, 0x08873400u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_31, aot_fpr_12, aot_fpr_13, aot_fpr_14, ctx.fpr[15]); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51B90u) goto L_08B51B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51B90:
    aot_gpr_31 = (0x08B51B98u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 563u, 0x08AC6170u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51B98u) goto L_08B51B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51B98:
    ctx.gpr[23] = (0u | 20u);
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B51BF4;
      }
      goto L_08B51BA4;
    }
L_08B51BA4:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(25)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(26)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(27)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(20));
    aot_gpr_31 = (0x08B51BECu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 99u, 0x08B0C778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51BECu) goto L_08B51BEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51BEC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
      if (branch_taken) {
          goto L_08B51C40;
      }
      goto L_08B51BF4;
    }
L_08B51BF4:
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(33)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(34)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(35)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_31 = (0x08B51C3Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 99u, 0x08B0C778u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51C3Cu) goto L_08B51C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51C3C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    goto L_08B51C40;
L_08B51C40:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51C70;
      }
      goto L_08B51C48;
    }
L_08B51C48:
    aot_gpr_4 = (0u | 64u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    aot_gpr_31 = (0x08B51C68u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 104u, 0x08B0C7E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51C68u) goto L_08B51C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51C98;
      }
      goto L_08B51C70;
    }
L_08B51C70:
    ctx.gpr[17] = (0u | 64u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_gpr_31 = (0x08B51C94u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 104u, 0x08B0C7E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51C94u) goto L_08B51C94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51C94:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08B51C98;
L_08B51C98:
    aot_gpr_31 = (0x08B51CA0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51CA0u) goto L_08B51CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51CA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51D28;
      }
      goto L_08B51CBC;
    }
L_08B51CBC:
    aot_gpr_31 = (0x08B51CC4u);
    aot_gpr_4 = (0u | 18u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51CC4u) goto L_08B51CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51CC4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08B51CFC;
    }
    goto L_08B51CD0;
L_08B51CD0:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08B51CDCu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51CDCu) goto L_08B51CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51CDC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B51CF4;
      }
      goto L_08B51CE8;
    }
L_08B51CE8:
    aot_gpr_31 = (0x08B51CF0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_089F620C, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51CF0u) goto L_08B51CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51CF0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08B51CF4;
L_08B51CF4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08B51CFC;
L_08B51CFC:
    aot_gpr_31 = (0x08B51D04u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5640));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51D04u) goto L_08B51D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51D04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    aot_gpr_4 = (aot_gpr_2 | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08B51D20u);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51D20u) goto L_08B51D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52030;
      }
      goto L_08B51D28;
    }
L_08B51D28:
    aot_gpr_31 = (0x08B51D30u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B0C604, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, ctx.gpr[28], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51D30u) goto L_08B51D30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51D30:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (ctx.gpr[19] - ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (ctx.gpr[18] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52030;
      }
      goto L_08B51D54;
    }
L_08B51D54:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.gpr[20] = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(52));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (ctx.lo);
    ctx.gpr[22] = (ctx.gpr[18] < ctx.gpr[22] ? 1u : 0u);
    goto L_08B51D74;
L_08B51D74:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51D90;
      }
      goto L_08B51D7C;
    }
L_08B51D7C:
    aot_gpr_31 = (0x08B51D84u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51D84u) goto L_08B51D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51D84:
    aot_gpr_31 = (0x08B51D8Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51D8Cu) goto L_08B51D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51D8C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B51D90;
L_08B51D90:
    aot_gpr_4 = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
        goto L_08B51DB4;
    }
    goto L_08B51DA4;
L_08B51DA4:
    aot_gpr_31 = (0x08B51DACu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51DACu) goto L_08B51DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51DAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    goto L_08B51DB4;
L_08B51DB4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 12u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (ctx.gpr[17] < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51DE8;
      }
      goto L_08B51DD4;
    }
L_08B51DD4:
    aot_gpr_31 = (0x08B51DDCu);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51DDCu) goto L_08B51DDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51DDC:
    aot_gpr_31 = (0x08B51DE4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51DE4u) goto L_08B51DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51DE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B51DE8;
L_08B51DE8:
    aot_gpr_5 = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08B51E10;
      }
      goto L_08B51E04;
    }
L_08B51E04:
    aot_gpr_31 = (0x08B51E0Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51E0Cu) goto L_08B51E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51E0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    goto L_08B51E10;
L_08B51E10:
    aot_gpr_31 = (0x08B51E18u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 440u, 0x088B6698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51E18u) goto L_08B51E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51E18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.gpr[22] = (aot_gpr_2 | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B51E74;
      }
      goto L_08B51E44;
    }
L_08B51E44:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B51E50u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51E50u) goto L_08B51E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51E50:
    aot_gpr_31 = (0x08B51E58u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51E58u) goto L_08B51E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51E58:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_4);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    goto L_08B51E74;
L_08B51E74:
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08B51ECC;
      }
      goto L_08B51E98;
    }
L_08B51E98:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B51EA4u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51EA4u) goto L_08B51EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51EA4:
    aot_gpr_31 = (0x08B51EACu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51EACu) goto L_08B51EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51EAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_5 + ctx.gpr[19]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (ctx.lo);
    ctx.gpr[17] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    goto L_08B51ECC;
L_08B51ECC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B51F08;
      }
      goto L_08B51EF0;
    }
L_08B51EF0:
    aot_gpr_31 = (0x08B51EF8u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51EF8u) goto L_08B51EF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51EF8:
    aot_gpr_31 = (0x08B51F00u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51F00u) goto L_08B51F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51F00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[19]);
    goto L_08B51F08;
L_08B51F08:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B51F34;
      }
      goto L_08B51F14;
    }
L_08B51F14:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(233)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(234)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(235)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B51F34;
L_08B51F34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B51F60;
      }
      goto L_08B51F40;
    }
L_08B51F40:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(228)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(229)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(230)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(231)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B51F60;
L_08B51F60:
    aot_gpr_31 = (0x08B51F68u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    goto L_08B51550;
L_08B51F68:
    if (aot_gpr_2 != ctx.gpr[18]) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(200)));
        goto L_08B51F94;
    }
    goto L_08B51F70;
L_08B51F70:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(237)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(238)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(239)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(200)));
    goto L_08B51F94;
L_08B51F94:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(51)));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_31 = (0x08B51FDCu);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 851u, 0x08887B80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51FDCu) goto L_08B51FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51FDC:
    aot_gpr_31 = (0x08B51FE4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 96u, 0x08B0C748u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51FE4u) goto L_08B51FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51FE4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08B51FF0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 283u, 0x08AFD8D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B51FF0u) goto L_08B51FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B51FF0:
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08B5200Cu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5200Cu) goto L_08B5200C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5200C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 - ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.lo);
    ctx.gpr[22] = (ctx.gpr[18] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08B51D74;
      }
      goto L_08B52030;
    }
L_08B52030:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(212), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      ctx.gpr[30] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52060:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_31);
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B520B8;
      }
      goto L_08B52098;
    }
L_08B52098:
    aot_gpr_31 = (0x08B520A0u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B520A0u) goto L_08B520A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B520A0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = aot_gpr_5 != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B520C0;
      }
      goto L_08B520B0;
    }
L_08B520B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B520D0;
      }
      goto L_08B520B8;
    }
L_08B520B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52A54;
      }
      goto L_08B520C0;
    }
L_08B520C0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B520D0;
      }
      goto L_08B520CC;
    }
L_08B520CC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B520D0;
L_08B520D0:
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    aot_gpr_31 = (0x08B520DCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B520DCu) goto L_08B520DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B520DC:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B520FC;
      }
      goto L_08B520EC;
    }
L_08B520EC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(60))))));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_08B52100;
    }
    goto L_08B520F8;
L_08B520F8:
    aot_gpr_5 = (0u | 1u);
    goto L_08B520FC;
L_08B520FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_08B52100;
L_08B52100:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (0u | 0u);
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_08B52A54;
      }
      goto L_08B52124;
    }
L_08B52124:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    if (aot_gpr_4 != aot_gpr_6) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
        goto L_08B52A30;
    }
    goto L_08B52130;
L_08B52130:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B52174;
      }
      goto L_08B52154;
    }
L_08B52154:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_31 = (0x08B52164u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52164u) goto L_08B52164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52164:
    aot_gpr_31 = (0x08B5216Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5216Cu) goto L_08B5216C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5216C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    goto L_08B52174;
L_08B52174:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (aot_gpr_4 << 4u);
    ctx.gpr[8] = (aot_gpr_4 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B525E8;
      }
      goto L_08B52190;
    }
L_08B52190:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[9] = (0u | 20u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B525E8;
      }
      goto L_08B521B4;
    }
L_08B521B4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B52208;
    }
    goto L_08B521DC;
L_08B521DC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_gpr_5);
    aot_gpr_31 = (0x08B521F0u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B521F0u) goto L_08B521F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B521F0:
    aot_gpr_31 = (0x08B521F8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B521F8u) goto L_08B521F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B521F8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words);
      aot_gpr_5 = aot_run_words[0];
      aot_gpr_6 = aot_run_words[1];
      aot_gpr_4 = aot_run_words[2];
    }
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B52208;
L_08B52208:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[9] = (0u | 20u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B52260;
      }
      goto L_08B52238;
    }
L_08B52238:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_5);
    aot_gpr_31 = (0x08B5224Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5224Cu) goto L_08B5224C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5224C:
    aot_gpr_31 = (0x08B52254u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52254u) goto L_08B52254;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52254:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    goto L_08B52260;
L_08B52260:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_gpr_4 << 4u);
    ctx.gpr[9] = (aot_gpr_4 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (aot_gpr_5 << 4u);
      if (branch_taken) {
          goto L_08B522CC;
      }
      goto L_08B522A0;
    }
L_08B522A0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), aot_gpr_5);
    aot_gpr_31 = (0x08B522B4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B522B4u) goto L_08B522B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B522B4:
    aot_gpr_31 = (0x08B522BCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B522BCu) goto L_08B522BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B522BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[8] = (aot_gpr_5 << 4u);
    goto L_08B522CC;
L_08B522CC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B52320;
    }
    goto L_08B52304;
L_08B52304:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_31 = (0x08B52310u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52310u) goto L_08B52310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52310:
    aot_gpr_31 = (0x08B52318u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52318u) goto L_08B52318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52318:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B52320;
L_08B52320:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_gpr_4 << 4u);
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B5237C;
      }
      goto L_08B52354;
    }
L_08B52354:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_6);
    aot_gpr_31 = (0x08B52368u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52368u) goto L_08B52368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52368:
    aot_gpr_31 = (0x08B52370u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52370u) goto L_08B52370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52370:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    goto L_08B5237C;
L_08B5237C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[9] = (0u | 20u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (aot_gpr_6 << 4u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B523D8;
      }
      goto L_08B523B0;
    }
L_08B523B0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_6);
    aot_gpr_31 = (0x08B523C4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B523C4u) goto L_08B523C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B523C4:
    aot_gpr_31 = (0x08B523CCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B523CCu) goto L_08B523CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B523CC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    goto L_08B523D8;
L_08B523D8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_gpr_4 << 4u);
    ctx.gpr[9] = (aot_gpr_4 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (aot_gpr_6 << 4u);
      if (branch_taken) {
          goto L_08B52444;
      }
      goto L_08B52418;
    }
L_08B52418:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_6);
    aot_gpr_31 = (0x08B5242Cu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5242Cu) goto L_08B5242C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5242C:
    aot_gpr_31 = (0x08B52434u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52434u) goto L_08B52434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52434:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[8] = (aot_gpr_6 << 4u);
    goto L_08B52444;
L_08B52444:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B52498;
    }
    goto L_08B5247C;
L_08B5247C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_31 = (0x08B52488u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52488u) goto L_08B52488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52488:
    aot_gpr_31 = (0x08B52490u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52490u) goto L_08B52490;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52490:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B52498;
L_08B52498:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_gpr_4 << 4u);
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B524FC;
    }
    goto L_08B524D0;
L_08B524D0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    aot_gpr_31 = (0x08B524E4u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B524E4u) goto L_08B524E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B524E4:
    aot_gpr_31 = (0x08B524ECu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B524ECu) goto L_08B524EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B524EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B524FC;
L_08B524FC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (0u | 20u);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B5255C;
    }
    goto L_08B52530;
L_08B52530:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08B52544u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52544u) goto L_08B52544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52544:
    aot_gpr_31 = (0x08B5254Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5254Cu) goto L_08B5254C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5254C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B5255C;
L_08B5255C:
    aot_gpr_6 = (aot_gpr_4 << 4u);
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08B525BC;
      }
      goto L_08B52598;
    }
L_08B52598:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_31 = (0x08B525A8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B525A8u) goto L_08B525A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B525A8:
    aot_gpr_31 = (0x08B525B0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B525B0u) goto L_08B525B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B525B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    goto L_08B525BC;
L_08B525BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(244), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B52A54;
      }
      goto L_08B525E8;
    }
L_08B525E8:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52A2C;
      }
      goto L_08B525F0;
    }
L_08B525F0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52A2C;
      }
      goto L_08B525F8;
    }
L_08B525F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B5264C;
    }
    goto L_08B52620;
L_08B52620:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_5);
    aot_gpr_31 = (0x08B52634u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52634u) goto L_08B52634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52634:
    aot_gpr_31 = (0x08B5263Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5263Cu) goto L_08B5263C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5263C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B5264C;
L_08B5264C:
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[9] = (0u | 20u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B526A4;
      }
      goto L_08B5267C;
    }
L_08B5267C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_5);
    aot_gpr_31 = (0x08B52690u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52690u) goto L_08B52690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52690:
    aot_gpr_31 = (0x08B52698u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52698u) goto L_08B52698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52698:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    goto L_08B526A4;
L_08B526A4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_gpr_4 << 4u);
    ctx.gpr[9] = (aot_gpr_4 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_5 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (aot_gpr_5 << 4u);
      if (branch_taken) {
          goto L_08B52710;
      }
      goto L_08B526E4;
    }
L_08B526E4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_5);
    aot_gpr_31 = (0x08B526F8u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B526F8u) goto L_08B526F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B526F8:
    aot_gpr_31 = (0x08B52700u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52700u) goto L_08B52700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52700:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[8] = (aot_gpr_5 << 4u);
    goto L_08B52710;
L_08B52710:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[8] + aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B52764;
    }
    goto L_08B52748;
L_08B52748:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_31 = (0x08B52754u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52754u) goto L_08B52754;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52754:
    aot_gpr_31 = (0x08B5275Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5275Cu) goto L_08B5275C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5275C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B52764;
L_08B52764:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_gpr_4 << 4u);
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B527C0;
      }
      goto L_08B52798;
    }
L_08B52798:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_6);
    aot_gpr_31 = (0x08B527ACu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B527ACu) goto L_08B527AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B527AC:
    aot_gpr_31 = (0x08B527B4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B527B4u) goto L_08B527B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B527B4:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    goto L_08B527C0;
L_08B527C0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[9] = (0u | 20u);
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (aot_gpr_6 << 4u);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_6 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08B5281C;
      }
      goto L_08B527F4;
    }
L_08B527F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_6);
    aot_gpr_31 = (0x08B52808u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52808u) goto L_08B52808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52808:
    aot_gpr_31 = (0x08B52810u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52810u) goto L_08B52810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52810:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    goto L_08B5281C;
L_08B5281C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_gpr_4 << 4u);
    ctx.gpr[9] = (aot_gpr_4 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[8] = (aot_gpr_6 << 4u);
      if (branch_taken) {
          goto L_08B52888;
      }
      goto L_08B5285C;
    }
L_08B5285C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_31 = (0x08B52870u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52870u) goto L_08B52870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52870:
    aot_gpr_31 = (0x08B52878u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52878u) goto L_08B52878;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52878:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[8] = (aot_gpr_6 << 4u);
    goto L_08B52888;
L_08B52888:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[8] + aot_gpr_6);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B528DC;
    }
    goto L_08B528C0;
L_08B528C0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_gpr_31 = (0x08B528CCu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B528CCu) goto L_08B528CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B528CC:
    aot_gpr_31 = (0x08B528D4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B528D4u) goto L_08B528D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B528D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B528DC;
L_08B528DC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - aot_gpr_5);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_6 = (aot_gpr_4 << 4u);
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B52940;
    }
    goto L_08B52914;
L_08B52914:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_5);
    aot_gpr_31 = (0x08B52928u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52928u) goto L_08B52928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52928:
    aot_gpr_31 = (0x08B52930u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52930u) goto L_08B52930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52930:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B52940;
L_08B52940:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[8] = (0u | 20u);
    ctx.gpr[7] = (ctx.gpr[7] - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (aot_gpr_5 << 4u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
        goto L_08B529A0;
    }
    goto L_08B52974;
L_08B52974:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(92), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_31 = (0x08B52988u);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52988u) goto L_08B52988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52988:
    aot_gpr_31 = (0x08B52990u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52990u) goto L_08B52990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52990:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    goto L_08B529A0;
L_08B529A0:
    aot_gpr_6 = (aot_gpr_4 << 4u);
    ctx.gpr[7] = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[7] = (0u | 20u);
    aot_gpr_5 = (aot_gpr_5 - aot_gpr_6);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_5); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (ctx.lo);
    aot_gpr_5 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_6 = (aot_gpr_4 << 4u);
      if (branch_taken) {
          goto L_08B52A00;
      }
      goto L_08B529DC;
    }
L_08B529DC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_31 = (0x08B529ECu);
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5624));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0893685C, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0076_entry, 76u, 698u, 0x0893685Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B529ECu) goto L_08B529EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B529EC:
    aot_gpr_31 = (0x08B529F4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 919u, 0x08B576C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B529F4u) goto L_08B529F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B529F4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_6 = (aot_gpr_4 << 4u);
    goto L_08B52A00;
L_08B52A00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(216)));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(244), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B52A54;
      }
      goto L_08B52A2C;
    }
L_08B52A2C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    goto L_08B52A30;
L_08B52A30:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (0u | 20u);
    aot_gpr_6 = (aot_gpr_6 - ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_6); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (ctx.lo);
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B52124;
      }
      goto L_08B52A54;
    }
L_08B52A54:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(100), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52A68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_31 = (0x08B52A98u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52A98u) goto L_08B52A98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52A98:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x08B52AB8u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52AB8u) goto L_08B52AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52AB8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52AC4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52AC4u) goto L_08B52AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52AC4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_31 = (0x08B52ADCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 165u, 0x08A30D04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52ADCu) goto L_08B52ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52ADC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52AECu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 225u, 0x08B10EBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52AECu) goto L_08B52AEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52AEC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52AF8u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52AF8u) goto L_08B52AF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52AF8:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52C2C;
      }
      goto L_08B52B00;
    }
L_08B52B00:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52B0Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52B0Cu) goto L_08B52B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52B0C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
        goto L_08B52B34;
    }
    goto L_08B52B28;
L_08B52B28:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B52B44;
      }
      goto L_08B52B34;
    }
L_08B52B34:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_08B52B44;
L_08B52B44:
    aot_gpr_5 = (aot_gpr_4 >> 24u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52B98u);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52B98u) goto L_08B52B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52B98:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52C24;
      }
      goto L_08B52BA0;
    }
L_08B52BA0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52BACu);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52BACu) goto L_08B52BAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52BAC:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
        goto L_08B52BCC;
    }
    goto L_08B52BC0;
L_08B52BC0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B52BDC;
      }
      goto L_08B52BCC;
    }
L_08B52BCC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_08B52BDC;
L_08B52BDC:
    aot_gpr_5 = (aot_gpr_4 >> 24u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B52C24;
L_08B52C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52D48;
      }
      goto L_08B52C2C;
    }
L_08B52C2C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B52C4C;
      }
      goto L_08B52C3C;
    }
L_08B52C3C:
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B52C4C;
L_08B52C4C:
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B52C58u);
    ctx.gpr[20] = (aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(353)));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B20934, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[28], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52C58u) goto L_08B52C58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52C58:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    aot_gpr_31 = (0x08B52C6Cu);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08B60E5C, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, ctx.pc, ctx.hi, ctx.lo, aot_gpr_2, ctx.gpr[3], aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52C6Cu) goto L_08B52C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52C6C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (aot_gpr_2 >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_4 & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B52C90u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 764u, 0x08AA2FB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52C90u) goto L_08B52C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52C90:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(51)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B52CC8u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0167_entry, 167u, 774u, 0x08AA3070u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52CC8u) goto L_08B52CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52CC8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(51)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B52D48;
L_08B52D48:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52D54u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52D54u) goto L_08B52D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52D54:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08B52DCC;
      }
      goto L_08B52D5C;
    }
L_08B52D5C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52D68u);
    aot_gpr_5 = (0u | 6u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52D68u) goto L_08B52D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52D68:
    ctx.gpr[16] = (0u < aot_gpr_2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52DCC;
      }
      goto L_08B52D74;
    }
L_08B52D74:
    aot_gpr_5 = (ctx.gpr[16] & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08B52D90;
      }
      goto L_08B52D80;
    }
L_08B52D80:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(340)));
    aot_gpr_5 = (aot_gpr_5 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_5));
      if (branch_taken) {
          goto L_08B52DA0;
      }
      goto L_08B52D90;
    }
L_08B52D90:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(340)));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_5));
    goto L_08B52DA0;
L_08B52DA0:
    aot_gpr_4 = (ctx.gpr[16] & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08B52DBC;
      }
      goto L_08B52DAC;
    }
L_08B52DAC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(340)));
    aot_gpr_4 = (aot_gpr_4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B52DCC;
      }
      goto L_08B52DBC;
    }
L_08B52DBC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(340)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B52DCC;
L_08B52DCC:
    aot_gpr_2 = (ctx.gpr[17] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52DF4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B52E10u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52E10u) goto L_08B52E10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52E10:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B52E20u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52E20u) goto L_08B52E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52E20:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52EB0;
      }
      goto L_08B52E28;
    }
L_08B52E28:
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9947)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B52E90;
      }
      goto L_08B52E6C;
    }
L_08B52E6C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_gpr_31 = (0x08B52E88u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 824u, 0x08A37318u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52E88u) goto L_08B52E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52EA8;
      }
      goto L_08B52E90;
    }
L_08B52E90:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_6));
    aot_gpr_31 = (0x08B52EA8u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52EA8u) goto L_08B52EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52EA8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B52EB4;
      }
      goto L_08B52EB0;
    }
L_08B52EB0:
    aot_gpr_2 = (0u | 0u);
    goto L_08B52EB4;
L_08B52EB4:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52EC8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B52EE8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52EE8u) goto L_08B52EE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52EE8:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52F88;
      }
      goto L_08B52EF4;
    }
L_08B52EF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B52F88;
      }
      goto L_08B52F00;
    }
L_08B52F00:
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9960)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B52F40u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52F40u) goto L_08B52F40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52F40:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B52F70;
      }
      goto L_08B52F54;
    }
L_08B52F54:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_gpr_31 = (0x08B52F70u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 557u, 0x08A3FA50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52F70u) goto L_08B52F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52F70:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52F80u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52F80u) goto L_08B52F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52F80:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B52F98;
      }
      goto L_08B52F88;
    }
L_08B52F88:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B52F94u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52F94u) goto L_08B52F94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52F94:
    aot_gpr_2 = (0u | 1u);
    goto L_08B52F98;
L_08B52F98:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52FB0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B52FD0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B52FD0u) goto L_08B52FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B52FD0:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53070;
      }
      goto L_08B52FDC;
    }
L_08B52FDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53070;
      }
      goto L_08B52FE8;
    }
L_08B52FE8:
    aot_gpr_4 = (0u | 11u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9961)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_4);
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B53028u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53028u) goto L_08B53028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53028:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B53058;
      }
      goto L_08B5303C;
    }
L_08B5303C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_gpr_31 = (0x08B53058u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0142_entry, 142u, 562u, 0x08A3FAACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53058u) goto L_08B53058;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53058:
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53068u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53068u) goto L_08B53068;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53068:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B53080;
      }
      goto L_08B53070;
    }
L_08B53070:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B5307Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5307Cu) goto L_08B5307C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5307C:
    aot_gpr_2 = (0u | 1u);
    goto L_08B53080;
L_08B53080:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53098:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B530B8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B530B8u) goto L_08B530B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B530B8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53124;
      }
      goto L_08B530C4;
    }
L_08B530C4:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B530F4;
    }
    goto L_08B530D4;
L_08B530D4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B530E4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B530E4u) goto L_08B530E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B530E4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B530F4;
L_08B530F4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    aot_gpr_4 = (aot_gpr_4 & 2u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53110;
      }
      goto L_08B5310C;
    }
L_08B5310C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B53110;
L_08B53110:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B5311Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5311Cu) goto L_08B5311C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5311C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B53128;
      }
      goto L_08B53124;
    }
L_08B53124:
    aot_gpr_2 = (0u | 0u);
    goto L_08B53128;
L_08B53128:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53140:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B53160u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53160u) goto L_08B53160;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53160:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B531C0;
      }
      goto L_08B5316C;
    }
L_08B5316C:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B5319C;
    }
    goto L_08B5317C;
L_08B5317C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B5318Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5318Cu) goto L_08B5318C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5318C:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B5319C;
L_08B5319C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B531AC;
      }
      goto L_08B531A8;
    }
L_08B531A8:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B531AC;
L_08B531AC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B531B8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08807098, 0u, 451u, 0x08807098u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B531B8u) goto L_08B531B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B531B8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B531C4;
      }
      goto L_08B531C0;
    }
L_08B531C0:
    aot_gpr_2 = (0u | 0u);
    goto L_08B531C4;
L_08B531C4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B531DC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B531F4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B531F4u) goto L_08B531F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B531F4:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53224;
      }
      goto L_08B53200;
    }
L_08B53200:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B5321Cu);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 313u, 0x08931AD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5321Cu) goto L_08B5321C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5321C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B53230;
      }
      goto L_08B53224;
    }
L_08B53224:
    aot_gpr_31 = (0x08B5322Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 424u, 0x08806DA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5322Cu) goto L_08B5322C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5322C:
    aot_gpr_2 = (0u | 1u);
    goto L_08B53230;
L_08B53230:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53240:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B53260u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53260u) goto L_08B53260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53260:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B532EC;
      }
      goto L_08B5326C;
    }
L_08B5326C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B53298;
    }
    goto L_08B53278;
L_08B53278:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B53288u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53288u) goto L_08B53288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53288:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B53298;
L_08B53298:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B532C4;
    }
    goto L_08B532A4;
L_08B532A4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x08B532B4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B532B4u) goto L_08B532B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B532B4:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B532C4;
L_08B532C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(194)));
    aot_gpr_5 = (0u | 5u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B532D8;
      }
      goto L_08B532D4;
    }
L_08B532D4:
    aot_fpr_20 = std::bit_cast<float>(0u);
    goto L_08B532D8;
L_08B532D8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B532E4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B532E4u) goto L_08B532E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B532E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B53300;
      }
      goto L_08B532EC;
    }
L_08B532EC:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B532FCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B532FCu) goto L_08B532FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B532FC:
    aot_gpr_2 = (0u | 1u);
    goto L_08B53300;
L_08B53300:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53318:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B53338u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53338u) goto L_08B53338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53338:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B53348u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53348u) goto L_08B53348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53348:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5343C;
      }
      goto L_08B53354;
    }
L_08B53354:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08B53380;
    }
    goto L_08B53360;
L_08B53360:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(34));
    aot_gpr_31 = (0x08B53370u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53370u) goto L_08B53370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53370:
    aot_mem.aot_direct_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(34)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08B53380;
L_08B53380:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(456)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B533F0;
      }
      goto L_08B53398;
    }
L_08B53398:
    aot_gpr_4 = (0u | 15u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9956)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_4);
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(27), ctx.gpr[1]);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(30), ctx.gpr[1]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B533F8;
      }
      goto L_08B533E8;
    }
L_08B533E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B5341C;
      }
      goto L_08B533F0;
    }
L_08B533F0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B53440;
      }
      goto L_08B533F8;
    }
L_08B533F8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_31 = (0x08B53414u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 875u, 0x08A377A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53414u) goto L_08B53414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53434;
      }
      goto L_08B5341C;
    }
L_08B5341C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_6));
    aot_gpr_31 = (0x08B53434u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53434u) goto L_08B53434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53434:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B53440;
      }
      goto L_08B5343C;
    }
L_08B5343C:
    aot_gpr_2 = (0u | 0u);
    goto L_08B53440;
L_08B53440:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53458:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B53474u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53474u) goto L_08B53474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53474:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 2u);
    aot_gpr_31 = (0x08B5348Cu);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5348Cu) goto L_08B5348C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5348C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53558;
      }
      goto L_08B53494;
    }
L_08B53494:
    aot_gpr_4 = (0u | 23u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9954)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(43));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(35), ctx.gpr[7]);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(38), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(39), ctx.gpr[7]);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(42), ctx.gpr[7]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[7]);
    aot_mem.aot_direct_store_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store_word_left(aot_gpr_5 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_4);
    aot_mem.aot_direct_store_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B53538;
      }
      goto L_08B53514;
    }
L_08B53514:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(35), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(38), aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(56))))));
    aot_gpr_31 = (0x08B53530u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 888u, 0x08A37870u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53530u) goto L_08B53530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53550;
      }
      goto L_08B53538;
    }
L_08B53538:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(35), aot_gpr_6));
    aot_gpr_31 = (0x08B53550u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(38), aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53550u) goto L_08B53550;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53550:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B5355C;
      }
      goto L_08B53558;
    }
L_08B53558:
    aot_gpr_2 = (0u | 0u);
    goto L_08B5355C;
L_08B5355C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53570:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B5358Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5358Cu) goto L_08B5358C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5358C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B5359Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5359Cu) goto L_08B5359C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5359C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B535A8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B535A8u) goto L_08B535A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B535A8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53648;
      }
      goto L_08B535B8;
    }
L_08B535B8:
    aot_gpr_5 = (0u | 15u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9955)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_5);
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(27), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(30), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B53628;
      }
      goto L_08B53604;
    }
L_08B53604:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_31 = (0x08B53620u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 912u, 0x08A37A10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53620u) goto L_08B53620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53640;
      }
      goto L_08B53628;
    }
L_08B53628:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_6));
    aot_gpr_31 = (0x08B53640u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53640u) goto L_08B53640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53640:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B5364C;
      }
      goto L_08B53648;
    }
L_08B53648:
    aot_gpr_2 = (0u | 0u);
    goto L_08B5364C;
L_08B5364C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53660:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B53680u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53680u) goto L_08B53680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53680:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53758;
      }
      goto L_08B5368C;
    }
L_08B5368C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B536B8;
    }
    goto L_08B53698;
L_08B53698:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B536A8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B536A8u) goto L_08B536A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B536A8:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B536B8;
L_08B536B8:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(205))))));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B53740;
      }
      goto L_08B536C8;
    }
L_08B536C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
        goto L_08B536F4;
    }
    goto L_08B536D4;
L_08B536D4:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(17));
    aot_gpr_31 = (0x08B536E4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B536E4u) goto L_08B536E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B536E4:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(17)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    goto L_08B536F4;
L_08B536F4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B53740;
      }
      goto L_08B53700;
    }
L_08B53700:
    ctx.gpr[17] = (2237u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_08B5372C;
      }
      goto L_08B53710;
    }
L_08B53710:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(18));
    aot_gpr_31 = (0x08B53720u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53720u) goto L_08B53720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53720:
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(18)));
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B5372C;
L_08B5372C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(206))))));
    aot_gpr_31 = (0x08B5373Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 101u, 0x08ADC560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B5373Cu) goto L_08B5373C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B5373C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    goto L_08B53740;
L_08B53740:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[17]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B53750u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53750u) goto L_08B53750;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53750:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 1u);
      if (branch_taken) {
          goto L_08B5375C;
      }
      goto L_08B53758;
    }
L_08B53758:
    aot_gpr_2 = (0u | 0u);
    goto L_08B5375C;
L_08B5375C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53774:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B53798u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53798u) goto L_08B53798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53798:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53818;
      }
      goto L_08B537A4;
    }
L_08B537A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B537D0;
    }
    goto L_08B537B0;
L_08B537B0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B537C0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B537C0u) goto L_08B537C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B537C0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B537D0;
L_08B537D0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(205))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B53804;
      }
      goto L_08B537E0;
    }
L_08B537E0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08B537F0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 32u, 0x08ADC204u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B537F0u) goto L_08B537F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B537F0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B537FCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B537FCu) goto L_08B537FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B537FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53810;
      }
      goto L_08B53804;
    }
L_08B53804:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5792));
    aot_gpr_31 = (0x08B53810u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53810u) goto L_08B53810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53810:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B5381C;
      }
      goto L_08B53818;
    }
L_08B53818:
    aot_gpr_2 = (0u | 0u);
    goto L_08B5381C;
L_08B5381C:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53834:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B53858u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53858u) goto L_08B53858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53858:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B538D8;
      }
      goto L_08B53864;
    }
L_08B53864:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B53890;
    }
    goto L_08B53870;
L_08B53870:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B53880u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53880u) goto L_08B53880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53880:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B53890;
L_08B53890:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B538C0;
      }
      goto L_08B538A4;
    }
L_08B538A4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B538B8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B538B8u) goto L_08B538B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B538B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B538D0;
      }
      goto L_08B538C0;
    }
L_08B538C0:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B538D0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B538D0u) goto L_08B538D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B538D0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B538DC;
      }
      goto L_08B538D8;
    }
L_08B538D8:
    aot_gpr_2 = (0u | 0u);
    goto L_08B538DC;
L_08B538DC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B538F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B53918u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53918u) goto L_08B53918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53918:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B539D4;
      }
      goto L_08B53924;
    }
L_08B53924:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08B53950;
    }
    goto L_08B53930;
L_08B53930:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B53940u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53940u) goto L_08B53940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53940:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), aot_gpr_2);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08B53950;
L_08B53950:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(204))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B539BC;
      }
      goto L_08B53964;
    }
L_08B53964:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08B53978u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53978u) goto L_08B53978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53978:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(1)));
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_2 + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B539AC;
      }
      goto L_08B539A0;
    }
L_08B539A0:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08B539AC;
L_08B539AC:
    aot_gpr_31 = (0x08B539B4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B539B4u) goto L_08B539B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B539B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B539CC;
      }
      goto L_08B539BC;
    }
L_08B539BC:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B539CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B539CCu) goto L_08B539CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B539CC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08B539E8;
      }
      goto L_08B539D4;
    }
L_08B539D4:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08B539E4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806DC0, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, ctx.pc, aot_gpr_4, aot_gpr_5, aot_gpr_6, aot_gpr_31, aot_fpr_12); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B539E4u) goto L_08B539E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B539E4:
    aot_gpr_2 = (ctx.gpr[18] | 0u);
    goto L_08B539E8;
L_08B539E8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53A00:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    aot_gpr_31 = (0x08B53A18u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53A18u) goto L_08B53A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53A18:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53B00;
      }
      goto L_08B53A24;
    }
L_08B53A24:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53AC8;
      }
      goto L_08B53A4C;
    }
L_08B53A4C:
    ctx.gpr[16] = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53A68;
      }
      goto L_08B53A5C;
    }
L_08B53A5C:
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53A68u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 80u, 0x089AC664u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53A68u) goto L_08B53A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53A68:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53AC0;
      }
      goto L_08B53A7C;
    }
L_08B53A7C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53A88u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53A88u) goto L_08B53A88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53A88:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53AAC;
      }
      goto L_08B53A90;
    }
L_08B53A90:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53A9Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53A9Cu) goto L_08B53A9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53A9C:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53AACu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 80u, 0x089AC664u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53AACu) goto L_08B53AAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53AAC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B53A7C;
      }
      goto L_08B53AC0;
    }
L_08B53AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53B00;
      }
      goto L_08B53AC8;
    }
L_08B53AC8:
    aot_gpr_5 = (0u | 11u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9944)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(3), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(6), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(7), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(10), aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(6), aot_gpr_6));
    aot_gpr_31 = (0x08B53B00u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53B00u) goto L_08B53B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53B00:
    aot_gpr_2 = (0u | 0u);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53B18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B53B3Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53B3Cu) goto L_08B53B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53B3C:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53B4Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53B4Cu) goto L_08B53B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53B4C:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B53B64;
      }
      goto L_08B53B54;
    }
L_08B53B54:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B53B6C;
      }
      goto L_08B53B5C;
    }
L_08B53B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53BFC;
      }
      goto L_08B53B64;
    }
L_08B53B64:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B53C00;
      }
      goto L_08B53B6C;
    }
L_08B53B6C:
    aot_gpr_5 = (0u | 12u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9945)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_5);
    aot_gpr_31 = (0x08B53BA0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53BA0u) goto L_08B53BA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53BA0:
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
      if (branch_taken) {
          goto L_08B53BF0;
      }
      goto L_08B53BD4;
    }
L_08B53BD4:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53BE8u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 775u, 0x08A37040u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53BE8u) goto L_08B53BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53BFC;
      }
      goto L_08B53BF0;
    }
L_08B53BF0:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08B53BFCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53BFCu) goto L_08B53BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53BFC:
    aot_gpr_2 = (0u | 0u);
    goto L_08B53C00;
L_08B53C00:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53C18:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B53C34u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53C34u) goto L_08B53C34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53C34:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53C44u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53C44u) goto L_08B53C44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53C44:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53C5C;
      }
      goto L_08B53C4C;
    }
L_08B53C4C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B53C64;
      }
      goto L_08B53C54;
    }
L_08B53C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53CFC;
      }
      goto L_08B53C5C;
    }
L_08B53C5C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B53D00;
      }
      goto L_08B53C64;
    }
L_08B53C64:
    aot_gpr_5 = (0u | 15u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9946)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_5);
    aot_gpr_31 = (0x08B53C98u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53C98u) goto L_08B53C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53C98:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(27), aot_gpr_4);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(30), aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
      if (branch_taken) {
          goto L_08B53CF0;
      }
      goto L_08B53CD4;
    }
L_08B53CD4:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(32))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53CE8u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 786u, 0x08A370E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53CE8u) goto L_08B53CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53CFC;
      }
      goto L_08B53CF0;
    }
L_08B53CF0:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08B53CFCu);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53CFCu) goto L_08B53CFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53CFC:
    aot_gpr_2 = (0u | 0u);
    goto L_08B53D00;
L_08B53D00:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53D14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B53D38u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53D38u) goto L_08B53D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53D38:
    ctx.gpr[17] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53D48u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806888, 0u, 324u, 0x08806888u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53D48u) goto L_08B53D48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53D48:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B53D60;
      }
      goto L_08B53D50;
    }
L_08B53D50:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08B53D68;
      }
      goto L_08B53D58;
    }
L_08B53D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53DF8;
      }
      goto L_08B53D60;
    }
L_08B53D60:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B53DFC;
      }
      goto L_08B53D68;
    }
L_08B53D68:
    aot_gpr_5 = (0u | 12u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9948)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store_word_right(aot_gpr_29 + static_cast<std::uint32_t>(23), aot_gpr_5);
    aot_mem.aot_direct_store_word_left(aot_gpr_29 + static_cast<std::uint32_t>(26), aot_gpr_5);
    aot_gpr_31 = (0x08B53D9Cu);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806AE0, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53D9Cu) goto L_08B53D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53D9C:
    aot_gpr_4 = (0u < aot_gpr_2 ? 1u : 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (aot_gpr_5 ^ aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_5 & 255u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_29 + static_cast<std::uint32_t>(19), aot_gpr_5));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_29 + static_cast<std::uint32_t>(22), aot_gpr_5));
      if (branch_taken) {
          goto L_08B53DEC;
      }
      goto L_08B53DD0;
    }
L_08B53DD0:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(28))))));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08B53DE4u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0140_entry, 140u, 835u, 0x08A373D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53DE4u) goto L_08B53DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53DF8;
      }
      goto L_08B53DEC;
    }
L_08B53DEC:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_gpr_31 = (0x08B53DF8u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53DF8u) goto L_08B53DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53DF8:
    aot_gpr_2 = (0u | 0u);
    goto L_08B53DFC;
L_08B53DFC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      ctx.gpr[16] = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53E14:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), ctx.gpr[16], ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08B53E34u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53E34u) goto L_08B53E34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53E34:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B53E44u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53E44u) goto L_08B53E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53E44:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B53E6C;
      }
      goto L_08B53E4C;
    }
L_08B53E4C:
    aot_gpr_31 = (0x08B53E54u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_0880692C, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], ctx.gpr[16], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53E54u) goto L_08B53E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53E54:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53E6C;
      }
      goto L_08B53E5C;
    }
L_08B53E5C:
    if (ctx.gpr[16] != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
        goto L_08B53E74;
    }
    goto L_08B53E64;
L_08B53E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53FA0;
      }
      goto L_08B53E6C;
    }
L_08B53E6C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_2 = (0u | 0u);
      if (branch_taken) {
          goto L_08B53FA4;
      }
      goto L_08B53E74;
    }
L_08B53E74:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (aot_gpr_4 ^ aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B53FA0;
      }
      goto L_08B53E98;
    }
L_08B53E98:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B53EA4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53EA4u) goto L_08B53EA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53EA4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (20224u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
        goto L_08B53ECC;
    }
    goto L_08B53EC0;
L_08B53EC0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B53EDC;
      }
      goto L_08B53ECC;
    }
L_08B53ECC:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_08B53EDC;
L_08B53EDC:
    aot_gpr_5 = (aot_gpr_4 >> 24u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B53F04u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53F04u) goto L_08B53F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53F04:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
        goto L_08B53F24;
    }
    goto L_08B53F18;
L_08B53F18:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B53F34;
      }
      goto L_08B53F24;
    }
L_08B53F24:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (32768u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    goto L_08B53F34;
L_08B53F34:
    aot_gpr_5 = (aot_gpr_4 >> 24u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(135), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(138), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store8(ctx.gpr[16] + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B53FA0;
L_08B53FA0:
    aot_gpr_2 = (0u | 0u);
    goto L_08B53FA4;
L_08B53FA4:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.gpr[16] = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53FBC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[16], ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_run_words); }
    ctx.gpr[16] = (aot_gpr_4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x08B53FE0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { /*PSPRECOMP_RESIDENT_SCHED_SAFE*/ if (rt.resident_generated_leaf_fast_allowed()) return rt.invoke_resident_generated_leaf<&vcs_resident_region_08806A88, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, ctx.pc, aot_gpr_2, aot_gpr_4, aot_gpr_5, aot_gpr_6, ctx.gpr[7], aot_gpr_29, aot_gpr_31); AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_resident_scheduler_fallback<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53FE0u) goto L_08B53FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53FE0:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 1u, 0x08B54000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    goto L_08B53FF4;
L_08B53FF4:
    aot_gpr_31 = (0x08B53FFCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B53FFCu) goto L_08B53FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B53FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    ctx.pc = 0x08B54000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0211(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0211_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_211(Runtime &runtime) {
    runtime.register_generated_unit(211u, 0x08B50000u, 16384u, &recomp_unit_0211, &recomp_unit_0211_entry);
    runtime.register_function(0x08B50000u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50024u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5002Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50034u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5004Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50068u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B500A0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B500D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50110u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50148u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50164u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50188u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50194u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501ACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501E0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501ECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B501F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50208u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50234u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50240u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5024Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50254u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5025Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50264u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50274u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50280u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50288u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50290u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5029Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B502A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B502C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B502DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B502E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B502ECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B502F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50300u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50308u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50310u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50320u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50340u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5034Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50360u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50368u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50370u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50390u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B503A0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B503A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B503B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B503B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B503D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B503E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B503F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B503FCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50404u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5040Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50414u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5041Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50424u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5042Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50434u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5043Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50444u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50464u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5046Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50474u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5047Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50488u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50494u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5049Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504ACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504E0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B504FCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50500u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50508u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50514u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50520u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50528u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5052Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50534u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50548u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50550u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50568u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50570u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B505B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B505C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B505D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B505D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B505F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50610u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50624u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50634u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50644u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5064Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50684u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5068Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5069Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B506A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B506D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B506E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B506ECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B506F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5072Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50734u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50738u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50740u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50750u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50758u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50790u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50798u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5079Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B507ACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B507B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B507B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B507C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B507C8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50800u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50854u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50898u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5089Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B508A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B508ACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B508B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B508D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B508E0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B508E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B508F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5090Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50914u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5091Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50924u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50960u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50968u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B509A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B509B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B509D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B509D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B509E0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A0Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A24u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A30u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A38u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A3Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A54u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A88u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A94u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50A9Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AA8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AB0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AB8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50ABCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AC4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50ACCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AD4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50ADCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AE0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50AFCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B04u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B08u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B10u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B18u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B24u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B34u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B3Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B40u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B48u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B50u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B6Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B84u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50B9Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50BD0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50BE0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50BE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50C04u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50C0Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50C2Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50C60u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50C6Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50CA0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50CB0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50CB8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50CD4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50CDCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50CFCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50D30u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50D3Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50D7Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50D88u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50D90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50D9Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50DBCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50DD0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50DDCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50DE4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50DF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50DFCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E04u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E0Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E14u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E58u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E60u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E70u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E80u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E84u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50E9Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50F04u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50F0Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50F14u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50F40u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50F68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50F94u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FA0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FC0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FC8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FD0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FD4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B50FF8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51014u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5101Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51024u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51028u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51044u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5104Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51050u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51058u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51064u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5106Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51078u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51090u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B510A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B510C8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B510CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B510D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B510DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B510E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B510F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B510F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5110Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5111Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51124u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5113Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51150u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51164u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51174u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5117Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51198u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B511B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B511C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B511D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B511D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B511E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B511F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5120Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51218u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51220u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51230u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51244u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51258u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51264u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5126Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51284u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51294u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B512A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B512B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B512BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B512CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B512E0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B512F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51300u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51308u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51318u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51324u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51338u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51340u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51348u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51354u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51370u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51380u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51388u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51398u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B513C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B513D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B513DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B513E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B513F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5140Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5141Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51424u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51434u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51458u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51468u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B514A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B514D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B514E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51514u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51524u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5152Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51538u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51540u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51548u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51550u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51570u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51578u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B515B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B515B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B515C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B515D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B515E0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B515F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51604u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51624u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5162Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51634u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51638u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5164Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5166Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5167Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51688u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5168Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5169Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B516A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B516B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B516B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B516BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B516C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B516D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B516D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B516E0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51704u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51714u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5171Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51728u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51748u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51754u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5175Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51764u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51770u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5177Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51784u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5178Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51794u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5179Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B517ACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B517C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B517D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B517F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B517FCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51800u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51808u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51814u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51820u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51828u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5182Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51834u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51844u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5184Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51850u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51858u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51864u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5186Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51874u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51878u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51880u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51888u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51894u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5189Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518A0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518C8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B518F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51900u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51904u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5190Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51914u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51920u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51928u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5192Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51934u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5195Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51968u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51970u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51978u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51994u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5199Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B519A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B519BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B519D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B519E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B519F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A0Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A10u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A14u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A1Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A24u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A34u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A40u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A48u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A50u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A58u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A60u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A70u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A7Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A80u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A84u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A8Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51A94u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51AA4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51ABCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51AC8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51AD4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51ADCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51AE4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51AF8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51B08u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51B90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51B98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51BA4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51BECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51BF4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51C3Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51C40u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51C48u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51C68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51C70u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51C94u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51C98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CA0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CBCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CC4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CD0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CDCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CF4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51CFCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D04u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D20u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D28u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D30u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D54u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D74u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D7Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D84u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D8Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51D90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51DA4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51DACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51DB4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51DD4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51DDCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51DE4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51DE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E04u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E0Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E10u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E18u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E50u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E58u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E74u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51E98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51EA4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51EACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51ECCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51EF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51EF8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F08u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F14u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F34u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F40u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F60u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F70u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51F94u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51FDCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51FE4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B51FF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5200Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52030u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52060u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52098u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520A0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520ECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B520FCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52100u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52124u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52130u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52154u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52164u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5216Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52174u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52190u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B521B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B521DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B521F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B521F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52208u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52238u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5224Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52254u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52260u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B522A0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B522B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B522BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B522CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52304u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52310u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52318u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52320u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52354u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52368u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52370u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5237Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B523B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B523C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B523CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B523D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52418u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5242Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52434u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52444u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5247Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52488u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52490u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52498u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B524D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B524E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B524ECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B524FCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52530u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52544u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5254Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5255Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52598u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B525A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B525B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B525BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B525E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B525F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B525F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52620u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52634u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5263Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5264Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5267Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52690u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52698u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B526A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B526E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B526F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52700u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52710u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52748u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52754u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5275Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52764u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52798u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B527ACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B527B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B527C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B527F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52808u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52810u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5281Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5285Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52870u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52878u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52888u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B528C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B528CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B528D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B528DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52914u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52928u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52930u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52940u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52974u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52988u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52990u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B529A0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B529DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B529ECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B529F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52A00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52A2Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52A30u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52A54u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52A68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52A98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52AB8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52AC4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52ADCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52AECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52AF8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52B00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52B0Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52B28u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52B34u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52B44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52B98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52BA0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52BACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52BC0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52BCCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52BDCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52C24u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52C2Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52C3Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52C4Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52C58u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52C6Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52C90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52CC8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52D48u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52D54u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52D5Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52D68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52D74u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52D80u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52D90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52DA0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52DACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52DBCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52DCCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52DF4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52E10u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52E20u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52E28u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52E6Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52E88u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52E90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52EA8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52EB0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52EB4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52EC8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52EE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52EF4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52F00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52F40u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52F54u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52F70u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52F80u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52F88u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52F94u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52F98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52FB0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52FD0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52FDCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B52FE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53028u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5303Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53058u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53068u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53070u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5307Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53080u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53098u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B530B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B530C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B530D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B530E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B530F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5310Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53110u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5311Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53124u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53128u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53140u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53160u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5316Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5317Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5318Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5319Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B531A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B531ACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B531B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B531C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B531C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B531DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B531F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53200u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5321Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53224u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5322Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53230u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53240u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53260u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5326Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53278u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53288u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53298u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B532A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B532B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B532C4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B532D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B532D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B532E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B532ECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B532FCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53300u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53318u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53338u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53348u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53354u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53360u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53370u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53380u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53398u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B533E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B533F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B533F8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53414u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5341Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53434u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5343Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53440u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53458u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53474u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5348Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53494u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53514u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53530u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53538u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53550u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53558u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5355Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53570u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5358Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5359Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B535A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B535B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53604u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53620u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53628u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53640u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53648u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5364Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53660u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53680u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5368Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53698u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B536A8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B536B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B536C8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B536D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B536E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B536F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53700u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53710u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53720u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5372Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5373Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53740u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53750u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53758u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5375Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53774u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53798u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B537A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B537B0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B537C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B537D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B537E0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B537F0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B537FCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53804u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53810u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53818u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B5381Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53834u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53858u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53864u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53870u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53880u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53890u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B538A4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B538B8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B538C0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B538D0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B538D8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B538DCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B538F4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53918u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53924u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53930u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53940u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53950u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53964u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53978u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B539A0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B539ACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B539B4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B539BCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B539CCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B539D4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B539E4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B539E8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A18u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A24u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A4Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A5Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A7Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A88u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A90u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53A9Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53AACu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53AC0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53AC8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53B00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53B18u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53B3Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53B4Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53B54u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53B5Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53B64u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53B6Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53BA0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53BD4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53BE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53BF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53BFCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C18u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C34u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C4Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C54u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C5Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C64u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53C98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53CD4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53CE8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53CF0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53CFCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D00u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D14u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D38u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D48u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D50u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D58u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D60u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D68u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53D9Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53DD0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53DE4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53DECu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53DF8u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53DFCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E14u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E34u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E44u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E4Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E54u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E5Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E64u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E6Cu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E74u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53E98u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53EA4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53EC0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53ECCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53EDCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53F04u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53F18u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53F24u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53F34u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53FA0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53FA4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53FBCu, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53FE0u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53FF4u, &recomp_unit_0211, "recomp_unit_0211");
    runtime.register_function(0x08B53FFCu, &recomp_unit_0211, "recomp_unit_0211");
}
} // namespace psprecomp
