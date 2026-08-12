#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0003[4091] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0,
    0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22,
    0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0,
    0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0,
    40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 49, 0, 0, 50, 0,
    0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61,
    0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 0, 71,
    0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 0, 80, 0, 0, 81, 0, 0,
    82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 0, 92, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0,
    97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0,
    108, 0, 0, 109, 110, 0, 111, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118,
    0, 0, 119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127,
    0, 0, 128, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0,
    0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 140,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 148, 0,
    0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160,
    0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167,
    0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196,
    0, 0, 197, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208,
    0, 209, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0,
    0, 218, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0,
    230, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240,
    0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0,
    251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 260,
    0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 269, 0, 270, 0, 271,
    0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0,
    281, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 286, 0, 287, 288, 0, 0, 0, 0, 0, 0, 0, 289, 290, 0,
    0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 297, 298, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302,
    0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0,
    0, 0, 314, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319,
    0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0,
    0, 324, 0, 325, 0, 326, 0, 0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0,
    0, 349, 0, 0, 350, 0, 0, 351, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 356, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0,
    361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0, 370, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 388, 0, 0, 389, 0, 0, 390, 0, 391, 392, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 400, 0, 401, 0,
    402, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 407, 408, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415,
    416, 0, 417, 0, 418, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 422, 0, 423, 424, 0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 0, 429, 0,
    0, 430, 0, 431, 432, 0, 433, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 0, 439, 440, 0, 441, 0, 442, 0, 443, 0, 0, 444,
    0, 0, 445, 0, 0, 446, 0, 447, 448, 0, 449, 0, 450, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 455, 456, 0, 457, 0, 458, 0,
    459, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 463, 464, 0, 465, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 471, 472, 0,
    473, 0, 474, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479, 480, 0, 481, 0, 482, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 486,
    0, 487, 488, 0, 489, 0, 490, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 495, 496, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 0,
    501, 0, 0, 502, 0, 503, 504, 0, 505, 0, 506, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 511, 512, 0, 513, 0, 514, 0, 515, 0,
    0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 520, 0, 521, 0, 522, 0, 523, 0, 0, 524, 0, 0, 525, 0, 0, 526, 0, 527, 528, 0, 529, 0,
    530, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 535, 536, 0, 537, 0, 538, 0, 539, 0, 0, 540, 0, 0, 541, 0, 0, 542, 0, 543,
    544, 0, 545, 0, 546, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 551, 552, 0, 553, 0, 554, 0, 555, 0, 0, 556, 0, 0, 557, 0,
    0, 558, 0, 559, 560, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 567, 568, 0, 569, 0, 570, 0, 571, 0, 0, 572,
    0, 0, 573, 0, 0, 574, 0, 575, 576, 0, 577, 0, 578, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 584, 0, 585, 0, 586, 0,
    587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 591, 592, 0, 593, 0, 594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 599, 600, 0,
    601, 0, 602, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 607, 608, 0, 609, 0, 610, 0, 611, 0, 0, 612, 0, 0, 613, 0, 0, 614,
    0, 615, 616, 0, 617, 0, 618, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 623, 624, 0, 625, 0, 626, 0, 627, 0, 0, 628, 0, 0,
    629, 0, 0, 630, 0, 631, 632, 0, 633, 0, 634, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 638, 0, 639, 640, 0, 641, 0, 642, 0, 643, 0,
    0, 644, 0, 0, 645, 0, 0, 646, 0, 647, 648, 0, 649, 0, 650, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 655, 656, 0, 657, 0,
    658, 0, 659, 0, 0, 660, 0, 0, 661, 0, 0, 662, 0, 663, 664, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671,
    672, 0, 673, 0, 674, 0, 675, 0, 0, 676, 0, 0, 677, 0, 0, 678, 0, 679, 680, 0, 681, 0, 682, 0, 683, 0, 0, 684, 0, 0, 685, 0,
    0, 686, 0, 687, 688, 0, 689, 0, 690, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 694, 0, 695, 696, 0, 697, 0, 698, 0, 699, 0, 0, 700,
    0, 0, 701, 0, 0, 702, 0, 703, 704, 0, 705, 0, 706, 0, 707, 0, 0, 708, 0, 0, 709, 0, 0, 710, 0, 711, 712, 0, 713, 0, 714, 0,
    715, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 719, 720, 0, 721, 0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0, 0, 726, 0, 0,
    727, 0, 728, 729, 0, 730, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 739, 740,
    0, 741, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 748, 0, 749, 750, 0, 751, 0, 752, 0,
    0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 0, 756, 0, 757, 758, 0, 759, 0, 760, 0, 0, 761, 0, 762, 0, 0, 763, 764, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0,
    767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770,
    0, 0, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 776, 0, 777, 0, 778, 0, 0, 0, 779, 0, 0, 0, 780, 781, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 784, 0, 0, 785, 0, 0, 786, 0,
    0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789,
    0, 0, 0, 0, 0, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 793, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 797, 0, 798, 0, 0, 799, 0, 0, 800, 0, 801, 0, 802, 803, 0, 0, 0, 804, 0,
    0, 0, 805, 0, 0, 806, 0, 0, 807, 808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0,
    0, 813, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 821,
    0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 824, 0, 825, 826, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828,
    0, 0, 829, 0, 830, 0, 831, 0, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0,
    834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 837, 0, 0, 0, 0, 838, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 839, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 844, 0, 0, 845, 0, 0, 0, 846, 0, 0, 0, 0,
    0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 0, 851, 0,
    0, 0, 852, 0, 0, 0, 853, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0,
    857, 0, 0, 0, 858, 0, 0, 0, 0, 0, 859, 0, 0, 0, 860, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0,
    863, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 864, 0, 865, 0, 0, 0, 0, 866, 0, 0, 0, 0, 867, 0, 868, 0, 0,
    0, 0, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0, 872, 0, 0, 873, 0, 0, 0, 874, 0, 0, 875, 0, 0, 0, 0, 0, 876, 0, 877, 0,
    0, 878, 0, 879, 880, 0, 0, 0, 881, 0, 0, 882, 0, 0, 0, 0, 0, 883, 0, 884, 0, 885, 0, 886, 0, 887, 888, 0, 0, 0, 889, 0,
    0, 0, 0, 0, 0, 890, 0, 0, 891, 0, 0, 0, 892, 0, 0, 0, 893, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 895, 0, 0, 0, 896, 0, 0, 0, 897, 0, 0, 898, 0, 0, 0, 899, 0, 900, 0, 0, 901, 902, 0, 0, 903, 0, 904, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 905, 0, 906, 0, 907, 0, 0, 0, 0, 908, 0, 0, 0, 0, 909, 0, 0, 0, 0, 910, 0, 0, 0, 911, 0,
    0, 912, 0, 913, 0, 0, 0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 0, 916, 0, 917, 0, 0, 918, 0, 0, 0, 919, 0, 0, 0, 920, 0,
    0, 0, 0, 921, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 0, 924, 0, 0, 0, 0, 0,
    0, 925, 0, 0, 0, 926, 0, 0, 927, 0, 928, 0, 0, 0, 0, 0, 929, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 931, 0, 0, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 0, 0, 0, 0, 0, 0, 934, 0, 0, 935, 0, 0, 936, 0, 0, 937, 938, 939, 0,
    0, 0, 940, 0, 941, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 942, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 944, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 945, 0, 0, 946, 0, 0, 0, 947, 0, 0, 0, 948, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 949, 0, 0, 0, 0, 0, 950, 0, 0, 0, 0, 0, 951, 0, 952, 0, 953, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 954, 0, 0, 0, 0, 0, 0, 955, 0, 0, 0, 0, 0, 956, 0, 0, 957,
    0, 0, 958, 0, 959, 0, 0, 0, 0, 0, 960, 0, 961, 0, 0, 0, 962, 0, 0, 963, 0, 0, 964, 0, 0, 0, 965, 0, 0, 0, 966, 0,
    0, 0, 967, 0, 0, 968, 0, 0, 0, 969, 0, 0, 0, 970, 0, 0, 0, 971, 0, 0, 972, 0, 0, 0, 973, 0, 0, 0, 974, 0, 0, 0,
    975, 0, 0, 976, 0, 0, 0, 977, 0, 0, 0, 978, 0, 0, 0, 979, 0, 0, 0, 980, 0, 981, 0, 0, 0, 982, 983, 0, 0, 0, 0, 0,
    0, 0, 0, 984, 0, 0, 0, 0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 986, 0, 987, 0, 0,
    0, 0, 0, 0, 0, 0, 988, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 989, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 990, 0, 991, 992, 0, 0, 993, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 994, 0, 995, 0, 996, 0, 997, 0, 0, 998, 0, 999, 0, 1000, 1001, 0, 1002, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1003, 0, 0, 0, 1004, 0, 1005, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1006, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1007, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1008, 0, 0, 1009, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1010, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1011, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1012, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 1013, 0, 0, 0, 0, 1014, 0, 0, 0, 0, 0, 0, 1015, 0, 0, 0, 1016, 0, 0, 0, 0, 0, 0, 0, 0, 1017, 0,
    0, 0, 0, 0, 0, 1018, 0, 0, 0, 1019, 0, 0, 0, 0, 0, 0, 0, 0, 1020, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1021, 0, 0, 0,
    0, 0, 0, 1022, 0, 0, 0, 1023, 0, 0, 0, 0, 0, 1024, 0, 0, 0, 0, 0, 1025, 0, 0, 0, 1026, 0, 0, 1027,
};
void recomp_unit_0003_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08810000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0003[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08810000;
    case 2u: goto L_0881000C;
    case 3u: goto L_08810018;
    case 4u: goto L_08810024;
    case 5u: goto L_08810030;
    case 6u: goto L_0881003C;
    case 7u: goto L_08810048;
    case 8u: goto L_08810054;
    case 9u: goto L_08810060;
    case 10u: goto L_0881006C;
    case 11u: goto L_08810078;
    case 12u: goto L_08810084;
    case 13u: goto L_08810090;
    case 14u: goto L_0881009C;
    case 15u: goto L_088100A8;
    case 16u: goto L_088100B4;
    case 17u: goto L_088100C0;
    case 18u: goto L_088100CC;
    case 19u: goto L_088100D8;
    case 20u: goto L_088100E4;
    case 21u: goto L_088100F0;
    case 22u: goto L_088100FC;
    case 23u: goto L_08810108;
    case 24u: goto L_08810114;
    case 25u: goto L_08810120;
    case 26u: goto L_0881012C;
    case 27u: goto L_08810138;
    case 28u: goto L_08810144;
    case 29u: goto L_08810150;
    case 30u: goto L_08810178;
    case 31u: goto L_08810188;
    case 32u: goto L_08810194;
    case 33u: goto L_0881019C;
    case 34u: goto L_088101B8;
    case 35u: goto L_088101CC;
    case 36u: goto L_088101D4;
    case 37u: goto L_088101DC;
    case 38u: goto L_088101E8;
    case 39u: goto L_088101F4;
    case 40u: goto L_08810200;
    case 41u: goto L_0881020C;
    case 42u: goto L_08810218;
    case 43u: goto L_08810224;
    case 44u: goto L_08810230;
    case 45u: goto L_0881023C;
    case 46u: goto L_08810248;
    case 47u: goto L_08810254;
    case 48u: goto L_08810260;
    case 49u: goto L_0881026C;
    case 50u: goto L_08810278;
    case 51u: goto L_08810284;
    case 52u: goto L_08810290;
    case 53u: goto L_0881029C;
    case 54u: goto L_088102A8;
    case 55u: goto L_088102B4;
    case 56u: goto L_088102C0;
    case 57u: goto L_088102CC;
    case 58u: goto L_088102D8;
    case 59u: goto L_088102E4;
    case 60u: goto L_088102F0;
    case 61u: goto L_088102FC;
    case 62u: goto L_08810308;
    case 63u: goto L_08810314;
    case 64u: goto L_08810320;
    case 65u: goto L_0881032C;
    case 66u: goto L_08810338;
    case 67u: goto L_08810348;
    case 68u: goto L_08810358;
    case 69u: goto L_08810364;
    case 70u: goto L_08810370;
    case 71u: goto L_0881037C;
    case 72u: goto L_08810388;
    case 73u: goto L_08810394;
    case 74u: goto L_088103A0;
    case 75u: goto L_088103AC;
    case 76u: goto L_088103B8;
    case 77u: goto L_088103C4;
    case 78u: goto L_088103D0;
    case 79u: goto L_088103DC;
    case 80u: goto L_088103E8;
    case 81u: goto L_088103F4;
    case 82u: goto L_08810400;
    case 83u: goto L_0881040C;
    case 84u: goto L_08810418;
    case 85u: goto L_08810424;
    case 86u: goto L_08810430;
    case 87u: goto L_0881043C;
    case 88u: goto L_08810448;
    case 89u: goto L_08810454;
    case 90u: goto L_08810460;
    case 91u: goto L_0881046C;
    case 92u: goto L_08810474;
    case 93u: goto L_08810484;
    case 94u: goto L_088104DC;
    case 95u: goto L_088104E8;
    case 96u: goto L_088104F4;
    case 97u: goto L_08810500;
    case 98u: goto L_0881050C;
    case 99u: goto L_08810580;
    case 100u: goto L_08810594;
    case 101u: goto L_088105A0;
    case 102u: goto L_088105B0;
    case 103u: goto L_088105C0;
    case 104u: goto L_088105CC;
    case 105u: goto L_088105D8;
    case 106u: goto L_088105E0;
    case 107u: goto L_088105E8;
    case 108u: goto L_08810600;
    case 109u: goto L_0881060C;
    case 110u: goto L_08810610;
    case 111u: goto L_08810618;
    case 112u: goto L_08810628;
    case 113u: goto L_08810634;
    case 114u: goto L_08810640;
    case 115u: goto L_08810650;
    case 116u: goto L_08810658;
    case 117u: goto L_08810668;
    case 118u: goto L_0881067C;
    case 119u: goto L_08810688;
    case 120u: goto L_088106A0;
    case 121u: goto L_088106B0;
    case 122u: goto L_088106B8;
    case 123u: goto L_088106C0;
    case 124u: goto L_088106D0;
    case 125u: goto L_088106DC;
    case 126u: goto L_088106EC;
    case 127u: goto L_088106FC;
    case 128u: goto L_08810708;
    case 129u: goto L_0881070C;
    case 130u: goto L_08810714;
    case 131u: goto L_08810764;
    case 132u: goto L_08810778;
    case 133u: goto L_08810798;
    case 134u: goto L_088107EC;
    case 135u: goto L_08810810;
    case 136u: goto L_088108A4;
    case 137u: goto L_088108A8;
    case 138u: goto L_088108CC;
    case 139u: goto L_088108F4;
    case 140u: goto L_088108FC;
    case 141u: goto L_0881090C;
    case 142u: goto L_0881094C;
    case 143u: goto L_08810958;
    case 144u: goto L_08810968;
    case 145u: goto L_08810980;
    case 146u: goto L_088109DC;
    case 147u: goto L_088109EC;
    case 148u: goto L_088109F8;
    case 149u: goto L_08810A04;
    case 150u: goto L_08810A10;
    case 151u: goto L_08810A58;
    case 152u: goto L_08810AA8;
    case 153u: goto L_08810AB4;
    case 154u: goto L_08810ABC;
    case 155u: goto L_08810AC4;
    case 156u: goto L_08810ACC;
    case 157u: goto L_08810AD8;
    case 158u: goto L_08810AE4;
    case 159u: goto L_08810AF0;
    case 160u: goto L_08810AFC;
    case 161u: goto L_08810B0C;
    case 162u: goto L_08810B18;
    case 163u: goto L_08810B38;
    case 164u: goto L_08810B40;
    case 165u: goto L_08810B6C;
    case 166u: goto L_08810B74;
    case 167u: goto L_08810B7C;
    case 168u: goto L_08810B94;
    case 169u: goto L_08810BA0;
    case 170u: goto L_08810BB8;
    case 171u: goto L_08810BCC;
    case 172u: goto L_08810BF0;
    case 173u: goto L_08810C04;
    case 174u: goto L_08810C24;
    case 175u: goto L_08810C2C;
    case 176u: goto L_08810C38;
    case 177u: goto L_08810C74;
    case 178u: goto L_08810C9C;
    case 179u: goto L_08810CA4;
    case 180u: goto L_08810CD4;
    case 181u: goto L_08810CD8;
    case 182u: goto L_08810D3C;
    case 183u: goto L_08810D48;
    case 184u: goto L_08810D58;
    case 185u: goto L_08810D7C;
    case 186u: goto L_08810D84;
    case 187u: goto L_08810D94;
    case 188u: goto L_08810DA4;
    case 189u: goto L_08810DB8;
    case 190u: goto L_08810DC0;
    case 191u: goto L_08810DC8;
    case 192u: goto L_08810DD0;
    case 193u: goto L_08810DD8;
    case 194u: goto L_08810DE4;
    case 195u: goto L_08810DF0;
    case 196u: goto L_08810DFC;
    case 197u: goto L_08810E08;
    case 198u: goto L_08810E0C;
    case 199u: goto L_08810E14;
    case 200u: goto L_08810E20;
    case 201u: goto L_08810E2C;
    case 202u: goto L_08810E38;
    case 203u: goto L_08810E40;
    case 204u: goto L_08810E4C;
    case 205u: goto L_08810E58;
    case 206u: goto L_08810E64;
    case 207u: goto L_08810E70;
    case 208u: goto L_08810E7C;
    case 209u: goto L_08810E84;
    case 210u: goto L_08810E94;
    case 211u: goto L_08810EA0;
    case 212u: goto L_08810EB0;
    case 213u: goto L_08810EC0;
    case 214u: goto L_08810ECC;
    case 215u: goto L_08810EDC;
    case 216u: goto L_08810EE8;
    case 217u: goto L_08810EF4;
    case 218u: goto L_08810F04;
    case 219u: goto L_08810F08;
    case 220u: goto L_08810F10;
    case 221u: goto L_08810F1C;
    case 222u: goto L_08810F30;
    case 223u: goto L_08810F38;
    case 224u: goto L_08810F40;
    case 225u: goto L_08810F48;
    case 226u: goto L_08810F50;
    case 227u: goto L_08810F5C;
    case 228u: goto L_08810F68;
    case 229u: goto L_08810F74;
    case 230u: goto L_08810F80;
    case 231u: goto L_08810F88;
    case 232u: goto L_08810F94;
    case 233u: goto L_08810FA0;
    case 234u: goto L_08810FAC;
    case 235u: goto L_08810FB8;
    case 236u: goto L_08810FC0;
    case 237u: goto L_08810FD0;
    case 238u: goto L_08810FDC;
    case 239u: goto L_08810FEC;
    case 240u: goto L_08810FFC;
    case 241u: goto L_08811010;
    case 242u: goto L_08811018;
    case 243u: goto L_08811020;
    case 244u: goto L_08811028;
    case 245u: goto L_08811030;
    case 246u: goto L_0881103C;
    case 247u: goto L_0881104C;
    case 248u: goto L_0881105C;
    case 249u: goto L_08811068;
    case 250u: goto L_08811074;
    case 251u: goto L_08811080;
    case 252u: goto L_08811090;
    case 253u: goto L_0881109C;
    case 254u: goto L_088110A8;
    case 255u: goto L_088110B4;
    case 256u: goto L_088110C0;
    case 257u: goto L_088110DC;
    case 258u: goto L_088110E8;
    case 259u: goto L_088110F0;
    case 260u: goto L_088110FC;
    case 261u: goto L_08811104;
    case 262u: goto L_0881110C;
    case 263u: goto L_0881111C;
    case 264u: goto L_08811128;
    case 265u: goto L_08811138;
    case 266u: goto L_08811148;
    case 267u: goto L_0881115C;
    case 268u: goto L_08811164;
    case 269u: goto L_0881116C;
    case 270u: goto L_08811174;
    case 271u: goto L_0881117C;
    case 272u: goto L_08811184;
    case 273u: goto L_08811190;
    case 274u: goto L_088111A0;
    case 275u: goto L_088111B0;
    case 276u: goto L_088111BC;
    case 277u: goto L_088111CC;
    case 278u: goto L_088111D8;
    case 279u: goto L_088111E8;
    case 280u: goto L_088111F4;
    case 281u: goto L_08811200;
    case 282u: goto L_08811210;
    case 283u: goto L_0881121C;
    case 284u: goto L_08811234;
    case 285u: goto L_0881123C;
    case 286u: goto L_08811248;
    case 287u: goto L_08811250;
    case 288u: goto L_08811254;
    case 289u: goto L_08811274;
    case 290u: goto L_08811278;
    case 291u: goto L_08811288;
    case 292u: goto L_08811294;
    case 293u: goto L_088112AC;
    case 294u: goto L_088112B4;
    case 295u: goto L_088112BC;
    case 296u: goto L_088112C4;
    case 297u: goto L_088112CC;
    case 298u: goto L_088112D0;
    case 299u: goto L_088112D8;
    case 300u: goto L_088112E4;
    case 301u: goto L_088112F0;
    case 302u: goto L_088112FC;
    case 303u: goto L_08811308;
    case 304u: goto L_08811310;
    case 305u: goto L_08811320;
    case 306u: goto L_08811328;
    case 307u: goto L_08811360;
    case 308u: goto L_08811384;
    case 309u: goto L_08811394;
    case 310u: goto L_088113A0;
    case 311u: goto L_088113D4;
    case 312u: goto L_088113DC;
    case 313u: goto L_088113E4;
    case 314u: goto L_08811408;
    case 315u: goto L_08811410;
    case 316u: goto L_08811424;
    case 317u: goto L_08811438;
    case 318u: goto L_0881144C;
    case 319u: goto L_0881147C;
    case 320u: goto L_08811484;
    case 321u: goto L_08811498;
    case 322u: goto L_088114E8;
    case 323u: goto L_088114F4;
    case 324u: goto L_08811504;
    case 325u: goto L_0881150C;
    case 326u: goto L_08811514;
    case 327u: goto L_08811520;
    case 328u: goto L_0881152C;
    case 329u: goto L_08811544;
    case 330u: goto L_08811554;
    case 331u: goto L_0881155C;
    case 332u: goto L_08811564;
    case 333u: goto L_08811578;
    case 334u: goto L_088115B4;
    case 335u: goto L_08811608;
    case 336u: goto L_08811618;
    case 337u: goto L_08811630;
    case 338u: goto L_08811654;
    case 339u: goto L_0881166C;
    case 340u: goto L_0881168C;
    case 341u: goto L_088116D4;
    case 342u: goto L_088116E4;
    case 343u: goto L_088116EC;
    case 344u: goto L_08811748;
    case 345u: goto L_08811754;
    case 346u: goto L_08811760;
    case 347u: goto L_08811768;
    case 348u: goto L_08811778;
    case 349u: goto L_08811784;
    case 350u: goto L_08811790;
    case 351u: goto L_0881179C;
    case 352u: goto L_088117A0;
    case 353u: goto L_088117AC;
    case 354u: goto L_088117B8;
    case 355u: goto L_088117C4;
    case 356u: goto L_088117D0;
    case 357u: goto L_088117D4;
    case 358u: goto L_088117E0;
    case 359u: goto L_088117EC;
    case 360u: goto L_088117F8;
    case 361u: goto L_08811800;
    case 362u: goto L_08811818;
    case 363u: goto L_08811830;
    case 364u: goto L_08811838;
    case 365u: goto L_08811844;
    case 366u: goto L_08811850;
    case 367u: goto L_08811858;
    case 368u: goto L_08811860;
    case 369u: goto L_0881186C;
    case 370u: goto L_08811874;
    case 371u: goto L_088118B0;
    case 372u: goto L_088118CC;
    case 373u: goto L_088118DC;
    case 374u: goto L_08811914;
    case 375u: goto L_08811924;
    case 376u: goto L_0881192C;
    case 377u: goto L_0881197C;
    case 378u: goto L_088119A4;
    case 379u: goto L_088119EC;
    case 380u: goto L_088119F4;
    case 381u: goto L_08811A48;
    case 382u: goto L_08811A70;
    case 383u: goto L_08811AB8;
    case 384u: goto L_08811AC0;
    case 385u: goto L_08811AC8;
    case 386u: goto L_08811ADC;
    case 387u: goto L_08811AF8;
    case 388u: goto L_08811B04;
    case 389u: goto L_08811B10;
    case 390u: goto L_08811B1C;
    case 391u: goto L_08811B24;
    case 392u: goto L_08811B28;
    case 393u: goto L_08811B30;
    case 394u: goto L_08811B38;
    case 395u: goto L_08811B40;
    case 396u: goto L_08811B4C;
    case 397u: goto L_08811B58;
    case 398u: goto L_08811B64;
    case 399u: goto L_08811B6C;
    case 400u: goto L_08811B70;
    case 401u: goto L_08811B78;
    case 402u: goto L_08811B80;
    case 403u: goto L_08811B88;
    case 404u: goto L_08811B94;
    case 405u: goto L_08811BA0;
    case 406u: goto L_08811BAC;
    case 407u: goto L_08811BB4;
    case 408u: goto L_08811BB8;
    case 409u: goto L_08811BC0;
    case 410u: goto L_08811BC8;
    case 411u: goto L_08811BD0;
    case 412u: goto L_08811BDC;
    case 413u: goto L_08811BE8;
    case 414u: goto L_08811BF4;
    case 415u: goto L_08811BFC;
    case 416u: goto L_08811C00;
    case 417u: goto L_08811C08;
    case 418u: goto L_08811C10;
    case 419u: goto L_08811C18;
    case 420u: goto L_08811C24;
    case 421u: goto L_08811C30;
    case 422u: goto L_08811C3C;
    case 423u: goto L_08811C44;
    case 424u: goto L_08811C48;
    case 425u: goto L_08811C50;
    case 426u: goto L_08811C58;
    case 427u: goto L_08811C60;
    case 428u: goto L_08811C6C;
    case 429u: goto L_08811C78;
    case 430u: goto L_08811C84;
    case 431u: goto L_08811C8C;
    case 432u: goto L_08811C90;
    case 433u: goto L_08811C98;
    case 434u: goto L_08811CA0;
    case 435u: goto L_08811CA8;
    case 436u: goto L_08811CB4;
    case 437u: goto L_08811CC0;
    case 438u: goto L_08811CCC;
    case 439u: goto L_08811CD4;
    case 440u: goto L_08811CD8;
    case 441u: goto L_08811CE0;
    case 442u: goto L_08811CE8;
    case 443u: goto L_08811CF0;
    case 444u: goto L_08811CFC;
    case 445u: goto L_08811D08;
    case 446u: goto L_08811D14;
    case 447u: goto L_08811D1C;
    case 448u: goto L_08811D20;
    case 449u: goto L_08811D28;
    case 450u: goto L_08811D30;
    case 451u: goto L_08811D38;
    case 452u: goto L_08811D44;
    case 453u: goto L_08811D50;
    case 454u: goto L_08811D5C;
    case 455u: goto L_08811D64;
    case 456u: goto L_08811D68;
    case 457u: goto L_08811D70;
    case 458u: goto L_08811D78;
    case 459u: goto L_08811D80;
    case 460u: goto L_08811D8C;
    case 461u: goto L_08811D98;
    case 462u: goto L_08811DA4;
    case 463u: goto L_08811DAC;
    case 464u: goto L_08811DB0;
    case 465u: goto L_08811DB8;
    case 466u: goto L_08811DC0;
    case 467u: goto L_08811DC8;
    case 468u: goto L_08811DD4;
    case 469u: goto L_08811DE0;
    case 470u: goto L_08811DEC;
    case 471u: goto L_08811DF4;
    case 472u: goto L_08811DF8;
    case 473u: goto L_08811E00;
    case 474u: goto L_08811E08;
    case 475u: goto L_08811E10;
    case 476u: goto L_08811E1C;
    case 477u: goto L_08811E28;
    case 478u: goto L_08811E34;
    case 479u: goto L_08811E3C;
    case 480u: goto L_08811E40;
    case 481u: goto L_08811E48;
    case 482u: goto L_08811E50;
    case 483u: goto L_08811E58;
    case 484u: goto L_08811E64;
    case 485u: goto L_08811E70;
    case 486u: goto L_08811E7C;
    case 487u: goto L_08811E84;
    case 488u: goto L_08811E88;
    case 489u: goto L_08811E90;
    case 490u: goto L_08811E98;
    case 491u: goto L_08811EA0;
    case 492u: goto L_08811EAC;
    case 493u: goto L_08811EB8;
    case 494u: goto L_08811EC4;
    case 495u: goto L_08811ECC;
    case 496u: goto L_08811ED0;
    case 497u: goto L_08811ED8;
    case 498u: goto L_08811EE0;
    case 499u: goto L_08811EE8;
    case 500u: goto L_08811EF4;
    case 501u: goto L_08811F00;
    case 502u: goto L_08811F0C;
    case 503u: goto L_08811F14;
    case 504u: goto L_08811F18;
    case 505u: goto L_08811F20;
    case 506u: goto L_08811F28;
    case 507u: goto L_08811F30;
    case 508u: goto L_08811F3C;
    case 509u: goto L_08811F48;
    case 510u: goto L_08811F54;
    case 511u: goto L_08811F5C;
    case 512u: goto L_08811F60;
    case 513u: goto L_08811F68;
    case 514u: goto L_08811F70;
    case 515u: goto L_08811F78;
    case 516u: goto L_08811F84;
    case 517u: goto L_08811F90;
    case 518u: goto L_08811F9C;
    case 519u: goto L_08811FA4;
    case 520u: goto L_08811FA8;
    case 521u: goto L_08811FB0;
    case 522u: goto L_08811FB8;
    case 523u: goto L_08811FC0;
    case 524u: goto L_08811FCC;
    case 525u: goto L_08811FD8;
    case 526u: goto L_08811FE4;
    case 527u: goto L_08811FEC;
    case 528u: goto L_08811FF0;
    case 529u: goto L_08811FF8;
    case 530u: goto L_08812000;
    case 531u: goto L_08812008;
    case 532u: goto L_08812014;
    case 533u: goto L_08812020;
    case 534u: goto L_0881202C;
    case 535u: goto L_08812034;
    case 536u: goto L_08812038;
    case 537u: goto L_08812040;
    case 538u: goto L_08812048;
    case 539u: goto L_08812050;
    case 540u: goto L_0881205C;
    case 541u: goto L_08812068;
    case 542u: goto L_08812074;
    case 543u: goto L_0881207C;
    case 544u: goto L_08812080;
    case 545u: goto L_08812088;
    case 546u: goto L_08812090;
    case 547u: goto L_08812098;
    case 548u: goto L_088120A4;
    case 549u: goto L_088120B0;
    case 550u: goto L_088120BC;
    case 551u: goto L_088120C4;
    case 552u: goto L_088120C8;
    case 553u: goto L_088120D0;
    case 554u: goto L_088120D8;
    case 555u: goto L_088120E0;
    case 556u: goto L_088120EC;
    case 557u: goto L_088120F8;
    case 558u: goto L_08812104;
    case 559u: goto L_0881210C;
    case 560u: goto L_08812110;
    case 561u: goto L_08812118;
    case 562u: goto L_08812120;
    case 563u: goto L_08812128;
    case 564u: goto L_08812134;
    case 565u: goto L_08812140;
    case 566u: goto L_0881214C;
    case 567u: goto L_08812154;
    case 568u: goto L_08812158;
    case 569u: goto L_08812160;
    case 570u: goto L_08812168;
    case 571u: goto L_08812170;
    case 572u: goto L_0881217C;
    case 573u: goto L_08812188;
    case 574u: goto L_08812194;
    case 575u: goto L_0881219C;
    case 576u: goto L_088121A0;
    case 577u: goto L_088121A8;
    case 578u: goto L_088121B0;
    case 579u: goto L_088121B8;
    case 580u: goto L_088121C4;
    case 581u: goto L_088121D0;
    case 582u: goto L_088121DC;
    case 583u: goto L_088121E4;
    case 584u: goto L_088121E8;
    case 585u: goto L_088121F0;
    case 586u: goto L_088121F8;
    case 587u: goto L_08812200;
    case 588u: goto L_0881220C;
    case 589u: goto L_08812218;
    case 590u: goto L_08812224;
    case 591u: goto L_0881222C;
    case 592u: goto L_08812230;
    case 593u: goto L_08812238;
    case 594u: goto L_08812240;
    case 595u: goto L_08812248;
    case 596u: goto L_08812254;
    case 597u: goto L_08812260;
    case 598u: goto L_0881226C;
    case 599u: goto L_08812274;
    case 600u: goto L_08812278;
    case 601u: goto L_08812280;
    case 602u: goto L_08812288;
    case 603u: goto L_08812290;
    case 604u: goto L_0881229C;
    case 605u: goto L_088122A8;
    case 606u: goto L_088122B4;
    case 607u: goto L_088122BC;
    case 608u: goto L_088122C0;
    case 609u: goto L_088122C8;
    case 610u: goto L_088122D0;
    case 611u: goto L_088122D8;
    case 612u: goto L_088122E4;
    case 613u: goto L_088122F0;
    case 614u: goto L_088122FC;
    case 615u: goto L_08812304;
    case 616u: goto L_08812308;
    case 617u: goto L_08812310;
    case 618u: goto L_08812318;
    case 619u: goto L_08812320;
    case 620u: goto L_0881232C;
    case 621u: goto L_08812338;
    case 622u: goto L_08812344;
    case 623u: goto L_0881234C;
    case 624u: goto L_08812350;
    case 625u: goto L_08812358;
    case 626u: goto L_08812360;
    case 627u: goto L_08812368;
    case 628u: goto L_08812374;
    case 629u: goto L_08812380;
    case 630u: goto L_0881238C;
    case 631u: goto L_08812394;
    case 632u: goto L_08812398;
    case 633u: goto L_088123A0;
    case 634u: goto L_088123A8;
    case 635u: goto L_088123B0;
    case 636u: goto L_088123BC;
    case 637u: goto L_088123C8;
    case 638u: goto L_088123D4;
    case 639u: goto L_088123DC;
    case 640u: goto L_088123E0;
    case 641u: goto L_088123E8;
    case 642u: goto L_088123F0;
    case 643u: goto L_088123F8;
    case 644u: goto L_08812404;
    case 645u: goto L_08812410;
    case 646u: goto L_0881241C;
    case 647u: goto L_08812424;
    case 648u: goto L_08812428;
    case 649u: goto L_08812430;
    case 650u: goto L_08812438;
    case 651u: goto L_08812440;
    case 652u: goto L_0881244C;
    case 653u: goto L_08812458;
    case 654u: goto L_08812464;
    case 655u: goto L_0881246C;
    case 656u: goto L_08812470;
    case 657u: goto L_08812478;
    case 658u: goto L_08812480;
    case 659u: goto L_08812488;
    case 660u: goto L_08812494;
    case 661u: goto L_088124A0;
    case 662u: goto L_088124AC;
    case 663u: goto L_088124B4;
    case 664u: goto L_088124B8;
    case 665u: goto L_088124C0;
    case 666u: goto L_088124C8;
    case 667u: goto L_088124D0;
    case 668u: goto L_088124DC;
    case 669u: goto L_088124E8;
    case 670u: goto L_088124F4;
    case 671u: goto L_088124FC;
    case 672u: goto L_08812500;
    case 673u: goto L_08812508;
    case 674u: goto L_08812510;
    case 675u: goto L_08812518;
    case 676u: goto L_08812524;
    case 677u: goto L_08812530;
    case 678u: goto L_0881253C;
    case 679u: goto L_08812544;
    case 680u: goto L_08812548;
    case 681u: goto L_08812550;
    case 682u: goto L_08812558;
    case 683u: goto L_08812560;
    case 684u: goto L_0881256C;
    case 685u: goto L_08812578;
    case 686u: goto L_08812584;
    case 687u: goto L_0881258C;
    case 688u: goto L_08812590;
    case 689u: goto L_08812598;
    case 690u: goto L_088125A0;
    case 691u: goto L_088125A8;
    case 692u: goto L_088125B4;
    case 693u: goto L_088125C0;
    case 694u: goto L_088125CC;
    case 695u: goto L_088125D4;
    case 696u: goto L_088125D8;
    case 697u: goto L_088125E0;
    case 698u: goto L_088125E8;
    case 699u: goto L_088125F0;
    case 700u: goto L_088125FC;
    case 701u: goto L_08812608;
    case 702u: goto L_08812614;
    case 703u: goto L_0881261C;
    case 704u: goto L_08812620;
    case 705u: goto L_08812628;
    case 706u: goto L_08812630;
    case 707u: goto L_08812638;
    case 708u: goto L_08812644;
    case 709u: goto L_08812650;
    case 710u: goto L_0881265C;
    case 711u: goto L_08812664;
    case 712u: goto L_08812668;
    case 713u: goto L_08812670;
    case 714u: goto L_08812678;
    case 715u: goto L_08812680;
    case 716u: goto L_0881268C;
    case 717u: goto L_08812698;
    case 718u: goto L_088126A4;
    case 719u: goto L_088126AC;
    case 720u: goto L_088126B0;
    case 721u: goto L_088126B8;
    case 722u: goto L_088126C0;
    case 723u: goto L_088126D0;
    case 724u: goto L_088126DC;
    case 725u: goto L_088126E8;
    case 726u: goto L_088126F4;
    case 727u: goto L_08812700;
    case 728u: goto L_08812708;
    case 729u: goto L_0881270C;
    case 730u: goto L_08812714;
    case 731u: goto L_0881271C;
    case 732u: goto L_08812728;
    case 733u: goto L_08812730;
    case 734u: goto L_08812740;
    case 735u: goto L_0881274C;
    case 736u: goto L_08812758;
    case 737u: goto L_08812764;
    case 738u: goto L_08812770;
    case 739u: goto L_08812778;
    case 740u: goto L_0881277C;
    case 741u: goto L_08812784;
    case 742u: goto L_0881278C;
    case 743u: goto L_0881279C;
    case 744u: goto L_088127AC;
    case 745u: goto L_088127B8;
    case 746u: goto L_088127C4;
    case 747u: goto L_088127D0;
    case 748u: goto L_088127DC;
    case 749u: goto L_088127E4;
    case 750u: goto L_088127E8;
    case 751u: goto L_088127F0;
    case 752u: goto L_088127F8;
    case 753u: goto L_08812808;
    case 754u: goto L_08812814;
    case 755u: goto L_08812820;
    case 756u: goto L_0881282C;
    case 757u: goto L_08812834;
    case 758u: goto L_08812838;
    case 759u: goto L_08812840;
    case 760u: goto L_08812848;
    case 761u: goto L_08812854;
    case 762u: goto L_0881285C;
    case 763u: goto L_08812868;
    case 764u: goto L_0881286C;
    case 765u: goto L_088128A8;
    case 766u: goto L_088128F8;
    case 767u: goto L_08812900;
    case 768u: goto L_088129D0;
    case 769u: goto L_088129EC;
    case 770u: goto L_088129FC;
    case 771u: goto L_08812A10;
    case 772u: goto L_08812A18;
    case 773u: goto L_08812A20;
    case 774u: goto L_08812A28;
    case 775u: goto L_08812A30;
    case 776u: goto L_08812A38;
    case 777u: goto L_08812A40;
    case 778u: goto L_08812A48;
    case 779u: goto L_08812A58;
    case 780u: goto L_08812A68;
    case 781u: goto L_08812A6C;
    case 782u: goto L_08812AD0;
    case 783u: goto L_08812AD8;
    case 784u: goto L_08812AE0;
    case 785u: goto L_08812AEC;
    case 786u: goto L_08812AF8;
    case 787u: goto L_08812B08;
    case 788u: goto L_08812B18;
    case 789u: goto L_08812B7C;
    case 790u: goto L_08812B94;
    case 791u: goto L_08812BA8;
    case 792u: goto L_08812BC4;
    case 793u: goto L_08812C08;
    case 794u: goto L_08812C10;
    case 795u: goto L_08812C20;
    case 796u: goto L_08812C2C;
    case 797u: goto L_08812C34;
    case 798u: goto L_08812C3C;
    case 799u: goto L_08812C48;
    case 800u: goto L_08812C54;
    case 801u: goto L_08812C5C;
    case 802u: goto L_08812C64;
    case 803u: goto L_08812C68;
    case 804u: goto L_08812C78;
    case 805u: goto L_08812C88;
    case 806u: goto L_08812C94;
    case 807u: goto L_08812CA0;
    case 808u: goto L_08812CA4;
    case 809u: goto L_08812CCC;
    case 810u: goto L_08812CD4;
    case 811u: goto L_08812CDC;
    case 812u: goto L_08812CEC;
    case 813u: goto L_08812D04;
    case 814u: goto L_08812D18;
    case 815u: goto L_08812D20;
    case 816u: goto L_08812D30;
    case 817u: goto L_08812D40;
    case 818u: goto L_08812D50;
    case 819u: goto L_08812D60;
    case 820u: goto L_08812D68;
    case 821u: goto L_08812D7C;
    case 822u: goto L_08812D88;
    case 823u: goto L_08812D98;
    case 824u: goto L_08812DA8;
    case 825u: goto L_08812DB0;
    case 826u: goto L_08812DB4;
    case 827u: goto L_08812DCC;
    case 828u: goto L_08812DFC;
    case 829u: goto L_08812E08;
    case 830u: goto L_08812E10;
    case 831u: goto L_08812E18;
    case 832u: goto L_08812E20;
    case 833u: goto L_08812E60;
    case 834u: goto L_08812E80;
    case 835u: goto L_08812EC4;
    case 836u: goto L_08812ECC;
    case 837u: goto L_08812ED8;
    case 838u: goto L_08812EEC;
    case 839u: goto L_08812F18;
    case 840u: goto L_08812F20;
    case 841u: goto L_08812F2C;
    case 842u: goto L_08812F38;
    case 843u: goto L_08812F44;
    case 844u: goto L_08812F50;
    case 845u: goto L_08812F5C;
    case 846u: goto L_08812F6C;
    case 847u: goto L_08812F84;
    case 848u: goto L_08812FD4;
    case 849u: goto L_08812FE0;
    case 850u: goto L_08812FEC;
    case 851u: goto L_08812FF8;
    case 852u: goto L_08813008;
    case 853u: goto L_08813018;
    case 854u: goto L_08813024;
    case 855u: goto L_0881302C;
    case 856u: goto L_08813078;
    case 857u: goto L_08813080;
    case 858u: goto L_08813090;
    case 859u: goto L_088130A8;
    case 860u: goto L_088130B8;
    case 861u: goto L_088130D0;
    case 862u: goto L_088130E4;
    case 863u: goto L_08813100;
    case 864u: goto L_0881313C;
    case 865u: goto L_08813144;
    case 866u: goto L_08813158;
    case 867u: goto L_0881316C;
    case 868u: goto L_08813174;
    case 869u: goto L_0881318C;
    case 870u: goto L_08813194;
    case 871u: goto L_088131A4;
    case 872u: goto L_088131B0;
    case 873u: goto L_088131BC;
    case 874u: goto L_088131CC;
    case 875u: goto L_088131D8;
    case 876u: goto L_088131F0;
    case 877u: goto L_088131F8;
    case 878u: goto L_08813204;
    case 879u: goto L_0881320C;
    case 880u: goto L_08813210;
    case 881u: goto L_08813220;
    case 882u: goto L_0881322C;
    case 883u: goto L_08813244;
    case 884u: goto L_0881324C;
    case 885u: goto L_08813254;
    case 886u: goto L_0881325C;
    case 887u: goto L_08813264;
    case 888u: goto L_08813268;
    case 889u: goto L_08813278;
    case 890u: goto L_08813294;
    case 891u: goto L_088132A0;
    case 892u: goto L_088132B0;
    case 893u: goto L_088132C0;
    case 894u: goto L_088132D8;
    case 895u: goto L_08813308;
    case 896u: goto L_08813318;
    case 897u: goto L_08813328;
    case 898u: goto L_08813334;
    case 899u: goto L_08813344;
    case 900u: goto L_0881334C;
    case 901u: goto L_08813358;
    case 902u: goto L_0881335C;
    case 903u: goto L_08813368;
    case 904u: goto L_08813370;
    case 905u: goto L_0881339C;
    case 906u: goto L_088133A4;
    case 907u: goto L_088133AC;
    case 908u: goto L_088133C0;
    case 909u: goto L_088133D4;
    case 910u: goto L_088133E8;
    case 911u: goto L_088133F8;
    case 912u: goto L_08813404;
    case 913u: goto L_0881340C;
    case 914u: goto L_0881341C;
    case 915u: goto L_08813434;
    case 916u: goto L_08813444;
    case 917u: goto L_0881344C;
    case 918u: goto L_08813458;
    case 919u: goto L_08813468;
    case 920u: goto L_08813478;
    case 921u: goto L_0881348C;
    case 922u: goto L_08813494;
    case 923u: goto L_088134DC;
    case 924u: goto L_088134E8;
    case 925u: goto L_08813504;
    case 926u: goto L_08813514;
    case 927u: goto L_08813520;
    case 928u: goto L_08813528;
    case 929u: goto L_08813540;
    case 930u: goto L_08813550;
    case 931u: goto L_088135B8;
    case 932u: goto L_088135C8;
    case 933u: goto L_0881362C;
    case 934u: goto L_0881364C;
    case 935u: goto L_08813658;
    case 936u: goto L_08813664;
    case 937u: goto L_08813670;
    case 938u: goto L_08813674;
    case 939u: goto L_08813678;
    case 940u: goto L_08813688;
    case 941u: goto L_08813690;
    case 942u: goto L_088136BC;
    case 943u: goto L_088136C4;
    case 944u: goto L_08813710;
    case 945u: goto L_08813740;
    case 946u: goto L_0881374C;
    case 947u: goto L_0881375C;
    case 948u: goto L_0881376C;
    case 949u: goto L_08813794;
    case 950u: goto L_088137AC;
    case 951u: goto L_088137C4;
    case 952u: goto L_088137CC;
    case 953u: goto L_088137D4;
    case 954u: goto L_0881383C;
    case 955u: goto L_08813858;
    case 956u: goto L_08813870;
    case 957u: goto L_0881387C;
    case 958u: goto L_08813888;
    case 959u: goto L_08813890;
    case 960u: goto L_088138A8;
    case 961u: goto L_088138B0;
    case 962u: goto L_088138C0;
    case 963u: goto L_088138CC;
    case 964u: goto L_088138D8;
    case 965u: goto L_088138E8;
    case 966u: goto L_088138F8;
    case 967u: goto L_08813908;
    case 968u: goto L_08813914;
    case 969u: goto L_08813924;
    case 970u: goto L_08813934;
    case 971u: goto L_08813944;
    case 972u: goto L_08813950;
    case 973u: goto L_08813960;
    case 974u: goto L_08813970;
    case 975u: goto L_08813980;
    case 976u: goto L_0881398C;
    case 977u: goto L_0881399C;
    case 978u: goto L_088139AC;
    case 979u: goto L_088139BC;
    case 980u: goto L_088139CC;
    case 981u: goto L_088139D4;
    case 982u: goto L_088139E4;
    case 983u: goto L_088139E8;
    case 984u: goto L_08813A0C;
    case 985u: goto L_08813A2C;
    case 986u: goto L_08813A6C;
    case 987u: goto L_08813A74;
    case 988u: goto L_08813A98;
    case 989u: goto L_08813B5C;
    case 990u: goto L_08813C24;
    case 991u: goto L_08813C2C;
    case 992u: goto L_08813C30;
    case 993u: goto L_08813C3C;
    case 994u: goto L_08813CB0;
    case 995u: goto L_08813CB8;
    case 996u: goto L_08813CC0;
    case 997u: goto L_08813CC8;
    case 998u: goto L_08813CD4;
    case 999u: goto L_08813CDC;
    case 1000u: goto L_08813CE4;
    case 1001u: goto L_08813CE8;
    case 1002u: goto L_08813CF0;
    case 1003u: goto L_08813D18;
    case 1004u: goto L_08813D28;
    case 1005u: goto L_08813D30;
    case 1006u: goto L_08813D60;
    case 1007u: goto L_08813D94;
    case 1008u: goto L_08813DC4;
    case 1009u: goto L_08813DD0;
    case 1010u: goto L_08813E04;
    case 1011u: goto L_08813E34;
    case 1012u: goto L_08813E68;
    case 1013u: goto L_08813E94;
    case 1014u: goto L_08813EA8;
    case 1015u: goto L_08813EC4;
    case 1016u: goto L_08813ED4;
    case 1017u: goto L_08813EF8;
    case 1018u: goto L_08813F14;
    case 1019u: goto L_08813F24;
    case 1020u: goto L_08813F48;
    case 1021u: goto L_08813F70;
    case 1022u: goto L_08813F8C;
    case 1023u: goto L_08813F9C;
    case 1024u: goto L_08813FB4;
    case 1025u: goto L_08813FCC;
    case 1026u: goto L_08813FDC;
    case 1027u: goto L_08813FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08810000:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0881000Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6728));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881000Cu) goto L_0881000C;
    return;
