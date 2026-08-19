#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0140[4094] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 9, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 27, 28, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0,
    35, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46,
    0, 0, 0, 47, 0, 48, 0, 0, 49, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 57, 0, 0,
    58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0,
    0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 84,
    0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0,
    0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0,
    112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119, 0,
    120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 128,
    0, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 0,
    139, 0, 140, 0, 0, 141, 0, 142, 0, 143, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 149,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 170,
    0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0,
    0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0,
    0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193,
    0, 194, 0, 195, 196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0,
    202, 0, 203, 0, 204, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0,
    211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224,
    0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0,
    0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 248, 0, 0, 0,
    0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 255, 0, 256, 0, 257, 0, 0, 258, 0, 0,
    0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 267,
    0, 268, 0, 269, 0, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277,
    0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    284, 0, 0, 285, 0, 286, 287, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0,
    0, 295, 0, 0, 0, 0, 296, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 304,
    0, 0, 305, 0, 0, 306, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 312, 0, 0, 313, 0, 314, 0, 315, 0,
    316, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0,
    0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 334, 0, 335,
    0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0,
    0, 345, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 356, 0, 357, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 360, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 365,
    0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 371, 0, 0, 372, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375,
    0, 376, 0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 388, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 393, 394, 0, 395, 0, 396, 0, 0, 0, 397, 0, 398, 0, 399, 0, 400,
    0, 0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 410, 0, 411, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415, 416, 417, 0, 0, 418, 0, 419, 0, 0, 420, 421, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0,
    439, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 450, 0,
    451, 0, 0, 452, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457,
    0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 467, 0, 468, 469, 470, 0,
    0, 471, 0, 472, 0, 0, 473, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0,
    478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 484, 0, 485, 0,
    0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0,
    497, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 503,
    0, 0, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 0, 514, 515, 0, 516, 0, 517, 0, 518, 0, 519, 520, 0, 521, 0, 0, 522, 523,
    0, 524, 0, 0, 525, 526, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 535, 0,
    0, 0, 0, 0, 0, 536, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 541,
    0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 547, 0, 0,
    548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 552, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 555, 0, 556,
    0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0, 0,
    0, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 571, 0, 572,
    0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 577, 578, 0, 579, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 585, 0, 586, 0, 0, 587, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0,
    590, 0, 591, 0, 592, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600,
    0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0,
    611, 0, 612, 0, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 617, 0, 0, 618, 0, 619, 0, 620, 0, 621, 0, 0, 622,
    0, 623, 0, 624, 0, 625, 0, 626, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 632, 0, 633, 0, 0,
    634, 0, 635, 0, 636, 0, 637, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0,
    653, 0, 654, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 0, 658, 0, 659, 0, 0, 660, 0, 661, 0, 0,
    0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668,
    0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0,
    0, 675, 0, 0, 676, 0, 677, 678, 0, 679, 0, 0, 680, 0, 0, 681, 0, 682, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0, 686, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 691,
    0, 0, 0, 692, 0, 693, 0, 694, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 700, 701, 0, 0, 702, 0,
    703, 0, 0, 0, 704, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 712, 0, 713, 0, 0,
    714, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0,
    0, 0, 726, 0, 0, 0, 727, 728, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 732, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734,
    0, 735, 736, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0, 742, 743, 0,
    744, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 0, 751, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    754, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 768, 769, 0, 0, 770, 0,
    771, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0,
    777, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 782, 0, 783, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 0, 790, 0, 791, 0, 792, 0, 793, 0, 0, 794, 0, 0, 0, 795, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 801, 0, 802,
    0, 0, 0, 0, 0, 803, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 0,
    811, 0, 812, 0, 813, 0, 814, 0, 0, 0, 815, 0, 0, 816, 0, 817, 0, 818, 0, 0, 0, 819, 0, 0, 0, 820, 0, 0, 821, 0, 822, 0,
    0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 827, 0, 828, 0, 829, 0,
    0, 830, 0, 0, 831, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 836, 0, 0, 837, 0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 845, 0, 0, 846, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0,
    0, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 0, 851, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 853, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 0, 0, 858, 0, 0, 0, 859, 0, 860, 0, 861, 0, 0, 862, 0, 0, 0, 0, 0, 0,
    863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 866,
    0, 867, 0, 868, 0, 0, 0, 869, 0, 0, 0, 870, 0, 871, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 876, 0, 0, 877, 0, 878,
    0, 879, 0, 880, 0, 0, 0, 881, 0, 0, 0, 882, 0, 883, 0, 884, 0, 885, 0, 0, 886, 887, 0, 0, 0, 0, 0, 0, 888, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 889, 0, 0, 890, 0, 0, 0, 0,
    891, 0, 0, 0, 892, 0, 893, 0, 894, 0, 895, 0, 0, 896, 0, 0, 0, 0, 0, 897, 0, 898, 0, 899, 0, 0, 0, 0, 0, 900, 0, 0,
    901, 0, 902, 0, 0, 0, 0, 903, 0, 0, 0, 904, 0, 905, 0, 906, 0, 907, 0, 0, 908, 0, 909, 0, 910, 0, 0, 0, 0, 0, 911, 0,
    0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 913, 0, 0, 0, 0, 0, 914, 0, 0, 915, 916, 0,
    917, 0, 0, 0, 0, 918, 0, 0, 0, 919, 0, 920, 0, 921, 0, 922, 0, 0, 923, 0, 0, 0, 0, 0, 0, 0, 924, 0, 925, 0, 926, 0,
    0, 0, 0, 0, 927, 0, 0, 928, 0, 929, 0, 0, 0, 0, 930, 0, 0, 0, 931, 0, 932, 0, 933, 0, 934, 0, 0, 935, 0, 936, 0, 937,
    0, 0, 0, 0, 0, 0, 0, 938, 0, 0, 0, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0,
    941, 0, 0, 0, 0, 942, 0, 0, 0, 943, 0, 944, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 0, 0, 947, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 948, 0, 0, 949, 0, 0, 950, 0, 0, 951, 0, 952, 0, 953, 0, 954, 0, 0, 0, 0, 0, 0, 0, 955, 0, 0, 0,
    956, 0, 0, 0, 957, 0, 0, 0, 0, 0, 0, 0, 958, 0, 0, 959, 0, 0, 960, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 961, 0, 0, 0, 962, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 964, 0, 0,
    965, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 966, 0, 967, 0, 0, 968, 0, 0, 0, 969, 0, 0, 970, 0, 0, 0, 971, 0, 972, 0, 0,
    0, 973, 0, 0, 974, 0, 0, 0, 0, 0, 0, 0, 0, 0, 975, 0, 976, 0, 0, 977, 0, 0, 0, 978, 0, 0, 979, 0, 0, 0, 980, 0,
    981, 0, 0, 0, 982, 0, 0, 983, 0, 0, 0, 0, 0, 0, 0, 0, 0, 984, 0, 985, 0, 0, 986, 0, 0, 0, 987, 0, 0, 988,
};
void recomp_unit_0140_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,31,29,16,6 fprs=12,13,14,20 gpr_occ=4204 fpr_occ=392 gpr_total=5605 fpr_total=505
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[31] = aot_gpr_31; ctx.gpr[29] = aot_gpr_29; ctx.gpr[16] = aot_gpr_16; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A34000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0140[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A34000;
    case 2u: goto L_08A34008;
    case 3u: goto L_08A34018;
    case 4u: goto L_08A34020;
    case 5u: goto L_08A3403C;
    case 6u: goto L_08A34044;
    case 7u: goto L_08A3404C;
    case 8u: goto L_08A34054;
    case 9u: goto L_08A34084;
    case 10u: goto L_08A34088;
    case 11u: goto L_08A340B8;
    case 12u: goto L_08A340C4;
    case 13u: goto L_08A34118;
    case 14u: goto L_08A34120;
    case 15u: goto L_08A34130;
    case 16u: goto L_08A34140;
    case 17u: goto L_08A3414C;
    case 18u: goto L_08A34150;
    case 19u: goto L_08A34194;
    case 20u: goto L_08A3419C;
    case 21u: goto L_08A341A8;
    case 22u: goto L_08A341B0;
    case 23u: goto L_08A341BC;
    case 24u: goto L_08A341C8;
    case 25u: goto L_08A341D4;
    case 26u: goto L_08A341E4;
    case 27u: goto L_08A341EC;
    case 28u: goto L_08A341F0;
    case 29u: goto L_08A34234;
    case 30u: goto L_08A34240;
    case 31u: goto L_08A3424C;
    case 32u: goto L_08A3425C;
    case 33u: goto L_08A34264;
    case 34u: goto L_08A34274;
    case 35u: goto L_08A34280;
    case 36u: goto L_08A34288;
    case 37u: goto L_08A34290;
    case 38u: goto L_08A34298;
    case 39u: goto L_08A342A4;
    case 40u: goto L_08A342AC;
    case 41u: goto L_08A342B4;
    case 42u: goto L_08A342BC;
    case 43u: goto L_08A342C4;
    case 44u: goto L_08A342D4;
    case 45u: goto L_08A342EC;
    case 46u: goto L_08A342FC;
    case 47u: goto L_08A3430C;
    case 48u: goto L_08A34314;
    case 49u: goto L_08A34320;
    case 50u: goto L_08A34328;
    case 51u: goto L_08A34330;
    case 52u: goto L_08A3433C;
    case 53u: goto L_08A34344;
    case 54u: goto L_08A34354;
    case 55u: goto L_08A34364;
    case 56u: goto L_08A3436C;
    case 57u: goto L_08A34374;
    case 58u: goto L_08A34380;
    case 59u: goto L_08A34388;
    case 60u: goto L_08A34394;
    case 61u: goto L_08A343AC;
    case 62u: goto L_08A343B4;
    case 63u: goto L_08A343C0;
    case 64u: goto L_08A343C8;
    case 65u: goto L_08A343D8;
    case 66u: goto L_08A343E8;
    case 67u: goto L_08A343F8;
    case 68u: goto L_08A3440C;
    case 69u: goto L_08A34424;
    case 70u: goto L_08A34434;
    case 71u: goto L_08A34448;
    case 72u: goto L_08A34450;
    case 73u: goto L_08A34458;
    case 74u: goto L_08A34460;
    case 75u: goto L_08A34468;
    case 76u: goto L_08A34498;
    case 77u: goto L_08A344B0;
    case 78u: goto L_08A344B8;
    case 79u: goto L_08A344C0;
    case 80u: goto L_08A344C8;
    case 81u: goto L_08A344E4;
    case 82u: goto L_08A344EC;
    case 83u: goto L_08A344F8;
    case 84u: goto L_08A344FC;
    case 85u: goto L_08A34504;
    case 86u: goto L_08A34514;
    case 87u: goto L_08A34524;
    case 88u: goto L_08A34538;
    case 89u: goto L_08A34540;
    case 90u: goto L_08A34550;
    case 91u: goto L_08A34558;
    case 92u: goto L_08A34560;
    case 93u: goto L_08A34568;
    case 94u: goto L_08A34570;
    case 95u: goto L_08A34584;
    case 96u: goto L_08A34594;
    case 97u: goto L_08A345A0;
    case 98u: goto L_08A345AC;
    case 99u: goto L_08A345C0;
    case 100u: goto L_08A345F4;
    case 101u: goto L_08A34620;
    case 102u: goto L_08A34628;
    case 103u: goto L_08A34634;
    case 104u: goto L_08A34644;
    case 105u: goto L_08A34654;
    case 106u: goto L_08A3466C;
    case 107u: goto L_08A34680;
    case 108u: goto L_08A346B4;
    case 109u: goto L_08A346D8;
    case 110u: goto L_08A346E0;
    case 111u: goto L_08A346E8;
    case 112u: goto L_08A34700;
    case 113u: goto L_08A34718;
    case 114u: goto L_08A34740;
    case 115u: goto L_08A3474C;
    case 116u: goto L_08A34758;
    case 117u: goto L_08A34768;
    case 118u: goto L_08A34770;
    case 119u: goto L_08A34778;
    case 120u: goto L_08A34780;
    case 121u: goto L_08A34794;
    case 122u: goto L_08A347A8;
    case 123u: goto L_08A347C8;
    case 124u: goto L_08A347D4;
    case 125u: goto L_08A347DC;
    case 126u: goto L_08A347E4;
    case 127u: goto L_08A347F0;
    case 128u: goto L_08A347FC;
    case 129u: goto L_08A34808;
    case 130u: goto L_08A34814;
    case 131u: goto L_08A3481C;
    case 132u: goto L_08A34838;
    case 133u: goto L_08A34844;
    case 134u: goto L_08A3484C;
    case 135u: goto L_08A34858;
    case 136u: goto L_08A34860;
    case 137u: goto L_08A34868;
    case 138u: goto L_08A34874;
    case 139u: goto L_08A34880;
    case 140u: goto L_08A34888;
    case 141u: goto L_08A34894;
    case 142u: goto L_08A3489C;
    case 143u: goto L_08A348A4;
    case 144u: goto L_08A348A8;
    case 145u: goto L_08A348B4;
    case 146u: goto L_08A348BC;
    case 147u: goto L_08A348D8;
    case 148u: goto L_08A348E4;
    case 149u: goto L_08A348FC;
    case 150u: goto L_08A34920;
    case 151u: goto L_08A3492C;
    case 152u: goto L_08A34938;
    case 153u: goto L_08A34954;
    case 154u: goto L_08A34960;
    case 155u: goto L_08A34968;
    case 156u: goto L_08A34974;
    case 157u: goto L_08A3498C;
    case 158u: goto L_08A349A8;
    case 159u: goto L_08A349C8;
    case 160u: goto L_08A349D4;
    case 161u: goto L_08A349F0;
    case 162u: goto L_08A34A28;
    case 163u: goto L_08A34A30;
    case 164u: goto L_08A34A38;
    case 165u: goto L_08A34A40;
    case 166u: goto L_08A34A4C;
    case 167u: goto L_08A34A54;
    case 168u: goto L_08A34A64;
    case 169u: goto L_08A34A74;
    case 170u: goto L_08A34A7C;
    case 171u: goto L_08A34A84;
    case 172u: goto L_08A34AB4;
    case 173u: goto L_08A34ABC;
    case 174u: goto L_08A34B28;
    case 175u: goto L_08A34B9C;
    case 176u: goto L_08A34BC4;
    case 177u: goto L_08A34BEC;
    case 178u: goto L_08A34BF4;
    case 179u: goto L_08A34C28;
    case 180u: goto L_08A34C4C;
    case 181u: goto L_08A34C54;
    case 182u: goto L_08A34C88;
    case 183u: goto L_08A34CC0;
    case 184u: goto L_08A34CF4;
    case 185u: goto L_08A34D04;
    case 186u: goto L_08A34D0C;
    case 187u: goto L_08A34D14;
    case 188u: goto L_08A34D20;
    case 189u: goto L_08A34D74;
    case 190u: goto L_08A34D88;
    case 191u: goto L_08A34DC8;
    case 192u: goto L_08A34DEC;
    case 193u: goto L_08A34DFC;
    case 194u: goto L_08A34E04;
    case 195u: goto L_08A34E0C;
    case 196u: goto L_08A34E10;
    case 197u: goto L_08A34E1C;
    case 198u: goto L_08A34E30;
    case 199u: goto L_08A34E38;
    case 200u: goto L_08A34E4C;
    case 201u: goto L_08A34E70;
    case 202u: goto L_08A34E80;
    case 203u: goto L_08A34E88;
    case 204u: goto L_08A34E90;
    case 205u: goto L_08A34E94;
    case 206u: goto L_08A34EA0;
    case 207u: goto L_08A34EB4;
    case 208u: goto L_08A34EBC;
    case 209u: goto L_08A34EC4;
    case 210u: goto L_08A34EEC;
    case 211u: goto L_08A34F00;
    case 212u: goto L_08A34F0C;
    case 213u: goto L_08A34F1C;
    case 214u: goto L_08A34F34;
    case 215u: goto L_08A34F3C;
    case 216u: goto L_08A34F40;
    case 217u: goto L_08A34F4C;
    case 218u: goto L_08A34F6C;
    case 219u: goto L_08A34F7C;
    case 220u: goto L_08A34F88;
    case 221u: goto L_08A34F9C;
    case 222u: goto L_08A34FD8;
    case 223u: goto L_08A34FEC;
    case 224u: goto L_08A34FFC;
    case 225u: goto L_08A3500C;
    case 226u: goto L_08A3501C;
    case 227u: goto L_08A3502C;
    case 228u: goto L_08A35038;
    case 229u: goto L_08A35054;
    case 230u: goto L_08A3505C;
    case 231u: goto L_08A35064;
    case 232u: goto L_08A35098;
    case 233u: goto L_08A350B4;
    case 234u: goto L_08A350C0;
    case 235u: goto L_08A350CC;
    case 236u: goto L_08A350D4;
    case 237u: goto L_08A350DC;
    case 238u: goto L_08A350E8;
    case 239u: goto L_08A350F0;
    case 240u: goto L_08A350F8;
    case 241u: goto L_08A35104;
    case 242u: goto L_08A35120;
    case 243u: goto L_08A35128;
    case 244u: goto L_08A3512C;
    case 245u: goto L_08A35150;
    case 246u: goto L_08A35158;
    case 247u: goto L_08A35168;
    case 248u: goto L_08A35170;
    case 249u: goto L_08A35184;
    case 250u: goto L_08A351A0;
    case 251u: goto L_08A351AC;
    case 252u: goto L_08A351B8;
    case 253u: goto L_08A351C0;
    case 254u: goto L_08A351C8;
    case 255u: goto L_08A351D8;
    case 256u: goto L_08A351E0;
    case 257u: goto L_08A351E8;
    case 258u: goto L_08A351F4;
    case 259u: goto L_08A35208;
    case 260u: goto L_08A35210;
    case 261u: goto L_08A35224;
    case 262u: goto L_08A35240;
    case 263u: goto L_08A3524C;
    case 264u: goto L_08A35258;
    case 265u: goto L_08A35264;
    case 266u: goto L_08A3526C;
    case 267u: goto L_08A3527C;
    case 268u: goto L_08A35284;
    case 269u: goto L_08A3528C;
    case 270u: goto L_08A35298;
    case 271u: goto L_08A352A4;
    case 272u: goto L_08A352AC;
    case 273u: goto L_08A352C0;
    case 274u: goto L_08A352DC;
    case 275u: goto L_08A352E8;
    case 276u: goto L_08A352F4;
    case 277u: goto L_08A352FC;
    case 278u: goto L_08A35304;
    case 279u: goto L_08A3530C;
    case 280u: goto L_08A35318;
    case 281u: goto L_08A35348;
    case 282u: goto L_08A35350;
    case 283u: goto L_08A35358;
    case 284u: goto L_08A35380;
    case 285u: goto L_08A3538C;
    case 286u: goto L_08A35394;
    case 287u: goto L_08A35398;
    case 288u: goto L_08A353AC;
    case 289u: goto L_08A353C8;
    case 290u: goto L_08A353D4;
    case 291u: goto L_08A353E0;
    case 292u: goto L_08A353E8;
    case 293u: goto L_08A353F0;
    case 294u: goto L_08A353F8;
    case 295u: goto L_08A35404;
    case 296u: goto L_08A35418;
    case 297u: goto L_08A3541C;
    case 298u: goto L_08A35430;
    case 299u: goto L_08A3544C;
    case 300u: goto L_08A35458;
    case 301u: goto L_08A35464;
    case 302u: goto L_08A3546C;
    case 303u: goto L_08A35474;
    case 304u: goto L_08A3547C;
    case 305u: goto L_08A35488;
    case 306u: goto L_08A35494;
    case 307u: goto L_08A35498;
    case 308u: goto L_08A354AC;
    case 309u: goto L_08A354C0;
    case 310u: goto L_08A354C8;
    case 311u: goto L_08A354D0;
    case 312u: goto L_08A354DC;
    case 313u: goto L_08A354E8;
    case 314u: goto L_08A354F0;
    case 315u: goto L_08A354F8;
    case 316u: goto L_08A35500;
    case 317u: goto L_08A3550C;
    case 318u: goto L_08A35524;
    case 319u: goto L_08A3552C;
    case 320u: goto L_08A35548;
    case 321u: goto L_08A35550;
    case 322u: goto L_08A35558;
    case 323u: goto L_08A35560;
    case 324u: goto L_08A35568;
    case 325u: goto L_08A35570;
    case 326u: goto L_08A35578;
    case 327u: goto L_08A35594;
    case 328u: goto L_08A3559C;
    case 329u: goto L_08A355A8;
    case 330u: goto L_08A355B0;
    case 331u: goto L_08A355B8;
    case 332u: goto L_08A355DC;
    case 333u: goto L_08A355EC;
    case 334u: goto L_08A355F4;
    case 335u: goto L_08A355FC;
    case 336u: goto L_08A35610;
    case 337u: goto L_08A3561C;
    case 338u: goto L_08A3562C;
    case 339u: goto L_08A35630;
    case 340u: goto L_08A3563C;
    case 341u: goto L_08A35648;
    case 342u: goto L_08A35664;
    case 343u: goto L_08A35670;
    case 344u: goto L_08A35678;
    case 345u: goto L_08A35684;
    case 346u: goto L_08A35690;
    case 347u: goto L_08A35698;
    case 348u: goto L_08A356A4;
    case 349u: goto L_08A356B4;
    case 350u: goto L_08A356BC;
    case 351u: goto L_08A356C4;
    case 352u: goto L_08A356D4;
    case 353u: goto L_08A35744;
    case 354u: goto L_08A35760;
    case 355u: goto L_08A35768;
    case 356u: goto L_08A3576C;
    case 357u: goto L_08A35774;
    case 358u: goto L_08A357B0;
    case 359u: goto L_08A357B8;
    case 360u: goto L_08A357BC;
    case 361u: goto L_08A357C4;
    case 362u: goto L_08A357D0;
    case 363u: goto L_08A357DC;
    case 364u: goto L_08A357E8;
    case 365u: goto L_08A357FC;
    case 366u: goto L_08A35808;
    case 367u: goto L_08A35810;
    case 368u: goto L_08A3581C;
    case 369u: goto L_08A35828;
    case 370u: goto L_08A35830;
    case 371u: goto L_08A35834;
    case 372u: goto L_08A35840;
    case 373u: goto L_08A35848;
    case 374u: goto L_08A3584C;
    case 375u: goto L_08A3587C;
    case 376u: goto L_08A35884;
    case 377u: goto L_08A3588C;
    case 378u: goto L_08A35894;
    case 379u: goto L_08A358A4;
    case 380u: goto L_08A358CC;
    case 381u: goto L_08A35900;
    case 382u: goto L_08A35908;
    case 383u: goto L_08A35910;
    case 384u: goto L_08A35938;
    case 385u: goto L_08A35950;
    case 386u: goto L_08A35964;
    case 387u: goto L_08A35974;
    case 388u: goto L_08A3598C;
    case 389u: goto L_08A35994;
    case 390u: goto L_08A359A0;
    case 391u: goto L_08A359AC;
    case 392u: goto L_08A359B8;
    case 393u: goto L_08A359C0;
    case 394u: goto L_08A359C4;
    case 395u: goto L_08A359CC;
    case 396u: goto L_08A359D4;
    case 397u: goto L_08A359E4;
    case 398u: goto L_08A359EC;
    case 399u: goto L_08A359F4;
    case 400u: goto L_08A359FC;
    case 401u: goto L_08A35A14;
    case 402u: goto L_08A35A1C;
    case 403u: goto L_08A35A2C;
    case 404u: goto L_08A35A58;
    case 405u: goto L_08A35A60;
    case 406u: goto L_08A35AB8;
    case 407u: goto L_08A35AC4;
    case 408u: goto L_08A35AD0;
    case 409u: goto L_08A35AD8;
    case 410u: goto L_08A35AE4;
    case 411u: goto L_08A35AEC;
    case 412u: goto L_08A35B18;
    case 413u: goto L_08A35B24;
    case 414u: goto L_08A35B30;
    case 415u: goto L_08A35B38;
    case 416u: goto L_08A35B3C;
    case 417u: goto L_08A35B40;
    case 418u: goto L_08A35B4C;
    case 419u: goto L_08A35B54;
    case 420u: goto L_08A35B60;
    case 421u: goto L_08A35B64;
    case 422u: goto L_08A35B94;
    case 423u: goto L_08A35B9C;
    case 424u: goto L_08A35BA4;
    case 425u: goto L_08A35BB0;
    case 426u: goto L_08A35BBC;
    case 427u: goto L_08A35BC4;
    case 428u: goto L_08A35BCC;
    case 429u: goto L_08A35BD8;
    case 430u: goto L_08A35BE0;
    case 431u: goto L_08A35BE8;
    case 432u: goto L_08A35BF0;
    case 433u: goto L_08A35C10;
    case 434u: goto L_08A35C24;
    case 435u: goto L_08A35C4C;
    case 436u: goto L_08A35C54;
    case 437u: goto L_08A35C68;
    case 438u: goto L_08A35C78;
    case 439u: goto L_08A35C80;
    case 440u: goto L_08A35C88;
    case 441u: goto L_08A35C9C;
    case 442u: goto L_08A35CA4;
    case 443u: goto L_08A35CB8;
    case 444u: goto L_08A35CC0;
    case 445u: goto L_08A35CCC;
    case 446u: goto L_08A35CD4;
    case 447u: goto L_08A35CE0;
    case 448u: goto L_08A35CE8;
    case 449u: goto L_08A35CF0;
    case 450u: goto L_08A35CF8;
    case 451u: goto L_08A35D00;
    case 452u: goto L_08A35D0C;
    case 453u: goto L_08A35D14;
    case 454u: goto L_08A35D1C;
    case 455u: goto L_08A35D3C;
    case 456u: goto L_08A35D5C;
    case 457u: goto L_08A35D7C;
    case 458u: goto L_08A35D8C;
    case 459u: goto L_08A35D9C;
    case 460u: goto L_08A35DA4;
    case 461u: goto L_08A35DB0;
    case 462u: goto L_08A35DBC;
    case 463u: goto L_08A35DCC;
    case 464u: goto L_08A35DFC;
    case 465u: goto L_08A35E50;
    case 466u: goto L_08A35E5C;
    case 467u: goto L_08A35E68;
    case 468u: goto L_08A35E70;
    case 469u: goto L_08A35E74;
    case 470u: goto L_08A35E78;
    case 471u: goto L_08A35E84;
    case 472u: goto L_08A35E8C;
    case 473u: goto L_08A35E98;
    case 474u: goto L_08A35E9C;
    case 475u: goto L_08A35ECC;
    case 476u: goto L_08A35ED4;
    case 477u: goto L_08A35EE0;
    case 478u: goto L_08A35F00;
    case 479u: goto L_08A35F14;
    case 480u: goto L_08A35F3C;
    case 481u: goto L_08A35F44;
    case 482u: goto L_08A35F58;
    case 483u: goto L_08A35F68;
    case 484u: goto L_08A35F70;
    case 485u: goto L_08A35F78;
    case 486u: goto L_08A35F88;
    case 487u: goto L_08A35F9C;
    case 488u: goto L_08A35FA4;
    case 489u: goto L_08A35FB8;
    case 490u: goto L_08A35FC0;
    case 491u: goto L_08A35FCC;
    case 492u: goto L_08A35FD4;
    case 493u: goto L_08A35FE0;
    case 494u: goto L_08A35FE8;
    case 495u: goto L_08A35FF0;
    case 496u: goto L_08A35FF8;
    case 497u: goto L_08A36000;
    case 498u: goto L_08A3600C;
    case 499u: goto L_08A36014;
    case 500u: goto L_08A3601C;
    case 501u: goto L_08A3603C;
    case 502u: goto L_08A3605C;
    case 503u: goto L_08A3607C;
    case 504u: goto L_08A3608C;
    case 505u: goto L_08A3609C;
    case 506u: goto L_08A360A4;
    case 507u: goto L_08A360B0;
    case 508u: goto L_08A360BC;
    case 509u: goto L_08A360CC;
    case 510u: goto L_08A360EC;
    case 511u: goto L_08A3611C;
    case 512u: goto L_08A36128;
    case 513u: goto L_08A36130;
    case 514u: goto L_08A3613C;
    case 515u: goto L_08A36140;
    case 516u: goto L_08A36148;
    case 517u: goto L_08A36150;
    case 518u: goto L_08A36158;
    case 519u: goto L_08A36160;
    case 520u: goto L_08A36164;
    case 521u: goto L_08A3616C;
    case 522u: goto L_08A36178;
    case 523u: goto L_08A3617C;
    case 524u: goto L_08A36184;
    case 525u: goto L_08A36190;
    case 526u: goto L_08A36194;
    case 527u: goto L_08A3619C;
    case 528u: goto L_08A361A4;
    case 529u: goto L_08A361B4;
    case 530u: goto L_08A361C0;
    case 531u: goto L_08A361CC;
    case 532u: goto L_08A361D8;
    case 533u: goto L_08A361E4;
    case 534u: goto L_08A361F0;
    case 535u: goto L_08A361F8;
    case 536u: goto L_08A36214;
    case 537u: goto L_08A36218;
    case 538u: goto L_08A36250;
    case 539u: goto L_08A36260;
    case 540u: goto L_08A36274;
    case 541u: goto L_08A3627C;
    case 542u: goto L_08A36288;
    case 543u: goto L_08A362AC;
    case 544u: goto L_08A362BC;
    case 545u: goto L_08A362D8;
    case 546u: goto L_08A362E8;
    case 547u: goto L_08A362F4;
    case 548u: goto L_08A36300;
    case 549u: goto L_08A3630C;
    case 550u: goto L_08A36318;
    case 551u: goto L_08A36334;
    case 552u: goto L_08A36338;
    case 553u: goto L_08A3635C;
    case 554u: goto L_08A3636C;
    case 555u: goto L_08A36374;
    case 556u: goto L_08A3637C;
    case 557u: goto L_08A36384;
    case 558u: goto L_08A3638C;
    case 559u: goto L_08A3639C;
    case 560u: goto L_08A363AC;
    case 561u: goto L_08A363B8;
    case 562u: goto L_08A363C8;
    case 563u: goto L_08A363D8;
    case 564u: goto L_08A363F0;
    case 565u: goto L_08A3640C;
    case 566u: goto L_08A36418;
    case 567u: goto L_08A36424;
    case 568u: goto L_08A36448;
    case 569u: goto L_08A36450;
    case 570u: goto L_08A36468;
    case 571u: goto L_08A36474;
    case 572u: goto L_08A3647C;
    case 573u: goto L_08A3648C;
    case 574u: goto L_08A3649C;
    case 575u: goto L_08A364B8;
    case 576u: goto L_08A364D4;
    case 577u: goto L_08A364DC;
    case 578u: goto L_08A364E0;
    case 579u: goto L_08A364E8;
    case 580u: goto L_08A36510;
    case 581u: goto L_08A3651C;
    case 582u: goto L_08A36528;
    case 583u: goto L_08A36530;
    case 584u: goto L_08A3653C;
    case 585u: goto L_08A36540;
    case 586u: goto L_08A36548;
    case 587u: goto L_08A36554;
    case 588u: goto L_08A3655C;
    case 589u: goto L_08A36570;
    case 590u: goto L_08A36580;
    case 591u: goto L_08A36588;
    case 592u: goto L_08A36590;
    case 593u: goto L_08A36598;
    case 594u: goto L_08A365A4;
    case 595u: goto L_08A365AC;
    case 596u: goto L_08A365C8;
    case 597u: goto L_08A365D4;
    case 598u: goto L_08A365DC;
    case 599u: goto L_08A365EC;
    case 600u: goto L_08A365FC;
    case 601u: goto L_08A3660C;
    case 602u: goto L_08A3661C;
    case 603u: goto L_08A36630;
    case 604u: goto L_08A36638;
    case 605u: goto L_08A36640;
    case 606u: goto L_08A36648;
    case 607u: goto L_08A36650;
    case 608u: goto L_08A36664;
    case 609u: goto L_08A3666C;
    case 610u: goto L_08A36678;
    case 611u: goto L_08A36680;
    case 612u: goto L_08A36688;
    case 613u: goto L_08A36690;
    case 614u: goto L_08A36698;
    case 615u: goto L_08A366B8;
    case 616u: goto L_08A366C4;
    case 617u: goto L_08A366CC;
    case 618u: goto L_08A366D8;
    case 619u: goto L_08A366E0;
    case 620u: goto L_08A366E8;
    case 621u: goto L_08A366F0;
    case 622u: goto L_08A366FC;
    case 623u: goto L_08A36704;
    case 624u: goto L_08A3670C;
    case 625u: goto L_08A36714;
    case 626u: goto L_08A3671C;
    case 627u: goto L_08A36728;
    case 628u: goto L_08A36730;
    case 629u: goto L_08A36738;
    case 630u: goto L_08A3675C;
    case 631u: goto L_08A36764;
    case 632u: goto L_08A3676C;
    case 633u: goto L_08A36774;
    case 634u: goto L_08A36780;
    case 635u: goto L_08A36788;
    case 636u: goto L_08A36790;
    case 637u: goto L_08A36798;
    case 638u: goto L_08A367A0;
    case 639u: goto L_08A367B0;
    case 640u: goto L_08A367C4;
    case 641u: goto L_08A367CC;
    case 642u: goto L_08A367D4;
    case 643u: goto L_08A367F0;
    case 644u: goto L_08A36824;
    case 645u: goto L_08A3682C;
    case 646u: goto L_08A36834;
    case 647u: goto L_08A3683C;
    case 648u: goto L_08A36844;
    case 649u: goto L_08A3684C;
    case 650u: goto L_08A36854;
    case 651u: goto L_08A36868;
    case 652u: goto L_08A36874;
    case 653u: goto L_08A36880;
    case 654u: goto L_08A36888;
    case 655u: goto L_08A36898;
    case 656u: goto L_08A368BC;
    case 657u: goto L_08A368C8;
    case 658u: goto L_08A368D8;
    case 659u: goto L_08A368E0;
    case 660u: goto L_08A368EC;
    case 661u: goto L_08A368F4;
    case 662u: goto L_08A36904;
    case 663u: goto L_08A36928;
    case 664u: goto L_08A36934;
    case 665u: goto L_08A36944;
    case 666u: goto L_08A36950;
    case 667u: goto L_08A3696C;
    case 668u: goto L_08A3697C;
    case 669u: goto L_08A36994;
    case 670u: goto L_08A369A0;
    case 671u: goto L_08A369AC;
    case 672u: goto L_08A369BC;
    case 673u: goto L_08A369E4;
    case 674u: goto L_08A369F4;
    case 675u: goto L_08A36A04;
    case 676u: goto L_08A36A10;
    case 677u: goto L_08A36A18;
    case 678u: goto L_08A36A1C;
    case 679u: goto L_08A36A24;
    case 680u: goto L_08A36A30;
    case 681u: goto L_08A36A3C;
    case 682u: goto L_08A36A44;
    case 683u: goto L_08A36A48;
    case 684u: goto L_08A36A50;
    case 685u: goto L_08A36A70;
    case 686u: goto L_08A36A78;
    case 687u: goto L_08A36AA0;
    case 688u: goto L_08A36AB8;
    case 689u: goto L_08A36ADC;
    case 690u: goto L_08A36AF4;
    case 691u: goto L_08A36AFC;
    case 692u: goto L_08A36B0C;
    case 693u: goto L_08A36B14;
    case 694u: goto L_08A36B1C;
    case 695u: goto L_08A36B34;
    case 696u: goto L_08A36B3C;
    case 697u: goto L_08A36B48;
    case 698u: goto L_08A36B54;
    case 699u: goto L_08A36B60;
    case 700u: goto L_08A36B68;
    case 701u: goto L_08A36B6C;
    case 702u: goto L_08A36B78;
    case 703u: goto L_08A36B80;
    case 704u: goto L_08A36B90;
    case 705u: goto L_08A36B98;
    case 706u: goto L_08A36BA4;
    case 707u: goto L_08A36BBC;
    case 708u: goto L_08A36BC8;
    case 709u: goto L_08A36BD4;
    case 710u: goto L_08A36BE0;
    case 711u: goto L_08A36BE8;
    case 712u: goto L_08A36BEC;
    case 713u: goto L_08A36BF4;
    case 714u: goto L_08A36C00;
    case 715u: goto L_08A36C0C;
    case 716u: goto L_08A36C14;
    case 717u: goto L_08A36C24;
    case 718u: goto L_08A36C48;
    case 719u: goto L_08A36C54;
    case 720u: goto L_08A36C60;
    case 721u: goto L_08A36C90;
    case 722u: goto L_08A36C98;
    case 723u: goto L_08A36CD0;
    case 724u: goto L_08A36CF0;
    case 725u: goto L_08A36CF8;
    case 726u: goto L_08A36D08;
    case 727u: goto L_08A36D18;
    case 728u: goto L_08A36D1C;
    case 729u: goto L_08A36D24;
    case 730u: goto L_08A36D2C;
    case 731u: goto L_08A36D44;
    case 732u: goto L_08A36D48;
    case 733u: goto L_08A36D4C;
    case 734u: goto L_08A36D7C;
    case 735u: goto L_08A36D84;
    case 736u: goto L_08A36D88;
    case 737u: goto L_08A36D90;
    case 738u: goto L_08A36DC8;
    case 739u: goto L_08A36DD4;
    case 740u: goto L_08A36DE0;
    case 741u: goto L_08A36DEC;
    case 742u: goto L_08A36DF4;
    case 743u: goto L_08A36DF8;
    case 744u: goto L_08A36E00;
    case 745u: goto L_08A36E08;
    case 746u: goto L_08A36E18;
    case 747u: goto L_08A36E2C;
    case 748u: goto L_08A36E38;
    case 749u: goto L_08A36E50;
    case 750u: goto L_08A36E58;
    case 751u: goto L_08A36E78;
    case 752u: goto L_08A36EC0;
    case 753u: goto L_08A36ECC;
    case 754u: goto L_08A36F00;
    case 755u: goto L_08A36F1C;
    case 756u: goto L_08A36F24;
    case 757u: goto L_08A36F34;
    case 758u: goto L_08A36F3C;
    case 759u: goto L_08A36F58;
    case 760u: goto L_08A36F60;
    case 761u: goto L_08A36F98;
    case 762u: goto L_08A36FA8;
    case 763u: goto L_08A36FB4;
    case 764u: goto L_08A36FBC;
    case 765u: goto L_08A36FC4;
    case 766u: goto L_08A36FD0;
    case 767u: goto L_08A36FDC;
    case 768u: goto L_08A36FE8;
    case 769u: goto L_08A36FEC;
    case 770u: goto L_08A36FF8;
    case 771u: goto L_08A37000;
    case 772u: goto L_08A3700C;
    case 773u: goto L_08A3701C;
    case 774u: goto L_08A3702C;
    case 775u: goto L_08A37040;
    case 776u: goto L_08A37074;
    case 777u: goto L_08A37080;
    case 778u: goto L_08A3708C;
    case 779u: goto L_08A37098;
    case 780u: goto L_08A370A4;
    case 781u: goto L_08A370B0;
    case 782u: goto L_08A370B8;
    case 783u: goto L_08A370C0;
    case 784u: goto L_08A370C8;
    case 785u: goto L_08A370D0;
    case 786u: goto L_08A370E0;
    case 787u: goto L_08A37114;
    case 788u: goto L_08A37120;
    case 789u: goto L_08A3712C;
    case 790u: goto L_08A37138;
    case 791u: goto L_08A37140;
    case 792u: goto L_08A37148;
    case 793u: goto L_08A37150;
    case 794u: goto L_08A3715C;
    case 795u: goto L_08A3716C;
    case 796u: goto L_08A371A0;
    case 797u: goto L_08A371BC;
    case 798u: goto L_08A371C8;
    case 799u: goto L_08A371E0;
    case 800u: goto L_08A371EC;
    case 801u: goto L_08A371F4;
    case 802u: goto L_08A371FC;
    case 803u: goto L_08A37214;
    case 804u: goto L_08A37220;
    case 805u: goto L_08A37228;
    case 806u: goto L_08A37230;
    case 807u: goto L_08A3724C;
    case 808u: goto L_08A37258;
    case 809u: goto L_08A37264;
    case 810u: goto L_08A37270;
    case 811u: goto L_08A37280;
    case 812u: goto L_08A37288;
    case 813u: goto L_08A37290;
    case 814u: goto L_08A37298;
    case 815u: goto L_08A372A8;
    case 816u: goto L_08A372B4;
    case 817u: goto L_08A372BC;
    case 818u: goto L_08A372C4;
    case 819u: goto L_08A372D4;
    case 820u: goto L_08A372E4;
    case 821u: goto L_08A372F0;
    case 822u: goto L_08A372F8;
    case 823u: goto L_08A37308;
    case 824u: goto L_08A37318;
    case 825u: goto L_08A3734C;
    case 826u: goto L_08A3735C;
    case 827u: goto L_08A37368;
    case 828u: goto L_08A37370;
    case 829u: goto L_08A37378;
    case 830u: goto L_08A37384;
    case 831u: goto L_08A37390;
    case 832u: goto L_08A3739C;
    case 833u: goto L_08A373A4;
    case 834u: goto L_08A373C0;
    case 835u: goto L_08A373D0;
    case 836u: goto L_08A37404;
    case 837u: goto L_08A37410;
    case 838u: goto L_08A3741C;
    case 839u: goto L_08A37428;
    case 840u: goto L_08A37430;
    case 841u: goto L_08A37438;
    case 842u: goto L_08A37440;
    case 843u: goto L_08A37460;
    case 844u: goto L_08A37470;
    case 845u: goto L_08A3749C;
    case 846u: goto L_08A374A8;
    case 847u: goto L_08A374B8;
    case 848u: goto L_08A374EC;
    case 849u: goto L_08A3750C;
    case 850u: goto L_08A37518;
    case 851u: goto L_08A37534;
    case 852u: goto L_08A37540;
    case 853u: goto L_08A37584;
    case 854u: goto L_08A37590;
    case 855u: goto L_08A37598;
    case 856u: goto L_08A375A0;
    case 857u: goto L_08A375A8;
    case 858u: goto L_08A375B8;
    case 859u: goto L_08A375C8;
    case 860u: goto L_08A375D0;
    case 861u: goto L_08A375D8;
    case 862u: goto L_08A375E4;
    case 863u: goto L_08A37600;
    case 864u: goto L_08A376E8;
    case 865u: goto L_08A376F4;
    case 866u: goto L_08A376FC;
    case 867u: goto L_08A37704;
    case 868u: goto L_08A3770C;
    case 869u: goto L_08A3771C;
    case 870u: goto L_08A3772C;
    case 871u: goto L_08A37734;
    case 872u: goto L_08A3773C;
    case 873u: goto L_08A37744;
    case 874u: goto L_08A37778;
    case 875u: goto L_08A377A4;
    case 876u: goto L_08A377E8;
    case 877u: goto L_08A377F4;
    case 878u: goto L_08A377FC;
    case 879u: goto L_08A37804;
    case 880u: goto L_08A3780C;
    case 881u: goto L_08A3781C;
    case 882u: goto L_08A3782C;
    case 883u: goto L_08A37834;
    case 884u: goto L_08A3783C;
    case 885u: goto L_08A37844;
    case 886u: goto L_08A37850;
    case 887u: goto L_08A37854;
    case 888u: goto L_08A37870;
    case 889u: goto L_08A378E0;
    case 890u: goto L_08A378EC;
    case 891u: goto L_08A37900;
    case 892u: goto L_08A37910;
    case 893u: goto L_08A37918;
    case 894u: goto L_08A37920;
    case 895u: goto L_08A37928;
    case 896u: goto L_08A37934;
    case 897u: goto L_08A3794C;
    case 898u: goto L_08A37954;
    case 899u: goto L_08A3795C;
    case 900u: goto L_08A37974;
    case 901u: goto L_08A37980;
    case 902u: goto L_08A37988;
    case 903u: goto L_08A3799C;
    case 904u: goto L_08A379AC;
    case 905u: goto L_08A379B4;
    case 906u: goto L_08A379BC;
    case 907u: goto L_08A379C4;
    case 908u: goto L_08A379D0;
    case 909u: goto L_08A379D8;
    case 910u: goto L_08A379E0;
    case 911u: goto L_08A379F8;
    case 912u: goto L_08A37A10;
    case 913u: goto L_08A37A50;
    case 914u: goto L_08A37A68;
    case 915u: goto L_08A37A74;
    case 916u: goto L_08A37A78;
    case 917u: goto L_08A37A80;
    case 918u: goto L_08A37A94;
    case 919u: goto L_08A37AA4;
    case 920u: goto L_08A37AAC;
    case 921u: goto L_08A37AB4;
    case 922u: goto L_08A37ABC;
    case 923u: goto L_08A37AC8;
    case 924u: goto L_08A37AE8;
    case 925u: goto L_08A37AF0;
    case 926u: goto L_08A37AF8;
    case 927u: goto L_08A37B10;
    case 928u: goto L_08A37B1C;
    case 929u: goto L_08A37B24;
    case 930u: goto L_08A37B38;
    case 931u: goto L_08A37B48;
    case 932u: goto L_08A37B50;
    case 933u: goto L_08A37B58;
    case 934u: goto L_08A37B60;
    case 935u: goto L_08A37B6C;
    case 936u: goto L_08A37B74;
    case 937u: goto L_08A37B7C;
    case 938u: goto L_08A37B9C;
    case 939u: goto L_08A37BB8;
    case 940u: goto L_08A37BF4;
    case 941u: goto L_08A37C00;
    case 942u: goto L_08A37C14;
    case 943u: goto L_08A37C24;
    case 944u: goto L_08A37C2C;
    case 945u: goto L_08A37C38;
    case 946u: goto L_08A37CC4;
    case 947u: goto L_08A37CE0;
    case 948u: goto L_08A37D14;
    case 949u: goto L_08A37D20;
    case 950u: goto L_08A37D2C;
    case 951u: goto L_08A37D38;
    case 952u: goto L_08A37D40;
    case 953u: goto L_08A37D48;
    case 954u: goto L_08A37D50;
    case 955u: goto L_08A37D70;
    case 956u: goto L_08A37D80;
    case 957u: goto L_08A37D90;
    case 958u: goto L_08A37DB0;
    case 959u: goto L_08A37DBC;
    case 960u: goto L_08A37DC8;
    case 961u: goto L_08A37E1C;
    case 962u: goto L_08A37E2C;
    case 963u: goto L_08A37E44;
    case 964u: goto L_08A37E74;
    case 965u: goto L_08A37E80;
    case 966u: goto L_08A37EAC;
    case 967u: goto L_08A37EB4;
    case 968u: goto L_08A37EC0;
    case 969u: goto L_08A37ED0;
    case 970u: goto L_08A37EDC;
    case 971u: goto L_08A37EEC;
    case 972u: goto L_08A37EF4;
    case 973u: goto L_08A37F04;
    case 974u: goto L_08A37F10;
    case 975u: goto L_08A37F38;
    case 976u: goto L_08A37F40;
    case 977u: goto L_08A37F4C;
    case 978u: goto L_08A37F5C;
    case 979u: goto L_08A37F68;
    case 980u: goto L_08A37F78;
    case 981u: goto L_08A37F80;
    case 982u: goto L_08A37F90;
    case 983u: goto L_08A37F9C;
    case 984u: goto L_08A37FC4;
    case 985u: goto L_08A37FCC;
    case 986u: goto L_08A37FD8;
    case 987u: goto L_08A37FE8;
    case 988u: goto L_08A37FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08A34000:
    aot_gpr_31 = (0x08A34008u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34008u) goto L_08A34008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34008:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 9u);
    aot_gpr_31 = (0x08A34018u);
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34018u) goto L_08A34018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A341A8;
      }
      goto L_08A34020;
    }