L_0881000C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810018u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6732));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810018u) goto L_08810018;
    return;
L_08810018:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810024u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6736));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810024u) goto L_08810024;
    return;
L_08810024:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810030u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6740));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810030u) goto L_08810030;
    return;
L_08810030:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0881003Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6744));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881003Cu) goto L_0881003C;
    return;
L_0881003C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810048u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6748));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810048u) goto L_08810048;
    return;
L_08810048:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810054u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6752));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810054u) goto L_08810054;
    return;
L_08810054:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810060u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6756));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810060u) goto L_08810060;
    return;
L_08810060:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0881006Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6760));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881006Cu) goto L_0881006C;
    return;
L_0881006C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810078u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6764));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810078u) goto L_08810078;
    return;
L_08810078:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810084u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6768));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810084u) goto L_08810084;
    return;
L_08810084:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810090u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6772));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810090u) goto L_08810090;
    return;
L_08810090:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0881009Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6776));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881009Cu) goto L_0881009C;
    return;
L_0881009C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088100A8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6780));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088100A8u) goto L_088100A8;
    return;
L_088100A8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088100B4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6784));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088100B4u) goto L_088100B4;
    return;
L_088100B4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088100C0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6788));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088100C0u) goto L_088100C0;
    return;
L_088100C0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088100CCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6792));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088100CCu) goto L_088100CC;
    return;
L_088100CC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088100D8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6796));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088100D8u) goto L_088100D8;
    return;
L_088100D8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088100E4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6800));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088100E4u) goto L_088100E4;
    return;
L_088100E4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088100F0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6804));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088100F0u) goto L_088100F0;
    return;
L_088100F0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x088100FCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6808));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088100FCu) goto L_088100FC;
    return;
L_088100FC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810108u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6812));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810108u) goto L_08810108;
    return;
L_08810108:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810114u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6816));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810114u) goto L_08810114;
    return;
L_08810114:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810120u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6820));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810120u) goto L_08810120;
    return;
L_08810120:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0881012Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6824));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881012Cu) goto L_0881012C;
    return;
L_0881012C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810138u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6828));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810138u) goto L_08810138;
    return;
L_08810138:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810144u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6832));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810144u) goto L_08810144;
    return;
L_08810144:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08810150u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(6836));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 30u, 0x08AF42C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810150u) goto L_08810150;
    return;
L_08810150:
    hot_regs.g4 = (0u | 12u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(6851), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(6852), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(6856), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(6860), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08810178u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(6896), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810178u) goto L_08810178;
    return;
L_08810178:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0881019C;
      }
      goto L_08810188;
    }
L_08810188:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    hot_regs.g31 = (0x08810194u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810194u) goto L_08810194;
    return;
L_08810194:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    goto L_0881019C;
L_0881019C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(6896), g4);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(6900), 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088101B8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088101CCu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088101CCu) goto L_088101CC;
    return;
L_088101CC:
    hot_regs.g31 = (0x088101D4u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31784));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088101D4u) goto L_088101D4;
    return;
L_088101D4:
    hot_regs.g31 = (0x088101DCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088101DCu) goto L_088101DC;
    return;
L_088101DC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6624));
    hot_regs.g31 = (0x088101E8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31780));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088101E8u) goto L_088101E8;
    return;
L_088101E8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6628));
    hot_regs.g31 = (0x088101F4u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31764));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088101F4u) goto L_088101F4;
    return;
L_088101F4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6632));
    hot_regs.g31 = (0x08810200u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31756));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810200u) goto L_08810200;
    return;
L_08810200:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6636));
    hot_regs.g31 = (0x0881020Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31744));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881020Cu) goto L_0881020C;
    return;
L_0881020C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6640));
    hot_regs.g31 = (0x08810218u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31740));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810218u) goto L_08810218;
    return;
L_08810218:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6644));
    hot_regs.g31 = (0x08810224u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31728));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810224u) goto L_08810224;
    return;
L_08810224:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6648));
    hot_regs.g31 = (0x08810230u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31716));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810230u) goto L_08810230;
    return;
L_08810230:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6652));
    hot_regs.g31 = (0x0881023Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31704));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881023Cu) goto L_0881023C;
    return;
L_0881023C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6656));
    hot_regs.g31 = (0x08810248u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31696));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810248u) goto L_08810248;
    return;
L_08810248:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6660));
    hot_regs.g31 = (0x08810254u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31688));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810254u) goto L_08810254;
    return;
L_08810254:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6664));
    hot_regs.g31 = (0x08810260u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31676));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810260u) goto L_08810260;
    return;
L_08810260:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6668));
    hot_regs.g31 = (0x0881026Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31664));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881026Cu) goto L_0881026C;
    return;
L_0881026C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6672));
    hot_regs.g31 = (0x08810278u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31648));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810278u) goto L_08810278;
    return;
L_08810278:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6676));
    hot_regs.g31 = (0x08810284u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31640));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810284u) goto L_08810284;
    return;
L_08810284:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6680));
    hot_regs.g31 = (0x08810290u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31624));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810290u) goto L_08810290;
    return;
L_08810290:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6684));
    hot_regs.g31 = (0x0881029Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31612));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881029Cu) goto L_0881029C;
    return;
L_0881029C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6688));
    hot_regs.g31 = (0x088102A8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31596));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088102A8u) goto L_088102A8;
    return;
L_088102A8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6692));
    hot_regs.g31 = (0x088102B4u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31588));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088102B4u) goto L_088102B4;
    return;
L_088102B4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6696));
    hot_regs.g31 = (0x088102C0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31580));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088102C0u) goto L_088102C0;
    return;
L_088102C0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6700));
    hot_regs.g31 = (0x088102CCu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31564));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088102CCu) goto L_088102CC;
    return;
L_088102CC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6704));
    hot_regs.g31 = (0x088102D8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31548));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088102D8u) goto L_088102D8;
    return;
L_088102D8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6708));
    hot_regs.g31 = (0x088102E4u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31536));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088102E4u) goto L_088102E4;
    return;
L_088102E4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6712));
    hot_regs.g31 = (0x088102F0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31524));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088102F0u) goto L_088102F0;
    return;
L_088102F0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6716));
    hot_regs.g31 = (0x088102FCu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31512));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088102FCu) goto L_088102FC;
    return;
L_088102FC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6720));
    hot_regs.g31 = (0x08810308u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31500));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810308u) goto L_08810308;
    return;
L_08810308:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6724));
    hot_regs.g31 = (0x08810314u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31488));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810314u) goto L_08810314;
    return;
L_08810314:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6728));
    hot_regs.g31 = (0x08810320u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31476));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810320u) goto L_08810320;
    return;
L_08810320:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6732));
    hot_regs.g31 = (0x0881032Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31464));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881032Cu) goto L_0881032C;
    return;
L_0881032C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6736));
    hot_regs.g31 = (0x08810338u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31452));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810338u) goto L_08810338;
    return;
L_08810338:
    hot_regs.g5 = (2231u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6740));
    hot_regs.g31 = (0x08810348u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(17592));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810348u) goto L_08810348;
    return;
L_08810348:
    hot_regs.g5 = (2231u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6744));
    hot_regs.g31 = (0x08810358u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(17612));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810358u) goto L_08810358;
    return;
L_08810358:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6748));
    hot_regs.g31 = (0x08810364u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31436));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810364u) goto L_08810364;
    return;
L_08810364:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6752));
    hot_regs.g31 = (0x08810370u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31420));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810370u) goto L_08810370;
    return;
L_08810370:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6756));
    hot_regs.g31 = (0x0881037Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31404));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881037Cu) goto L_0881037C;
    return;
L_0881037C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6760));
    hot_regs.g31 = (0x08810388u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31388));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810388u) goto L_08810388;
    return;
L_08810388:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6764));
    hot_regs.g31 = (0x08810394u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31376));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810394u) goto L_08810394;
    return;
L_08810394:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6768));
    hot_regs.g31 = (0x088103A0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31364));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088103A0u) goto L_088103A0;
    return;
L_088103A0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6772));
    hot_regs.g31 = (0x088103ACu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31352));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088103ACu) goto L_088103AC;
    return;
L_088103AC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6776));
    hot_regs.g31 = (0x088103B8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31336));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088103B8u) goto L_088103B8;
    return;
L_088103B8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6780));
    hot_regs.g31 = (0x088103C4u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31324));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088103C4u) goto L_088103C4;
    return;
L_088103C4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6784));
    hot_regs.g31 = (0x088103D0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31312));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088103D0u) goto L_088103D0;
    return;
L_088103D0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6788));
    hot_regs.g31 = (0x088103DCu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31300));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088103DCu) goto L_088103DC;
    return;
L_088103DC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6792));
    hot_regs.g31 = (0x088103E8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31288));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088103E8u) goto L_088103E8;
    return;
L_088103E8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6796));
    hot_regs.g31 = (0x088103F4u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31276));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088103F4u) goto L_088103F4;
    return;
L_088103F4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6800));
    hot_regs.g31 = (0x08810400u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31260));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810400u) goto L_08810400;
    return;
L_08810400:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6804));
    hot_regs.g31 = (0x0881040Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31244));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881040Cu) goto L_0881040C;
    return;
L_0881040C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6808));
    hot_regs.g31 = (0x08810418u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31232));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810418u) goto L_08810418;
    return;
L_08810418:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6812));
    hot_regs.g31 = (0x08810424u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31216));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810424u) goto L_08810424;
    return;
L_08810424:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6816));
    hot_regs.g31 = (0x08810430u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31204));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810430u) goto L_08810430;
    return;
L_08810430:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6820));
    hot_regs.g31 = (0x0881043Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31188));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881043Cu) goto L_0881043C;
    return;
L_0881043C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6824));
    hot_regs.g31 = (0x08810448u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31172));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810448u) goto L_08810448;
    return;
L_08810448:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6828));
    hot_regs.g31 = (0x08810454u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31160));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810454u) goto L_08810454;
    return;
L_08810454:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6832));
    hot_regs.g31 = (0x08810460u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31144));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810460u) goto L_08810460;
    return;