L_08A34020:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2292)));
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A340B8;
      }
      goto L_08A3403C;
    }
L_08A3403C:
    aot_gpr_31 = (0x08A34044u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34044u) goto L_08A34044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34044:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
        goto L_08A34088;
    }
    goto L_08A3404C;
L_08A3404C:
    aot_gpr_31 = (0x08A34054u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34054u) goto L_08A34054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34054:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (14289u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A340B8;
      }
      goto L_08A34084;
    }
L_08A34084:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    goto L_08A34088;
L_08A34088:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (65408u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
      if (branch_taken) {
          goto L_08A341A8;
      }
      goto L_08A340B8;
    }
L_08A340B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2288)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A34118;
      }
      goto L_08A340C4;
    }
L_08A340C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2288)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[19];
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
      if (branch_taken) {
          goto L_08A34120;
      }
      goto L_08A34118;
    }
L_08A34118:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    goto L_08A34120;
L_08A34120:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A3419C;
      }
      goto L_08A34130;
    }
L_08A34130:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
        goto L_08A34150;
    }
    goto L_08A34140;
L_08A34140:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A3414Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3414Cu) goto L_08A3414C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3414C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    goto L_08A34150;
L_08A34150:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2049));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (65408u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A34194u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 323u, 0x08A31654u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34194u) goto L_08A34194;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A341A8;
      }
      goto L_08A3419C;
    }