L_08810460:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(6836));
    hot_regs.g31 = (0x0881046Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31132));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 53u, 0x08AF44E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881046Cu) goto L_0881046C;
    return;
L_0881046C:
    hot_regs.g31 = (0x08810474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810474u) goto L_08810474;
    return;
L_08810474:
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
L_08810484:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), hot_regs.g31);
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088104DCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088104DCu) goto L_088104DC;
    return;
L_088104DC:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x088104E8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088104E8u) goto L_088104E8;
    return;
L_088104E8:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x088104F4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088104F4u) goto L_088104F4;
    return;
L_088104F4:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08810500u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810500u) goto L_08810500;
    return;
L_08810500:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x0881050Cu);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881050Cu) goto L_0881050C;
    return;
L_0881050C:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    f26 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    g4 = (2237u << 16u);
    g5 = (17096u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    f12 = std::bit_cast<float>(g5);
    g6 = (2236u << 16u);
    f26 = f26 + f12;
    g5 = (g6 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), g4);
    g6 = (g5 + static_cast<std::uint32_t>(16));
    g4 = (g5 + static_cast<std::uint32_t>(48));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    g5 = (17302u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), g6);
    hot_regs.f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), g4);
    f12 = hot_regs.f13 - f26;
    g4 = (20224u << 16u);
    g22 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.fpr[30] = std::bit_cast<float>(g4);
    g4 = (16640u << 16u);
    ctx.gpr[23] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(f12));
    g22 = (g22 + static_cast<std::uint32_t>(624));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[22] = g22;
    hot_regs.f12 = f12;
    ctx.fpr[26] = f26;
    goto L_08810580;
}
}
L_08810580:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088109DC;
      }
      goto L_08810594;
    }
}
L_08810594:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088109DC;
      }
      goto L_088105A0;
    }
L_088105A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32))))));
    g4 = (g4 & 224u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088109DC;
      }
      goto L_088105B0;
    }
}
L_088105B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08810618;
      }
      goto L_088105C0;
    }
L_088105C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x088105CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088105CCu) goto L_088105CC;
    return;
L_088105CC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08810610;
      }
      goto L_088105D8;
    }
L_088105D8:
    hot_regs.g31 = (0x088105E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088105E0u) goto L_088105E0;
    return;
L_088105E0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810600;
      }
      goto L_088105E8;
    }
L_088105E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881060C;
      }
      goto L_08810600;
    }
}
L_08810600:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    goto L_0881060C;
L_0881060C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08810610;
L_08810610:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881070C;
      }
      goto L_08810618;
    }
L_08810618:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08810658;
      }
      goto L_08810628;
    }
L_08810628:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08810634u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810634u) goto L_08810634;
    return;
L_08810634:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810650;
      }
      goto L_08810640;
    }
L_08810640:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g4 = g4;
    goto L_08810650;
}
L_08810650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881070C;
      }
      goto L_08810658;
    }
L_08810658:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0881070C;
      }
      goto L_08810668;
    }
L_08810668:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    hot_regs.g31 = (0x0881067Cu);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881067Cu) goto L_0881067C;
    return;
L_0881067C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881070C;
      }
      goto L_08810688;
    }
L_08810688:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x088106A0u);
    ctx.gpr[30] = (ctx.gpr[16] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 639u, 0x08823710u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088106A0u) goto L_088106A0;
    return;
L_088106A0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088106B0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088106B0u) goto L_088106B0;
    return;
L_088106B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_088106D0;
      }
      goto L_088106B8;
    }
L_088106B8:
    hot_regs.g31 = (0x088106C0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 19u, 0x08824204u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088106C0u) goto L_088106C0;
    return;
L_088106C0:
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810708;
      }
      goto L_088106D0;
    }
L_088106D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_088106FC;
    }
    goto L_088106DC;
}
L_088106DC:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(116));
    hot_regs.g31 = (0x088106ECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088106ECu) goto L_088106EC;
    return;
L_088106EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_088106FC;
}
L_088106FC:
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08810708;
}
L_08810708:
    ctx.gpr[17] = (0u | 1u);
    goto L_0881070C;
L_0881070C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088109DC;
      }
      goto L_08810714;
    }
L_08810714:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
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
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088109DC;
      }
      goto L_08810764;
    }
L_08810764:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7716)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08810778u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810778u) goto L_08810778;
    return;
L_08810778:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08810798u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810798u) goto L_08810798;
    return;
L_08810798:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088107ECu);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088107ECu) goto L_088107EC;
    return;
L_088107EC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088109DC;
      }
      goto L_08810810;
    }
L_08810810:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088108A8;
      }
      goto L_088108A4;
    }
L_088108A4:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22) ^ 0x80000000u);
    goto L_088108A8;
L_088108A8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088108CCu);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088108CCu) goto L_088108CC;
    return;
L_088108CC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16704u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[16] = (0u | 255u);
    g4 = (17302u << 16u);
    f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088108FC;
      }
      goto L_088108F4;
    }
}
}
L_088108F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 128u);
      if (branch_taken) {
          goto L_08810968;
      }
      goto L_088108FC;
    }
L_088108FC:
    ctx.set_fpu_condition((hot_regs.f20 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08810968;
      }
      goto L_0881090C;
    }
L_0881090C:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    f12 = f20 - ctx.fpr[26];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(124)));
    f12 = f12 / hot_regs.f13;
    hot_regs.g4 = (16256u << 16u);
    hot_regs.g5 = (17150u << 16u);
    hot_regs.g6 = (17152u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    f20 = std::bit_cast<float>(hot_regs.g6);
    f12 = hot_regs.f14 - f12;
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f20 = f12 + f20;
    ctx.set_fpu_condition((f20 < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f20 - ctx.fpr[30];
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_08810958;
    }
    goto L_0881094C;
}
L_0881094C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08810968;
      }
      goto L_08810958;
    }
L_08810958:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    g16 = (hot_regs.g4 + g16);
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
    goto L_08810968;
}
}
L_08810968:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(32))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g4 & 2u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g31 = (0x08810980u);
    hot_regs.g6 = (hot_regs.g6 >> 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 654u, 0x0880F3B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810980u) goto L_08810980;
    return;
L_08810980:
    hot_regs.g4 = (hot_regs.g2 >> 24u);
    hot_regs.g5 = (hot_regs.g2 >> 16u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g2 >> 8u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(115), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = hot_regs.f15 / hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(113)));
    hot_regs.g7 = (ctx.gpr[16] << 16u);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(114)));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 16u));
    ctx.gpr[8] = (ctx.gpr[16] & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x088109DCu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 81u, 0x08AA9084u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088109DCu) goto L_088109DC;
    return;
L_088109DC:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g23) < 75 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08810580;
      }
      goto L_088109EC;
    }
}
L_088109EC:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x088109F8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088109F8u) goto L_088109F8;
    return;
L_088109F8:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08810A04u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810A04u) goto L_08810A04;
    return;
L_08810A04:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08810A10u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810A10u) goto L_08810A10;
    return;
L_08810A10:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08810A58:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), g17);
    g17 = (2236u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(32304));
    hot_regs.g6 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(2052)));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(348), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g5;
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08810B74;
      }
      goto L_08810AA8;
    }
}
L_08810AA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08810ABC;
      }
      goto L_08810AB4;
    }
L_08810AB4:
    hot_regs.g31 = (0x08810ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810ABCu) goto L_08810ABC;
    return;
L_08810ABC:
    hot_regs.g31 = (0x08810AC4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 580u, 0x089BABACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810AC4u) goto L_08810AC4;
    return;
L_08810AC4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810B74;
      }
      goto L_08810ACC;
    }
L_08810ACC:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08810AD8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810AD8u) goto L_08810AD8;
    return;
L_08810AD8:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08810AE4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810AE4u) goto L_08810AE4;
    return;
L_08810AE4:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08810AF0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810AF0u) goto L_08810AF0;
    return;
L_08810AF0:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08810AFCu);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810AFCu) goto L_08810AFC;
    return;
L_08810AFC:
    ctx.gpr[20] = (0u | 9u);
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08810B0Cu);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810B0Cu) goto L_08810B0C;
    return;
L_08810B0C:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08810B18u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810B18u) goto L_08810B18;
    return;
L_08810B18:
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08810B38u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810B38u) goto L_08810B38;
    return;
L_08810B38:
    hot_regs.g31 = (0x08810B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 68u, 0x08960590u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810B40u) goto L_08810B40;
    return;
L_08810B40:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g5 = (16309u << 16u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    g5 = (g5 | 1267u);
    g21 = (2237u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    ctx.gpr[18] = (0u | 29u);
    ctx.gpr[22] = (0u | 7u);
    g21 = (g21 + static_cast<std::uint32_t>(-28736));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[30] = (0u | 5u);
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08810B7C;
      }
      goto L_08810B6C;
    }
}
L_08810B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810D7C;
      }
      goto L_08810B74;
    }
L_08810B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811578;
      }
      goto L_08810B7C;
    }
L_08810B7C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6848)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(72));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g31 = (0x08810B94u);
    hot_regs.g7 = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810B94u) goto L_08810B94;
    return;
L_08810B94:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08810C24;
      }
      goto L_08810BA0;
    }
L_08810BA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08810BF0;
      }
      goto L_08810BB8;
    }
}
L_08810BB8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (0x08810BCCu);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 156u, 0x08ADC7F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810BCCu) goto L_08810BCC;
    return;
L_08810BCC:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08810C24;
      }
      goto L_08810BF0;
    }
}
L_08810BF0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (0x08810C04u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810C04u) goto L_08810C04;
    return;
L_08810C04:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08810C24;
}
L_08810C24:
    hot_regs.g31 = (0x08810C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810C2Cu) goto L_08810C2C;
    return;
L_08810C2C:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(3336)));
    if (hot_regs.g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6840)));
        goto L_08810CD8;
    }
    goto L_08810C38;
L_08810C38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (16457u << 16u);
    g4 = (g4 + g17);
    g5 = (g5 | 4059u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    hot_regs.f12 = std::bit_cast<float>(g5);
    g5 = (0u | 1u);
    { const bool branch_taken = g4 != g5;
    g17 = (ctx.gpr[19] + static_cast<std::uint32_t>(6624));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08810CA4;
      }
      goto L_08810C74;
    }
}
L_08810C74:
    hot_regs.f14 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6848)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(73)));
    hot_regs.g31 = (0x08810C9Cu);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(74)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 705u, 0x0880F60Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810C9Cu) goto L_08810C9C;
    return;
L_08810C9C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6840)));
      if (branch_taken) {
          goto L_08810CD8;
      }
      goto L_08810CA4;
    }
L_08810CA4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5972)));
    hot_regs.f15 = hot_regs.f13 + hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f14 = hot_regs.f22 - hot_regs.f15;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6848)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(73)));
    hot_regs.g31 = (0x08810CD4u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(74)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 705u, 0x0880F60Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810CD4u) goto L_08810CD4;
    return;
L_08810CD4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6840)));
    goto L_08810CD8;
L_08810CD8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5956)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5960)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f20;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (16256u << 16u);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08810D3Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810D3Cu) goto L_08810D3C;
    return;
L_08810D3C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08810D48u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 620u, 0x0880F05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810D48u) goto L_08810D48;
    return;
L_08810D48:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08810D58u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810D58u) goto L_08810D58;
    return;
L_08810D58:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6848)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g7 = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.g31 = (0x08810D7Cu);
    ctx.gpr[9] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810D7Cu) goto L_08810D7C;
    return;
L_08810D7C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08810D84;
L_08810D84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08810E84;
      }
      goto L_08810D94;
    }
}
L_08810D94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08810E84;
      }
      goto L_08810DA4;
    }
}
L_08810DA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08810E84;
      }
      goto L_08810DB8;
    }
}
L_08810DB8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08810E40;
      }
      goto L_08810DC0;
    }
L_08810DC0:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08810E40;
      }
      goto L_08810DC8;
    }
L_08810DC8:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08810E40;
      }
      goto L_08810DD0;
    }
L_08810DD0:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08810E40;
      }
      goto L_08810DD8;
    }
L_08810DD8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08810DF0;
      }
      goto L_08810DE4;
    }
L_08810DE4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08810E38;
      }
      goto L_08810DF0;
    }
L_08810DF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    if (g4 != ctx.gpr[18]) {
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    hot_regs.g4 = g4;
        goto L_08810E0C;
    }
    goto L_08810DFC;
}
L_08810DFC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08810E38;
      }
      goto L_08810E08;
    }
L_08810E08:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    goto L_08810E0C;
L_08810E0C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810E2C;
      }
      goto L_08810E14;
    }
L_08810E14:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810E38;
      }
      goto L_08810E20;
    }
L_08810E20:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08810E38;
      }
      goto L_08810E2C;
    }
L_08810E2C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08810E38u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 142u, 0x088148C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810E38u) goto L_08810E38;
    return;
L_08810E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810E84;
      }
      goto L_08810E40;
    }
L_08810E40:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08810E7C;
      }
      goto L_08810E4C;
    }
L_08810E4C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810E70;
      }
      goto L_08810E58;
    }
L_08810E58:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810E7C;
      }
      goto L_08810E64;
    }
L_08810E64:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08810E7C;
      }
      goto L_08810E70;
    }
L_08810E70:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08810E7Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 247u, 0x08815114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810E7Cu) goto L_08810E7C;
    return;
L_08810E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810E84;
      }
      goto L_08810E84;
    }
L_08810E84:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 75 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08810D84;
      }
      goto L_08810E94;
    }
}
L_08810E94:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[23] = (0u | 8u);
    goto L_08810EA0;
L_08810EA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08810FC0;
      }
      goto L_08810EB0;
    }
}
L_08810EB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08810FC0;
      }
      goto L_08810EC0;
    }
}
L_08810EC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    if (g4 == ctx.gpr[30]) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g4 = g4;
        goto L_08810F08;
    }
    goto L_08810ECC;
}
L_08810ECC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g5 = (0u | 6u);
    if (g4 == hot_regs.g5) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g4 = g4;
        goto L_08810F08;
    }
    goto L_08810EDC;
}
L_08810EDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    if (g4 == ctx.gpr[23]) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g4 = g4;
        goto L_08810F08;
    }
    goto L_08810EE8;
}
L_08810EE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    if (g4 == ctx.gpr[18]) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g4 = g4;
        goto L_08810F08;
    }
    goto L_08810EF4;
}
L_08810EF4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08810FC0;
      }
      goto L_08810F04;
    }
L_08810F04:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    goto L_08810F08;
L_08810F08:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08810F1C;
      }
      goto L_08810F10;
    }
L_08810F10:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08810FC0;
      }
      goto L_08810F1C;
    }
L_08810F1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08810FC0;
      }
      goto L_08810F30;
    }
}
L_08810F30:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08810F88;
      }
      goto L_08810F38;
    }
L_08810F38:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08810F88;
      }
      goto L_08810F40;
    }
L_08810F40:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08810F88;
      }
      goto L_08810F48;
    }
L_08810F48:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08810F88;
      }
      goto L_08810F50;
    }
L_08810F50:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810F74;
      }
      goto L_08810F5C;
    }
L_08810F5C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810F80;
      }
      goto L_08810F68;
    }
L_08810F68:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08810F80;
      }
      goto L_08810F74;
    }
L_08810F74:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08810F80u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 142u, 0x088148C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810F80u) goto L_08810F80;
    return;
L_08810F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810FC0;
      }
      goto L_08810F88;
    }
L_08810F88:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810FAC;
      }
      goto L_08810F94;
    }
L_08810F94:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08810FB8;
      }
      goto L_08810FA0;
    }
L_08810FA0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08810FB8;
      }
      goto L_08810FAC;
    }
L_08810FAC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08810FB8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 247u, 0x08815114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08810FB8u) goto L_08810FB8;
    return;
L_08810FB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08810FC0;
      }
      goto L_08810FC0;
    }
L_08810FC0:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 75 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08810EA0;
      }
      goto L_08810FD0;
    }
}
L_08810FD0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[23] = (0u | 1u);
    goto L_08810FDC;
L_08810FDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881110C;
      }
      goto L_08810FEC;
    }
}
L_08810FEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881110C;
      }
      goto L_08810FFC;
    }
}
L_08810FFC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881110C;
      }
      goto L_08811010;
    }
}
L_08811010:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08811104;
      }
      goto L_08811018;
    }
L_08811018:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08811104;
      }
      goto L_08811020;
    }
L_08811020:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08811104;
      }
      goto L_08811028;
    }
L_08811028:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08811104;
      }
      goto L_08811030;
    }
L_08811030:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_0881103C;
    }
L_0881103C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_0881104C;
    }
L_0881104C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_0881105C;
    }
L_0881105C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_08811068;
    }
L_08811068:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_08811074;
    }
L_08811074:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_08811080;
    }
L_08811080:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(665)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_08811090;
    }
L_08811090:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088110B4;
      }
      goto L_0881109C;
    }
L_0881109C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_088110A8;
    }
L_088110A8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_088110B4;
    }
L_088110B4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088110F0;
      }
      goto L_088110C0;
    }
L_088110C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(668)));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(52)));
    g4 = (ctx.gpr[23] << (g4 & 31u));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_088110DC;
    }
}
L_088110DC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088110E8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 142u, 0x088148C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088110E8u) goto L_088110E8;
    return;
L_088110E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088110FC;
      }
      goto L_088110F0;
    }
L_088110F0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088110FCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 142u, 0x088148C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088110FCu) goto L_088110FC;
    return;
L_088110FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881110C;
      }
      goto L_08811104;
    }
L_08811104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881110C;
      }
      goto L_0881110C;
    }
L_0881110C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 75 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08810FDC;
      }
      goto L_0881111C;
    }
}
L_0881111C:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08811128;
L_08811128:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811310;
      }
      goto L_08811138;
    }
}
L_08811138:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811310;
      }
      goto L_08811148;
    }
}
L_08811148:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(628)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811310;
      }
      goto L_0881115C;
    }
}
L_0881115C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08811184;
      }
      goto L_08811164;
    }
L_08811164:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08811184;
      }
      goto L_0881116C;
    }
L_0881116C:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08811184;
      }
      goto L_08811174;
    }
L_08811174:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08811184;
      }
      goto L_0881117C;
    }
L_0881117C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811310;
      }
      goto L_08811184;
    }
L_08811184:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08811308;
      }
      goto L_08811190;
    }
L_08811190:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(665)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08811308;
      }
      goto L_088111A0;
    }
L_088111A0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(665)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08811308;
      }
      goto L_088111B0;
    }
L_088111B0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(665)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08811308;
      }
      goto L_088111BC;
    }
L_088111BC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(665)));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08811308;
      }
      goto L_088111CC;
    }
L_088111CC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088112D0;
      }
      goto L_088111D8;
    }
L_088111D8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088111E8u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088111E8u) goto L_088111E8;
    return;
L_088111E8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088112D0;
      }
      goto L_088111F4;
    }
L_088111F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0881121C;
      }
      goto L_08811200;
    }
L_08811200:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08811210u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811210u) goto L_08811210;
    return;
L_08811210:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_0881121C;
L_0881121C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(102)));
    g17 = (g4 & 4u);
    g17 = (0u < g17 ? 1u : 0u);
    { const bool branch_taken = g17 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08811254;
      }
      goto L_08811234;
    }
}
L_08811234:
    hot_regs.g31 = (0x0881123Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881123Cu) goto L_0881123C;
    return;
L_0881123C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08811248u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 779u, 0x08947B90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811248u) goto L_08811248;
    return;
L_08811248:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08811254;
      }
      goto L_08811250;
    }
L_08811250:
    ctx.gpr[17] = (0u | 1u);
    goto L_08811254;
L_08811254:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (0u | 1u);
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(52)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(668)));
    g5 = (hot_regs.g4 << (g5 & 31u));
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08811278;
      }
      goto L_08811274;
    }
}
L_08811274:
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    goto L_08811278;
L_08811278:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08811288u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811288u) goto L_08811288;
    return;
L_08811288:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088112D0;
      }
      goto L_08811294;
    }
L_08811294:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088112D0;
      }
      goto L_088112AC;
    }
}
L_088112AC:
    hot_regs.g31 = (0x088112B4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088112B4u) goto L_088112B4;
    return;
L_088112B4:
    hot_regs.g31 = (0x088112BCu);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088112BCu) goto L_088112BC;
    return;
L_088112BC:
    hot_regs.g31 = (0x088112C4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088112C4u) goto L_088112C4;
    return;
L_088112C4:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_088112D0;
      }
      goto L_088112CC;
    }
L_088112CC:
    ctx.gpr[17] = (0u | 0u);
    goto L_088112D0;
L_088112D0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08811308;
      }
      goto L_088112D8;
    }
L_088112D8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088112FC;
      }
      goto L_088112E4;
    }
L_088112E4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08811308;
      }
      goto L_088112F0;
    }
L_088112F0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08811308;
      }
      goto L_088112FC;
    }
L_088112FC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08811308u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 247u, 0x08815114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811308u) goto L_08811308;
    return;
L_08811308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811310;
      }
      goto L_08811310;
    }
L_08811310:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < 75 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08811128;
      }
      goto L_08811320;
    }
}
L_08811320:
    hot_regs.g31 = (0x08811328u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811328u) goto L_08811328;
    return;
L_08811328:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6840)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5956)));
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5960)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6851)));
    hot_regs.f15 = f13 - f12;
    ctx.fpr[16] = f14 - f12;
    f13 = f13 + f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    f12 = f14 + f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08811578;
      }
      goto L_08811360;
    }
}
}
L_08811360:
    ctx.gpr[17] = (ctx.gpr[19] + static_cast<std::uint32_t>(6864));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08811384u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811384u) goto L_08811384;
    return;
L_08811384:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = (16256u << 16u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_08811410;
      }
      goto L_08811394;
    }
L_08811394:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7720)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088113DC;
      }
      goto L_088113A0;
    }
L_088113A0:
    hot_regs.g4 = (50338u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (hot_regs.g4 | 53494u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = (17574u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39731u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088113D4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088113D4u) goto L_088113D4;
    return;
L_088113D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088114E8;
      }
      goto L_088113DC;
    }
L_088113DC:
    hot_regs.g31 = (0x088113E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088113E4u) goto L_088113E4;
    return;
L_088113E4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(136));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08811408u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811408u) goto L_08811408;
    return;
L_08811408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088114E8;
      }
      goto L_08811410;
    }
L_08811410:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6880)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08811484;
      }
      goto L_08811424;
    }
}
L_08811424:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6884)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08811484;
      }
      goto L_08811438;
    }
}
L_08811438:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(6888)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08811484;
      }
      goto L_0881144C;
    }
}
L_0881144C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0881147Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881147Cu) goto L_0881147C;
    return;
L_0881147C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088114E8;
      }
      goto L_08811484;
    }
L_08811484:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08811498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 58u, 0x089604E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811498u) goto L_08811498;
    return;
L_08811498:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
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
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(6880));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088114E8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088114E8u) goto L_088114E8;
    return;
L_088114E8:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088114F4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 620u, 0x0880F05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088114F4u) goto L_088114F4;
    return;
L_088114F4:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08811504u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811504u) goto L_08811504;
    return;
L_08811504:
    hot_regs.g31 = (0x0881150Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881150Cu) goto L_0881150C;
    return;
L_0881150C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08811578;
      }
      goto L_08811514;
    }
L_08811514:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6850)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08811578;
      }
      goto L_08811520;
    }
L_08811520:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x0881152Cu);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881152Cu) goto L_0881152C;
    return;
L_0881152C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08811554;
      }
      goto L_08811544;
    }
}
L_08811544:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f20)) && hot_regs.f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08811564;
      }
      goto L_08811554;
    }
L_08811554:
    hot_regs.g31 = (0x0881155Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881155Cu) goto L_0881155C;
    return;
L_0881155C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08811564;
      }
      goto L_08811564;
    }
L_08811564:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08811578u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 460u, 0x0881651Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811578u) goto L_08811578;
    return;
L_08811578:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
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
L_088115B4:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g20);
    g20 = (g7 | 0u);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g20 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(g7) < 0;
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    hot_regs.g7 = g7;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088116EC;
      }
      goto L_08811608;
    }
}
L_08811608:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (0u | 16u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08811654;
      }
      goto L_08811618;
    }
L_08811618:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08811630u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811630u) goto L_08811630;
    return;
L_08811630:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881168C;
      }
      goto L_08811654;
    }
}
L_08811654:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g31 = (0x0881166Cu);
    hot_regs.g7 = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881166Cu) goto L_0881166C;
    return;
L_0881166C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_0881168C;
}
L_0881168C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (2233u << 16u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[17]);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[18]);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-22952));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g31 = (0x088116D4u);
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088116D4u) goto L_088116D4;
    return;
L_088116D4:
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088116E4u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 72u, 0x08AF4650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088116E4u) goto L_088116E4;
    return;
L_088116E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811AC8;
      }
      goto L_088116EC;
    }
L_088116EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2)));
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3)));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(g4));
    g4 = (g6 << 24u);
    g5 = (g5 << 16u);
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(6)));
    g4 = (g4 + g5);
    g5 = (g6 << 8u);
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(7)));
    g4 = (g4 + g5);
    g19 = (g4 + g6);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 != g5;
    g19 = (g19 | 255u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08811768;
      }
      goto L_08811748;
    }
}
L_08811748:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(610)));
    { const bool branch_taken = g4 == 0u;
    g4 = (18510u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811768;
      }
      goto L_08811754;
    }
}
L_08811754:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == g4;
    g4 = (0u | 32767u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_08811760;
    }
}
L_08811760:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_08811768;
    }
L_08811768:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (g4 != hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = g4;
        goto L_088117A0;
    }
    goto L_08811778;
}
L_08811778:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = g4 == 0u;
    g4 = (65352u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881179C;
      }
      goto L_08811784;
    }
}
L_08811784:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(19967));
    { const bool branch_taken = ctx.gpr[19] == g4;
    g4 = (32512u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_08811790;
    }
}
L_08811790:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[19] == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_0881179C;
    }
}
L_0881179C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_088117A0;
L_088117A0:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    if (hot_regs.g4 != hot_regs.g5) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
        goto L_088117D4;
    }
    goto L_088117AC;
L_088117AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(609)));
    { const bool branch_taken = g4 == 0u;
    g4 = (24480u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088117D0;
      }
      goto L_088117B8;
    }
}
L_088117B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(27391));
    { const bool branch_taken = ctx.gpr[19] == g4;
    g4 = (127u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_088117C4;
    }
}
L_088117C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[19] == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_088117D0;
    }
}
L_088117D0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    goto L_088117D4;
L_088117D4:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08811800;
      }
      goto L_088117E0;
    }
L_088117E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(610)));
    { const bool branch_taken = g4 == 0u;
    g4 = (18510u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811800;
      }
      goto L_088117EC;
    }
}
L_088117EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == g4;
    g4 = (0u | 32767u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_088117F8;
    }
}
L_088117F8:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08811AC0;
      }
      goto L_08811800;
    }
L_08811800:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31120)));
    g4 = (g4 - hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(601) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811844;
      }
      goto L_08811818;
    }
}
L_08811818:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-8144)));
    hot_regs.g5 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(-31116)));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-31120), g4);
    g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g5 != g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08811838;
      }
      goto L_08811830;
    }
}
L_08811830:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-31116), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08811844;
      }
      goto L_08811838;
    }
L_08811838:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-31116)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-31116), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08811844;
}
L_08811844:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-31116)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08811860;
      }
      goto L_08811850;
    }
L_08811850:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_0881192C;
      }
      goto L_08811858;
    }
L_08811858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08811AC8;
      }
      goto L_08811860;
    }
L_08811860:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088119F4;
      }
      goto L_0881186C;
    }
}
L_0881186C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08811858;
      }
      goto L_08811874;
    }
L_08811874:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.g31 = (0x088118B0u);
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088118B0u) goto L_088118B0;
    return;
L_088118B0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x088118CCu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088118CCu) goto L_088118CC;
    return;
L_088118CC:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088118DCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088118DCu) goto L_088118DC;
    return;
L_088118DC:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(11));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(5));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g6 = (ctx.gpr[18] + static_cast<std::uint32_t>(11));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.g31 = (0x08811914u);
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811914u) goto L_08811914;
    return;
L_08811914:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08811924u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811924u) goto L_08811924;
    return;
L_08811924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811858;
      }
      goto L_0881192C;
    }
L_0881192C:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(13));
    hot_regs.f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    hot_regs.f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g6 = (0u | 0u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0881197Cu);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881197Cu) goto L_0881197C;
    return;
L_0881197C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x088119A4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088119A4u) goto L_088119A4;
    return;
L_088119A4:
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088119ECu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088119ECu) goto L_088119EC;
    return;
L_088119EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811858;
      }
      goto L_088119F4;
    }
L_088119F4:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    hot_regs.f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[18] + static_cast<std::uint32_t>(3));
    hot_regs.f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6848)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g6 = (0u | 0u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08811A48u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811A48u) goto L_08811A48;
    return;
L_08811A48:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x08811A70u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811A70u) goto L_08811A70;
    return;
L_08811A70:
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g5);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g6);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08811AB8u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 124u, 0x08AF5238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811AB8u) goto L_08811AB8;
    return;
L_08811AB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08811858;
      }
      goto L_08811AC0;
    }
L_08811AC0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0881286C;
      }
      goto L_08811AC8;
    }
L_08811AC8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g20 + static_cast<std::uint32_t>(0))))));
    g5 = (g20 + static_cast<std::uint32_t>(2));
    g5 = (g5 < static_cast<std::uint32_t>(53) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811ADC;
    }
}
L_08811ADC:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g5 = hot_regs.g5;
    g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    g5 = (g5 << 2u);
    g1 = (2231u << 16u);
    g1 = (g1 + g5);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(17664)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08811AF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811B30;
    }
    goto L_08811B04;
}
L_08811B04:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811B10u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811B10u) goto L_08811B10;
    return;
L_08811B10:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811B28;
      }
      goto L_08811B1C;
    }
L_08811B1C:
    hot_regs.g31 = (0x08811B24u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811B24u) goto L_08811B24;
    return;
L_08811B24:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811B28;
L_08811B28:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811B30;
L_08811B30:
    hot_regs.g31 = (0x08811B38u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811B38u) goto L_08811B38;
    return;
L_08811B38:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811B40;
    }
L_08811B40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811B78;
    }
    goto L_08811B4C;
}
L_08811B4C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811B58u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811B58u) goto L_08811B58;
    return;
L_08811B58:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811B70;
      }
      goto L_08811B64;
    }
L_08811B64:
    hot_regs.g31 = (0x08811B6Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811B6Cu) goto L_08811B6C;
    return;
L_08811B6C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811B70;
L_08811B70:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811B78;
L_08811B78:
    hot_regs.g31 = (0x08811B80u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31104));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811B80u) goto L_08811B80;
    return;
L_08811B80:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811B88;
    }
L_08811B88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811BC0;
    }
    goto L_08811B94;
}
L_08811B94:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811BA0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811BA0u) goto L_08811BA0;
    return;
L_08811BA0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811BB8;
      }
      goto L_08811BAC;
    }
L_08811BAC:
    hot_regs.g31 = (0x08811BB4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811BB4u) goto L_08811BB4;
    return;
L_08811BB4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811BB8;
L_08811BB8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811BC0;
L_08811BC0:
    hot_regs.g31 = (0x08811BC8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31096));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811BC8u) goto L_08811BC8;
    return;
L_08811BC8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811BD0;
    }
L_08811BD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811C08;
    }
    goto L_08811BDC;
}
L_08811BDC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811BE8u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811BE8u) goto L_08811BE8;
    return;
L_08811BE8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811C00;
      }
      goto L_08811BF4;
    }
L_08811BF4:
    hot_regs.g31 = (0x08811BFCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811BFCu) goto L_08811BFC;
    return;
L_08811BFC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811C00;
L_08811C00:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811C08;
L_08811C08:
    hot_regs.g31 = (0x08811C10u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31088));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811C10u) goto L_08811C10;
    return;
L_08811C10:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811C18;
    }
L_08811C18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811C50;
    }
    goto L_08811C24;
}
L_08811C24:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811C30u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811C30u) goto L_08811C30;
    return;
L_08811C30:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811C48;
      }
      goto L_08811C3C;
    }
L_08811C3C:
    hot_regs.g31 = (0x08811C44u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811C44u) goto L_08811C44;
    return;
L_08811C44:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811C48;
L_08811C48:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811C50;
L_08811C50:
    hot_regs.g31 = (0x08811C58u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31080));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811C58u) goto L_08811C58;
    return;
L_08811C58:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811C60;
    }
L_08811C60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811C98;
    }
    goto L_08811C6C;
}
L_08811C6C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811C78u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811C78u) goto L_08811C78;
    return;
L_08811C78:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811C90;
      }
      goto L_08811C84;
    }
L_08811C84:
    hot_regs.g31 = (0x08811C8Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811C8Cu) goto L_08811C8C;
    return;
L_08811C8C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811C90;
L_08811C90:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811C98;
L_08811C98:
    hot_regs.g31 = (0x08811CA0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31072));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811CA0u) goto L_08811CA0;
    return;
L_08811CA0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811CA8;
    }
L_08811CA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811CE0;
    }
    goto L_08811CB4;
}
L_08811CB4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811CC0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811CC0u) goto L_08811CC0;
    return;
L_08811CC0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811CD8;
      }
      goto L_08811CCC;
    }
L_08811CCC:
    hot_regs.g31 = (0x08811CD4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811CD4u) goto L_08811CD4;
    return;
L_08811CD4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811CD8;
L_08811CD8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811CE0;
L_08811CE0:
    hot_regs.g31 = (0x08811CE8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31064));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811CE8u) goto L_08811CE8;
    return;
L_08811CE8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811CF0;
    }
L_08811CF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811D28;
    }
    goto L_08811CFC;
}
L_08811CFC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811D08u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811D08u) goto L_08811D08;
    return;
L_08811D08:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811D20;
      }
      goto L_08811D14;
    }
L_08811D14:
    hot_regs.g31 = (0x08811D1Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811D1Cu) goto L_08811D1C;
    return;
L_08811D1C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811D20;
L_08811D20:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811D28;
L_08811D28:
    hot_regs.g31 = (0x08811D30u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31056));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811D30u) goto L_08811D30;
    return;
L_08811D30:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811D38;
    }
L_08811D38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811D70;
    }
    goto L_08811D44;
}
L_08811D44:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811D50u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811D50u) goto L_08811D50;
    return;
L_08811D50:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811D68;
      }
      goto L_08811D5C;
    }
L_08811D5C:
    hot_regs.g31 = (0x08811D64u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811D64u) goto L_08811D64;
    return;
L_08811D64:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811D68;
L_08811D68:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811D70;
L_08811D70:
    hot_regs.g31 = (0x08811D78u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31048));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811D78u) goto L_08811D78;
    return;
L_08811D78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811D80;
    }
L_08811D80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811DB8;
    }
    goto L_08811D8C;
}
L_08811D8C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811D98u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811D98u) goto L_08811D98;
    return;
L_08811D98:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811DB0;
      }
      goto L_08811DA4;
    }
L_08811DA4:
    hot_regs.g31 = (0x08811DACu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811DACu) goto L_08811DAC;
    return;
L_08811DAC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811DB0;
L_08811DB0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811DB8;
L_08811DB8:
    hot_regs.g31 = (0x08811DC0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31040));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811DC0u) goto L_08811DC0;
    return;
L_08811DC0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811DC8;
    }
L_08811DC8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811E00;
    }
    goto L_08811DD4;
}
L_08811DD4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811DE0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811DE0u) goto L_08811DE0;
    return;
L_08811DE0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811DF8;
      }
      goto L_08811DEC;
    }
L_08811DEC:
    hot_regs.g31 = (0x08811DF4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811DF4u) goto L_08811DF4;
    return;
L_08811DF4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811DF8;
L_08811DF8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811E00;
L_08811E00:
    hot_regs.g31 = (0x08811E08u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31032));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811E08u) goto L_08811E08;
    return;
L_08811E08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811E10;
    }
L_08811E10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811E48;
    }
    goto L_08811E1C;
}
L_08811E1C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811E28u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811E28u) goto L_08811E28;
    return;
L_08811E28:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811E40;
      }
      goto L_08811E34;
    }
L_08811E34:
    hot_regs.g31 = (0x08811E3Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811E3Cu) goto L_08811E3C;
    return;
L_08811E3C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811E40;
L_08811E40:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811E48;
L_08811E48:
    hot_regs.g31 = (0x08811E50u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811E50u) goto L_08811E50;
    return;
L_08811E50:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811E58;
    }
L_08811E58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811E90;
    }
    goto L_08811E64;
}
L_08811E64:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811E70u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811E70u) goto L_08811E70;
    return;
L_08811E70:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811E88;
      }
      goto L_08811E7C;
    }
L_08811E7C:
    hot_regs.g31 = (0x08811E84u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811E84u) goto L_08811E84;
    return;
L_08811E84:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811E88;
L_08811E88:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811E90;
L_08811E90:
    hot_regs.g31 = (0x08811E98u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811E98u) goto L_08811E98;
    return;
L_08811E98:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811EA0;
    }
L_08811EA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811ED8;
    }
    goto L_08811EAC;
}
L_08811EAC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811EB8u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811EB8u) goto L_08811EB8;
    return;
L_08811EB8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811ED0;
      }
      goto L_08811EC4;
    }
L_08811EC4:
    hot_regs.g31 = (0x08811ECCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811ECCu) goto L_08811ECC;
    return;
L_08811ECC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811ED0;
L_08811ED0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811ED8;
L_08811ED8:
    hot_regs.g31 = (0x08811EE0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811EE0u) goto L_08811EE0;
    return;
L_08811EE0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811EE8;
    }
L_08811EE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811F20;
    }
    goto L_08811EF4;
}
L_08811EF4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811F00u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811F00u) goto L_08811F00;
    return;
L_08811F00:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811F18;
      }
      goto L_08811F0C;
    }
L_08811F0C:
    hot_regs.g31 = (0x08811F14u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811F14u) goto L_08811F14;
    return;
L_08811F14:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811F18;
L_08811F18:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811F20;
L_08811F20:
    hot_regs.g31 = (0x08811F28u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811F28u) goto L_08811F28;
    return;
L_08811F28:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811F30;
    }
L_08811F30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811F68;
    }
    goto L_08811F3C;
}
L_08811F3C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811F48u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811F48u) goto L_08811F48;
    return;
L_08811F48:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811F60;
      }
      goto L_08811F54;
    }
L_08811F54:
    hot_regs.g31 = (0x08811F5Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811F5Cu) goto L_08811F5C;
    return;
L_08811F5C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811F60;
L_08811F60:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811F68;
L_08811F68:
    hot_regs.g31 = (0x08811F70u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811F70u) goto L_08811F70;
    return;
L_08811F70:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811F78;
    }
L_08811F78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811FB0;
    }
    goto L_08811F84;
}
L_08811F84:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811F90u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811F90u) goto L_08811F90;
    return;
L_08811F90:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811FA8;
      }
      goto L_08811F9C;
    }
L_08811F9C:
    hot_regs.g31 = (0x08811FA4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811FA4u) goto L_08811FA4;
    return;