L_08A3419C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(456)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(456), aot_gpr_4);
    goto L_08A341A8;
L_08A341A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A341B0;
    }
L_08A341B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2297)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34264;
      }
      goto L_08A341BC;
    }
L_08A341BC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2302)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34264;
      }
      goto L_08A341C8;
    }
L_08A341C8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2296)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
        goto L_08A341F0;
    }
    goto L_08A341D4;
L_08A341D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 22u);
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
        goto L_08A341F0;
    }
    goto L_08A341E4;
L_08A341E4:
    aot_gpr_31 = (0x08A341ECu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 712u, 0x08A33164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A341ECu) goto L_08A341EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A341EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    goto L_08A341F0;
L_08A341F0:
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-513));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2297), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-4097));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2049));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (65408u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(460), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 8192u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34240;
      }
      goto L_08A34234;
    }
L_08A34234:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A34240u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 696u, 0x089AB4FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34240u) goto L_08A34240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34240:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A3424C;
    }
L_08A3424C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A3425Cu);
    aot_gpr_5 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3425Cu) goto L_08A3425C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3425C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A34264;
    }
L_08A34264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 22u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A34274;
    }
L_08A34274:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2296)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34288;
      }
      goto L_08A34280;
    }
L_08A34280:
    aot_gpr_31 = (0x08A34288u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 712u, 0x08A33164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34288u) goto L_08A34288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34288:
    aot_gpr_31 = (0x08A34290u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34290u) goto L_08A34290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34290:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A34298;
    }
L_08A34298:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A343C8;
      }
      goto L_08A342A4;
    }
L_08A342A4:
    aot_gpr_31 = (0x08A342ACu);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A342ACu) goto L_08A342AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A342AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A343C8;
      }
      goto L_08A342B4;
    }
L_08A342B4:
    aot_gpr_31 = (0x08A342BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 456u, 0x08B01BA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A342BCu) goto L_08A342BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A342BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3436C;
      }
      goto L_08A342C4;
    }
L_08A342C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34344;
      }
      goto L_08A342D4;
    }
L_08A342D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34314;
      }
      goto L_08A342EC;
    }
L_08A342EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A342FC;
    }
L_08A342FC:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A3430Cu);
    aot_gpr_5 = (0u | 17u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3430Cu) goto L_08A3430C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3430C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A34314;
    }
L_08A34314:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_31 = (0x08A34320u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(900)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34320u) goto L_08A34320;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A34328;
    }
L_08A34328:
    aot_gpr_31 = (0x08A34330u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34330u) goto L_08A34330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34330:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A3433Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3433Cu) goto L_08A3433C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3433C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A34344;
    }
L_08A34344:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A34354;
    }
L_08A34354:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1152)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A34364u);
    aot_gpr_5 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34364u) goto L_08A34364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A3436C;
    }
L_08A3436C:
    aot_gpr_31 = (0x08A34374u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0176_entry, 176u, 1022u, 0x08AC7C60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34374u) goto L_08A34374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34374:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A34380u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34380u) goto L_08A34380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34380:
    aot_gpr_31 = (0x08A34388u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34388u) goto L_08A34388;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34388:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 7u);
        goto L_08A343AC;
    }
    goto L_08A34394;
L_08A34394:
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 & 7u);
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 24u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
      if (branch_taken) {
          goto L_08A343B4;
      }
      goto L_08A343AC;
    }
L_08A343AC:
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    goto L_08A343B4;
L_08A343B4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08A343C0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A343C0u) goto L_08A343C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A343C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A343C8;
    }
L_08A343C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A343D8;
    }
L_08A343D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2196)));
    aot_gpr_5 = (0u | 14u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A343E8;
    }
L_08A343E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2276)));
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A343F8;
    }
L_08A343F8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16840u << 16u);
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A3440C;
    }
L_08A3440C:
    ctx.gpr[21] = (0u | 6u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (0u | 5u);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08A34424;
L_08A34424:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A34434;
    }
L_08A34434:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (0u | 18u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34458;
      }
      goto L_08A34448;
    }
L_08A34448:
    aot_gpr_31 = (0x08A34450u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34450u) goto L_08A34450;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34450:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34540;
      }
      goto L_08A34458;
    }
L_08A34458:
    aot_gpr_31 = (0x08A34460u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34460u) goto L_08A34460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34460:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34540;
      }
      goto L_08A34468;
    }
L_08A34468:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1360)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34540;
      }
      goto L_08A34498;
    }
L_08A34498:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_gpr_16 = (0u | 0u);
      if (branch_taken) {
          goto L_08A344FC;
      }
      goto L_08A344B0;
    }
L_08A344B0:
    aot_gpr_31 = (0x08A344B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A344B8u) goto L_08A344B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A344B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A344FC;
      }
      goto L_08A344C0;
    }
L_08A344C0:
    aot_gpr_31 = (0x08A344C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A344C8u) goto L_08A344C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A344C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A344FC;
      }
      goto L_08A344E4;
    }
L_08A344E4:
    aot_gpr_31 = (0x08A344ECu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 20u, 0x08910150u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A344ECu) goto L_08A344EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A344EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A344FC;
      }
      goto L_08A344F8;
    }
L_08A344F8:
    aot_gpr_16 = (ctx.gpr[23] | 0u);
    goto L_08A344FC;
L_08A344FC:
    { const bool branch_taken = aot_gpr_16 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34538;
      }
      goto L_08A34504;
    }
L_08A34504:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A34514u);
    aot_gpr_5 = (0u | 8u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34514u) goto L_08A34514;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34514:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (0u | 10u);
    aot_gpr_31 = (0x08A34524u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34524u) goto L_08A34524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (aot_gpr_5 | 1024u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(460), aot_gpr_5);
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A34538;
    }
L_08A34538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A34540;
    }
L_08A34540:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A34550;
    }
L_08A34550:
    aot_gpr_31 = (0x08A34558u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34558u) goto L_08A34558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34558:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A34560;
    }
L_08A34560:
    aot_gpr_31 = (0x08A34568u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34568u) goto L_08A34568;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34568:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A34570;
    }
L_08A34570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2324)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A34584;
    }
L_08A34584:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1784)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2196)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A34594;
    }
L_08A34594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A345A0;
    }
L_08A345A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1716)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A345AC;
    }
L_08A345AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1736)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A345C0;
    }
L_08A345C0:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    aot_gpr_5 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A345F4;
    }
L_08A345F4:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08A34620u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34620u) goto L_08A34620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34620:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3466C;
      }
      goto L_08A34628;
    }
L_08A34628:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A34634u);
    aot_gpr_5 = (0u | 133u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34634u) goto L_08A34634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34634:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (0u | 14u);
    aot_gpr_31 = (0x08A34644u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34644u) goto L_08A34644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34644:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08A34654u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34654u) goto L_08A34654;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-31072));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2324), aot_gpr_4);
      if (branch_taken) {
          goto L_08A34680;
      }
      goto L_08A3466C;
    }
L_08A3466C:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1914)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A34424;
      }
      goto L_08A34680;
    }