L_08811FA4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811FA8;
L_08811FA8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811FB0;
L_08811FB0:
    hot_regs.g31 = (0x08811FB8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811FB8u) goto L_08811FB8;
    return;
L_08811FB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08811FC0;
    }
L_08811FC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08811FF8;
    }
    goto L_08811FCC;
}
L_08811FCC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08811FD8u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811FD8u) goto L_08811FD8;
    return;
L_08811FD8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08811FF0;
      }
      goto L_08811FE4;
    }
L_08811FE4:
    hot_regs.g31 = (0x08811FECu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08811FECu) goto L_08811FEC;
    return;
L_08811FEC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08811FF0;
L_08811FF0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08811FF8;
L_08811FF8:
    hot_regs.g31 = (0x08812000u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812000u) goto L_08812000;
    return;
L_08812000:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812008;
    }
L_08812008:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812040;
    }
    goto L_08812014;
}
L_08812014:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812020u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812020u) goto L_08812020;
    return;
L_08812020:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812038;
      }
      goto L_0881202C;
    }
L_0881202C:
    hot_regs.g31 = (0x08812034u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812034u) goto L_08812034;
    return;
L_08812034:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812038;
L_08812038:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812040;
L_08812040:
    hot_regs.g31 = (0x08812048u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31112));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812048u) goto L_08812048;
    return;
L_08812048:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812050;
    }
L_08812050:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812088;
    }
    goto L_0881205C;
}
L_0881205C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812068u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812068u) goto L_08812068;
    return;
L_08812068:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812080;
      }
      goto L_08812074;
    }
L_08812074:
    hot_regs.g31 = (0x0881207Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881207Cu) goto L_0881207C;
    return;
L_0881207C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812080;
L_08812080:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812088;
L_08812088:
    hot_regs.g31 = (0x08812090u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31024));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812090u) goto L_08812090;
    return;
L_08812090:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812098;
    }
L_08812098:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088120D0;
    }
    goto L_088120A4;
}
L_088120A4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088120B0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088120B0u) goto L_088120B0;
    return;
L_088120B0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088120C8;
      }
      goto L_088120BC;
    }
L_088120BC:
    hot_regs.g31 = (0x088120C4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088120C4u) goto L_088120C4;
    return;
L_088120C4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088120C8;
L_088120C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088120D0;
L_088120D0:
    hot_regs.g31 = (0x088120D8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31016));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088120D8u) goto L_088120D8;
    return;
L_088120D8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_088120E0;
    }
L_088120E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812118;
    }
    goto L_088120EC;
}
L_088120EC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088120F8u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088120F8u) goto L_088120F8;
    return;
L_088120F8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812110;
      }
      goto L_08812104;
    }
L_08812104:
    hot_regs.g31 = (0x0881210Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881210Cu) goto L_0881210C;
    return;
L_0881210C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812110;
L_08812110:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812118;
L_08812118:
    hot_regs.g31 = (0x08812120u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31008));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812120u) goto L_08812120;
    return;
L_08812120:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812128;
    }
L_08812128:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812160;
    }
    goto L_08812134;
}
L_08812134:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812140u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812140u) goto L_08812140;
    return;
L_08812140:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812158;
      }
      goto L_0881214C;
    }
L_0881214C:
    hot_regs.g31 = (0x08812154u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812154u) goto L_08812154;
    return;
L_08812154:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812158;
L_08812158:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812160;
L_08812160:
    hot_regs.g31 = (0x08812168u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31024));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812168u) goto L_08812168;
    return;
L_08812168:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812170;
    }
L_08812170:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088121A8;
    }
    goto L_0881217C;
}
L_0881217C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812188u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812188u) goto L_08812188;
    return;
L_08812188:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088121A0;
      }
      goto L_08812194;
    }
L_08812194:
    hot_regs.g31 = (0x0881219Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881219Cu) goto L_0881219C;
    return;
L_0881219C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088121A0;
L_088121A0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088121A8;
L_088121A8:
    hot_regs.g31 = (0x088121B0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31024));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088121B0u) goto L_088121B0;
    return;
L_088121B0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_088121B8;
    }
L_088121B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088121F0;
    }
    goto L_088121C4;
}
L_088121C4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088121D0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088121D0u) goto L_088121D0;
    return;
L_088121D0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088121E8;
      }
      goto L_088121DC;
    }
L_088121DC:
    hot_regs.g31 = (0x088121E4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088121E4u) goto L_088121E4;
    return;
L_088121E4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088121E8;
L_088121E8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088121F0;
L_088121F0:
    hot_regs.g31 = (0x088121F8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31024));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088121F8u) goto L_088121F8;
    return;
L_088121F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812200;
    }
L_08812200:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812238;
    }
    goto L_0881220C;
}
L_0881220C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812218u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812218u) goto L_08812218;
    return;
L_08812218:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812230;
      }
      goto L_08812224;
    }
L_08812224:
    hot_regs.g31 = (0x0881222Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881222Cu) goto L_0881222C;
    return;
L_0881222C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812230;
L_08812230:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812238;
L_08812238:
    hot_regs.g31 = (0x08812240u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-31000));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812240u) goto L_08812240;
    return;
L_08812240:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812248;
    }
L_08812248:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812280;
    }
    goto L_08812254;
}
L_08812254:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812260u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812260u) goto L_08812260;
    return;
L_08812260:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812278;
      }
      goto L_0881226C;
    }
L_0881226C:
    hot_regs.g31 = (0x08812274u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812274u) goto L_08812274;
    return;
L_08812274:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812278;
L_08812278:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812280;
L_08812280:
    hot_regs.g31 = (0x08812288u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30992));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812288u) goto L_08812288;
    return;
L_08812288:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812290;
    }
L_08812290:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088122C8;
    }
    goto L_0881229C;
}
L_0881229C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088122A8u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088122A8u) goto L_088122A8;
    return;
L_088122A8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088122C0;
      }
      goto L_088122B4;
    }
L_088122B4:
    hot_regs.g31 = (0x088122BCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088122BCu) goto L_088122BC;
    return;
L_088122BC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088122C0;
L_088122C0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088122C8;
L_088122C8:
    hot_regs.g31 = (0x088122D0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30984));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088122D0u) goto L_088122D0;
    return;
L_088122D0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_088122D8;
    }
L_088122D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812310;
    }
    goto L_088122E4;
}
L_088122E4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088122F0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088122F0u) goto L_088122F0;
    return;
L_088122F0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812308;
      }
      goto L_088122FC;
    }
L_088122FC:
    hot_regs.g31 = (0x08812304u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812304u) goto L_08812304;
    return;
L_08812304:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812308;
L_08812308:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812310;
L_08812310:
    hot_regs.g31 = (0x08812318u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30976));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812318u) goto L_08812318;
    return;
L_08812318:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812320;
    }
L_08812320:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812358;
    }
    goto L_0881232C;
}
L_0881232C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812338u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812338u) goto L_08812338;
    return;
L_08812338:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812350;
      }
      goto L_08812344;
    }
L_08812344:
    hot_regs.g31 = (0x0881234Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881234Cu) goto L_0881234C;
    return;
L_0881234C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812350;
L_08812350:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812358;
L_08812358:
    hot_regs.g31 = (0x08812360u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30968));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812360u) goto L_08812360;
    return;
L_08812360:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812368;
    }
L_08812368:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088123A0;
    }
    goto L_08812374;
}
L_08812374:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812380u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812380u) goto L_08812380;
    return;
L_08812380:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812398;
      }
      goto L_0881238C;
    }
L_0881238C:
    hot_regs.g31 = (0x08812394u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812394u) goto L_08812394;
    return;
L_08812394:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812398;
L_08812398:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088123A0;
L_088123A0:
    hot_regs.g31 = (0x088123A8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30960));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088123A8u) goto L_088123A8;
    return;
L_088123A8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_088123B0;
    }
L_088123B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088123E8;
    }
    goto L_088123BC;
}
L_088123BC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088123C8u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088123C8u) goto L_088123C8;
    return;
L_088123C8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088123E0;
      }
      goto L_088123D4;
    }
L_088123D4:
    hot_regs.g31 = (0x088123DCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088123DCu) goto L_088123DC;
    return;
L_088123DC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088123E0;
L_088123E0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088123E8;
L_088123E8:
    hot_regs.g31 = (0x088123F0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30952));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088123F0u) goto L_088123F0;
    return;
L_088123F0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_088123F8;
    }
L_088123F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812430;
    }
    goto L_08812404;
}
L_08812404:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812410u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812410u) goto L_08812410;
    return;
L_08812410:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812428;
      }
      goto L_0881241C;
    }
L_0881241C:
    hot_regs.g31 = (0x08812424u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812424u) goto L_08812424;
    return;
L_08812424:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812428;
L_08812428:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812430;
L_08812430:
    hot_regs.g31 = (0x08812438u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30944));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812438u) goto L_08812438;
    return;
L_08812438:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812440;
    }
L_08812440:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812478;
    }
    goto L_0881244C;
}
L_0881244C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812458u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812458u) goto L_08812458;
    return;
L_08812458:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812470;
      }
      goto L_08812464;
    }
L_08812464:
    hot_regs.g31 = (0x0881246Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881246Cu) goto L_0881246C;
    return;
L_0881246C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812470;
L_08812470:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812478;
L_08812478:
    hot_regs.g31 = (0x08812480u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30936));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812480u) goto L_08812480;
    return;
L_08812480:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812488;
    }
L_08812488:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088124C0;
    }
    goto L_08812494;
}
L_08812494:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088124A0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088124A0u) goto L_088124A0;
    return;
L_088124A0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088124B8;
      }
      goto L_088124AC;
    }
L_088124AC:
    hot_regs.g31 = (0x088124B4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088124B4u) goto L_088124B4;
    return;
L_088124B4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088124B8;
L_088124B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088124C0;
L_088124C0:
    hot_regs.g31 = (0x088124C8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30928));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088124C8u) goto L_088124C8;
    return;
L_088124C8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_088124D0;
    }
L_088124D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812508;
    }
    goto L_088124DC;
}
L_088124DC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088124E8u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088124E8u) goto L_088124E8;
    return;
L_088124E8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812500;
      }
      goto L_088124F4;
    }
L_088124F4:
    hot_regs.g31 = (0x088124FCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088124FCu) goto L_088124FC;
    return;
L_088124FC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812500;
L_08812500:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812508;
L_08812508:
    hot_regs.g31 = (0x08812510u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30920));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812510u) goto L_08812510;
    return;
L_08812510:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812518;
    }
L_08812518:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812550;
    }
    goto L_08812524;
}
L_08812524:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812530u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812530u) goto L_08812530;
    return;
L_08812530:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812548;
      }
      goto L_0881253C;
    }
L_0881253C:
    hot_regs.g31 = (0x08812544u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812544u) goto L_08812544;
    return;
L_08812544:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812548;
L_08812548:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812550;
L_08812550:
    hot_regs.g31 = (0x08812558u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30912));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812558u) goto L_08812558;
    return;
L_08812558:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812560;
    }
L_08812560:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812598;
    }
    goto L_0881256C;
}
L_0881256C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812578u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812578u) goto L_08812578;
    return;
L_08812578:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812590;
      }
      goto L_08812584;
    }
L_08812584:
    hot_regs.g31 = (0x0881258Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881258Cu) goto L_0881258C;
    return;
L_0881258C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812590;
L_08812590:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812598;
L_08812598:
    hot_regs.g31 = (0x088125A0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30904));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088125A0u) goto L_088125A0;
    return;
L_088125A0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_088125A8;
    }
L_088125A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088125E0;
    }
    goto L_088125B4;
}
L_088125B4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x088125C0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088125C0u) goto L_088125C0;
    return;
L_088125C0:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088125D8;
      }
      goto L_088125CC;
    }
L_088125CC:
    hot_regs.g31 = (0x088125D4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088125D4u) goto L_088125D4;
    return;
L_088125D4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_088125D8;
L_088125D8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088125E0;
L_088125E0:
    hot_regs.g31 = (0x088125E8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30896));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088125E8u) goto L_088125E8;
    return;
L_088125E8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_088125F0;
    }
L_088125F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812628;
    }
    goto L_088125FC;
}
L_088125FC:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812608u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812608u) goto L_08812608;
    return;
L_08812608:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812620;
      }
      goto L_08812614;
    }
L_08812614:
    hot_regs.g31 = (0x0881261Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881261Cu) goto L_0881261C;
    return;
L_0881261C:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812620;
L_08812620:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812628;
L_08812628:
    hot_regs.g31 = (0x08812630u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30888));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812630u) goto L_08812630;
    return;
L_08812630:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812638;
    }
L_08812638:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812670;
    }
    goto L_08812644;
}
L_08812644:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08812650u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812650u) goto L_08812650;
    return;
L_08812650:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812668;
      }
      goto L_0881265C;
    }
L_0881265C:
    hot_regs.g31 = (0x08812664u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812664u) goto L_08812664;
    return;
L_08812664:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    goto L_08812668;
L_08812668:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812670;
L_08812670:
    hot_regs.g31 = (0x08812678u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30880));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812678u) goto L_08812678;
    return;
L_08812678:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812680;
    }
L_08812680:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088126B8;
    }
    goto L_0881268C;
}
L_0881268C:
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g31 = (0x08812698u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812698u) goto L_08812698;
    return;
L_08812698:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088126B0;
      }
      goto L_088126A4;
    }
L_088126A4:
    hot_regs.g31 = (0x088126ACu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088126ACu) goto L_088126AC;
    return;
L_088126AC:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_088126B0;
L_088126B0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[20]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088126B8;
L_088126B8:
    hot_regs.g31 = (0x088126C0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30872));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088126C0u) goto L_088126C0;
    return;
L_088126C0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (18510u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[19] == g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088126DC;
      }
      goto L_088126D0;
    }
}
L_088126D0:
    hot_regs.g5 = (0u | 32767u);
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08812728;
      }
      goto L_088126DC;
    }
L_088126DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812714;
    }
    goto L_088126E8;
}
L_088126E8:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x088126F4u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088126F4u) goto L_088126F4;
    return;
L_088126F4:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881270C;
      }
      goto L_08812700;
    }
L_08812700:
    hot_regs.g31 = (0x08812708u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812708u) goto L_08812708;
    return;
L_08812708:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0881270C;
L_0881270C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812714;
L_08812714:
    hot_regs.g31 = (0x0881271Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30864));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881271Cu) goto L_0881271C;
    return;
L_0881271C:
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(610), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08812728;
L_08812728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812730;
    }
L_08812730:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (65352u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(19967));
    { const bool branch_taken = ctx.gpr[19] == g4;
    g4 = (32512u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881274C;
      }
      goto L_08812740;
    }
}
L_08812740:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[19] != g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881279C;
      }
      goto L_0881274C;
    }
}
L_0881274C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812784;
    }
    goto L_08812758;
}
L_08812758:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x08812764u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812764u) goto L_08812764;
    return;
L_08812764:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881277C;
      }
      goto L_08812770;
    }
L_08812770:
    hot_regs.g31 = (0x08812778u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812778u) goto L_08812778;
    return;
L_08812778:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0881277C;
L_0881277C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812784;
L_08812784:
    hot_regs.g31 = (0x0881278Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30856));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881278Cu) goto L_0881278C;
    return;
L_0881278C:
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_0881279C;
    }
L_0881279C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (24480u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(27391));
    { const bool branch_taken = ctx.gpr[19] == g4;
    g4 = (127u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088127B8;
      }
      goto L_088127AC;
    }
}
L_088127AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[19] != g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08812808;
      }
      goto L_088127B8;
    }
}
L_088127B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_088127F0;
    }
    goto L_088127C4;
}
L_088127C4:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x088127D0u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088127D0u) goto L_088127D0;
    return;
L_088127D0:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088127E8;
      }
      goto L_088127DC;
    }
L_088127DC:
    hot_regs.g31 = (0x088127E4u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088127E4u) goto L_088127E4;
    return;
L_088127E4:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_088127E8;
L_088127E8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_088127F0;
L_088127F0:
    hot_regs.g31 = (0x088127F8u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30848));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088127F8u) goto L_088127F8;
    return;
L_088127F8:
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(609), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08812854;
      }
      goto L_08812808;
    }
L_08812808:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08812840;
    }
    goto L_08812814;
}
L_08812814:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x08812820u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812820u) goto L_08812820;
    return;
L_08812820:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812838;
      }
      goto L_0881282C;
    }
L_0881282C:
    hot_regs.g31 = (0x08812834u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812834u) goto L_08812834;
    return;
L_08812834:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08812838;
L_08812838:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08812840;
L_08812840:
    hot_regs.g31 = (0x08812848u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-30864));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812848u) goto L_08812848;
    return;
L_08812848:
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(610), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08812854;
L_08812854:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08812868;
      }
      goto L_0881285C;
    }
L_0881285C:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(15));
    hot_regs.g31 = (0x08812868u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812868u) goto L_08812868;
    return;
L_08812868:
    hot_regs.g2 = (0u | 1u);
    goto L_0881286C;
L_0881286C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088128A8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-624));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(580), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(584), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(592), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(596), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(600), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(604), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(608), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(612), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08812900;
      }
      goto L_088128F8;
    }
}
L_088128F8:
    hot_regs.g31 = (0x08812900u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 536u, 0x0880E748u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812900u) goto L_08812900;
    return;
L_08812900:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(464), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    g5 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), g4);
    g5 = (g5 + static_cast<std::uint32_t>(25856));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(532), g5);
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(309)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(f12));
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(310)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(311)));
    g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(312)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(524), g5);
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(313)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), g6);
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(314)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(315)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), g7);
    g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(508), g5);
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(265)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(504), g6);
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(266)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(500), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(267)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(468), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(492), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(488), g6);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(484), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(f12));
    g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(640));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(472), g4);
    hot_regs.f22 = std::bit_cast<float>(0u);
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g23 = (2237u << 16u);
    g4 = (16128u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[30] = (0u | 65535u);
    g4 = (16256u << 16u);
    g23 = (g23 + static_cast<std::uint32_t>(-28736));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    goto L_088129D0;
}
}
L_088129D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(464)));
    g4 = (g4 & 4u);
    ctx.gpr[18] = (0u | 32u);
    ctx.gpr[19] = (0u | 96u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[21] = (0u | 5u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_088129EC;
    }
}
L_088129EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_088129FC;
    }
}
L_088129FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(628)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08812A10;
    }
}
L_08812A10:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08812AE0;
      }
      goto L_08812A18;
    }
L_08812A18:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08812C10;
      }
      goto L_08812A20;
    }
L_08812A20:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08812ECC;
      }
      goto L_08812A28;
    }
L_08812A28:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08812AD8;
      }
      goto L_08812A30;
    }
L_08812A30:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08813144;
      }
      goto L_08812A38;
    }
L_08812A38:
    hot_regs.g31 = (0x08812A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812A40u) goto L_08812A40;
    return;
L_08812A40:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08812AD0;
      }
      goto L_08812A48;
    }
L_08812A48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 224u);
    if (g4 == ctx.gpr[19]) {
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6848)));
    hot_regs.g4 = g4;
        goto L_08812A6C;
    }
    goto L_08812A58;
}
L_08812A58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 224u);
    { const bool branch_taken = g4 != ctx.gpr[18];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08812AD0;
      }
      goto L_08812A68;
    }
}
L_08812A68:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6848)));
    goto L_08812A6C;
L_08812A6C:
    hot_regs.g5 = (17279u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f14 = hot_regs.f13 / hot_regs.f12;
    ctx.gpr[10] = (17252u << 16u);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(666)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-31816)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-31815)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-31814)));
    hot_regs.g2 = (16384u << 16u);
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(472)));
    hot_regs.g4 = (ctx.gpr[17] | hot_regs.g4);
    hot_regs.g5 = (0u | 6u);
    ctx.gpr[11] = (0u | 2048u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x08812AD0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 572u, 0x088ABA2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812AD0u) goto L_08812AD0;
    return;