L_08A34680:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(292), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      ctx.gpr[23] = aot_run_words[8];
      ctx.gpr[30] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A346B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    aot_gpr_31 = (0x08A346D8u);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A346D8u) goto L_08A346D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A346D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34770;
      }
      goto L_08A346E0;
    }
L_08A346E0:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34770;
      }
      goto L_08A346E8;
    }
L_08A346E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A34700u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34700u) goto L_08A34700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34700:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A34718u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34718u) goto L_08A34718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34718:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-30640)));
    aot_gpr_5 = (ctx.gpr[2] << 6u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(44))))));
    aot_gpr_4 = (aot_gpr_4 & 4u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34770;
      }
      goto L_08A34740;
    }
L_08A34740:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A3474Cu);
    aot_gpr_5 = (0u | 108u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3474Cu) goto L_08A3474C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3474C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A34758u);
    aot_gpr_5 = (0u | 109u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34758u) goto L_08A34758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34758:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2228)));
    aot_gpr_5 = (0u | 61u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A34780;
      }
      goto L_08A34768;
    }
L_08A34768:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (0u | 59u);
      if (branch_taken) {
          goto L_08A34778;
      }
      goto L_08A34770;
    }
L_08A34770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A349D4;
      }
      goto L_08A34778;
    }
L_08A34778:
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A347E4;
      }
      goto L_08A34780;
    }
L_08A34780:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2072)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A347DC;
      }
      goto L_08A34794;
    }
L_08A34794:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(460)));
    aot_gpr_5 = (16384u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_31 = (0x08A347A8u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(460), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A347A8u) goto L_08A347A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A347A8:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(3261));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3152), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A347C8;
    }
L_08A347C8:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(3152));
    aot_gpr_31 = (0x08A347D4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A347D4u) goto L_08A347D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A347D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A347DC;
    }
L_08A347DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A349D4;
      }
      goto L_08A347E4;
    }
L_08A347E4:
    aot_gpr_5 = (0u | 17u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_08A3484C;
      }
      goto L_08A347F0;
    }
L_08A347F0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A347FCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A347FCu) goto L_08A347FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A347FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(3292)));
    aot_gpr_31 = (0x08A34808u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 431u, 0x08A39D10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34808u) goto L_08A34808;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34808:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A34814u);
    aot_gpr_5 = (0u | 65u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34814u) goto L_08A34814;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34814:
    aot_gpr_31 = (0x08A3481Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3481Cu) goto L_08A3481C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3481C:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(3261));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3152), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A34838;
    }
L_08A34838:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(3152));
    aot_gpr_31 = (0x08A34844u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34844u) goto L_08A34844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A3484C;
    }
L_08A3484C:
    aot_gpr_5 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 58u);
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A34858;
    }
L_08A34858:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (0u | 65u);
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A34860;
    }
L_08A34860:
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A34868;
    }
L_08A34868:
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34888;
      }
      goto L_08A34874;
    }
L_08A34874:
    aot_gpr_5 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08A34880u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34880u) goto L_08A34880;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34894;
      }
      goto L_08A34888;
    }
L_08A34888:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A34894u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34894u) goto L_08A34894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34894:
    aot_gpr_31 = (0x08A3489Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3489Cu) goto L_08A3489C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3489C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A348A8;
      }
      goto L_08A348A4;
    }
L_08A348A4:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A348A8;
L_08A348A8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A348B4u);
    aot_gpr_5 = (0u | 65u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A348B4u) goto L_08A348B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A348B4:
    aot_gpr_31 = (0x08A348BCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A348BCu) goto L_08A348BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A348BC:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(3261));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-17));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(3152), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A348E4;
      }
      goto L_08A348D8;
    }
L_08A348D8:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(3152));
    aot_gpr_31 = (0x08A348E4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A348E4u) goto L_08A348E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A348E4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(216));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A348FCu);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A348FCu) goto L_08A348FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A348FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_6);
    aot_gpr_6 = (0u | 0u);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08A34920u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34920u) goto L_08A34920;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34920:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A3492Cu);
    aot_gpr_5 = (0u | 54u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3492Cu) goto L_08A3492C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3492C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A34938u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34938u) goto L_08A34938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34938:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(640), 0u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A34954u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 50u, 0x0891034Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34954u) goto L_08A34954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34954:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A34960u);
    aot_gpr_5 = (0u | 19u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34960u) goto L_08A34960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34960:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
        goto L_08A349A8;
    }
    goto L_08A34968;
L_08A34968:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
        goto L_08A349A8;
    }
    goto L_08A34974;
L_08A34974:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(562), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(563), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08A3498Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3498Cu) goto L_08A3498C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3498C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1152)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 | 208u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(72), aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1929))))));
    goto L_08A349A8;
L_08A349A8:
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A349D4;
      }
      goto L_08A349C8;
    }
L_08A349C8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A349D4u);
    aot_gpr_5 = (0u | 19u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A349D4u) goto L_08A349D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A349D4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08A349F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-288));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2332)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[5]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(256), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A34A64;
      }
      goto L_08A34A28;
    }
L_08A34A28:
    aot_gpr_31 = (0x08A34A30u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34A30u) goto L_08A34A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34A30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34EBC;
      }
      goto L_08A34A38;
    }
L_08A34A38:
    aot_gpr_31 = (0x08A34A40u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34A40u) goto L_08A34A40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34A40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34A64;
      }
      goto L_08A34A4C;
    }
L_08A34A4C:
    aot_gpr_31 = (0x08A34A54u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34A54u) goto L_08A34A54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34A54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(852)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34EBC;
      }
      goto L_08A34A64;
    }
L_08A34A64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2332)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08A34A84;
    }
    goto L_08A34A74;
L_08A34A74:
    aot_gpr_31 = (0x08A34A7Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2332)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 541u, 0x08AA7770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34A7Cu) goto L_08A34A7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34EC4;
      }
      goto L_08A34A84;
    }
L_08A34A84:
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A34EC4;
      }
      goto L_08A34AB4;
    }
L_08A34AB4:
    aot_gpr_31 = (0x08A34ABCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34ABCu) goto L_08A34ABC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34ABC:
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A34B28u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34B28u) goto L_08A34B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34B28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_5);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (17505u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34EB4;
      }
      goto L_08A34B9C;
    }
L_08A34B9C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34EB4;
      }
      goto L_08A34BC4;
    }
L_08A34BC4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A34BF4;
      }
      goto L_08A34BEC;
    }
L_08A34BEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A34C28;
      }
      goto L_08A34BF4;
    }
L_08A34BF4:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 17u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A34C28;
L_08A34C28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34C54;
      }
      goto L_08A34C4C;
    }
L_08A34C4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A34C88;
      }
      goto L_08A34C54;
    }
L_08A34C54:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.execute_vfpu_unary_ct<0u, 0u, 1u, 17u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A34C88;
L_08A34C88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16204u << 16u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34EB4;
      }
      goto L_08A34CC0;
    }
L_08A34CC0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08A34CF4u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34CF4u) goto L_08A34CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34CF4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A34EB4;
      }
      goto L_08A34D04;
    }
L_08A34D04:
    aot_gpr_31 = (0x08A34D0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 843u, 0x0890FCD8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34D0Cu) goto L_08A34D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34D0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34EB4;
      }
      goto L_08A34D14;
    }
L_08A34D14:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_31 = (0x08A34D20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 875u, 0x0890FE30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34D20u) goto L_08A34D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34D20:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34EB4;
      }
      goto L_08A34D74;
    }
L_08A34D74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08A34D88u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 728u, 0x08977830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34D88u) goto L_08A34D88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34D88:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34E38;
      }
      goto L_08A34DC8;
    }
L_08A34DC8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (16329u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A34E04;
      }
      goto L_08A34DEC;
    }
L_08A34DEC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34E04;
      }
      goto L_08A34DFC;
    }
L_08A34DFC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = aot_fpr_20 + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A34E10;
      }
      goto L_08A34E04;
    }
L_08A34E04:
    aot_gpr_31 = (0x08A34E0Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34E0Cu) goto L_08A34E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34E0C:
    aot_fpr_20 = ctx.fpr[0] + ctx.fpr[22];
    goto L_08A34E10;
L_08A34E10:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A34E1Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34E1Cu) goto L_08A34E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34E1C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2332)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A34E30u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 524u, 0x08AA76A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34E30u) goto L_08A34E30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34EB4;
      }
      goto L_08A34E38;
    }
L_08A34E38:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34EB4;
      }
      goto L_08A34E4C;
    }
L_08A34E4C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (16329u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A34E88;
      }
      goto L_08A34E70;
    }
L_08A34E70:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A34E88;
      }
      goto L_08A34E80;
    }
L_08A34E80:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_20 = aot_fpr_20 - ctx.fpr[22];
      if (branch_taken) {
          goto L_08A34E94;
      }
      goto L_08A34E88;
    }
L_08A34E88:
    aot_gpr_31 = (0x08A34E90u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34E90u) goto L_08A34E90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34E90:
    aot_fpr_20 = ctx.fpr[0] - ctx.fpr[22];
    goto L_08A34E94;
L_08A34E94:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A34EA0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34EA0u) goto L_08A34EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34EA0:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2332)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A34EB4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 524u, 0x08AA76A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34EB4u) goto L_08A34EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34EC4;
      }
      goto L_08A34EBC;
    }
L_08A34EBC:
    aot_gpr_31 = (0x08A34EC4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0139_entry, 139u, 712u, 0x08A33164u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34EC4u) goto L_08A34EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34EC4:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34EEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6828));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A34F00u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 252u, 0x0889D374u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34F00u) goto L_08A34F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34F00:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34F3C;
      }
      goto L_08A34F0C;
    }
L_08A34F0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A34F3C;
      }
      goto L_08A34F1C;
    }
L_08A34F1C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08A34F34u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34F34u) goto L_08A34F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A34F40;
      }
      goto L_08A34F3C;
    }
L_08A34F3C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A34F40;
L_08A34F40:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34F4C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A34F6Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 555u, 0x088079D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34F6Cu) goto L_08A34F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34F6C:
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6828));
    aot_gpr_31 = (0x08A34F7Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0038_entry, 38u, 249u, 0x0889D344u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34F7Cu) goto L_08A34F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34F7C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A34F88u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 492u, 0x08807510u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34F88u) goto L_08A34F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34F88:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34F9C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_gpr_31 = (0x08A34FD8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34FD8u) goto L_08A34FD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34FD8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 2u);
    aot_gpr_31 = (0x08A34FECu);
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34FECu) goto L_08A34FEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34FEC:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A34FFCu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A34FFCu) goto L_08A34FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A34FFC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A3500Cu);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3500Cu) goto L_08A3500C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3500C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A3501Cu);
    aot_gpr_5 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3501Cu) goto L_08A3501C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3501C:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08A3502Cu);
    aot_gpr_4 = (0u | 116u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3502Cu) goto L_08A3502C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3502C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08A3505C;
      }
      goto L_08A35038;
    }
L_08A35038:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A35054u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 460u, 0x08B1E884u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35054u) goto L_08A35054;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35054:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08A3505C;
L_08A3505C:
    aot_gpr_31 = (0x08A35064u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    goto L_08A34F4C;
L_08A35064:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      ctx.gpr[20] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35098:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08A350B4u);
    aot_gpr_5 = (0u | 1u);
    goto L_08A34EEC;
L_08A350B4:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A350F0;
      }
      goto L_08A350C0;
    }
L_08A350C0:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A350CCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A350CCu) goto L_08A350CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A350CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A350F8;
      }
      goto L_08A350D4;
    }
L_08A350D4:
    aot_gpr_31 = (0x08A350DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 515u, 0x08B1EDB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A350DCu) goto L_08A350DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A350DC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A350E8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A350E8u) goto L_08A350E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A350E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A35170;
      }
      goto L_08A350F0;
    }
L_08A350F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A35170;
      }
      goto L_08A350F8;
    }
L_08A350F8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A35104u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35104u) goto L_08A35104;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35104:
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[0])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A35128;
      }
      goto L_08A35120;
    }
L_08A35120:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_08A3512C;
      }
      goto L_08A35128;
    }
L_08A35128:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    goto L_08A3512C;
L_08A3512C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A35158;
      }
      goto L_08A35150;
    }
L_08A35150:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_29 | 0u);
      if (branch_taken) {
          goto L_08A35158;
      }
      goto L_08A35158;
    }
L_08A35158:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A35168u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 511u, 0x08B1ED60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35168u) goto L_08A35168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A35170;
      }
      goto L_08A35170;
    }
L_08A35170:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35184:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A351A0u);
    aot_gpr_5 = (0u | 1u);
    goto L_08A34EEC;
L_08A351A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A351E0;
      }
      goto L_08A351AC;
    }
L_08A351AC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A351B8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A351B8u) goto L_08A351B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A351B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A351E8;
      }
      goto L_08A351C0;
    }
L_08A351C0:
    aot_gpr_31 = (0x08A351C8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 507u, 0x08B1ED14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A351C8u) goto L_08A351C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A351C8:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A351D8u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A351D8u) goto L_08A351D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A351D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A35210;
      }
      goto L_08A351E0;
    }
L_08A351E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A35210;
      }
      goto L_08A351E8;
    }
L_08A351E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A351F4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A351F4u) goto L_08A351F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A351F4:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A35208u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 503u, 0x08B1ECBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35208u) goto L_08A35208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A35210;
      }
      goto L_08A35210;
    }
L_08A35210:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35224:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A35240u);
    aot_gpr_5 = (0u | 1u);
    goto L_08A34EEC;
L_08A35240:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35284;
      }
      goto L_08A3524C;
    }
L_08A3524C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A35258u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 324u, 0x08806888u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35258u) goto L_08A35258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35258:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A3528C;
      }
      goto L_08A35264;
    }
L_08A35264:
    aot_gpr_31 = (0x08A3526Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 523u, 0x08B1EE5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3526Cu) goto L_08A3526C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3526C:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A3527Cu);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3527Cu) goto L_08A3527C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3527C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A352AC;
      }
      goto L_08A35284;
    }
L_08A35284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A352AC;
      }
      goto L_08A3528C;
    }
L_08A3528C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A35298u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 368u, 0x08806AE0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35298u) goto L_08A35298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35298:
    aot_gpr_5 = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_gpr_31 = (0x08A352A4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 519u, 0x08B1EE04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A352A4u) goto L_08A352A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A352A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A352AC;
      }
      goto L_08A352AC;
    }
L_08A352AC:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A352C0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    aot_gpr_31 = (0x08A352DCu);
    aot_gpr_5 = (0u | 1u);
    goto L_08A34EEC;
L_08A352DC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35304;
      }
      goto L_08A352E8;
    }
L_08A352E8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A352F4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A352F4u) goto L_08A352F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A352F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3530C;
      }
      goto L_08A352FC;
    }
L_08A352FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35350;
      }
      goto L_08A35304;
    }
L_08A35304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A35398;
      }
      goto L_08A3530C;
    }
L_08A3530C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A35318u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 355u, 0x08931D08u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35318u) goto L_08A35318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35318:
    aot_gpr_4 = (ctx.gpr[2] << 8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(255));
    aot_gpr_5 = (aot_gpr_4 >> 24u);
    aot_gpr_6 = (aot_gpr_4 >> 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_gpr_4 >> 8u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A35348u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 53u, 0x089E8474u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35348u) goto L_08A35348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A35398;
      }
      goto L_08A35350;
    }
L_08A35350:
    aot_gpr_31 = (0x08A35358u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0121_entry, 121u, 57u, 0x089E84ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35358u) goto L_08A35358;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35358:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_5 = (aot_gpr_5 << 8u);
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08A3538C;
      }
      goto L_08A35380;
    }
L_08A35380:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A3538C;
L_08A3538C:
    aot_gpr_31 = (0x08A35394u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35394u) goto L_08A35394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35394:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A35398;
L_08A35398:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A353AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A353C8u);
    aot_gpr_5 = (0u | 1u);
    goto L_08A34EEC;
L_08A353C8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A353F0;
      }
      goto L_08A353D4;
    }
L_08A353D4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A353E0u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A353E0u) goto L_08A353E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A353E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A353F8;
      }
      goto L_08A353E8;
    }
L_08A353E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35418;
      }
      goto L_08A353F0;
    }
L_08A353F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3541C;
      }
      goto L_08A353F8;
    }
L_08A353F8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A35404u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35404u) goto L_08A35404;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35404:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08A35418u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 527u, 0x08B1EEACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35418u) goto L_08A35418;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35418:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A3541C;
L_08A3541C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35430:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A3544Cu);
    aot_gpr_5 = (0u | 1u);
    goto L_08A34EEC;
L_08A3544C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35474;
      }
      goto L_08A35458;
    }
L_08A35458:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A35464u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 344u, 0x08806984u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35464u) goto L_08A35464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35464:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3547C;
      }
      goto L_08A3546C;
    }
L_08A3546C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35494;
      }
      goto L_08A35474;
    }
L_08A35474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A35498;
      }
      goto L_08A3547C;
    }
L_08A3547C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A35488u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0000_entry, 0u, 375u, 0x08806B2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35488u) goto L_08A35488;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35488:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A35494u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 531u, 0x08B1EF04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35494u) goto L_08A35494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35494:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A35498;
L_08A35498:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A354AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (2232u << 16u);
      if (branch_taken) {
          goto L_08A354D0;
      }
      goto L_08A354C0;
    }
L_08A354C0:
    aot_gpr_31 = (0x08A354C8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A354C8u) goto L_08A354C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A354C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (2232u << 16u);
    goto L_08A354D0;
L_08A354D0:
    aot_gpr_6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6828));
    aot_gpr_31 = (0x08A354DCu);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(5928));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A354DCu) goto L_08A354DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A354DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6852));
      if (branch_taken) {
          goto L_08A354F8;
      }
      goto L_08A354E8;
    }
L_08A354E8:
    aot_gpr_31 = (0x08A354F0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A354F0u) goto L_08A354F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A354F0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6852));
    goto L_08A354F8;
L_08A354F8:
    aot_gpr_31 = (0x08A35500u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35500u) goto L_08A35500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35500:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3550C:
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35524:
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9892), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3552C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A35560;
      }
      goto L_08A35548;
    }
L_08A35548:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    // nop
      if (branch_taken) {
          goto L_08A356C4;
      }
      goto L_08A35550;
    }
L_08A35550:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    // nop
      if (branch_taken) {
          goto L_08A35578;
      }
      goto L_08A35558;
    }
L_08A35558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A356C4;
      }
      goto L_08A35560;
    }
L_08A35560:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A356BC;
      }
      goto L_08A35568;
    }
L_08A35568:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A356C4;
      }
      goto L_08A35570;
    }
L_08A35570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A356C4;
      }
      goto L_08A35578;
    }