L_08812AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08812AD8;
    }
L_08812AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08812AE0;
    }
L_08812AE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08812AECu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(632)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812AECu) goto L_08812AEC;
    return;
L_08812AEC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08812C08;
      }
      goto L_08812AF8;
    }
L_08812AF8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g5 = (g5 & 224u);
    { const bool branch_taken = g5 == ctx.gpr[19];
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08812B18;
      }
      goto L_08812B08;
    }
}
L_08812B08:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g5 = (g5 & 224u);
    { const bool branch_taken = g5 != ctx.gpr[18];
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08812C08;
      }
      goto L_08812B18;
    }
}
L_08812B18:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (16416u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[11] = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (16281u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f13 + hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    f13 = f13 + hot_regs.f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(624)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08812B94;
      }
      goto L_08812B7C;
    }
}
}
L_08812B7C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31812)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g4);
    ctx.gpr[10] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(34)));
      if (branch_taken) {
          goto L_08812BA8;
      }
      goto L_08812B94;
    }
}
L_08812B94:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31808)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g4);
    ctx.gpr[10] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(33)));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(34)));
    goto L_08812BA8;
}
L_08812BA8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(666)));
    hot_regs.g4 = (0u | 2u);
    g7 = (g5 << 16u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    g7 = (ctx.gpr[17] | g7);
    if (g5 == 0u) {
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
        goto L_08812BC4;
    }
    goto L_08812BC4;
}
L_08812BC4:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6848)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    hot_regs.g2 = (ctx.gpr[8] | 0u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g6 = (ctx.gpr[11] | 0u);
    hot_regs.g7 = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[9] = (hot_regs.g2 | 0u);
    ctx.gpr[10] = (ctx.gpr[3] | 0u);
    ctx.gpr[11] = (0u | 1024u);
    hot_regs.g31 = (0x08812C08u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812C08u) goto L_08812C08;
    return;
L_08812C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08812C10;
    }
L_08812C10:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[21] = (0u | 0u);
    hot_regs.g31 = (0x08812C20u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(632)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812C20u) goto L_08812C20;
    return;
L_08812C20:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812C64;
      }
      goto L_08812C2C;
    }
L_08812C2C:
    hot_regs.g31 = (0x08812C34u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812C34u) goto L_08812C34;
    return;
L_08812C34:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08812C5C;
      }
      goto L_08812C3C;
    }
L_08812C3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08812C54;
      }
      goto L_08812C48;
    }
L_08812C48:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08812C68;
      }
      goto L_08812C54;
    }
L_08812C54:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08812C68;
      }
      goto L_08812C5C;
    }
L_08812C5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08812C68;
      }
      goto L_08812C64;
    }
L_08812C64:
    hot_regs.g4 = (0u | 0u);
    goto L_08812C68;
L_08812C68:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g5 = (g5 & 224u);
    { const bool branch_taken = g5 == ctx.gpr[19];
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08812C88;
      }
      goto L_08812C78;
    }
}
L_08812C78:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g5 = (g5 & 224u);
    { const bool branch_taken = g5 != ctx.gpr[18];
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08812EC4;
      }
      goto L_08812C88;
    }
}
L_08812C88:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g7 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08812CA0;
      }
      goto L_08812C94;
    }
L_08812C94:
    hot_regs.g5 = (16320u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_08812CA4;
      }
      goto L_08812CA0;
    }
L_08812CA0:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08812CA4;
L_08812CA4:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    f13 = f13 + hot_regs.f20;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f13));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = g5 != 0u;
    g5 = (16204u << 16u);
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08812CD4;
      }
      goto L_08812CCC;
    }
}
}
L_08812CCC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08812CDC;
      }
      goto L_08812CD4;
    }
L_08812CD4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    goto L_08812CDC;
}
L_08812CDC:
{
    float f13 = hot_regs.f13;
    f13 = f13 + hot_regs.f14;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(624)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08812D04;
      }
      goto L_08812CEC;
    }
}
L_08812CEC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31812)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g5);
    ctx.gpr[19] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(65)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(66)));
      if (branch_taken) {
          goto L_08812D18;
      }
      goto L_08812D04;
    }
}
L_08812D04:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31808)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g5);
    ctx.gpr[19] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(65)));
    ctx.gpr[17] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(66)));
    goto L_08812D18;
}
L_08812D18:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812E18;
      }
      goto L_08812D20;
    }
L_08812D20:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 63u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08812D60;
      }
      goto L_08812D30;
    }
L_08812D30:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 61u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08812D60;
      }
      goto L_08812D40;
    }
L_08812D40:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 52u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08812D60;
      }
      goto L_08812D50;
    }
L_08812D50:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g6 = (0u | 53u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08812E18;
      }
      goto L_08812D60;
    }
L_08812D60:
    hot_regs.g31 = (0x08812D68u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812D68u) goto L_08812D68;
    return;
L_08812D68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(704)));
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08812D7Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812D7Cu) goto L_08812D7C;
    return;
L_08812D7C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08812D88u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812D88u) goto L_08812D88;
    return;
L_08812D88:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 << 6u);
    g16 = (hot_regs.g2 + g16);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), 0u);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08812DB0;
      }
      goto L_08812D98;
    }
}
L_08812D98:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08812DB4;
      }
      goto L_08812DA8;
    }
}
L_08812DA8:
    hot_regs.g31 = (0x08812DB0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812DB0u) goto L_08812DB0;
    return;
L_08812DB0:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-2));
    goto L_08812DB4;
L_08812DB4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x08812DCCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812DCCu) goto L_08812DCC;
    return;
L_08812DCC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g29 + static_cast<std::uint32_t>(128));
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08812E10;
      }
      goto L_08812DFC;
    }
}
}
L_08812DFC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08812E10;
      }
      goto L_08812E08;
    }
L_08812E08:
    hot_regs.g31 = (0x08812E10u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812E10u) goto L_08812E10;
    return;
L_08812E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08812E60;
      }
      goto L_08812E18;
    }
L_08812E18:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08812E60;
      }
      goto L_08812E20;
    }
L_08812E20:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (16281u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g5 = (g5 | 39322u);
    g4 = (g4 + static_cast<std::uint32_t>(32));
    hot_regs.f14 = std::bit_cast<float>(g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(8)));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f13 + f12;
    f12 = f12 + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08812E60;
}
}
L_08812E60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(666)));
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (g4 << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    g4 = (0u | 2u);
    g7 = (g7 | hot_regs.g5);
    if (hot_regs.g6 == 0u) {
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
        goto L_08812E80;
    }
    goto L_08812E80;
}
L_08812E80:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6848)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g2 = (0u | 5u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 1024u);
    hot_regs.g31 = (0x08812EC4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812EC4u) goto L_08812EC4;
    return;
L_08812EC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08812ECC;
    }
L_08812ECC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    hot_regs.g31 = (0x08812ED8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(632)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812ED8u) goto L_08812ED8;
    return;
L_08812ED8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 224u);
    hot_regs.g5 = (0u | 128u);
    { const bool branch_taken = g4 != hot_regs.g5;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08812FF8;
      }
      goto L_08812EEC;
    }
}
L_08812EEC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(212));
    hot_regs.g31 = (0x08812F18u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812F18u) goto L_08812F18;
    return;
L_08812F18:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08812FF8;
      }
      goto L_08812F20;
    }
L_08812F20:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08812F2Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812F2Cu) goto L_08812F2C;
    return;
L_08812F2C:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08812F38u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812F38u) goto L_08812F38;
    return;
L_08812F38:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08812F44u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812F44u) goto L_08812F44;
    return;
L_08812F44:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08812F50u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812F50u) goto L_08812F50;
    return;
L_08812F50:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08812F5Cu);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812F5Cu) goto L_08812F5C;
    return;
L_08812F5C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7724)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x08812F6Cu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812F6Cu) goto L_08812F6C;
    return;
L_08812F6C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(624)));
    hot_regs.g6 = (hot_regs.g4 & 2u);
    hot_regs.g6 = (hot_regs.g6 >> 1u);
    hot_regs.g31 = (0x08812F84u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 654u, 0x0880F3B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812F84u) goto L_08812F84;
    return;
L_08812F84:
    hot_regs.g4 = (hot_regs.g2 >> 24u);
    hot_regs.g5 = (hot_regs.g2 >> 16u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g2 >> 8u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(219), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    ctx.fpr[17] = ctx.fpr[24] / hot_regs.f14;
    ctx.gpr[9] = (16672u << 16u);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(217)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(218)));
    hot_regs.g7 = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[9]);
    hot_regs.g31 = (0x08812FD4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 68u, 0x08AA8C8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812FD4u) goto L_08812FD4;
    return;
L_08812FD4:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08812FE0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812FE0u) goto L_08812FE0;
    return;
L_08812FE0:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08812FECu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812FECu) goto L_08812FEC;
    return;
L_08812FEC:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08812FF8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08812FF8u) goto L_08812FF8;
    return;
L_08812FF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 224u);
    { const bool branch_taken = g4 == ctx.gpr[19];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813018;
      }
      goto L_08813008;
    }
}
L_08813008:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    g4 = (g4 & 224u);
    { const bool branch_taken = g4 != ctx.gpr[18];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881313C;
      }
      goto L_08813018;
    }
}
L_08813018:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    if (hot_regs.g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_0881302C;
    }
    goto L_08813024;
L_08813024:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_0881302C;
      }
      goto L_0881302C;
    }
L_0881302C:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f13 = hot_regs.f12 + f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    f13 = f13 + f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    if (g4 != 0u) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08813080;
    }
    goto L_08813078;
}
}
L_08813078:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08813080;
      }
      goto L_08813080;
    }
L_08813080:
{
    float f13 = hot_regs.f13;
    f13 = f13 + hot_regs.f14;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(624)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088130A8;
      }
      goto L_08813090;
    }
}
L_08813090:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31812)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), hot_regs.g4);
    ctx.gpr[9] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(241)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(242)));
      if (branch_taken) {
          goto L_088130E4;
      }
      goto L_088130A8;
    }
}
L_088130A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(624)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088130D0;
      }
      goto L_088130B8;
    }
L_088130B8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31808)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), hot_regs.g4);
    ctx.gpr[9] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(241)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(242)));
      if (branch_taken) {
          goto L_088130E4;
      }
      goto L_088130D0;
    }
}
L_088130D0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-31804)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), hot_regs.g4);
    ctx.gpr[9] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[8] = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(241)));
    hot_regs.g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(242)));
    goto L_088130E4;
}
L_088130E4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    g5 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(666)));
    hot_regs.g4 = (0u | 2u);
    g10 = (g5 << 16u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    g10 = (ctx.gpr[17] | g10);
    if (g5 == 0u) {
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = g5;
    ctx.gpr[10] = g10;
        goto L_08813100;
    }
    goto L_08813100;
}
L_08813100:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (ctx.gpr[10] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6848)));
    ctx.gpr[11] = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    hot_regs.g7 = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    ctx.gpr[11] = (0u | 1024u);
    hot_regs.g31 = (0x0881313Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881313Cu) goto L_0881313C;
    return;
L_0881313C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08813144;
    }
L_08813144:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(632)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    hot_regs.g31 = (0x08813158u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813158u) goto L_08813158;
    return;
L_08813158:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0881339C;
      }
      goto L_0881316C;
    }
L_0881316C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881339C;
      }
      goto L_08813174;
    }
L_08813174:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x0881318Cu);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881318Cu) goto L_0881318C;
    return;
L_0881318C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0881339C;
      }
      goto L_08813194;
    }
L_08813194:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(632)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088131A4u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088131A4u) goto L_088131A4;
    return;
L_088131A4:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813268;
      }
      goto L_088131B0;
    }
L_088131B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088131D8;
      }
      goto L_088131BC;
    }
L_088131BC:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    hot_regs.g31 = (0x088131CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088131CCu) goto L_088131CC;
    return;
L_088131CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_088131D8;
L_088131D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(102)));
    g19 = (g4 & 4u);
    g19 = (0u < g19 ? 1u : 0u);
    { const bool branch_taken = g19 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08813210;
      }
      goto L_088131F0;
    }
}
L_088131F0:
    hot_regs.g31 = (0x088131F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088131F8u) goto L_088131F8;
    return;
L_088131F8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08813204u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 779u, 0x08947B90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813204u) goto L_08813204;
    return;
L_08813204:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08813210;
      }
      goto L_0881320C;
    }
L_0881320C:
    ctx.gpr[19] = (0u | 1u);
    goto L_08813210;
L_08813210:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08813220u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813220u) goto L_08813220;
    return;
L_08813220:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813268;
      }
      goto L_0881322C;
    }
L_0881322C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(48)));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813268;
      }
      goto L_08813244;
    }
}
L_08813244:
    hot_regs.g31 = (0x0881324Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 597u, 0x089D3458u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881324Cu) goto L_0881324C;
    return;
L_0881324C:
    hot_regs.g31 = (0x08813254u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813254u) goto L_08813254;
    return;
L_08813254:
    hot_regs.g31 = (0x0881325Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 696u, 0x0890EF94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881325Cu) goto L_0881325C;
    return;
L_0881325C:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08813268;
      }
      goto L_08813264;
    }
L_08813264:
    ctx.gpr[19] = (0u | 0u);
    goto L_08813268;
L_08813268:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(632)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08813278u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 16u, 0x08ADC120u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813278u) goto L_08813278;
    return;
L_08813278:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6896)));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (hot_regs.g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0881339C;
      }
      goto L_08813294;
    }
}
L_08813294:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_088132C0;
    }
    goto L_088132A0;
}
L_088132A0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(433));
    hot_regs.g31 = (0x088132B0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088132B0u) goto L_088132B0;
    return;
L_088132B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(433)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_088132C0;
}
L_088132C0:
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
          goto L_0881339C;
      }
      goto L_088132D8;
    }
}
L_088132D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6896)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    g4 = (g5 ^ g4);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0881339C;
      }
      goto L_08813308;
    }
}
L_08813308:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(252)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08813334;
      }
      goto L_08813318;
    }
L_08813318:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(434));
    hot_regs.g31 = (0x08813328u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813328u) goto L_08813328;
    return;
L_08813328:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(434)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08813334;
L_08813334:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(176)));
    if (g5 != ctx.gpr[30]) {
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    hot_regs.g5 = g5;
        goto L_0881334C;
    }
    goto L_08813344;
}
L_08813344:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0881335C;
      }
      goto L_0881334C;
    }
L_0881334C:
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(176)));
    hot_regs.g31 = (0x08813358u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813358u) goto L_08813358;
    return;
L_08813358:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_0881335C;
L_0881335C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(352)));
    if (hot_regs.g4 != hot_regs.g5) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(252)));
        goto L_08813370;
    }
    goto L_08813368;
L_08813368:
    ctx.gpr[21] = (0u | 1u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(252)));
    goto L_08813370;
L_08813370:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(6896)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    g4 = (g4 ^ g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08813308;
      }
      goto L_0881339C;
    }
}
L_0881339C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
      if (branch_taken) {
          goto L_08813A6C;
      }
      goto L_088133A4;
    }
L_088133A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A6C;
      }
      goto L_088133AC;
    }
L_088133AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    hot_regs.g5 = (0u | 96u);
    g4 = (g4 & 224u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088133D4;
      }
      goto L_088133C0;
    }
}
L_088133C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    hot_regs.g5 = (0u | 32u);
    g4 = (g4 & 224u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813A6C;
      }
      goto L_088133D4;
    }
}
L_088133D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x088133E8u);
    ctx.gpr[19] = (ctx.gpr[18] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 639u, 0x08823710u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088133E8u) goto L_088133E8;
    return;
L_088133E8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088133F8u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088133F8u) goto L_088133F8;
    return;
L_088133F8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881341C;
      }
      goto L_08813404;
    }
L_08813404:
    hot_regs.g31 = (0x0881340Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 19u, 0x08824204u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881340Cu) goto L_0881340C;
    return;
L_0881340C:
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08813494;
      }
      goto L_0881341C;
    }
L_0881341C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(540), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08813434u);
    ctx.gpr[17] = (ctx.gpr[18] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813434u) goto L_08813434;
    return;
L_08813434:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08813444u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813444u) goto L_08813444;
    return;
L_08813444:
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(540)));
      if (branch_taken) {
          goto L_0881348C;
      }
      goto L_0881344C;
    }
L_0881344C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08813478;
    }
    goto L_08813458;
}
L_08813458:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(440));
    hot_regs.g31 = (0x08813468u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813468u) goto L_08813468;
    return;
L_08813468:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(440)));
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08813478;
}
L_08813478:
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813494;
      }
      goto L_0881348C;
    }
}
L_0881348C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08813494;
    }
L_08813494:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), hot_regs.g7);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x088134DCu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088134DCu) goto L_088134DC;
    return;
L_088134DC:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x088134E8u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 620u, 0x0880F05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088134E8u) goto L_088134E8;
    return;
L_088134E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(656))))));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813528;
      }
      goto L_08813504;
    }
}
L_08813504:
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08813528;
      }
      goto L_08813514;
    }
L_08813514:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6851)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08813528;
      }
      goto L_08813520;
    }
L_08813520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08813528;
    }
L_08813528:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(48)));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088135B8;
      }
      goto L_08813540;
    }
}
L_08813540:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08813550u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 156u, 0x08ADC7F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813550u) goto L_08813550;
    return;
L_08813550:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1)));
    g4 = (g4 << 24u);
    g5 = (g5 << 16u);
    g6 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(2)));
    g4 = (g4 + g5);
    g5 = (g6 << 8u);
    g6 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(3)));
    g4 = (g4 + g5);
    g4 = (g4 + g6);
    g5 = (g4 >> 24u);
    g7 = (g4 >> 16u);
    g8 = (g5 & 255u);
    ctx.gpr[9] = (g7 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), g8);
    g10 = (g4 >> 8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(524), ctx.gpr[9]);
    g8 = (g10 & 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), g8);
    g6 = (g4 & 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(298), static_cast<std::uint8_t>(g10));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(299), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_0881362C;
      }
      goto L_088135B8;
    }
}
L_088135B8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088135C8u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 167u, 0x08ADC88Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088135C8u) goto L_088135C8;
    return;
L_088135C8:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1)));
    g4 = (g4 << 24u);
    g5 = (g5 << 16u);
    g6 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(2)));
    g4 = (g4 + g5);
    g5 = (g6 << 8u);
    g6 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(3)));
    g4 = (g4 + g5);
    g4 = (g4 + g6);
    g5 = (g4 >> 24u);
    g7 = (g4 >> 16u);
    g8 = (g5 & 255u);
    ctx.gpr[9] = (g7 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), g8);
    g10 = (g4 >> 8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(508), ctx.gpr[9]);
    g8 = (g10 & 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(504), g8);
    g6 = (g4 & 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(297), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(500), g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(298), static_cast<std::uint8_t>(g10));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(299), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
    goto L_0881362C;
}
L_0881362C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g7 = (0u & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(468), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(492), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(488), g7);
    hot_regs.g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(296)));
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g5 != g7;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(484), g7);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08813674;
      }
      goto L_0881364C;
    }
}
L_0881364C:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(297)));
    if (hot_regs.g5 != hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_08813678;
    }
    goto L_08813658;
L_08813658:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(298)));
    if (hot_regs.g5 != hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_08813678;
    }
    goto L_08813664;
L_08813664:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(299)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g7;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08813678;
      }
      goto L_08813670;
    }
L_08813670:
    hot_regs.g4 = (0u | 1u);
    goto L_08813674;
L_08813674:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08813678;
L_08813678:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813A6C;
      }
      goto L_08813688;
    }
}
L_08813688:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g4 = (16268u << 16u);
      if (branch_taken) {
          goto L_08813888;
      }
      goto L_08813690;
    }