L_08A35578:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8728)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8732)));
    aot_gpr_16 = (aot_gpr_5 - aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 - aot_gpr_16);
    if (static_cast<std::int32_t>(aot_gpr_16) > 0) {
    aot_gpr_4 = (0u | 1000u);
        goto L_08A355FC;
    }
    goto L_08A35594;
L_08A35594:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (0u | 1000u);
      if (branch_taken) {
          goto L_08A355FC;
      }
      goto L_08A3559C;
    }
L_08A3559C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A355B8;
      }
      goto L_08A355A8;
    }
L_08A355A8:
    aot_gpr_31 = (0x08A355B0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A355B0u) goto L_08A355B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A355B0:
    aot_gpr_31 = (0x08A355B8u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 745u, 0x08947944u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A355B8u) goto L_08A355B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A355B8:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9892), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8732), aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9940)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A355EC;
      }
      goto L_08A355DC;
    }
L_08A355DC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 96u);
    aot_gpr_31 = (0x08A355ECu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A355ECu) goto L_08A355EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A355EC:
    aot_gpr_31 = (0x08A355F4u);
    // nop
    goto L_08A364E8;
L_08A355F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35630;
      }
      goto L_08A355FC;
    }
L_08A355FC:
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_16); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9920)));
    aot_gpr_16 = (ctx.lo);
    { const bool branch_taken = aot_gpr_16 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A35630;
      }
      goto L_08A35610;
    }
L_08A35610:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3562C;
      }
      goto L_08A3561C;
    }
L_08A3561C:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 168u);
    aot_gpr_31 = (0x08A3562Cu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3562Cu) goto L_08A3562C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3562C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9920), aot_gpr_16);
    goto L_08A35630;
L_08A35630:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A356B4;
      }
      goto L_08A3563C;
    }
L_08A3563C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9912)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    // nop
      if (branch_taken) {
          goto L_08A356B4;
      }
      goto L_08A35648;
    }
L_08A35648:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9892), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9942)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35678;
      }
      goto L_08A35664;
    }
L_08A35664:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8725)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35678;
      }
      goto L_08A35670;
    }
L_08A35670:
    aot_gpr_31 = (0x08A35678u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0099_entry, 99u, 228u, 0x08991088u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35678u) goto L_08A35678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_31 = (0x08A35684u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8732), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35684u) goto L_08A35684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35684:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A35690u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 655u, 0x08947470u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35690u) goto L_08A35690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35690:
    aot_gpr_31 = (0x08A35698u);
    // nop
    goto L_08A364E8;
L_08A35698:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9940)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A356B4;
      }
      goto L_08A356A4;
    }
L_08A356A4:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 95u);
    aot_gpr_31 = (0x08A356B4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A356B4u) goto L_08A356B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A356B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A356C4;
      }
      goto L_08A356BC;
    }
L_08A356BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A356C4;
      }
      goto L_08A356C4;
    }
L_08A356C4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A356D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_gpr_6 = (0u | 60000u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (0u | 1000u);
    ctx.gpr[8] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (2238u << 16u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(14304));
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6816));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_31);
    aot_gpr_6 = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[8]; const std::uint32_t divisor = ctx.gpr[7]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[7] = (ctx.lo);
    aot_gpr_31 = (0x08A35744u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35744u) goto L_08A35744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35744:
    aot_gpr_5 = (17389u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_gpr_5 = (aot_gpr_5 | 32768u);
    aot_gpr_16 = (2238u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-8144));
      if (branch_taken) {
          goto L_08A3576C;
      }
      goto L_08A35760;
    }
L_08A35760:
    aot_gpr_31 = (0x08A35768u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35768u) goto L_08A35768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35768:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08A3576C;
L_08A3576C:
    aot_gpr_31 = (0x08A35774u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 689u, 0x089BB298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35774u) goto L_08A35774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35774:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A357BC;
      }
      goto L_08A357B0;
    }
L_08A357B0:
    aot_gpr_31 = (0x08A357B8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A357B8u) goto L_08A357B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A357B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08A357BC;
L_08A357BC:
    aot_gpr_31 = (0x08A357C4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 554u, 0x089BAA68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A357C4u) goto L_08A357C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A357C4:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_31 = (0x08A357D0u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A357D0u) goto L_08A357D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A357D0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A357DCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A357DCu) goto L_08A357DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A357DC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35908;
      }
      goto L_08A357E8;
    }
L_08A357E8:
    ctx.gpr[17] = (2237u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08A357FCu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A357FCu) goto L_08A357FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A357FC:
    aot_gpr_4 = (0u | 9u);
    { const bool branch_taken = ctx.gpr[2] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A3581C;
      }
      goto L_08A35808;
    }
L_08A35808:
    aot_gpr_31 = (0x08A35810u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35810u) goto L_08A35810;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35810:
    aot_gpr_4 = (0u | 7u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A35834;
      }
      goto L_08A3581C;
    }
L_08A3581C:
    ctx.gpr[18] = (0u | 23u);
    aot_gpr_31 = (0x08A35828u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 145u, 0x08ADC774u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35828u) goto L_08A35828;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35828:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A35834;
      }
      goto L_08A35830;
    }
L_08A35830:
    ctx.gpr[18] = (0u | 53u);
    goto L_08A35834;
L_08A35834:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(69));
      if (branch_taken) {
          goto L_08A3584C;
      }
      goto L_08A35840;
    }
L_08A35840:
    aot_gpr_31 = (0x08A35848u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35848u) goto L_08A35848;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35848:
    aot_gpr_5 = (ctx.gpr[18] + static_cast<std::uint32_t>(69));
    goto L_08A3584C;
L_08A3584C:
    ctx.gpr[10] = (17363u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[10] = (ctx.gpr[10] | 32768u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
    aot_gpr_5 = (0u | 12u);
    aot_gpr_6 = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    aot_gpr_31 = (0x08A3587Cu);
    ctx.gpr[9] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3587Cu) goto L_08A3587C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3587C:
    aot_gpr_31 = (0x08A35884u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35884u) goto L_08A35884;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35884:
    aot_gpr_31 = (0x08A3588Cu);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3588Cu) goto L_08A3588C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3588C:
    aot_gpr_31 = (0x08A35894u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35894u) goto L_08A35894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35894:
    aot_gpr_4 = (16143u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_gpr_31 = (0x08A358A4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A358A4u) goto L_08A358A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A358A4:
    aot_gpr_5 = (17372u << 16u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (17288u << 16u);
    aot_gpr_31 = (0x08A358CCu);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A358CCu) goto L_08A358CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A358CC:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_5 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_6 = (ctx.gpr[18] + static_cast<std::uint32_t>(63));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A35900u);
    ctx.gpr[9] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35900u) goto L_08A35900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35A2C;
      }
      goto L_08A35908;
    }
L_08A35908:
    aot_gpr_31 = (0x08A35910u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35910u) goto L_08A35910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35910:
    aot_gpr_5 = (17391u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    aot_gpr_5 = (17287u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08A35938u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35938u) goto L_08A35938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35938:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A35950u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35950u) goto L_08A35950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35950:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08A35964u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35964u) goto L_08A35964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35964:
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08A35974u);
    ctx.fpr[26] = ctx.fpr[24] - ctx.fpr[26];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35974u) goto L_08A35974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35974:
    ctx.fpr[15] = ctx.fpr[0] + aot_fpr_20;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A3598Cu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3598Cu) goto L_08A3598C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3598C:
    aot_gpr_31 = (0x08A35994u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35994u) goto L_08A35994;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35994:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08A359CC;
    }
    goto L_08A359A0;
L_08A359A0:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08A359ACu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A359ACu) goto L_08A359AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A359AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A359C4;
      }
      goto L_08A359B8;
    }
L_08A359B8:
    aot_gpr_31 = (0x08A359C0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A359C0u) goto L_08A359C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A359C0:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A359C4;
L_08A359C4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08A359CC;
L_08A359CC:
    aot_gpr_31 = (0x08A359D4u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6808));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A359D4u) goto L_08A359D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A359D4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A359E4u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A359E4u) goto L_08A359E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A359E4:
    aot_gpr_31 = (0x08A359ECu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A359ECu) goto L_08A359EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A359EC:
    aot_gpr_31 = (0x08A359F4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A359F4u) goto L_08A359F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A359F4:
    aot_gpr_31 = (0x08A359FCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A359FCu) goto L_08A359FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A359FC:
    ctx.fpr[15] = ctx.fpr[0] + aot_fpr_20;
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A35A14u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35A14u) goto L_08A35A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35A14:
    aot_gpr_31 = (0x08A35A1Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35A1Cu) goto L_08A35A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35A1C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A35A2Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35A2Cu) goto L_08A35A2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35A2C:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      ctx.gpr[19] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35A58:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35A60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[3] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[19] = (aot_gpr_6 & 65535u);
    ctx.gpr[23] = (0u | 45u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[23];
    ctx.gpr[30] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A35AC4;
      }
      goto L_08A35AB8;
    }
L_08A35AB8:
    ctx.gpr[21] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A35AEC;
      }
      goto L_08A35AC4;
    }
L_08A35AC4:
    aot_gpr_4 = (0u | 43u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    aot_gpr_4 = (0u | 42u);
      if (branch_taken) {
          goto L_08A35AD8;
      }
      goto L_08A35AD0;
    }
L_08A35AD0:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A35AE4;
      }
      goto L_08A35AD8;
    }
L_08A35AD8:
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A35AEC;
      }
      goto L_08A35AE4;
    }
L_08A35AE4:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[21]) < 40 ? 1u : 0u);
    goto L_08A35AEC;
L_08A35AEC:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9892), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8876), ctx.gpr[18]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9912), ctx.gpr[19]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9916), ctx.gpr[19]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[7], ctx.gpr[9], ctx.gpr[10], ctx.gpr[11]};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(9896), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9936), ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A35B40;
      }
      goto L_08A35B18;
    }
L_08A35B18:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08A35B24u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35B24u) goto L_08A35B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35B24:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35B3C;
      }
      goto L_08A35B30;
    }
L_08A35B30:
    aot_gpr_31 = (0x08A35B38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35B38u) goto L_08A35B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35B38:
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    goto L_08A35B3C;
L_08A35B3C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    goto L_08A35B40;
L_08A35B40:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6800));
    aot_gpr_31 = (0x08A35B4Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35B4Cu) goto L_08A35B4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35B4C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A35B60;
      }
      goto L_08A35B54;
    }
L_08A35B54:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9936), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9942), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08A35B64;
      }
      goto L_08A35B60;
    }
L_08A35B60:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9942), static_cast<std::uint8_t>(0u));
    goto L_08A35B64;
L_08A35B64:
    aot_gpr_4 = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[30]); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9940), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9941), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8728), ctx.gpr[30]);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8732), aot_gpr_4);
    aot_gpr_4 = (ctx.lo);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9920), aot_gpr_4);
      if (branch_taken) {
          goto L_08A35DB0;
      }
      goto L_08A35B94;
    }
L_08A35B94:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A35BB0;
      }
      goto L_08A35B9C;
    }
L_08A35B9C:
    aot_gpr_31 = (0x08A35BA4u);
    aot_gpr_4 = (0u | 25u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35BA4u) goto L_08A35BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35BA4:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A35BE8;
      }
      goto L_08A35BB0;
    }
L_08A35BB0:
    aot_gpr_4 = (0u | 42u);
    { const bool branch_taken = ctx.gpr[18] == aot_gpr_4;
    aot_gpr_4 = (0u | 43u);
      if (branch_taken) {
          goto L_08A35BC4;
      }
      goto L_08A35BBC;
    }
L_08A35BBC:
    { const bool branch_taken = ctx.gpr[18] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A35BD8;
      }
      goto L_08A35BC4;
    }
L_08A35BC4:
    aot_gpr_31 = (0x08A35BCCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35BCCu) goto L_08A35BCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35BCC:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_08A35BE8;
      }
      goto L_08A35BD8;
    }
L_08A35BD8:
    aot_gpr_31 = (0x08A35BE0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35BE0u) goto L_08A35BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35BE0:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    goto L_08A35BE8;
L_08A35BE8:
    aot_gpr_31 = (0x08A35BF0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35BF0u) goto L_08A35BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35BF0:
    aot_gpr_4 = (ctx.gpr[18] << 5u);
    aot_gpr_5 = (ctx.gpr[18] << 2u);
    aot_gpr_16 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A35C10u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9924), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35C10u) goto L_08A35C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35C10:
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08A35C24u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9928), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35C24u) goto L_08A35C24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35C24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9924)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9932), aot_gpr_4);
      if (branch_taken) {
          goto L_08A35C80;
      }
      goto L_08A35C4C;
    }
L_08A35C4C:
    aot_gpr_31 = (0x08A35C54u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35C54u) goto L_08A35C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35C54:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A35C78;
      }
      goto L_08A35C68;
    }
L_08A35C68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[18] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08A35C78;
L_08A35C78:
    aot_gpr_31 = (0x08A35C80u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35C80u) goto L_08A35C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35C80:
    aot_gpr_31 = (0x08A35C88u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35C88u) goto L_08A35C88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35C88:
    aot_gpr_6 = (50298u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9924)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08A35C9Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35C9Cu) goto L_08A35C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35C9C:
    aot_gpr_31 = (0x08A35CA4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35CA4u) goto L_08A35CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35CA4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 30000u);
    aot_gpr_31 = (0x08A35CB8u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35CB8u) goto L_08A35CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35CB8:
    aot_gpr_31 = (0x08A35CC0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35CC0u) goto L_08A35CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35CC0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A35CCCu);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35CCCu) goto L_08A35CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35CCC:
    aot_gpr_31 = (0x08A35CD4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35CD4u) goto L_08A35CD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35CD4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A35CE0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 613u, 0x089471E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35CE0u) goto L_08A35CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35CE0:
    aot_gpr_31 = (0x08A35CE8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35CE8u) goto L_08A35CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35CE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35DB0;
      }
      goto L_08A35CF0;
    }
L_08A35CF0:
    aot_gpr_31 = (0x08A35CF8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35CF8u) goto L_08A35CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35CF8:
    aot_gpr_31 = (0x08A35D00u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35D00u) goto L_08A35D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35D00:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3256))))));
    aot_gpr_31 = (0x08A35D0Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35D0Cu) goto L_08A35D0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35D0C:
    aot_gpr_31 = (0x08A35D14u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35D14u) goto L_08A35D14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35D14:
    aot_gpr_31 = (0x08A35D1Cu);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35D1Cu) goto L_08A35D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35D1C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A35D3Cu);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35D3Cu) goto L_08A35D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35D3C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A35D5Cu);
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35D5Cu) goto L_08A35D5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35D5C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A35D7Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35D7Cu) goto L_08A35D7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35D7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (ctx.gpr[18] | 0u);
        goto L_08A35D8C;
    }
    goto L_08A35D8C;
L_08A35D8C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A35D9Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 66u, 0x089083B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35D9Cu) goto L_08A35D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35D9C:
    aot_gpr_31 = (0x08A35DA4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35DA4u) goto L_08A35DA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35DA4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A35DB0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35DB0u) goto L_08A35DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35DB0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9940)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35DCC;
      }
      goto L_08A35DBC;
    }
L_08A35DBC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 94u);
    aot_gpr_31 = (0x08A35DCCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35DCCu) goto L_08A35DCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35DCC:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35DFC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9892), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8876), aot_gpr_4);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9912), aot_gpr_4);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(9896), aot_run_words); }
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9936), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[19], ctx.gpr[20], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08A35E78;
      }
      goto L_08A35E50;
    }
L_08A35E50:
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_31 = (0x08A35E5Cu);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35E5Cu) goto L_08A35E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35E5C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A35E74;
      }
      goto L_08A35E68;
    }
L_08A35E68:
    aot_gpr_31 = (0x08A35E70u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35E70u) goto L_08A35E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35E70:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08A35E74;
L_08A35E74:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    goto L_08A35E78;
L_08A35E78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_gpr_31 = (0x08A35E84u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6800));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35E84u) goto L_08A35E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35E84:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
      if (branch_taken) {
          goto L_08A35E98;
      }
      goto L_08A35E8C;
    }
L_08A35E8C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9936), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9942), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A35E9C;
      }
      goto L_08A35E98;
    }
L_08A35E98:
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9942), static_cast<std::uint8_t>(0u));
    goto L_08A35E9C;
L_08A35E9C:
    aot_gpr_5 = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_16); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9940), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9941), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8725), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8728), aot_gpr_16);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8732), aot_gpr_5);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 40 ? 1u : 0u);
    aot_gpr_6 = (ctx.lo);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9920), aot_gpr_6);
      if (branch_taken) {
          goto L_08A360B0;
      }
      goto L_08A35ECC;
    }
L_08A35ECC:
    aot_gpr_31 = (0x08A35ED4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35ED4u) goto L_08A35ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35ED4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x08A35EE0u);
    aot_gpr_16 = (aot_gpr_4 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35EE0u) goto L_08A35EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35EE0:
    aot_gpr_4 = (aot_gpr_16 << 5u);
    aot_gpr_5 = (aot_gpr_16 << 2u);
    aot_gpr_16 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A35F00u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9924), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35F00u) goto L_08A35F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35F00:
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_16);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08A35F14u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9928), aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35F14u) goto L_08A35F14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35F14:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9924)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9932), aot_gpr_5);
      if (branch_taken) {
          goto L_08A35F70;
      }
      goto L_08A35F3C;
    }
L_08A35F3C:
    aot_gpr_31 = (0x08A35F44u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35F44u) goto L_08A35F44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35F44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A35F68;
      }
      goto L_08A35F58;
    }
L_08A35F58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08A35F68;
L_08A35F68:
    aot_gpr_31 = (0x08A35F70u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 458u, 0x088DF74Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35F70u) goto L_08A35F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35F70:
    aot_gpr_31 = (0x08A35F78u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35F78u) goto L_08A35F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35F78:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3330)));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    aot_gpr_31 = (0x08A35F88u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3330), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35F88u) goto L_08A35F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35F88:
    aot_gpr_6 = (50298u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9924)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08A35F9Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35F9Cu) goto L_08A35F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35F9C:
    aot_gpr_31 = (0x08A35FA4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35FA4u) goto L_08A35FA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35FA4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_6 = (0u | 30000u);
    aot_gpr_31 = (0x08A35FB8u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35FB8u) goto L_08A35FB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35FB8:
    aot_gpr_31 = (0x08A35FC0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35FC0u) goto L_08A35FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35FC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
    aot_gpr_31 = (0x08A35FCCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35FCCu) goto L_08A35FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35FCC:
    aot_gpr_31 = (0x08A35FD4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35FD4u) goto L_08A35FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35FD4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
    aot_gpr_31 = (0x08A35FE0u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 613u, 0x089471E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35FE0u) goto L_08A35FE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35FE0:
    aot_gpr_31 = (0x08A35FE8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35FE8u) goto L_08A35FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35FE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A360B0;
      }
      goto L_08A35FF0;
    }
L_08A35FF0:
    aot_gpr_31 = (0x08A35FF8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A35FF8u) goto L_08A35FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A35FF8:
    aot_gpr_31 = (0x08A36000u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36000u) goto L_08A36000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36000:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3256))))));
    aot_gpr_31 = (0x08A3600Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3600Cu) goto L_08A3600C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3600C:
    aot_gpr_31 = (0x08A36014u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36014u) goto L_08A36014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36014:
    aot_gpr_31 = (0x08A3601Cu);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3601Cu) goto L_08A3601C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3601C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A3603Cu);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3603Cu) goto L_08A3603C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3603C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A3605Cu);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3605Cu) goto L_08A3605C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3605C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A3607Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3607Cu) goto L_08A3607C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3607C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_16) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    aot_gpr_4 = (aot_gpr_16 | 0u);
        goto L_08A3608C;
    }
    goto L_08A3608C;
L_08A3608C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08A3609Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 66u, 0x089083B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3609Cu) goto L_08A3609C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3609C:
    aot_gpr_31 = (0x08A360A4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A360A4u) goto L_08A360A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A360A4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A360B0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A360B0u) goto L_08A360B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A360B0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9940)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A360CC;
      }
      goto L_08A360BC;
    }
L_08A360BC:
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (0u | 94u);
    aot_gpr_31 = (0x08A360CCu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A360CCu) goto L_08A360CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A360CC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A360EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_gpr_6 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    ctx.gpr[17] = (2279u << 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(17488));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A36214;
      }
      goto L_08A3611C;
    }
L_08A3611C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[7];
    aot_gpr_4 = (0u | 45u);
      if (branch_taken) {
          goto L_08A361A4;
      }
      goto L_08A36128;
    }
L_08A36128:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_6 = (0u | 42u);
      if (branch_taken) {
          goto L_08A36140;
      }
      goto L_08A36130;
    }
L_08A36130:
    aot_gpr_4 = (0u | 25u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A361A4;
      }
      goto L_08A3613C;
    }
L_08A3613C:
    aot_gpr_6 = (0u | 42u);
    goto L_08A36140;
L_08A36140:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_4 = (0u | 43u);
      if (branch_taken) {
          goto L_08A36150;
      }
      goto L_08A36148;
    }
L_08A36148:
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A361A4;
      }
      goto L_08A36150;
    }
L_08A36150:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (0u | 18u);
      if (branch_taken) {
          goto L_08A36164;
      }
      goto L_08A36158;
    }
L_08A36158:
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08A361A4;
      }
      goto L_08A36160;
    }
L_08A36160:
    aot_gpr_4 = (0u | 18u);
    goto L_08A36164;
L_08A36164:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (0u | 33u);
      if (branch_taken) {
          goto L_08A3617C;
      }
      goto L_08A3616C;
    }
L_08A3616C:
    aot_gpr_4 = (0u | 32u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A361A4;
      }
      goto L_08A36178;
    }
L_08A36178:
    aot_gpr_4 = (0u | 33u);
    goto L_08A3617C;
L_08A3617C:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (0u | 12u);
      if (branch_taken) {
          goto L_08A36194;
      }
      goto L_08A36184;
    }
L_08A36184:
    aot_gpr_4 = (0u | 17u);
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A361A4;
      }
      goto L_08A36190;
    }
L_08A36190:
    aot_gpr_4 = (0u | 12u);
    goto L_08A36194;
L_08A36194:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    aot_gpr_4 = (0u | 13u);
      if (branch_taken) {
          goto L_08A36214;
      }
      goto L_08A3619C;
    }
L_08A3619C:
    if (ctx.gpr[7] != aot_gpr_4) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
        goto L_08A36218;
    }
    goto L_08A361A4;
L_08A361A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9896)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A361E4;
      }
      goto L_08A361B4;
    }
L_08A361B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A361E4;
      }
      goto L_08A361C0;
    }
L_08A361C0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9900)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A361E4;
      }
      goto L_08A361CC;
    }
L_08A361CC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9904)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A361E4;
      }
      goto L_08A361D8;
    }
L_08A361D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9908)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
        goto L_08A36218;
    }
    goto L_08A361E4;
L_08A361E4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9941)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A361F8;
      }
      goto L_08A361F0;
    }
L_08A361F0:
    if (ctx.gpr[18] == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
        goto L_08A36218;
    }
    goto L_08A361F8;
L_08A361F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9912)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9912), aot_gpr_5);
    aot_gpr_5 = (0u | 97u);
    aot_gpr_31 = (0x08A36214u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36214u) goto L_08A36214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36214:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    goto L_08A36218;
L_08A36218:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(26560));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9300)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_4 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9300), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(464)));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1360)));
        goto L_08A36260;
    }
    goto L_08A36250;
L_08A36250:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_08A36274;
      }
      goto L_08A36260;
    }
L_08A36260:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[17]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5);
    goto L_08A36274;
L_08A36274:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36288;
      }
      goto L_08A3627C;
    }
L_08A3627C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8676)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8676), aot_gpr_4);
    goto L_08A36288;
L_08A36288:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9408)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9408), aot_gpr_4);
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08A362AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9304)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9304), aot_gpr_4);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A362BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    aot_gpr_6 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A36334;
      }
      goto L_08A362D8;
    }
L_08A362D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9896)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A36318;
      }
      goto L_08A362E8;
    }
L_08A362E8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A36318;
      }
      goto L_08A362F4;
    }
L_08A362F4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9900)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A36318;
      }
      goto L_08A36300;
    }
L_08A36300:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9904)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A36318;
      }
      goto L_08A3630C;
    }
L_08A3630C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9908)));
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
        goto L_08A36338;
    }
    goto L_08A36318;
L_08A36318:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9912)));
    aot_gpr_4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9912), aot_gpr_5);
    aot_gpr_5 = (0u | 98u);
    aot_gpr_31 = (0x08A36334u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36334u) goto L_08A36334;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36334:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    goto L_08A36338;
L_08A36338:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(26560));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08A3635Cu);
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3635Cu) goto L_08A3635C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3635C:
    aot_gpr_16 = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A363B8;
      }
      goto L_08A3636C;
    }
L_08A3636C:
    { const bool branch_taken = aot_gpr_16 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A3639C;
      }
      goto L_08A36374;
    }
L_08A36374:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A3639C;
      }
      goto L_08A3637C;
    }
L_08A3637C:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A363AC;
      }
      goto L_08A36384;
    }
L_08A36384:
    { const bool branch_taken = aot_gpr_16 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A363AC;
      }
      goto L_08A3638C;
    }
L_08A3638C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9312)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9312), aot_gpr_4);
      if (branch_taken) {
          goto L_08A363B8;
      }
      goto L_08A3639C;
    }
L_08A3639C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9308)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9308), aot_gpr_4);
      if (branch_taken) {
          goto L_08A363B8;
      }
      goto L_08A363AC;
    }
L_08A363AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9320)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9320), aot_gpr_4);
    goto L_08A363B8;
L_08A363B8:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A363C8:
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    ctx.gpr[2] = (aot_gpr_4 ^ 1u);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A363D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A3640C;
      }
      goto L_08A363F0;
    }
L_08A363F0:
    aot_gpr_4 = (0u | 3u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9892), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-11832), aot_gpr_4);
    aot_gpr_31 = (0x08A3640Cu);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8732), aot_gpr_5);
    goto L_08A364E8;
L_08A3640C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36418:
    aot_gpr_4 = (2279u << 16u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(26560));
    goto L_08A36424;
L_08A36424:
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_mem.aot_direct_store16(aot_gpr_6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 310 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36424;
      }
      goto L_08A36448;
    }
L_08A36448:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36450:
    aot_gpr_5 = (2279u << 16u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(26560));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36468:
    ctx.gpr[7] = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A364D4;
      }
      goto L_08A36474;
    }
L_08A36474:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A364D4;
      }
      goto L_08A3647C;
    }
L_08A3647C:
    ctx.gpr[7] = (aot_gpr_5 + static_cast<std::uint32_t>(500));
    ctx.gpr[7] = (aot_gpr_4 < ctx.gpr[7] ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
        goto L_08A364B8;
    }
    goto L_08A3648C;
L_08A3648C:
    aot_gpr_5 = (aot_gpr_6 + static_cast<std::uint32_t>(-500));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_6 - aot_gpr_4);
      if (branch_taken) {
          goto L_08A364DC;
      }
      goto L_08A3649C;
    }
L_08A3649C:
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (0u | 500u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A364E0;
      }
      goto L_08A364B8;
    }
L_08A364B8:
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (0u | 500u);
    { const std::uint32_t dividend = aot_gpr_4; const std::uint32_t divisor = aot_gpr_5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[2] = (ctx.lo);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A364E0;
      }
      goto L_08A364D4;
    }
L_08A364D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A364E0;
      }
      goto L_08A364DC;
    }
L_08A364DC:
    ctx.gpr[2] = (0u | 255u);
    goto L_08A364E0;
L_08A364E0:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A364E8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8876)));
    aot_gpr_4 = (0u | 45u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words); }
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A3651C;
      }
      goto L_08A36510;
    }
L_08A36510:
    ctx.gpr[17] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_08A36540;
      }
      goto L_08A3651C;
    }
L_08A3651C:
    aot_gpr_4 = (0u | 42u);
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    aot_gpr_4 = (0u | 43u);
      if (branch_taken) {
          goto L_08A36530;
      }
      goto L_08A36528;
    }
L_08A36528:
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A3653C;
      }
      goto L_08A36530;
    }
L_08A36530:
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_16 = (0u | 1u);
      if (branch_taken) {
          goto L_08A36540;
      }
      goto L_08A3653C;
    }
L_08A3653C:
    aot_gpr_16 = (static_cast<std::int32_t>(ctx.gpr[17]) < 40 ? 1u : 0u);
    goto L_08A36540;
L_08A36540:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36588;
      }
      goto L_08A36548;
    }
L_08A36548:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9924)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36588;
      }
      goto L_08A36554;
    }
L_08A36554:
    aot_gpr_31 = (0x08A3655Cu);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3655Cu) goto L_08A3655C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3655C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A36580;
      }
      goto L_08A36570;
    }
L_08A36570:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08A36580;
L_08A36580:
    aot_gpr_31 = (0x08A36588u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0054_entry, 54u, 460u, 0x088DF770u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36588u) goto L_08A36588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36588:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36630;
      }
      goto L_08A36590;
    }
L_08A36590:
    aot_gpr_31 = (0x08A36598u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36598u) goto L_08A36598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36598:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    aot_gpr_31 = (0x08A365A4u);
    ctx.gpr[18] = (aot_gpr_4 & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A365A4u) goto L_08A365A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A365A4:
    aot_gpr_31 = (0x08A365ACu);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A365ACu) goto L_08A365AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A365AC:
    aot_gpr_4 = (ctx.gpr[18] << 5u);
    aot_gpr_5 = (ctx.gpr[18] << 2u);
    ctx.gpr[18] = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A365C8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A365C8u) goto L_08A365C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A365C8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x08A365D4u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A365D4u) goto L_08A365D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A365D4:
    aot_gpr_31 = (0x08A365DCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A365DCu) goto L_08A365DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A365DC:
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A365ECu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A365ECu) goto L_08A365EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A365EC:
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A365FCu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A365FCu) goto L_08A365FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A365FC:
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A3660Cu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3660Cu) goto L_08A3660C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3660C:
    aot_gpr_4 = (ctx.gpr[2] + ctx.gpr[18]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A3661Cu);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3661Cu) goto L_08A3661C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3661C:
    aot_gpr_6 = (50298u << 16u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08A36630u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0056_entry, 56u, 15u, 0x088E4294u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36630u) goto L_08A36630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36630:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36678;
      }
      goto L_08A36638;
    }
L_08A36638:
    aot_gpr_31 = (0x08A36640u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9924)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36640u) goto L_08A36640;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36640:
    aot_gpr_31 = (0x08A36648u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36648u) goto L_08A36648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36648:
    aot_gpr_31 = (0x08A36650u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(aot_gpr_16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36650u) goto L_08A36650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36650:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9924)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9928)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A36664u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36664u) goto L_08A36664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36664:
    aot_gpr_31 = (0x08A3666Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3666Cu) goto L_08A3666C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3666C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9932)));
    aot_gpr_31 = (0x08A36678u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36678u) goto L_08A36678;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36678:
    aot_gpr_31 = (0x08A36680u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36680u) goto L_08A36680;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36680:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36774;
      }
      goto L_08A36688;
    }
L_08A36688:
    aot_gpr_31 = (0x08A36690u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36690u) goto L_08A36690;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36690:
    aot_gpr_31 = (0x08A36698u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36698u) goto L_08A36698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36698:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_31 = (0x08A366B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A366B8u) goto L_08A366B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A366B8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    aot_gpr_31 = (0x08A366C4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0064_entry, 64u, 922u, 0x08907F9Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A366C4u) goto L_08A366C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A366C4:
    aot_gpr_31 = (0x08A366CCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A366CCu) goto L_08A366CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A366CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1540)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36704;
      }
      goto L_08A366D8;
    }
L_08A366D8:
    aot_gpr_31 = (0x08A366E0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A366E0u) goto L_08A366E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A366E0:
    aot_gpr_31 = (0x08A366E8u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(0u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A366E8u) goto L_08A366E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A366E8:
    aot_gpr_31 = (0x08A366F0u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A366F0u) goto L_08A366F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A366F0:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3256))))));
    aot_gpr_31 = (0x08A366FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A366FCu) goto L_08A366FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A366FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36728;
      }
      goto L_08A36704;
    }
L_08A36704:
    aot_gpr_31 = (0x08A3670Cu);
    aot_gpr_16 = (0u | 5u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3670Cu) goto L_08A3670C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3670C:
    aot_gpr_31 = (0x08A36714u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3256), static_cast<std::uint8_t>(aot_gpr_16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36714u) goto L_08A36714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36714:
    aot_gpr_31 = (0x08A3671Cu);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3671Cu) goto L_08A3671C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3671C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3256))))));
    aot_gpr_31 = (0x08A36728u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 15u, 0x08908080u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36728u) goto L_08A36728;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36728:
    aot_gpr_31 = (0x08A36730u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36730u) goto L_08A36730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36730:
    aot_gpr_31 = (0x08A36738u);
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36738u) goto L_08A36738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36738:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A3675Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 613u, 0x089471E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3675Cu) goto L_08A3675C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3675C:
    aot_gpr_31 = (0x08A36764u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36764u) goto L_08A36764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36764:
    aot_gpr_31 = (0x08A3676Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 742u, 0x089AB7C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3676Cu) goto L_08A3676C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3676C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A367D4;
      }
      goto L_08A36774;
    }
L_08A36774:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08A36780u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36780u) goto L_08A36780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36780:
    aot_gpr_31 = (0x08A36788u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0132_entry, 132u, 606u, 0x08A17A04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36788u) goto L_08A36788;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36788:
    aot_gpr_31 = (0x08A36790u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36790u) goto L_08A36790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36790:
    aot_gpr_31 = (0x08A36798u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0055_entry, 55u, 438u, 0x088E34ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36798u) goto L_08A36798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36798:
    aot_gpr_31 = (0x08A367A0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A367A0u) goto L_08A367A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A367A0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2076), 0u);
    aot_gpr_31 = (0x08A367B0u);
    aot_mem.aot_direct_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1928), static_cast<std::uint8_t>(aot_gpr_4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A367B0u) goto L_08A367B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A367B0:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 12u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A367D4;
      }
      goto L_08A367C4;
    }
L_08A367C4:
    aot_gpr_31 = (0x08A367CCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A367CCu) goto L_08A367CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A367CC:
    aot_gpr_31 = (0x08A367D4u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A367D4u) goto L_08A367D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A367D4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08A367F0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9892)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A36834;
      }
      goto L_08A36824;
    }
L_08A36824:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A36C98;
      }
      goto L_08A3682C;
    }
L_08A3682C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3684C;
      }
      goto L_08A36834;
    }
L_08A36834:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A36B98;
      }
      goto L_08A3683C;
    }
L_08A3683C:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36C98;
      }
      goto L_08A36844;
    }
L_08A36844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36C98;
      }
      goto L_08A3684C;
    }
L_08A3684C:
    aot_gpr_31 = (0x08A36854u);
    aot_gpr_4 = (0u | 18u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36854u) goto L_08A36854;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36854:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8732)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9940)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
      if (branch_taken) {
          goto L_08A368E0;
      }
      goto L_08A36868;
    }
L_08A36868:
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(3000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36944;
      }
      goto L_08A36874;
    }
L_08A36874:
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(11000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36944;
      }
      goto L_08A36880;
    }
L_08A36880:
    aot_gpr_31 = (0x08A36888u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36888u) goto L_08A36888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36888:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 3000u);
    aot_gpr_31 = (0x08A36898u);
    aot_gpr_6 = (0u | 11000u);
    goto L_08A36468;
L_08A36898:
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08A368BCu);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A368BCu) goto L_08A368BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A368BC:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9936)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A368D8;
      }
      goto L_08A368C8;
    }
L_08A368C8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A368D8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A368D8u) goto L_08A368D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A368D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36944;
      }
      goto L_08A368E0;
    }
L_08A368E0:
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(8000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36944;
      }
      goto L_08A368EC;
    }
L_08A368EC:
    aot_gpr_31 = (0x08A368F4u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A368F4u) goto L_08A368F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A368F4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A36904u);
    aot_gpr_6 = (0u | 8000u);
    goto L_08A36468;
L_08A36904:
    aot_gpr_5 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_6 = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(aot_gpr_6));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08A36928u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36928u) goto L_08A36928;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36928:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9936)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36944;
      }
      goto L_08A36934;
    }
L_08A36934:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A36944u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36944u) goto L_08A36944;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36944:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8728)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
    // nop
      if (branch_taken) {
          goto L_08A369A0;
      }
      goto L_08A36950;
    }
L_08A36950:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8732)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(4001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3697C;
      }
      goto L_08A3696C;
    }
L_08A3696C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A369A0;
      }
      goto L_08A3697C;
    }
L_08A3697C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    aot_gpr_5 = (0u | 237u);
    aot_gpr_6 = (0u | 130u);
    ctx.gpr[7] = (0u | 180u);
    aot_gpr_31 = (0x08A36994u);
    ctx.gpr[8] = (0u | 255u);
    goto L_08A3550C;
L_08A36994:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A369A0u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    goto L_08A356D4;
L_08A369A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36B90;
      }
      goto L_08A369AC;
    }
L_08A369AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9912)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A36B90;
      }
      goto L_08A369BC;
    }