L_08813690:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f20;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(340));
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x088136BCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088136BCu) goto L_088136BC;
    return;
L_088136BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (17224u << 16u);
      if (branch_taken) {
          goto L_0881387C;
      }
      goto L_088136C4;
    }
L_088136C4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    f13 = std::bit_cast<float>(g4);
    f28 = f12 / f13;
    g6 = (16035u << 16u);
    g6 = (g6 | 55050u);
    g4 = (16384u << 16u);
    g5 = (16079u << 16u);
    g5 = (g5 | 16882u);
    f13 = std::bit_cast<float>(g6);
    f28 = f28 + f13;
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(f28));
    ctx.set_fpu_condition((f28 < f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(f28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(f28));
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[28] = f28;
        goto L_08813710;
    }
    goto L_08813710;
}
}
L_08813710:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(540), ctx.gpr[17]);
    hot_regs.g4 = (16395u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 | 8548u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08813740u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 32u, 0x08ADC204u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813740u) goto L_08813740;
    return;
L_08813740:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0881374Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881374Cu) goto L_0881374C;
    return;
L_0881374C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(376));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0881375Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881375Cu) goto L_0881375C;
    return;
L_0881375C:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(380)));
    hot_regs.g31 = (0x0881376Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881376Cu) goto L_0881376C;
    return;
L_0881376C:
    hot_regs.g5 = (17391u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(356));
    hot_regs.g5 = (17287u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(320)));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g31 = (0x08813794u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813794u) goto L_08813794;
    return;
L_08813794:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088137ACu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 90u, 0x08B0C660u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088137ACu) goto L_088137AC;
    return;
L_088137AC:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.f12 = hot_regs.f20 - hot_regs.f12;
    hot_regs.g31 = (0x088137C4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088137C4u) goto L_088137C4;
    return;
L_088137C4:
    hot_regs.g31 = (0x088137CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088137CCu) goto L_088137CC;
    return;
L_088137CC:
    hot_regs.g31 = (0x088137D4u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088137D4u) goto L_088137D4;
    return;
L_088137D4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(320)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(324)));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(297)));
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(298)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(299)));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(373), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (17392u << 16u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g7 = (hot_regs.g7 & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(374), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g5 = (17288u << 16u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(375), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g31 = (0x0881383Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 732u, 0x08873400u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881383Cu) goto L_0881383C;
    return;
L_0881383C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(372));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08813858u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 24u, 0x08B0C1B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813858u) goto L_08813858;
    return;
L_08813858:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(536)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
      if (branch_taken) {
          goto L_0881387C;
      }
      goto L_08813870;
    }
}
L_08813870:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(532)));
    hot_regs.g31 = (0x0881387Cu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(380)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881387Cu) goto L_0881387C;
    return;
L_0881387C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    f12 = f12 - hot_regs.f20;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08813888;
}
L_08813888:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (16204u << 16u);
      if (branch_taken) {
          goto L_088139E8;
      }
      goto L_08813890;
    }
L_08813890:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088138A8u);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088138A8u) goto L_088138A8;
    return;
L_088138A8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (16204u << 16u);
      if (branch_taken) {
          goto L_088139E8;
      }
      goto L_088138B0;
    }
L_088138B0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088138C0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088138C0u) goto L_088138C0;
    return;
L_088138C0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088139E4;
      }
      goto L_088138CC;
    }
L_088138CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_088138F8;
    }
    goto L_088138D8;
}
L_088138D8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(460));
    hot_regs.g31 = (0x088138E8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088138E8u) goto L_088138E8;
    return;
L_088138E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(460)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_088138F8;
}
L_088138F8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 63u);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088139BC;
      }
      goto L_08813908;
    }
}
L_08813908:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08813934;
    }
    goto L_08813914;
}
L_08813914:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(461));
    hot_regs.g31 = (0x08813924u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813924u) goto L_08813924;
    return;
L_08813924:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(461)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08813934;
}
L_08813934:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 61u);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088139BC;
      }
      goto L_08813944;
    }
}
L_08813944:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08813970;
    }
    goto L_08813950;
}
L_08813950:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(462));
    hot_regs.g31 = (0x08813960u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813960u) goto L_08813960;
    return;
L_08813960:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(462)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08813970;
}
L_08813970:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 52u);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088139BC;
      }
      goto L_08813980;
    }
}
L_08813980:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_088139AC;
    }
    goto L_0881398C;
}
L_0881398C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(463));
    hot_regs.g31 = (0x0881399Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0881399Cu) goto L_0881399C;
    return;
L_0881399C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(463)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_088139AC;
}
L_088139AC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (0u | 53u);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088139E4;
      }
      goto L_088139BC;
    }
}
L_088139BC:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088139CCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 587u, 0x089D3388u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088139CCu) goto L_088139CC;
    return;
L_088139CC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088139E4;
      }
      goto L_088139D4;
    }
L_088139D4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(416)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_088139E4;
}
L_088139E4:
    hot_regs.g4 = (16204u << 16u);
    goto L_088139E8;
L_088139E8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    g4 = (16320u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f13 = hot_regs.f12 + f13;
    f13 = f13 + hot_regs.f14;
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08813A6C;
      }
      goto L_08813A0C;
    }
}
}
L_08813A0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(666)));
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (g4 << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    g4 = (0u | 2u);
    g7 = (g7 | hot_regs.g5);
    if (hot_regs.g6 == 0u) {
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
        goto L_08813A2C;
    }
    goto L_08813A2C;
}
L_08813A2C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(297)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(298)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(6848)));
    hot_regs.g2 = (0u | 5u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 1024u);
    hot_regs.g31 = (0x08813A6Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813A6Cu) goto L_08813A6C;
    return;
L_08813A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08813A74;
      }
      goto L_08813A74;
    }
L_08813A74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(464)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(472)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(464), g4);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    g4 = (static_cast<std::int32_t>(g4) < 75 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(472), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088129D0;
      }
      goto L_08813A98;
    }
}
L_08813A98:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(480)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(476)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(f12));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(308), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(310), static_cast<std::uint8_t>(g6));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(311), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(312), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(313), static_cast<std::uint8_t>(g6));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(468)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(314), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(492)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(315), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(488)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(g6));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(484)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(266), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(267), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(552)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(556)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(560)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(564)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(568)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(572)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(576)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(580)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(584)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(588)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(592)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(596)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(600)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(604)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(608)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(612)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08813B5C:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-336));
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 1u));
    g11 = (g11 >> 31u);
    g11 = (g7 + g11);
    g11 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g11) >> 1u));
    f15 = std::bit_cast<float>(g11);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 1u));
    ctx.gpr[18] = (g4 | 0u);
    g10 = (g10 & 255u);
    g4 = (g2 >> 31u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), g10);
    g4 = (g8 + g4);
    f12 = f12 + f15;
    g2 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 1u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), g2);
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), g11);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), g4);
    f12 = hot_regs.f13 + f16;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(f16));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08813C30;
      }
      goto L_08813C24;
    }
}
}
L_08813C24:
    hot_regs.g31 = (0x08813C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813C2Cu) goto L_08813C2C;
    return;
L_08813C2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08813C30;
L_08813C30:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 141u, 0x0881487Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08813C3C;
    }
L_08813C3C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    g5 = (16704u << 16u);
    f14 = std::bit_cast<float>(g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    hot_regs.f15 = f12 - f14;
    g5 = (16256u << 16u);
    ctx.fpr[16] = f13 - f14;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f22 = std::bit_cast<float>(g5);
    ctx.gpr[17] = (0u | 0u);
    g5 = (16640u << 16u);
    f12 = f12 + f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f15));
    f13 = f13 + f14;
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(4));
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(12));
    g5 = (49152u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[26] = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    g5 = (16384u << 16u);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(36));
    ctx.fpr[24] = std::bit_cast<float>(g5);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(52));
    ctx.gpr[30] = (0u | 3u);
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_08813CB0;
}
}
L_08813CB0:
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
        goto L_08813CC8;
    }
    goto L_08813CB8;
L_08813CB8:
    hot_regs.g31 = (0x08813CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813CC0u) goto L_08813CC0;
    return;
L_08813CC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    goto L_08813CC8;
L_08813CC8:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 6u, 0x08814068u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08813CD4;
    }
L_08813CD4:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08813CE8;
      }
      goto L_08813CDC;
    }
L_08813CDC:
    hot_regs.g31 = (0x08813CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813CE4u) goto L_08813CE4;
    return;
L_08813CE4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    goto L_08813CE8;
L_08813CE8:
    hot_regs.g31 = (0x08813CF0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 13u, 0x089EC170u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813CF0u) goto L_08813CF0;
    return;
L_08813CF0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08813D18u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 606u, 0x0880EDB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813D18u) goto L_08813D18;
    return;
L_08813D18:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08813D28u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 577u, 0x0880EB64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813D28u) goto L_08813D28;
    return;
L_08813D28:
    hot_regs.g31 = (0x08813D30u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 67u, 0x089EC594u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813D30u) goto L_08813D30;
    return;
L_08813D30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(59)));
    hot_regs.g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(57)));
    ctx.gpr[9] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(58)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08813DC4;
      }
      goto L_08813D60;
    }
}
L_08813D60:
    ctx.gpr[8] = (hot_regs.g6 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (hot_regs.g5 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 31u);
    hot_regs.g31 = (0x08813D94u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813D94u) goto L_08813D94;
    return;
L_08813D94:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 + f20;
    f13 = f13 + ctx.fpr[26];
    f14 = f12 + ctx.fpr[24];
    f15 = f13 + f20;
    ctx.fpr[16] = f13 - f20;
    f12 = f12 - f22;
    f14 = f14 + f22;
    f13 = f15 + f22;
    { const bool branch_taken = 0u == 0u;
    f15 = ctx.fpr[16] - f22;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08813E94;
      }
      goto L_08813DC4;
    }
}
L_08813DC4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08813E34;
      }
      goto L_08813DD0;
    }
L_08813DD0:
    ctx.gpr[8] = (hot_regs.g6 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (hot_regs.g5 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 30u);
    hot_regs.g31 = (0x08813E04u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813E04u) goto L_08813E04;
    return;
L_08813E04:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 + f20;
    f13 = f13 + ctx.fpr[26];
    f14 = f12 + ctx.fpr[24];
    f15 = f13 + f20;
    ctx.fpr[16] = f13 - f20;
    f12 = f12 - f22;
    f14 = f14 + f22;
    f13 = f15 + f22;
    { const bool branch_taken = 0u == 0u;
    f15 = ctx.fpr[16] - f22;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08813E94;
      }
      goto L_08813E34;
    }
}
L_08813E34:
    ctx.gpr[8] = (hot_regs.g6 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g7 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (hot_regs.g5 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    ctx.gpr[10] = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 29u);
    hot_regs.g31 = (0x08813E68u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880D7F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813E68u) goto L_08813E68;
    return;
L_08813E68:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    f12 = f12 + f20;
    f13 = f13 + ctx.fpr[26];
    f14 = f12 + ctx.fpr[24];
    f15 = f13 + f20;
    ctx.fpr[16] = f13 - f20;
    f12 = f12 - f22;
    f14 = f14 + f22;
    f13 = f15 + f22;
    f15 = ctx.fpr[16] - f22;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_08813E94;
}
L_08813E94:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), ctx.gpr[23]);
    hot_regs.g31 = (0x08813EA8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813EA8u) goto L_08813EA8;
    return;
L_08813EA8:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08813EC4u);
    ctx.gpr[8] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813EC4u) goto L_08813EC4;
    return;
L_08813EC4:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08813ED4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813ED4u) goto L_08813ED4;
    return;
L_08813ED4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f20;
    hot_regs.f13 = hot_regs.f13 + ctx.fpr[26];
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.f14 = hot_regs.f12 + ctx.fpr[24];
    hot_regs.f15 = hot_regs.f13 - hot_regs.f20;
    hot_regs.g31 = (0x08813EF8u);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f20;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813EF8u) goto L_08813EF8;
    return;
L_08813EF8:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08813F14u);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813F14u) goto L_08813F14;
    return;
L_08813F14:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08813F24u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813F24u) goto L_08813F24;
    return;
L_08813F24:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[28] = hot_regs.f12 + hot_regs.f20;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = hot_regs.f13 + ctx.fpr[26];
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    ctx.fpr[30] = ctx.fpr[28] + ctx.fpr[24];
    hot_regs.g31 = (0x08813F48u);
    ctx.fpr[24] = hot_regs.f13 - hot_regs.f20;
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 58u, 0x089EC510u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813F48u) goto L_08813F48;
    return;
L_08813F48:
    hot_regs.f14 = hot_regs.f22 - ctx.fpr[0];
    hot_regs.g4 = (16776u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g31 = (0x08813F70u);
    hot_regs.f15 = ctx.fpr[24] + hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813F70u) goto L_08813F70;
    return;
L_08813F70:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 70u);
    hot_regs.g6 = (0u | 30u);
    hot_regs.g7 = (0u | 30u);
    hot_regs.g31 = (0x08813F8Cu);
    ctx.gpr[8] = (0u | 180u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813F8Cu) goto L_08813F8C;
    return;
L_08813F8C:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08813F9Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813F9Cu) goto L_08813F9C;
    return;
L_08813F9C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[30];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_08813FDC;
      }
      goto L_08813FB4;
    }
}
L_08813FB4:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x08813FCCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813FCCu) goto L_08813FCC;
    return;
L_08813FCC:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08813FDCu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 761u, 0x0880FD24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08813FDCu) goto L_08813FDC;
    return;
L_08813FDC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 5u, 0x08814060u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08813FE8;
    }
L_08813FE8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 5u, 0x08814060u>(ctx, &aot_mem, &hot_regs); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 1u, 0x08814000u>(ctx, &aot_mem, &hot_regs); return;
    }
}

void recomp_unit_0003(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0003_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_3(Runtime &runtime) {
    runtime.register_generated_unit(3u, 0x08810000u, 16384u, &recomp_unit_0003, &recomp_unit_0003_entry);
    runtime.register_function(0x08810000u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881000Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810018u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810024u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810030u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881003Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810048u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810054u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810060u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881006Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810078u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810084u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810090u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881009Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088100FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810108u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810114u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810120u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881012Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810138u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810144u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810150u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810178u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810188u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810194u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881019Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088101F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810200u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881020Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810218u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810224u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810230u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881023Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810248u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810254u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810260u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881026Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810278u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810284u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810290u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881029Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088102FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810308u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810314u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810320u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881032Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810338u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810348u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810358u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810364u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810370u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881037Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810388u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810394u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088103F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810400u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881040Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810418u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810424u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810430u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881043Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810448u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810454u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810460u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881046Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810474u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810484u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088104F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810500u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881050Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810580u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810594u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088105E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810600u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881060Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810610u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810618u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810628u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810634u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810640u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810650u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810658u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810668u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881067Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810688u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088106FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810708u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881070Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810714u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810764u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810778u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810798u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088107ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810810u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088108FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881090Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881094Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810958u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810968u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810980u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088109F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810A58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810ABCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810ACCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810AFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810B94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810BF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810C9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810CD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810D94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810DFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E14u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810E94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810ECCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810EF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810F94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08810FFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811010u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811018u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811020u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811028u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811030u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881103Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881104Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881105Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811068u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811074u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811080u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811090u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881109Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088110FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811104u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881110Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881111Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811128u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811138u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811148u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881115Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811164u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881116Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811174u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881117Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811184u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811190u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088111F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811200u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811210u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881121Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811234u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881123Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811248u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811250u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811254u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811274u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811278u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811288u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811294u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088112FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811308u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811310u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811320u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811328u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811360u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811384u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811394u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088113E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811408u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811410u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811424u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811438u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881144Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881147Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811484u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811498u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088114E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088114F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811504u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881150Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811514u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811520u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881152Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811544u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811554u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881155Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811564u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811578u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088115B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811608u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811618u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811630u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811654u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881166Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881168Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088116ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811748u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811754u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811760u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811768u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811778u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811784u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811790u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881179Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088117F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811800u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811818u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811830u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811838u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811844u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811850u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811858u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811860u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881186Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811874u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088118DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811914u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811924u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881192Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881197Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088119F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811A70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ADCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811AF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B4Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811B94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811BFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811C98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811CFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D14u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811D98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811DF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E1Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811E98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ECCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ED0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811ED8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811EF4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F00u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F14u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F90u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811F9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08811FF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812000u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812008u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812014u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812020u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881202Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812034u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812038u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812040u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812048u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812050u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881205Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812068u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812074u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881207Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812080u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812088u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812090u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812098u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088120F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812104u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881210Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812110u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812118u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812120u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812128u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812134u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812140u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881214Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812154u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812158u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812160u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812168u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812170u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881217Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812188u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812194u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881219Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088121F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812200u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881220Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812218u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812224u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881222Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812230u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812238u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812240u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812248u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812254u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812260u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881226Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812274u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812278u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812280u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812288u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812290u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881229Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088122FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812304u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812308u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812310u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812318u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812320u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881232Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812338u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812344u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881234Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812350u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812358u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812360u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812368u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812374u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812380u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881238Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812394u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812398u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088123F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812404u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812410u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881241Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812424u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812428u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812430u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812438u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812440u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881244Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812458u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812464u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881246Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812470u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812478u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812480u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812488u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812494u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088124FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812500u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812508u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812510u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812518u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812524u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812530u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881253Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812544u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812548u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812550u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812558u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812560u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881256Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812578u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812584u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881258Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812590u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812598u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125B4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125E0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088125FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812608u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812614u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881261Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812620u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812628u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812630u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812638u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812644u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812650u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881265Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812664u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812668u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812670u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812678u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812680u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881268Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812698u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088126F4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812700u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812708u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881270Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812714u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881271Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812728u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812730u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812740u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881274Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812758u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812764u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812770u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812778u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881277Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812784u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881278Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881279Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088127F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812808u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812814u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812820u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881282Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812834u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812838u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812840u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812848u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812854u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881285Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812868u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881286Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088128F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812900u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129ECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088129FCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A58u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812A6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AD8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812AF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812B94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812BC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C54u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C64u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C78u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812C94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CA0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CA4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812CECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D40u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D7Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D88u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812D98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812DFCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E08u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E10u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812E80u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812ECCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812ED8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812EECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F20u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F38u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F44u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F50u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812F84u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FE0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FECu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08812FF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813008u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813018u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813024u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881302Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813078u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813080u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813090u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130D0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088130E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813100u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881313Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813144u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813158u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881316Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813174u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881318Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813194u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131F0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088131F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813204u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881320Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813210u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813220u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881322Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813244u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881324Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813254u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881325Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813264u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813268u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813278u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813294u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132A0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088132D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813308u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813318u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813328u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813334u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813344u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881334Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813358u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881335Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813368u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813370u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881339Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133A4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088133F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813404u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881340Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881341Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813434u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813444u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881344Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813458u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813468u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813478u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881348Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813494u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088134DCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088134E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813504u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813514u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813520u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813528u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813540u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813550u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135B8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088135C8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881362Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881364Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813658u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813664u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813670u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813674u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813678u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813688u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813690u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088136C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813710u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813740u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881374Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881375Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881376Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813794u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137C4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088137D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881383Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813858u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813870u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881387Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813888u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813890u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138A8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138B0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138C0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138D8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088138F8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813908u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813914u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813924u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813934u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813944u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813950u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813960u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813970u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813980u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881398Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x0881399Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139ACu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139BCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139CCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139D4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139E4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x088139E8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A0Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A6Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A74u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813A98u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813B5Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C2Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813C3Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CB0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CB8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CC0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CC8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CD4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CE4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CE8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813CF0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D18u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D28u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D30u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D60u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813D94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813DD0u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E04u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E34u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E68u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813E94u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EA8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EC4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813ED4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813EF8u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F14u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F24u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F48u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F70u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F8Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813F9Cu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FB4u, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FCCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FDCu, &recomp_unit_0003, "recomp_unit_0003");
    runtime.register_function(0x08813FE8u, &recomp_unit_0003, "recomp_unit_0003");
}
} // namespace psprecomp