L_08A369BC:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9916)));
    ctx.gpr[17] = (2238u << 16u);
    aot_gpr_4 = (ctx.gpr[7] - aot_gpr_4);
    aot_gpr_16 = (2238u << 16u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6776));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_4) < 0 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(14304));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-8144));
    if (aot_gpr_6 != 0u) {
    aot_gpr_4 = (0u | 0u);
        goto L_08A369E4;
    }
    goto L_08A369E4;
L_08A369E4:
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    aot_gpr_6 = (ctx.gpr[7] | 0u);
        goto L_08A369F4;
    }
    goto L_08A369F4;
L_08A369F4:
    ctx.gpr[7] = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_31 = (0x08A36A04u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36A04u) goto L_08A36A04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36A04:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36A1C;
      }
      goto L_08A36A10;
    }
L_08A36A10:
    aot_gpr_31 = (0x08A36A18u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36A18u) goto L_08A36A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36A18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08A36A1C;
L_08A36A1C:
    aot_gpr_31 = (0x08A36A24u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 689u, 0x089BB298u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36A24u) goto L_08A36A24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36A24:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A36A30u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36A30u) goto L_08A36A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36A30:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36A48;
      }
      goto L_08A36A3C;
    }
L_08A36A3C:
    aot_gpr_31 = (0x08A36A44u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36A44u) goto L_08A36A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36A44:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08A36A48;
L_08A36A48:
    aot_gpr_31 = (0x08A36A50u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 554u, 0x089BAA68u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36A50u) goto L_08A36A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36A50:
    aot_gpr_5 = (0u | 200u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08A36A70u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36A70u) goto L_08A36A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36A70:
    aot_gpr_31 = (0x08A36A78u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36A78u) goto L_08A36A78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36A78:
    aot_gpr_5 = (17391u << 16u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(28));
    aot_gpr_5 = (17287u << 16u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08A36AA0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36AA0u) goto L_08A36AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36AA0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A36AB8u);
    ctx.gpr[8] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36AB8u) goto L_08A36AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36AB8:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(4));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17389u << 16u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17136u << 16u);
    aot_gpr_31 = (0x08A36ADCu);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36ADCu) goto L_08A36ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36ADC:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[26];
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x08A36AF4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36AF4u) goto L_08A36AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36AF4:
    aot_gpr_31 = (0x08A36AFCu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36AFCu) goto L_08A36AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36AFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A36B0Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B0Cu) goto L_08A36B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B0C:
    aot_gpr_31 = (0x08A36B14u);
    aot_gpr_4 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 78u, 0x08B0C5C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B14u) goto L_08A36B14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B14:
    aot_gpr_31 = (0x08A36B1Cu);
    ctx.fpr[22] = ctx.fpr[24] - ctx.fpr[22];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 75u, 0x08B0C580u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B1Cu) goto L_08A36B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B1C:
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[26];
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_31 = (0x08A36B34u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B34u) goto L_08A36B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B34:
    aot_gpr_31 = (0x08A36B3Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 64u, 0x08B0C4D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B3Cu) goto L_08A36B3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B3C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6768));
      if (branch_taken) {
          goto L_08A36B78;
      }
      goto L_08A36B48;
    }
L_08A36B48:
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08A36B54u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B54u) goto L_08A36B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B54:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36B6C;
      }
      goto L_08A36B60;
    }
L_08A36B60:
    aot_gpr_31 = (0x08A36B68u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B68u) goto L_08A36B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B68:
    aot_gpr_16 = (ctx.gpr[17] | 0u);
    goto L_08A36B6C;
L_08A36B6C:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), aot_gpr_16);
    ctx.gpr[17] = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6768));
    goto L_08A36B78;
L_08A36B78:
    aot_gpr_31 = (0x08A36B80u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B80u) goto L_08A36B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B80:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A36B90u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36B90u) goto L_08A36B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36C98;
      }
      goto L_08A36B98;
    }
L_08A36B98:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9940)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36C90;
      }
      goto L_08A36BA4;
    }
L_08A36BA4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8732)));
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 < static_cast<std::uint32_t>(5000) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36C90;
      }
      goto L_08A36BBC;
    }
L_08A36BBC:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[18] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08A36BF4;
      }
      goto L_08A36BC8;
    }
L_08A36BC8:
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_31 = (0x08A36BD4u);
    aot_gpr_4 = (0u | 2452u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36BD4u) goto L_08A36BD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36BD4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36BEC;
      }
      goto L_08A36BE0;
    }
L_08A36BE0:
    aot_gpr_31 = (0x08A36BE8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36BE8u) goto L_08A36BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36BE8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A36BEC;
L_08A36BEC:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    ctx.gpr[18] = (aot_gpr_16 | 0u);
    goto L_08A36BF4;
L_08A36BF4:
    aot_gpr_5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-6760));
    aot_gpr_31 = (0x08A36C00u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36C00u) goto L_08A36C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36C00:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08A36C0Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36C0Cu) goto L_08A36C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36C0C:
    aot_gpr_31 = (0x08A36C14u);
    aot_gpr_4 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36C14u) goto L_08A36C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36C14:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08A36C24u);
    aot_gpr_6 = (0u | 5000u);
    goto L_08A36468;
L_08A36C24:
    aot_gpr_5 = (0u | 128u);
    aot_gpr_6 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(aot_gpr_6));
    aot_gpr_4 = (ctx.gpr[2] & 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08A36C48u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36C48u) goto L_08A36C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36C48:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08A36C60;
      }
      goto L_08A36C54;
    }
L_08A36C54:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A36C60;
L_08A36C60:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17185u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_31 = (0x08A36C90u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36C90u) goto L_08A36C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36C98;
      }
      goto L_08A36C98;
    }
L_08A36C98:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      ctx.gpr[18] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36CD0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36D24;
      }
      goto L_08A36CF0;
    }
L_08A36CF0:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    goto L_08A36CF8;
L_08A36CF8:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
        goto L_08A36D18;
    }
    goto L_08A36D08;
L_08A36D08:
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A36D1C;
      }
      goto L_08A36D18;
    }
L_08A36D18:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08A36D1C;
L_08A36D1C:
    if (aot_gpr_6 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
        goto L_08A36CF8;
    }
    goto L_08A36D24;
L_08A36D24:
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_gpr_5 | 0u);
        goto L_08A36D48;
    }
    goto L_08A36D2C;
L_08A36D2C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (ctx.gpr[7] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_6 = (aot_gpr_6 & 255u);
    if (aot_gpr_6 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
        goto L_08A36D4C;
    }
    goto L_08A36D44;
L_08A36D44:
    aot_gpr_4 = (aot_gpr_5 | 0u);
    goto L_08A36D48;
L_08A36D48:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_4);
    goto L_08A36D4C;
L_08A36D4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_5 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36D84;
      }
      goto L_08A36D7C;
    }
L_08A36D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A36D88;
      }
      goto L_08A36D84;
    }
L_08A36D84:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    goto L_08A36D88;
L_08A36D88:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36D90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    ctx.gpr[20] = (aot_gpr_4 | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-28736));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_gpr_31 = (0x08A36DC8u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 278u, 0x08A89478u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36DC8u) goto L_08A36DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36DC8:
    ctx.gpr[18] = (aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 1u);
    aot_gpr_16 = (0u | 0u);
    goto L_08A36DD4;
L_08A36DD4:
    aot_gpr_4 = (ctx.gpr[18] & ctx.gpr[17]);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36E18;
      }
      goto L_08A36DE0;
    }
L_08A36DE0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08A36DF8;
    }
    goto L_08A36DEC;
L_08A36DEC:
    aot_gpr_31 = (0x08A36DF4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36DF4u) goto L_08A36DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36DF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08A36DF8;
L_08A36DF8:
    aot_gpr_31 = (0x08A36E00u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 573u, 0x08A53124u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36E00u) goto L_08A36E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36E00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36E18;
      }
      goto L_08A36E08;
    }
L_08A36E08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08A36E18u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 330u, 0x08A897C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36E18u) goto L_08A36E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36E18:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[17]);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A36DD4;
      }
      goto L_08A36E2C;
    }
L_08A36E2C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    aot_gpr_31 = (0x08A36E38u);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(116));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0075_entry, 75u, 759u, 0x08933F0Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36E38u) goto L_08A36E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36E38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(40));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A36E50u);
    aot_gpr_4 = (ctx.gpr[2] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36E50u) goto L_08A36E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36E50:
    aot_gpr_31 = (0x08A36E58u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0161_entry, 161u, 371u, 0x08A89ACCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36E58u) goto L_08A36E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36E58:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36E78:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(7)));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(8), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(11), ctx.gpr[7]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(12), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(15), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(16), ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(19), ctx.gpr[9]));
    ctx.gpr[10] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(21)));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08A36EC0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0109_entry, 109u, 35u, 0x089B8320u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36EC0u) goto L_08A36EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36EC0:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36ECC:
    aot_gpr_5 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(252)));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(6), aot_gpr_6));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A36F1C;
      }
      goto L_08A36F00;
    }
L_08A36F00:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A36F1C;
L_08A36F1C:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36F24:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4201)));
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
        goto L_08A36F3C;
    }
    goto L_08A36F34;
L_08A36F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36F58;
      }
      goto L_08A36F3C;
    }
L_08A36F3C:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_4 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(244), aot_gpr_6);
    goto L_08A36F58;
L_08A36F58:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36F60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(6), aot_gpr_5));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A36FBC;
      }
      goto L_08A36F98;
    }
L_08A36F98:
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    aot_gpr_31 = (0x08A36FA8u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36FA8u) goto L_08A36FA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36FA8:
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36FC4;
      }
      goto L_08A36FB4;
    }
L_08A36FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3702C;
      }
      goto L_08A36FBC;
    }
L_08A36FBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3702C;
      }
      goto L_08A36FC4;
    }
L_08A36FC4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36FE8;
      }
      goto L_08A36FD0;
    }
L_08A36FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A36FE8;
      }
      goto L_08A36FDC;
    }
L_08A36FDC:
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A36FE8u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 80u, 0x089AC664u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36FE8u) goto L_08A36FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36FE8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A36FEC;
L_08A36FEC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A36FF8u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A36FF8u) goto L_08A36FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A36FF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3701C;
      }
      goto L_08A37000;
    }
L_08A37000:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A3700Cu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08AFEF7C, 190u, 0x08AFEF7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3700Cu) goto L_08A3700C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3700C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A3701Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0106_entry, 106u, 80u, 0x089AC664u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3701Cu) goto L_08A3701C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3701C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A36FEC;
      }
      goto L_08A3702C;
    }
L_08A3702C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37040:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08A370C0;
      }
      goto L_08A37074;
    }
L_08A37074:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_31 = (0x08A37080u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(10), aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37080u) goto L_08A37080;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37080:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A370B8;
      }
      goto L_08A3708C;
    }
L_08A3708C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A370B0;
      }
      goto L_08A37098;
    }
L_08A37098:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A370C8;
      }
      goto L_08A370A4;
    }
L_08A370A4:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08A370D0;
      }
      goto L_08A370B0;
    }
L_08A370B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A370D0;
      }
      goto L_08A370B8;
    }
L_08A370B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A370D0;
      }
      goto L_08A370C0;
    }
L_08A370C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A370D0;
      }
      goto L_08A370C8;
    }
L_08A370C8:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(860), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A370D0;
L_08A370D0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A370E0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08A37148;
      }
      goto L_08A37114;
    }
L_08A37114:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_31 = (0x08A37120u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(10), aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37120u) goto L_08A37120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37120:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37140;
      }
      goto L_08A3712C;
    }
L_08A3712C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37150;
      }
      goto L_08A37138;
    }
L_08A37138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3715C;
      }
      goto L_08A37140;
    }
L_08A37140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3715C;
      }
      goto L_08A37148;
    }
L_08A37148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3715C;
      }
      goto L_08A37150;
    }
L_08A37150:
    aot_gpr_4 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(11), aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(14), aot_gpr_4));
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(680), aot_gpr_4);
    goto L_08A3715C;
L_08A3715C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3716C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A37230;
      }
      goto L_08A371A0;
    }
L_08A371A0:
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(10), aot_gpr_6));
    aot_gpr_31 = (0x08A371BCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A371BCu) goto L_08A371BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A371BC:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37228;
      }
      goto L_08A371C8;
    }
L_08A371C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A371E0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A371E0u) goto L_08A371E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A371E0:
    aot_gpr_4 = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A371FC;
      }
      goto L_08A371EC;
    }
L_08A371EC:
    aot_gpr_31 = (0x08A371F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 704u, 0x089F79E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A371F4u) goto L_08A371F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A371F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37228;
      }
      goto L_08A371FC;
    }
L_08A371FC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A37214u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37214u) goto L_08A37214;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37214:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A37228;
      }
      goto L_08A37220;
    }
L_08A37220:
    aot_gpr_31 = (0x08A37228u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 178u, 0x08AA5240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37228u) goto L_08A37228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37308;
      }
      goto L_08A37230;
    }
L_08A37230:
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(10), aot_gpr_6));
    aot_gpr_31 = (0x08A3724Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3724Cu) goto L_08A3724C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3724C:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37308;
      }
      goto L_08A37258;
    }
L_08A37258:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37308;
      }
      goto L_08A37264;
    }
L_08A37264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A372C4;
      }
      goto L_08A37270;
    }
L_08A37270:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A37280u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1752), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 576u, 0x088327B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37280u) goto L_08A37280;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37280:
    aot_gpr_31 = (0x08A37288u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 711u, 0x088331D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37288u) goto L_08A37288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37288:
    aot_gpr_31 = (0x08A37290u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 681u, 0x08832FA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37290u) goto L_08A37290;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37290:
    aot_gpr_31 = (0x08A37298u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 696u, 0x088330BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37298u) goto L_08A37298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37298:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A372A8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    goto L_08A36CD0;
L_08A372A8:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A372BC;
      }
      goto L_08A372B4;
    }
L_08A372B4:
    aot_gpr_31 = (0x08A372BCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 704u, 0x089F79E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A372BCu) goto L_08A372BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A372BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A372F8;
      }
      goto L_08A372C4;
    }
L_08A372C4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A372D4u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 311u, 0x08A5959Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A372D4u) goto L_08A372D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A372D4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A372E4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    goto L_08A36CD0;
L_08A372E4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A372F8;
      }
      goto L_08A372F0;
    }
L_08A372F0:
    aot_gpr_31 = (0x08A372F8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 178u, 0x08AA5240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A372F8u) goto L_08A372F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A372F8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(632)));
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(680), aot_gpr_4);
    goto L_08A37308;
L_08A37308:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37318:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_6 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(6), aot_gpr_5));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A37370;
      }
      goto L_08A3734C;
    }
L_08A3734C:
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(7), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(10), ctx.gpr[7]));
    aot_gpr_31 = (0x08A3735Cu);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3735Cu) goto L_08A3735C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3735C:
    aot_gpr_6 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37378;
      }
      goto L_08A37368;
    }
L_08A37368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A373C0;
      }
      goto L_08A37370;
    }
L_08A37370:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A373C0;
      }
      goto L_08A37378;
    }
L_08A37378:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A373C0;
      }
      goto L_08A37384;
    }
L_08A37384:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A373C0;
      }
      goto L_08A37390;
    }
L_08A37390:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A3739Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3739Cu) goto L_08A3739C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3739C:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A373C0;
      }
      goto L_08A373A4;
    }
L_08A373A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08A373C0u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A373C0u) goto L_08A373C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A373C0:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A373D0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08A37438;
      }
      goto L_08A37404;
    }
L_08A37404:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_31 = (0x08A37410u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(10), aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37410u) goto L_08A37410;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37410:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37430;
      }
      goto L_08A3741C;
    }
L_08A3741C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37440;
      }
      goto L_08A37428;
    }
L_08A37428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37460;
      }
      goto L_08A37430;
    }
L_08A37430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37460;
      }
      goto L_08A37438;
    }
L_08A37438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37460;
      }
      goto L_08A37440;
    }
L_08A37440:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(617))))));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 << 3u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A37460;
L_08A37460:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37470:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08A3749Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 378u, 0x08ADD694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3749Cu) goto L_08A3749C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3749C:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08A374A8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 379u, 0x08ADD69Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A374A8u) goto L_08A374A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A374A8:
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(5), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(8), aot_gpr_5));
    aot_gpr_31 = (0x08A374B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 380u, 0x08ADD6A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A374B8u) goto L_08A374B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A374B8:
    aot_gpr_4 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(9), aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(12), aot_gpr_4));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(256), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(13), aot_gpr_4));
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(16), aot_gpr_4));
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(260), aot_gpr_4);
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A374EC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A3750Cu);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 392u, 0x08ADD720u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3750Cu) goto L_08A3750C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3750C:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37518:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_gpr_4 = (2237u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_31 = (0x08A37534u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 439u, 0x08ADDA1Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37534u) goto L_08A37534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37534:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37540:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    aot_gpr_5 = (2237u << 16u);
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(6), ctx.gpr[7]));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words); }
    aot_gpr_31 = (0x08A37584u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37584u) goto L_08A37584;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37584:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A375A0;
      }
      goto L_08A37590;
    }
L_08A37590:
    if (ctx.gpr[17] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
        goto L_08A375A8;
    }
    goto L_08A37598;
L_08A37598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A375D0;
      }
      goto L_08A375A0;
    }
L_08A375A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A375E4;
      }
      goto L_08A375A8;
    }
L_08A375A8:
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A375B8u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A375B8u) goto L_08A375B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A375B8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A375C8u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A375C8u) goto L_08A375C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A375C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A375D8;
      }
      goto L_08A375D0;
    }
L_08A375D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A375D8;
      }
      goto L_08A375D8;
    }
L_08A375D8:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A375E4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0034_entry, 34u, 557u, 0x0888F948u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A375E4u) goto L_08A375E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A375E4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08A37600:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[9]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(10), aot_gpr_6));
    ctx.gpr[20] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(11), ctx.gpr[20]));
    ctx.gpr[20] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(14), ctx.gpr[20]));
    ctx.gpr[19] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(15), ctx.gpr[19]));
    ctx.gpr[19] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(18), ctx.gpr[19]));
    ctx.gpr[18] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(19), ctx.gpr[18]));
    ctx.gpr[18] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(22), ctx.gpr[18]));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(23));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(27));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(31));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(35));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(39));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(43));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[8]);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_16 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(47), aot_gpr_16));
    aot_gpr_16 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(50), aot_gpr_16));
    aot_gpr_16 = (0u < aot_gpr_16 ? 1u : 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08A376E8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A376E8u) goto L_08A376E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A376E8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37704;
      }
      goto L_08A376F4;
    }
L_08A376F4:
    if (ctx.gpr[21] != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
        goto L_08A3770C;
    }
    goto L_08A376FC;
L_08A376FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37734;
      }
      goto L_08A37704;
    }
L_08A37704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37778;
      }
      goto L_08A3770C;
    }
L_08A3770C:
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A3771Cu);
    ctx.gpr[23] = (ctx.gpr[21] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0124_entry, 124u, 597u, 0x089F71F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3771Cu) goto L_08A3771C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3771C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A3772Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3772Cu) goto L_08A3772C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3772C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3773C;
      }
      goto L_08A37734;
    }
L_08A37734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A3773C;
      }
      goto L_08A3773C;
    }
L_08A3773C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37778;
      }
      goto L_08A37744;
    }
L_08A37744:
    ctx.gpr[7] = (ctx.gpr[18] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08A37778u);
    ctx.gpr[10] = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0125_entry, 125u, 164u, 0x089F933Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37778u) goto L_08A37778;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37778:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      ctx.gpr[20] = aot_run_words[4];
      ctx.gpr[21] = aot_run_words[5];
      ctx.gpr[22] = aot_run_words[6];
      ctx.gpr[23] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A377A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(10), aot_gpr_6));
    { const std::uint32_t aot_run_words[5]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(11), ctx.gpr[1]));
    ctx.gpr[1] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(14), ctx.gpr[1]));
    aot_fpr_20 = std::bit_cast<float>(ctx.gpr[1]);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08A377E8u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A377E8u) goto L_08A377E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A377E8:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37804;
      }
      goto L_08A377F4;
    }
L_08A377F4:
    if (aot_gpr_16 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
        goto L_08A3780C;
    }
    goto L_08A377FC;
L_08A377FC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3783C;
      }
      goto L_08A37804;
    }
L_08A37804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37854;
      }
      goto L_08A3780C;
    }
L_08A3780C:
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A3781Cu);
    ctx.gpr[18] = (aot_gpr_16 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3781Cu) goto L_08A3781C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3781C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A3782Cu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3782Cu) goto L_08A3782C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3782C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A3783C;
      }
      goto L_08A37834;
    }
L_08A37834:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08A3783C;
      }
      goto L_08A3783C;
    }
L_08A3783C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37854;
      }
      goto L_08A37844;
    }
L_08A37844:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37854;
      }
      goto L_08A37850;
    }
L_08A37850:
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08A37854;
L_08A37854:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37870:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    { const std::uint32_t aot_run_words[5]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31, aot_gpr_6};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(10), aot_gpr_6));
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(11));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (aot_gpr_4 + static_cast<std::uint32_t>(15));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_direct_load_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[8]);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(19));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08A378E0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A378E0u) goto L_08A378E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A378E0:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A37920;
      }
      goto L_08A378EC;
    }
L_08A378EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A37900u);
    ctx.gpr[18] = (aot_gpr_16 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 139u, 0x08AACA60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37900u) goto L_08A37900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37900:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A37910u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37910u) goto L_08A37910;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37910:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A37920;
      }
      goto L_08A37918;
    }
L_08A37918:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08A37920;
      }
      goto L_08A37920;
    }
L_08A37920:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37954;
      }
      goto L_08A37928;
    }
L_08A37928:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3794C;
      }
      goto L_08A37934;
    }
L_08A37934:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_run_words); }
    goto L_08A3794C;
L_08A3794C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A379F8;
      }
      goto L_08A37954;
    }
L_08A37954:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A379F8;
      }
      goto L_08A3795C;
    }
L_08A3795C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A37974u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37974u) goto L_08A37974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37974:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A379F8;
      }
      goto L_08A37980;
    }
L_08A37980:
    { const bool branch_taken = aot_gpr_16 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A379BC;
      }
      goto L_08A37988;
    }
L_08A37988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A3799Cu);
    ctx.gpr[18] = (aot_gpr_16 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 71u, 0x08AA4980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A3799Cu) goto L_08A3799C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A3799C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A379ACu);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A379ACu) goto L_08A379AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A379AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A379BC;
      }
      goto L_08A379B4;
    }
L_08A379B4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08A379BC;
      }
      goto L_08A379BC;
    }
L_08A379BC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A379D8;
      }
      goto L_08A379C4;
    }
L_08A379C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A379E0;
      }
      goto L_08A379D0;
    }
L_08A379D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A379F8;
      }
      goto L_08A379D8;
    }
L_08A379D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A379F8;
      }
      goto L_08A379E0;
    }
L_08A379E0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_12 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_13 = std::bit_cast<float>(aot_run_words[1]);
      aot_fpr_14 = std::bit_cast<float>(aot_run_words[2]);
    }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(48), aot_run_words); }
    goto L_08A379F8;
L_08A379F8:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08A37A10:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(10), aot_gpr_6));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08A37A50u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37A50u) goto L_08A37A50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37A50:
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(11), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(14), aot_gpr_5));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_16 = (0u | 0u);
    aot_gpr_31 = (0x08A37A68u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37A68u) goto L_08A37A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37A68:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37A78;
      }
      goto L_08A37A74;
    }
L_08A37A74:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    goto L_08A37A78;
L_08A37A78:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A37AB4;
      }
      goto L_08A37A80;
    }
L_08A37A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A37A94u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 139u, 0x08AACA60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37A94u) goto L_08A37A94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37A94:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A37AA4u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37AA4u) goto L_08A37AA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37AA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A37AB4;
      }
      goto L_08A37AAC;
    }
L_08A37AAC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A37AB4;
      }
      goto L_08A37AB4;
    }
L_08A37AB4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37AF0;
      }
      goto L_08A37ABC;
    }
L_08A37ABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37AE8;
      }
      goto L_08A37AC8;
    }
L_08A37AC8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(328));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08A37AE8u);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37AE8u) goto L_08A37AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B9C;
      }
      goto L_08A37AF0;
    }
L_08A37AF0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B9C;
      }
      goto L_08A37AF8;
    }
L_08A37AF8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A37B10u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_5);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37B10u) goto L_08A37B10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37B10:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A37B9C;
      }
      goto L_08A37B1C;
    }
L_08A37B1C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A37B58;
      }
      goto L_08A37B24;
    }
L_08A37B24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A37B38u);
    ctx.gpr[19] = (ctx.gpr[17] + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0168_entry, 168u, 71u, 0x08AA4980u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37B38u) goto L_08A37B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37B38:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A37B48u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37B48u) goto L_08A37B48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37B48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A37B58;
      }
      goto L_08A37B50;
    }
L_08A37B50:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A37B58;
      }
      goto L_08A37B58;
    }
L_08A37B58:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B74;
      }
      goto L_08A37B60;
    }
L_08A37B60:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B7C;
      }
      goto L_08A37B6C;
    }
L_08A37B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B9C;
      }
      goto L_08A37B74;
    }
L_08A37B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37B9C;
      }
      goto L_08A37B7C;
    }
L_08A37B7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(328));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[7]);
    jump_target = ctx.gpr[8];
    aot_gpr_31 = (0x08A37B9Cu);
    aot_gpr_6 = (0u | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37B9Cu) goto L_08A37B9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37B9C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
L_08A37BB8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(3), aot_gpr_6));
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(6), aot_gpr_6));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_16);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(40), aot_run_words); }
    aot_gpr_31 = (0x08A37BF4u);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(52)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37BF4u) goto L_08A37BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37BF4:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37CC4;
      }
      goto L_08A37C00;
    }
L_08A37C00:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_31 = (0x08A37C14u);
    ctx.gpr[19] = (aot_gpr_16 + aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37C14u) goto L_08A37C14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37C14:
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    jump_target = aot_gpr_6;
    aot_gpr_31 = (0x08A37C24u);
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37C24u) goto L_08A37C24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37C24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37CC4;
      }
      goto L_08A37C2C;
    }
L_08A37C2C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37CC4;
      }
      goto L_08A37C38;
    }
L_08A37C38:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(11));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(19));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(23));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(27));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(31));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_4 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_4 + static_cast<std::uint32_t>(0), aot_gpr_5));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(35)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08A37CC4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 626u, 0x08B02610u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37CC4u) goto L_08A37CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37CC4:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      ctx.gpr[19] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37CE0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(3), aot_gpr_5));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(6), aot_gpr_5));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08A37D48;
      }
      goto L_08A37D14;
    }
L_08A37D14:
    aot_gpr_6 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(7), aot_gpr_6));
    aot_gpr_31 = (0x08A37D20u);
    aot_gpr_6 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(10), aot_gpr_6));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37D20u) goto L_08A37D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37D20:
    aot_gpr_5 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37D40;
      }
      goto L_08A37D2C;
    }
L_08A37D2C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A37D50;
      }
      goto L_08A37D38;
    }
L_08A37D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37D70;
      }
      goto L_08A37D40;
    }
L_08A37D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37D70;
      }
      goto L_08A37D48;
    }
L_08A37D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37D70;
      }
      goto L_08A37D50;
    }
L_08A37D50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(236)));
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(11)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    aot_gpr_6 = (aot_gpr_6 & 1u);
    aot_gpr_4 = (aot_gpr_4 & ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(236), aot_gpr_4);
    goto L_08A37D70;
L_08A37D70:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37D80:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    AOT_REGCACHE_SYNC_OUT();
    rt.unsupported(0x08A37D84u, 0x0000000Du, "special? not lowered yet"); AOT_REGCACHE_SYNC_OUT(); return;
L_08A37D90:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_6);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37DBC;
      }
      goto L_08A37DB0;
    }
L_08A37DB0:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08A37DBCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 508u, 0x08ADDEE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37DBCu) goto L_08A37DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37DBC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37E1C;
      }
      goto L_08A37DC8;
    }
L_08A37DC8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_right(aot_gpr_16 + static_cast<std::uint32_t>(17), aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load_word_left(aot_gpr_16 + static_cast<std::uint32_t>(20), aot_gpr_5));
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(5));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(9));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(13));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_left(aot_gpr_6 + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_direct_load_word_right(aot_gpr_6 + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    aot_fpr_14 = std::bit_cast<float>(ctx.gpr[7]);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08A37E1Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 492u, 0x08ADDD28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37E1Cu) goto L_08A37E1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37E1C:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37E2C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3)));
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    jump_target = aot_gpr_31;
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(142), static_cast<std::uint8_t>(aot_gpr_4));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37E44:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_run_words); }
    aot_gpr_16 = (2237u << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9943))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (0u | 12u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_31);
    aot_gpr_31 = (0x08A37E74u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37E74u) goto L_08A37E74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37E74:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A37EAC;
      }
      goto L_08A37E80;
    }
L_08A37E80:
    aot_gpr_5 = (2235u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28048));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08A37EAC;
L_08A37EAC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A37EC0;
      }
      goto L_08A37EB4;
    }
L_08A37EB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A37EC0;
L_08A37EC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A37ED0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37ED0u) goto L_08A37ED0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37ED0:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37EF4;
      }
      goto L_08A37EDC;
    }
L_08A37EDC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A37EF4;
      }
      goto L_08A37EEC;
    }
L_08A37EEC:
    aot_gpr_31 = (0x08A37EF4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37EF4u) goto L_08A37EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37EF4:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9747))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08A37F04u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37F04u) goto L_08A37F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37F04:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A37F38;
      }
      goto L_08A37F10;
    }
L_08A37F10:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28280));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08A37F38;
L_08A37F38:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A37F4C;
      }
      goto L_08A37F40;
    }
L_08A37F40:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A37F4C;
L_08A37F4C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A37F5Cu);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37F5Cu) goto L_08A37F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37F5C:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A37F80;
      }
      goto L_08A37F68;
    }
L_08A37F68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          goto L_08A37F80;
      }
      goto L_08A37F78;
    }
L_08A37F78:
    aot_gpr_31 = (0x08A37F80u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37F80u) goto L_08A37F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37F80:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8885))))));
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_31 = (0x08A37F90u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37F90u) goto L_08A37F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37F90:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_5 = (2235u << 16u);
      if (branch_taken) {
          goto L_08A37FC4;
      }
      goto L_08A37F9C;
    }
L_08A37F9C:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2235u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-27348));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), aot_gpr_5);
    aot_gpr_5 = (2211u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(28364));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), aot_gpr_5);
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    goto L_08A37FC4;
L_08A37FC4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A37FD8;
      }
      goto L_08A37FCC;
    }
L_08A37FCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), aot_gpr_4);
    goto L_08A37FD8;
L_08A37FD8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08A37FE8u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 340u, 0x08ADD3DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A37FE8u) goto L_08A37FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A37FE8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 2u, 0x08A3800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A37FF4;
    }
L_08A37FF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), aot_gpr_4);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 2u, 0x08A3800Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0141_entry, 141u, 1u, 0x08A38004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0140(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0140_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_140(Runtime &runtime) {
    runtime.register_generated_unit(140u, 0x08A34000u, 16384u, &recomp_unit_0140, &recomp_unit_0140_entry);
    runtime.register_function(0x08A34000u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34008u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34018u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34020u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3403Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34044u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3404Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34054u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34084u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34088u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A340B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A340C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34118u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34120u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34130u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34140u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3414Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34150u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34194u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3419Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A341F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34234u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34240u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3424Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3425Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34264u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34274u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34280u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34288u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34290u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34298u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A342FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3430Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34314u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34320u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34328u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34330u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3433Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34344u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34354u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34364u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3436Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34374u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34380u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34388u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34394u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A343F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3440Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34424u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34434u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34448u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34450u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34458u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34460u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34468u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34498u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A344FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34504u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34514u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34524u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34538u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34540u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34550u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34558u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34560u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34568u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34570u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34584u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34594u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A345F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34620u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34628u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34634u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34644u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34654u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3466Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34680u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A346B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A346D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A346E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A346E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34700u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34718u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34740u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3474Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34758u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34768u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34770u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34778u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34780u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34794u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A347FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34808u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34814u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3481Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34838u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34844u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3484Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34858u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34860u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34868u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34874u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34880u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34888u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34894u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3489Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A348FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34920u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3492Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34938u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34954u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34960u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34968u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34974u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3498Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A349A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A349C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A349D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A349F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A30u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A64u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34A84u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34AB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34ABCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34B9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34BC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34BECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34BF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C28u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34C88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34CC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34CF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D20u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34D88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34DC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34DECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34DFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E30u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34E94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34EA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34EB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34EBCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34EC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34EECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34F9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34FD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34FECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A34FFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3500Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3501Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3502Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35038u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35054u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3505Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35064u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35098u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A350F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35104u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35120u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35128u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3512Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35150u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35158u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35168u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35170u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35184u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A351F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35208u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35210u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35224u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35240u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3524Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35258u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35264u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3526Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3527Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35284u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3528Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35298u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A352FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35304u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3530Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35318u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35348u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35350u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35358u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35380u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3538Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35394u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35398u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A353F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35404u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35418u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3541Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35430u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3544Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35458u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35464u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3546Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35474u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3547Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35488u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35494u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35498u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A354F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35500u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3550Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35524u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3552Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35548u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35550u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35558u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35560u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35568u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35570u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35578u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35594u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3559Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A355FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35610u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3561Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3562Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35630u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3563Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35648u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35664u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35670u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35678u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35684u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35690u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35698u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A356D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35744u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35760u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35768u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3576Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35774u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A357FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35808u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35810u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3581Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35828u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35830u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35834u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35840u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35848u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3584Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3587Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35884u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3588Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35894u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A358A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A358CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35900u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35908u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35910u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35938u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35950u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35964u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35974u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3598Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35994u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A359FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A2Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35A60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AD0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AE4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35AECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B30u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B64u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35B9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BB0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BBCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35BF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35C9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35CF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D5Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D8Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35D9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DB0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DBCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35DFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E5Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E84u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E8Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35E9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35ECCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35ED4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35EE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35F9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A35FF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36000u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3600Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36014u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3601Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3603Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3605Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3607Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3608Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3609Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A360ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3611Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36128u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36130u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3613Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36140u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36148u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36150u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36158u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36160u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36164u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3616Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36178u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3617Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36184u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36190u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36194u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3619Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A361F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36214u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36218u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36250u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36260u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36274u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3627Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36288u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A362ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A362BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A362D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A362E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A362F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36300u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3630Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36318u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36334u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36338u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3635Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3636Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36374u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3637Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36384u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3638Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3639Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A363ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A363B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A363C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A363D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A363F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3640Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36418u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36424u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36448u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36450u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36468u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36474u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3647Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3648Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3649Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A364B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A364D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A364DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A364E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A364E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36510u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3651Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36528u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36530u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3653Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36540u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36548u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36554u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3655Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36570u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36580u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36588u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36590u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36598u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365DCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A365FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3660Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3661Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36630u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36638u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36640u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36648u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36650u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36664u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3666Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36678u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36680u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36688u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36690u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36698u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A366FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36704u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3670Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36714u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3671Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36728u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36730u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36738u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3675Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36764u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3676Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36774u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36780u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36788u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36790u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36798u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367CCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A367F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36824u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3682Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36834u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3683Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36844u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3684Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36854u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36868u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36874u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36880u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36888u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36898u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A368F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36904u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36928u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36934u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36944u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36950u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3696Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3697Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36994u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A369A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A369ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A369BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A369E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A369F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A30u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36A78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36AA0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36AB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36ADCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36AF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36AFCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36B98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BBCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36BF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C0Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C54u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36C98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36CD0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36CF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36CF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D08u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D2Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D84u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D88u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36D90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DD4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36DF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E08u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E18u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E2Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36E78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36EC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36ECCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F34u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F3Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36F98u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FA8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FBCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FD0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FDCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A36FF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37000u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3700Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3701Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3702Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37040u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37074u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37080u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3708Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37098u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370B0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A370E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37114u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37120u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3712Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37138u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37140u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37148u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37150u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3715Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3716Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A371FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37214u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37220u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37228u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37230u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3724Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37258u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37264u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37270u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37280u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37288u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37290u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37298u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372D4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372F0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A372F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37308u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37318u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3734Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3735Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37368u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37370u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37378u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37384u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37390u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3739Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373C0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A373D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37404u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37410u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3741Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37428u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37430u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37438u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37440u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37460u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37470u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3749Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A374ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3750Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37518u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37534u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37540u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37584u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37590u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37598u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375A0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375A8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375B8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375C8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A375E4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37600u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A376E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A376F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A376FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37704u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3770Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3771Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3772Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37734u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3773Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37744u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37778u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A377A4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A377E8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A377F4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A377FCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37804u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3780Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3781Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3782Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37834u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3783Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37844u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37850u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37854u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37870u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A378E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A378ECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37900u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37910u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37918u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37920u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37928u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37934u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3794Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37954u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3795Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37974u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37980u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37988u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A3799Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379ACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379B4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379BCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379C4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379D0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379D8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379E0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A379F8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37A94u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AA4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37ABCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AF0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37AF8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B58u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B60u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B6Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B7Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37B9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37BB8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37BF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C00u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C24u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C2Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37C38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37CC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37CE0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D14u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D20u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D2Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D48u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D50u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D70u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37D90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DB0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DBCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37DC8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E1Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E2Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E44u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E74u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37E80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EACu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EB4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EC0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37ED0u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EDCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EECu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37EF4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F04u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F10u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F38u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F40u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F4Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F5Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F68u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F78u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F80u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F90u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37F9Cu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FC4u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FCCu, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FD8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FE8u, &recomp_unit_0140, "recomp_unit_0140");
    runtime.register_function(0x08A37FF4u, &recomp_unit_0140, "recomp_unit_0140");
}
} // namespace psprecomp
