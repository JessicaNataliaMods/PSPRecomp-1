#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0027[4096] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 10,
    0, 0, 0, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0,
    21, 0, 0, 22, 0, 23, 0, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 27,
    0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35,
    0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0,
    43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 50, 51, 0, 52, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0,
    57, 0, 58, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 67, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0,
    0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0,
    79, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0,
    0, 0, 89, 0, 90, 91, 0, 92, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 97, 98, 0, 0, 0, 99, 0,
    100, 0, 101, 0, 0, 102, 0, 0, 0, 103, 0, 104, 105, 0, 106, 107, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 110, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 115, 0, 0, 0,
    116, 117, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 127, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 133, 0,
    0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 0, 145, 0, 146, 0, 0, 0,
    147, 0, 0, 148, 0, 149, 150, 0, 0, 151, 0, 0, 152, 0, 153, 154, 0, 0, 155, 0, 0, 156, 0, 157, 158, 0, 0, 159, 0, 0, 160, 0,
    0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 165, 166, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0,
    0, 170, 0, 0, 171, 0, 0, 0, 172, 0, 0, 173, 0, 174, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 0, 0, 179, 0,
    0, 180, 0, 181, 0, 0, 182, 0, 183, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0,
    0, 191, 0, 192, 193, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 198, 0, 199, 0, 0, 200, 0, 201, 202,
    0, 0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 211, 0, 0, 0, 0, 212,
    0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 0, 218, 0, 219, 220, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0,
    0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0,
    233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0,
    244, 0, 0, 245, 0, 246, 247, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 254, 0,
    0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263, 0, 0,
    0, 264, 0, 0, 265, 0, 266, 0, 0, 267, 0, 268, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274,
    0, 275, 0, 0, 276, 0, 277, 278, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285,
    0, 286, 287, 0, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 294, 0, 295, 296, 0, 0,
    0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 303, 0, 304, 305, 0, 0, 0, 0, 306, 0, 0,
    0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 313, 314, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317,
    0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 322, 323, 0, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0,
    0, 328, 0, 329, 0, 0, 330, 0, 331, 332, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0,
    0, 339, 0, 340, 341, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0,
    0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355, 0, 0,
    0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0,
    0, 364, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0,
    395, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 402, 0, 0, 403, 0, 404, 0, 0, 0,
    405, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414,
    0, 415, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 420, 0, 0,
    0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    426, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 0, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434,
    0, 0, 435, 0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 444, 0, 0,
    0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0,
    0, 450, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 455, 456, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 462, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 466, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0,
    0, 474, 0, 475, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 484,
    0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0,
    490, 0, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500,
    0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 504, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0,
    0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 518, 0, 0, 0, 0, 519, 0, 0, 520,
    0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 523,
    0, 0, 524, 525, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 531, 0,
    0, 532, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 535, 0, 0, 0, 0, 0, 0, 0,
    0, 536, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0,
    0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0,
    0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 551, 0, 0, 552, 553, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561,
    0, 0, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569, 570, 0, 0, 0, 571, 0, 0, 0,
    0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 576, 0, 577, 0,
    0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 581, 0, 582, 0, 0, 583, 0, 584, 0, 0, 585, 0, 0, 0,
    586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0,
    590, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 598, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 602, 0, 0, 0,
    0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 605, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0,
    610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 625,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0,
    631, 0, 0, 0, 632, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 637,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641,
    642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0,
    654, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 658, 0,
    659, 0, 660, 661, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0,
    0, 0, 673, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 684, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0,
    0, 0, 687, 0, 0, 0, 0, 688, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 694, 0, 0, 695, 0, 0,
    0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 703, 0,
    0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 708, 709, 0, 0, 0,
    0, 0, 710, 0, 0, 0, 0, 711, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 715, 0, 0, 0, 0, 0, 0, 0, 716, 0,
    0, 0, 0, 717, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0,
    724, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0,
    0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    732, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736,
    0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0,
    0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 748, 749, 750, 0,
    0, 751, 0, 0, 0, 752, 0, 753, 0, 0, 754, 0, 0, 0, 0, 755, 0, 0, 756, 757, 758, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0,
    760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 765, 0,
    766, 0, 0, 767, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0,
    777, 0, 778, 0, 0, 779, 0, 780, 781, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784, 785, 786, 0, 787, 0, 0, 788, 0, 789, 790,
    0, 791, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 795, 796, 797, 0, 798, 0, 0, 799,
    0, 800, 0, 0, 801, 0, 0, 0, 802, 0, 803, 0, 0, 804, 0, 0, 0, 0, 805, 0, 806, 807, 0, 0, 0, 808, 0, 809, 0, 0, 810, 0,
    811, 0, 812, 0, 813, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 816, 0, 817, 818, 0, 819, 0, 820, 0, 0, 0, 821, 0, 822, 0, 0,
    0, 0, 0, 0, 0, 0, 823, 0, 0, 824, 0, 825, 826, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0,
    0, 0, 830, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0,
    0, 0, 0, 840, 0, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 0, 845, 0, 846, 0, 847, 0, 0, 848, 0, 849, 0,
    850, 0, 851, 0, 0, 852, 0, 853, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 0, 0, 859, 0, 860, 861, 0, 0, 862, 0, 863, 0,
    864, 0, 0, 0, 865, 0, 866, 0, 867, 0, 0, 868, 0, 0, 869, 0, 870, 0, 871, 0, 0, 0, 0, 872, 0, 0, 873, 0, 0, 874, 0, 875,
    0, 876, 0, 877, 0, 0, 0, 878, 0, 879, 0, 880, 0, 0, 881, 0, 0, 882, 0, 883, 0, 884, 0, 0, 0, 0, 885, 0, 0, 886, 0, 0,
    887, 0, 888, 0, 0, 0, 889, 0, 890, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 0, 893, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 897, 0, 0, 898, 0, 0, 0, 0, 899, 0, 900, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 0, 0, 0, 0,
    903, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 905, 0, 0, 0, 0, 0, 0, 906, 0, 907, 0, 908, 0, 909, 0, 0, 910, 0, 0, 0, 0,
    911, 912, 913, 0, 914, 0, 0, 915, 0, 916, 0, 0, 917, 0, 918, 0, 0, 0, 0, 0, 919, 0, 920, 921, 0, 922, 0, 0, 0, 923, 0, 0,
    0, 0, 0, 924, 0, 925, 0, 926, 0, 0, 927, 0, 928, 0, 929, 0, 930, 0, 0, 931, 0, 0, 0, 932, 0, 933, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 934, 0, 935, 0, 0, 0, 0, 0, 936, 0, 937, 0, 0, 0, 0, 938, 0, 939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 940,
};
void recomp_unit_0027_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08870000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0027[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08870000;
    case 2u: goto L_08870018;
    case 3u: goto L_08870040;
    case 4u: goto L_08870050;
    case 5u: goto L_08870058;
    case 6u: goto L_08870130;
    case 7u: goto L_088701C0;
    case 8u: goto L_088701D8;
    case 9u: goto L_088701E8;
    case 10u: goto L_088701FC;
    case 11u: goto L_0887020C;
    case 12u: goto L_0887021C;
    case 13u: goto L_08870224;
    case 14u: goto L_08870234;
    case 15u: goto L_0887023C;
    case 16u: goto L_08870244;
    case 17u: goto L_0887024C;
    case 18u: goto L_08870254;
    case 19u: goto L_08870260;
    case 20u: goto L_08870268;
    case 21u: goto L_08870280;
    case 22u: goto L_0887028C;
    case 23u: goto L_08870294;
    case 24u: goto L_088702A0;
    case 25u: goto L_088702A4;
    case 26u: goto L_088702D8;
    case 27u: goto L_088702FC;
    case 28u: goto L_08870318;
    case 29u: goto L_08870320;
    case 30u: goto L_0887033C;
    case 31u: goto L_08870344;
    case 32u: goto L_0887034C;
    case 33u: goto L_08870354;
    case 34u: goto L_0887035C;
    case 35u: goto L_0887037C;
    case 36u: goto L_08870398;
    case 37u: goto L_088703A4;
    case 38u: goto L_088703BC;
    case 39u: goto L_088703C8;
    case 40u: goto L_088703D0;
    case 41u: goto L_088703E0;
    case 42u: goto L_088703EC;
    case 43u: goto L_08870400;
    case 44u: goto L_08870408;
    case 45u: goto L_08870410;
    case 46u: goto L_08870418;
    case 47u: goto L_08870420;
    case 48u: goto L_08870428;
    case 49u: goto L_08870430;
    case 50u: goto L_08870438;
    case 51u: goto L_0887043C;
    case 52u: goto L_08870444;
    case 53u: goto L_08870448;
    case 54u: goto L_08870454;
    case 55u: goto L_08870470;
    case 56u: goto L_08870478;
    case 57u: goto L_08870480;
    case 58u: goto L_08870488;
    case 59u: goto L_08870494;
    case 60u: goto L_0887049C;
    case 61u: goto L_088704A4;
    case 62u: goto L_088704AC;
    case 63u: goto L_088704BC;
    case 64u: goto L_088704C8;
    case 65u: goto L_088704D8;
    case 66u: goto L_088704E4;
    case 67u: goto L_088704F8;
    case 68u: goto L_0887054C;
    case 69u: goto L_08870558;
    case 70u: goto L_08870564;
    case 71u: goto L_0887056C;
    case 72u: goto L_08870584;
    case 73u: goto L_0887059C;
    case 74u: goto L_088705B0;
    case 75u: goto L_088705C0;
    case 76u: goto L_088705D0;
    case 77u: goto L_088705DC;
    case 78u: goto L_088705F0;
    case 79u: goto L_08870600;
    case 80u: goto L_08870608;
    case 81u: goto L_08870618;
    case 82u: goto L_08870624;
    case 83u: goto L_08870638;
    case 84u: goto L_08870644;
    case 85u: goto L_08870650;
    case 86u: goto L_08870658;
    case 87u: goto L_08870664;
    case 88u: goto L_08870678;
    case 89u: goto L_08870688;
    case 90u: goto L_08870690;
    case 91u: goto L_08870694;
    case 92u: goto L_0887069C;
    case 93u: goto L_088706AC;
    case 94u: goto L_088706B8;
    case 95u: goto L_088706CC;
    case 96u: goto L_088706DC;
    case 97u: goto L_088706E4;
    case 98u: goto L_088706E8;
    case 99u: goto L_088706F8;
    case 100u: goto L_08870700;
    case 101u: goto L_08870708;
    case 102u: goto L_08870714;
    case 103u: goto L_08870724;
    case 104u: goto L_0887072C;
    case 105u: goto L_08870730;
    case 106u: goto L_08870738;
    case 107u: goto L_0887073C;
    case 108u: goto L_08870744;
    case 109u: goto L_0887074C;
    case 110u: goto L_08870784;
    case 111u: goto L_088707A4;
    case 112u: goto L_088707B0;
    case 113u: goto L_088707D8;
    case 114u: goto L_088707E8;
    case 115u: goto L_088707F0;
    case 116u: goto L_08870800;
    case 117u: goto L_08870804;
    case 118u: goto L_08870818;
    case 119u: goto L_08870828;
    case 120u: goto L_08870834;
    case 121u: goto L_08870844;
    case 122u: goto L_08870848;
    case 123u: goto L_0887085C;
    case 124u: goto L_08870884;
    case 125u: goto L_08870898;
    case 126u: goto L_088708B8;
    case 127u: goto L_088708BC;
    case 128u: goto L_088708C4;
    case 129u: goto L_088708D8;
    case 130u: goto L_088708E0;
    case 131u: goto L_088708EC;
    case 132u: goto L_088708F4;
    case 133u: goto L_088708F8;
    case 134u: goto L_08870904;
    case 135u: goto L_08870910;
    case 136u: goto L_08870918;
    case 137u: goto L_08870920;
    case 138u: goto L_08870928;
    case 139u: goto L_08870930;
    case 140u: goto L_08870938;
    case 141u: goto L_08870940;
    case 142u: goto L_08870948;
    case 143u: goto L_08870950;
    case 144u: goto L_08870958;
    case 145u: goto L_08870968;
    case 146u: goto L_08870970;
    case 147u: goto L_08870980;
    case 148u: goto L_0887098C;
    case 149u: goto L_08870994;
    case 150u: goto L_08870998;
    case 151u: goto L_088709A4;
    case 152u: goto L_088709B0;
    case 153u: goto L_088709B8;
    case 154u: goto L_088709BC;
    case 155u: goto L_088709C8;
    case 156u: goto L_088709D4;
    case 157u: goto L_088709DC;
    case 158u: goto L_088709E0;
    case 159u: goto L_088709EC;
    case 160u: goto L_088709F8;
    case 161u: goto L_08870A04;
    case 162u: goto L_08870A14;
    case 163u: goto L_08870A2C;
    case 164u: goto L_08870A38;
    case 165u: goto L_08870A40;
    case 166u: goto L_08870A44;
    case 167u: goto L_08870A58;
    case 168u: goto L_08870A68;
    case 169u: goto L_08870A74;
    case 170u: goto L_08870A84;
    case 171u: goto L_08870A90;
    case 172u: goto L_08870AA0;
    case 173u: goto L_08870AAC;
    case 174u: goto L_08870AB4;
    case 175u: goto L_08870AB8;
    case 176u: goto L_08870ACC;
    case 177u: goto L_08870ADC;
    case 178u: goto L_08870AE8;
    case 179u: goto L_08870AF8;
    case 180u: goto L_08870B04;
    case 181u: goto L_08870B0C;
    case 182u: goto L_08870B18;
    case 183u: goto L_08870B20;
    case 184u: goto L_08870B24;
    case 185u: goto L_08870B38;
    case 186u: goto L_08870B48;
    case 187u: goto L_08870B54;
    case 188u: goto L_08870B64;
    case 189u: goto L_08870B70;
    case 190u: goto L_08870B78;
    case 191u: goto L_08870B84;
    case 192u: goto L_08870B8C;
    case 193u: goto L_08870B90;
    case 194u: goto L_08870BA4;
    case 195u: goto L_08870BB4;
    case 196u: goto L_08870BC0;
    case 197u: goto L_08870BD0;
    case 198u: goto L_08870BDC;
    case 199u: goto L_08870BE4;
    case 200u: goto L_08870BF0;
    case 201u: goto L_08870BF8;
    case 202u: goto L_08870BFC;
    case 203u: goto L_08870C10;
    case 204u: goto L_08870C20;
    case 205u: goto L_08870C2C;
    case 206u: goto L_08870C3C;
    case 207u: goto L_08870C48;
    case 208u: goto L_08870C50;
    case 209u: goto L_08870C5C;
    case 210u: goto L_08870C64;
    case 211u: goto L_08870C68;
    case 212u: goto L_08870C7C;
    case 213u: goto L_08870C8C;
    case 214u: goto L_08870C98;
    case 215u: goto L_08870CA8;
    case 216u: goto L_08870CB4;
    case 217u: goto L_08870CBC;
    case 218u: goto L_08870CC8;
    case 219u: goto L_08870CD0;
    case 220u: goto L_08870CD4;
    case 221u: goto L_08870CE8;
    case 222u: goto L_08870CF8;
    case 223u: goto L_08870D04;
    case 224u: goto L_08870D14;
    case 225u: goto L_08870D20;
    case 226u: goto L_08870D28;
    case 227u: goto L_08870D34;
    case 228u: goto L_08870D3C;
    case 229u: goto L_08870D40;
    case 230u: goto L_08870D54;
    case 231u: goto L_08870D64;
    case 232u: goto L_08870D70;
    case 233u: goto L_08870D80;
    case 234u: goto L_08870D8C;
    case 235u: goto L_08870D94;
    case 236u: goto L_08870DA0;
    case 237u: goto L_08870DA8;
    case 238u: goto L_08870DAC;
    case 239u: goto L_08870DC0;
    case 240u: goto L_08870DD0;
    case 241u: goto L_08870DDC;
    case 242u: goto L_08870DEC;
    case 243u: goto L_08870DF8;
    case 244u: goto L_08870E00;
    case 245u: goto L_08870E0C;
    case 246u: goto L_08870E14;
    case 247u: goto L_08870E18;
    case 248u: goto L_08870E2C;
    case 249u: goto L_08870E3C;
    case 250u: goto L_08870E48;
    case 251u: goto L_08870E58;
    case 252u: goto L_08870E64;
    case 253u: goto L_08870E6C;
    case 254u: goto L_08870E78;
    case 255u: goto L_08870E84;
    case 256u: goto L_08870E94;
    case 257u: goto L_08870EAC;
    case 258u: goto L_08870EB8;
    case 259u: goto L_08870EC0;
    case 260u: goto L_08870EC4;
    case 261u: goto L_08870ED8;
    case 262u: goto L_08870EE8;
    case 263u: goto L_08870EF4;
    case 264u: goto L_08870F04;
    case 265u: goto L_08870F10;
    case 266u: goto L_08870F18;
    case 267u: goto L_08870F24;
    case 268u: goto L_08870F2C;
    case 269u: goto L_08870F30;
    case 270u: goto L_08870F44;
    case 271u: goto L_08870F54;
    case 272u: goto L_08870F60;
    case 273u: goto L_08870F70;
    case 274u: goto L_08870F7C;
    case 275u: goto L_08870F84;
    case 276u: goto L_08870F90;
    case 277u: goto L_08870F98;
    case 278u: goto L_08870F9C;
    case 279u: goto L_08870FB0;
    case 280u: goto L_08870FC0;
    case 281u: goto L_08870FCC;
    case 282u: goto L_08870FDC;
    case 283u: goto L_08870FE8;
    case 284u: goto L_08870FF0;
    case 285u: goto L_08870FFC;
    case 286u: goto L_08871004;
    case 287u: goto L_08871008;
    case 288u: goto L_0887101C;
    case 289u: goto L_0887102C;
    case 290u: goto L_08871038;
    case 291u: goto L_08871048;
    case 292u: goto L_08871054;
    case 293u: goto L_0887105C;
    case 294u: goto L_08871068;
    case 295u: goto L_08871070;
    case 296u: goto L_08871074;
    case 297u: goto L_08871088;
    case 298u: goto L_08871098;
    case 299u: goto L_088710A4;
    case 300u: goto L_088710B4;
    case 301u: goto L_088710C0;
    case 302u: goto L_088710C8;
    case 303u: goto L_088710D4;
    case 304u: goto L_088710DC;
    case 305u: goto L_088710E0;
    case 306u: goto L_088710F4;
    case 307u: goto L_08871104;
    case 308u: goto L_08871110;
    case 309u: goto L_08871120;
    case 310u: goto L_0887112C;
    case 311u: goto L_08871134;
    case 312u: goto L_08871140;
    case 313u: goto L_08871148;
    case 314u: goto L_0887114C;
    case 315u: goto L_08871160;
    case 316u: goto L_08871170;
    case 317u: goto L_0887117C;
    case 318u: goto L_0887118C;
    case 319u: goto L_08871198;
    case 320u: goto L_088711A0;
    case 321u: goto L_088711AC;
    case 322u: goto L_088711B4;
    case 323u: goto L_088711B8;
    case 324u: goto L_088711CC;
    case 325u: goto L_088711DC;
    case 326u: goto L_088711E8;
    case 327u: goto L_088711F8;
    case 328u: goto L_08871204;
    case 329u: goto L_0887120C;
    case 330u: goto L_08871218;
    case 331u: goto L_08871220;
    case 332u: goto L_08871224;
    case 333u: goto L_08871238;
    case 334u: goto L_08871248;
    case 335u: goto L_08871254;
    case 336u: goto L_08871264;
    case 337u: goto L_08871270;
    case 338u: goto L_08871278;
    case 339u: goto L_08871284;
    case 340u: goto L_0887128C;
    case 341u: goto L_08871290;
    case 342u: goto L_088712A4;
    case 343u: goto L_088712B4;
    case 344u: goto L_088712C0;
    case 345u: goto L_088712D0;
    case 346u: goto L_088712DC;
    case 347u: goto L_088712E4;
    case 348u: goto L_088712F0;
    case 349u: goto L_08871308;
    case 350u: goto L_0887131C;
    case 351u: goto L_08871328;
    case 352u: goto L_08871354;
    case 353u: goto L_08871360;
    case 354u: goto L_0887136C;
    case 355u: goto L_08871374;
    case 356u: goto L_0887138C;
    case 357u: goto L_08871398;
    case 358u: goto L_088713A0;
    case 359u: goto L_088713B4;
    case 360u: goto L_088713C4;
    case 361u: goto L_088713D0;
    case 362u: goto L_088713E8;
    case 363u: goto L_088713F4;
    case 364u: goto L_08871404;
    case 365u: goto L_08871414;
    case 366u: goto L_08871424;
    case 367u: goto L_08871430;
    case 368u: goto L_08871438;
    case 369u: goto L_08871440;
    case 370u: goto L_088714AC;
    case 371u: goto L_088714B4;
    case 372u: goto L_088714BC;
    case 373u: goto L_088714C8;
    case 374u: goto L_088714D0;
    case 375u: goto L_088714E4;
    case 376u: goto L_088714F8;
    case 377u: goto L_08871510;
    case 378u: goto L_08871518;
    case 379u: goto L_08871520;
    case 380u: goto L_0887152C;
    case 381u: goto L_08871534;
    case 382u: goto L_0887154C;
    case 383u: goto L_08871564;
    case 384u: goto L_0887156C;
    case 385u: goto L_088715A0;
    case 386u: goto L_088715AC;
    case 387u: goto L_088715B0;
    case 388u: goto L_088715BC;
    case 389u: goto L_088715EC;
    case 390u: goto L_088715F8;
    case 391u: goto L_08871610;
    case 392u: goto L_08871630;
    case 393u: goto L_08871648;
    case 394u: goto L_08871664;
    case 395u: goto L_08871680;
    case 396u: goto L_08871688;
    case 397u: goto L_08871698;
    case 398u: goto L_088716A0;
    case 399u: goto L_088716AC;
    case 400u: goto L_088716C0;
    case 401u: goto L_088716D4;
    case 402u: goto L_088716DC;
    case 403u: goto L_088716E8;
    case 404u: goto L_088716F0;
    case 405u: goto L_08871700;
    case 406u: goto L_08871708;
    case 407u: goto L_08871710;
    case 408u: goto L_08871728;
    case 409u: goto L_08871738;
    case 410u: goto L_08871748;
    case 411u: goto L_08871750;
    case 412u: goto L_0887175C;
    case 413u: goto L_0887176C;
    case 414u: goto L_0887177C;
    case 415u: goto L_08871784;
    case 416u: goto L_08871790;
    case 417u: goto L_0887179C;
    case 418u: goto L_088717A4;
    case 419u: goto L_088717F0;
    case 420u: goto L_088717F4;
    case 421u: goto L_0887180C;
    case 422u: goto L_08871820;
    case 423u: goto L_08871838;
    case 424u: goto L_08871840;
    case 425u: goto L_08871850;
    case 426u: goto L_08871880;
    case 427u: goto L_08871894;
    case 428u: goto L_088718A0;
    case 429u: goto L_088718AC;
    case 430u: goto L_088718BC;
    case 431u: goto L_088718C4;
    case 432u: goto L_088718CC;
    case 433u: goto L_088718F4;
    case 434u: goto L_088718FC;
    case 435u: goto L_08871908;
    case 436u: goto L_08871910;
    case 437u: goto L_08871918;
    case 438u: goto L_0887192C;
    case 439u: goto L_0887193C;
    case 440u: goto L_08871944;
    case 441u: goto L_08871958;
    case 442u: goto L_08871968;
    case 443u: goto L_08871970;
    case 444u: goto L_08871974;
    case 445u: goto L_08871994;
    case 446u: goto L_088719B4;
    case 447u: goto L_088719D0;
    case 448u: goto L_088719E8;
    case 449u: goto L_088719F0;
    case 450u: goto L_08871A04;
    case 451u: goto L_08871A0C;
    case 452u: goto L_08871A18;
    case 453u: goto L_08871A44;
    case 454u: goto L_08871A4C;
    case 455u: goto L_08871A5C;
    case 456u: goto L_08871A60;
    case 457u: goto L_08871A78;
    case 458u: goto L_08871AA8;
    case 459u: goto L_08871AD0;
    case 460u: goto L_08871AD8;
    case 461u: goto L_08871AE4;
    case 462u: goto L_08871B1C;
    case 463u: goto L_08871B20;
    case 464u: goto L_08871B50;
    case 465u: goto L_08871B64;
    case 466u: goto L_08871B68;
    case 467u: goto L_08871BC8;
    case 468u: goto L_08871BD4;
    case 469u: goto L_08871C08;
    case 470u: goto L_08871C2C;
    case 471u: goto L_08871C44;
    case 472u: goto L_08871C8C;
    case 473u: goto L_08871CEC;
    case 474u: goto L_08871D04;
    case 475u: goto L_08871D0C;
    case 476u: goto L_08871D14;
    case 477u: goto L_08871D20;
    case 478u: goto L_08871D2C;
    case 479u: goto L_08871D44;
    case 480u: goto L_08871D4C;
    case 481u: goto L_08871D54;
    case 482u: goto L_08871D60;
    case 483u: goto L_08871D74;
    case 484u: goto L_08871D7C;
    case 485u: goto L_08871D88;
    case 486u: goto L_08871DAC;
    case 487u: goto L_08871DB8;
    case 488u: goto L_08871DE0;
    case 489u: goto L_08871DE8;
    case 490u: goto L_08871E00;
    case 491u: goto L_08871E14;
    case 492u: goto L_08871E20;
    case 493u: goto L_08871E28;
    case 494u: goto L_08871E40;
    case 495u: goto L_08871E64;
    case 496u: goto L_08871E80;
    case 497u: goto L_08871ECC;
    case 498u: goto L_08871EEC;
    case 499u: goto L_08871EF4;
    case 500u: goto L_08871EFC;
    case 501u: goto L_08871F1C;
    case 502u: goto L_08871F30;
    case 503u: goto L_08871F44;
    case 504u: goto L_08871F48;
    case 505u: goto L_08871F68;
    case 506u: goto L_08871F94;
    case 507u: goto L_08871FB0;
    case 508u: goto L_08871FC4;
    case 509u: goto L_08872008;
    case 510u: goto L_08872014;
    case 511u: goto L_0887201C;
    case 512u: goto L_08872048;
    case 513u: goto L_08872070;
    case 514u: goto L_08872088;
    case 515u: goto L_08872098;
    case 516u: goto L_088720AC;
    case 517u: goto L_088720D8;
    case 518u: goto L_088720DC;
    case 519u: goto L_088720F0;
    case 520u: goto L_088720FC;
    case 521u: goto L_08872104;
    case 522u: goto L_08872148;
    case 523u: goto L_0887217C;
    case 524u: goto L_08872188;
    case 525u: goto L_0887218C;
    case 526u: goto L_088721A0;
    case 527u: goto L_088721A8;
    case 528u: goto L_088721B8;
    case 529u: goto L_088721C8;
    case 530u: goto L_088721D8;
    case 531u: goto L_088721F8;
    case 532u: goto L_08872204;
    case 533u: goto L_08872208;
    case 534u: goto L_0887225C;
    case 535u: goto L_08872260;
    case 536u: goto L_08872284;
    case 537u: goto L_08872294;
    case 538u: goto L_088722AC;
    case 539u: goto L_088722B4;
    case 540u: goto L_088722F8;
    case 541u: goto L_08872308;
    case 542u: goto L_0887231C;
    case 543u: goto L_0887232C;
    case 544u: goto L_08872348;
    case 545u: goto L_08872370;
    case 546u: goto L_08872384;
    case 547u: goto L_08872398;
    case 548u: goto L_088723A8;
    case 549u: goto L_088723C0;
    case 550u: goto L_088723DC;
    case 551u: goto L_0887240C;
    case 552u: goto L_08872418;
    case 553u: goto L_0887241C;
    case 554u: goto L_08872438;
    case 555u: goto L_08872440;
    case 556u: goto L_08872450;
    case 557u: goto L_08872484;
    case 558u: goto L_08872490;
    case 559u: goto L_088724A8;
    case 560u: goto L_088724C4;
    case 561u: goto L_088724FC;
    case 562u: goto L_0887250C;
    case 563u: goto L_0887251C;
    case 564u: goto L_08872524;
    case 565u: goto L_08872530;
    case 566u: goto L_0887253C;
    case 567u: goto L_08872548;
    case 568u: goto L_08872554;
    case 569u: goto L_0887255C;
    case 570u: goto L_08872560;
    case 571u: goto L_08872570;
    case 572u: goto L_08872594;
    case 573u: goto L_0887259C;
    case 574u: goto L_088725B4;
    case 575u: goto L_088725D8;
    case 576u: goto L_088725F0;
    case 577u: goto L_088725F8;
    case 578u: goto L_08872608;
    case 579u: goto L_08872634;
    case 580u: goto L_0887263C;
    case 581u: goto L_08872648;
    case 582u: goto L_08872650;
    case 583u: goto L_0887265C;
    case 584u: goto L_08872664;
    case 585u: goto L_08872670;
    case 586u: goto L_08872680;
    case 587u: goto L_08872694;
    case 588u: goto L_088726D4;
    case 589u: goto L_088726E4;
    case 590u: goto L_08872700;
    case 591u: goto L_08872708;
    case 592u: goto L_08872734;
    case 593u: goto L_0887275C;
    case 594u: goto L_08872788;
    case 595u: goto L_088727A0;
    case 596u: goto L_088727A8;
    case 597u: goto L_088727B0;
    case 598u: goto L_088727C0;
    case 599u: goto L_088727C8;
    case 600u: goto L_088727D8;
    case 601u: goto L_088727E8;
    case 602u: goto L_088727F0;
    case 603u: goto L_08872814;
    case 604u: goto L_08872824;
    case 605u: goto L_08872830;
    case 606u: goto L_08872834;
    case 607u: goto L_08872848;
    case 608u: goto L_0887285C;
    case 609u: goto L_08872874;
    case 610u: goto L_08872880;
    case 611u: goto L_08872890;
    case 612u: goto L_088728A0;
    case 613u: goto L_088728BC;
    case 614u: goto L_088728CC;
    case 615u: goto L_088728E4;
    case 616u: goto L_088728F4;
    case 617u: goto L_08872934;
    case 618u: goto L_0887293C;
    case 619u: goto L_08872958;
    case 620u: goto L_088729A4;
    case 621u: goto L_088729AC;
    case 622u: goto L_088729C4;
    case 623u: goto L_088729D4;
    case 624u: goto L_088729F8;
    case 625u: goto L_088729FC;
    case 626u: goto L_08872A24;
    case 627u: goto L_08872A50;
    case 628u: goto L_08872A58;
    case 629u: goto L_08872A68;
    case 630u: goto L_08872A78;
    case 631u: goto L_08872A80;
    case 632u: goto L_08872A90;
    case 633u: goto L_08872A94;
    case 634u: goto L_08872AA8;
    case 635u: goto L_08872AD4;
    case 636u: goto L_08872ADC;
    case 637u: goto L_08872AFC;
    case 638u: goto L_08872B38;
    case 639u: goto L_08872B50;
    case 640u: goto L_08872B68;
    case 641u: goto L_08872B7C;
    case 642u: goto L_08872B80;
    case 643u: goto L_08872B8C;
    case 644u: goto L_08872BB8;
    case 645u: goto L_08872C00;
    case 646u: goto L_08872C3C;
    case 647u: goto L_08872C58;
    case 648u: goto L_08872C70;
    case 649u: goto L_08872C78;
    case 650u: goto L_08872CC8;
    case 651u: goto L_08872CDC;
    case 652u: goto L_08872CE8;
    case 653u: goto L_08872CF0;
    case 654u: goto L_08872D00;
    case 655u: goto L_08872D0C;
    case 656u: goto L_08872D68;
    case 657u: goto L_08872D70;
    case 658u: goto L_08872D78;
    case 659u: goto L_08872D80;
    case 660u: goto L_08872D88;
    case 661u: goto L_08872D8C;
    case 662u: goto L_08872DA0;
    case 663u: goto L_08872DA8;
    case 664u: goto L_08872DE0;
    case 665u: goto L_08872E0C;
    case 666u: goto L_08872E30;
    case 667u: goto L_08872E60;
    case 668u: goto L_08872E68;
    case 669u: goto L_08872EB0;
    case 670u: goto L_08872EC8;
    case 671u: goto L_08872EDC;
    case 672u: goto L_08872EE8;
    case 673u: goto L_08872F08;
    case 674u: goto L_08872F10;
    case 675u: goto L_08872F18;
    case 676u: goto L_08872F48;
    case 677u: goto L_08872F4C;
    case 678u: goto L_08872F84;
    case 679u: goto L_08873010;
    case 680u: goto L_08873020;
    case 681u: goto L_0887303C;
    case 682u: goto L_08873044;
    case 683u: goto L_0887304C;
    case 684u: goto L_08873050;
    case 685u: goto L_0887305C;
    case 686u: goto L_08873068;
    case 687u: goto L_08873088;
    case 688u: goto L_0887309C;
    case 689u: goto L_088730A0;
    case 690u: goto L_088730AC;
    case 691u: goto L_088730B8;
    case 692u: goto L_088730D8;
    case 693u: goto L_088730E0;
    case 694u: goto L_088730E8;
    case 695u: goto L_088730F4;
    case 696u: goto L_08873110;
    case 697u: goto L_0887311C;
    case 698u: goto L_08873130;
    case 699u: goto L_0887313C;
    case 700u: goto L_08873148;
    case 701u: goto L_08873168;
    case 702u: goto L_08873170;
    case 703u: goto L_08873178;
    case 704u: goto L_08873194;
    case 705u: goto L_088731A8;
    case 706u: goto L_088731CC;
    case 707u: goto L_088731D8;
    case 708u: goto L_088731EC;
    case 709u: goto L_088731F0;
    case 710u: goto L_08873208;
    case 711u: goto L_0887321C;
    case 712u: goto L_08873224;
    case 713u: goto L_0887322C;
    case 714u: goto L_08873250;
    case 715u: goto L_08873258;
    case 716u: goto L_08873278;
    case 717u: goto L_0887328C;
    case 718u: goto L_08873294;
    case 719u: goto L_0887329C;
    case 720u: goto L_088732AC;
    case 721u: goto L_088732C0;
    case 722u: goto L_088732CC;
    case 723u: goto L_088732E8;
    case 724u: goto L_08873300;
    case 725u: goto L_0887330C;
    case 726u: goto L_08873324;
    case 727u: goto L_0887333C;
    case 728u: goto L_08873354;
    case 729u: goto L_0887336C;
    case 730u: goto L_0887338C;
    case 731u: goto L_088733D0;
    case 732u: goto L_08873400;
    case 733u: goto L_08873418;
    case 734u: goto L_08873448;
    case 735u: goto L_08873464;
    case 736u: goto L_0887347C;
    case 737u: goto L_08873498;
    case 738u: goto L_088734A8;
    case 739u: goto L_088734BC;
    case 740u: goto L_088734EC;
    case 741u: goto L_08873504;
    case 742u: goto L_0887350C;
    case 743u: goto L_0887352C;
    case 744u: goto L_0887353C;
    case 745u: goto L_08873544;
    case 746u: goto L_08873550;
    case 747u: goto L_08873564;
    case 748u: goto L_08873570;
    case 749u: goto L_08873574;
    case 750u: goto L_08873578;
    case 751u: goto L_08873584;
    case 752u: goto L_08873594;
    case 753u: goto L_0887359C;
    case 754u: goto L_088735A8;
    case 755u: goto L_088735BC;
    case 756u: goto L_088735C8;
    case 757u: goto L_088735CC;
    case 758u: goto L_088735D0;
    case 759u: goto L_088735DC;
    case 760u: goto L_08873600;
    case 761u: goto L_08873630;
    case 762u: goto L_08873638;
    case 763u: goto L_08873644;
    case 764u: goto L_08873668;
    case 765u: goto L_08873678;
    case 766u: goto L_08873680;
    case 767u: goto L_0887368C;
    case 768u: goto L_08873698;
    case 769u: goto L_088736A0;
    case 770u: goto L_088736A8;
    case 771u: goto L_088736B0;
    case 772u: goto L_088736B8;
    case 773u: goto L_088736C4;
    case 774u: goto L_088736CC;
    case 775u: goto L_088736D4;
    case 776u: goto L_088736E8;
    case 777u: goto L_08873700;
    case 778u: goto L_08873708;
    case 779u: goto L_08873714;
    case 780u: goto L_0887371C;
    case 781u: goto L_08873720;
    case 782u: goto L_0887372C;
    case 783u: goto L_0887373C;
    case 784u: goto L_08873754;
    case 785u: goto L_08873758;
    case 786u: goto L_0887375C;
    case 787u: goto L_08873764;
    case 788u: goto L_08873770;
    case 789u: goto L_08873778;
    case 790u: goto L_0887377C;
    case 791u: goto L_08873784;
    case 792u: goto L_0887378C;
    case 793u: goto L_088737A0;
    case 794u: goto L_088737BC;
    case 795u: goto L_088737E0;
    case 796u: goto L_088737E4;
    case 797u: goto L_088737E8;
    case 798u: goto L_088737F0;
    case 799u: goto L_088737FC;
    case 800u: goto L_08873804;
    case 801u: goto L_08873810;
    case 802u: goto L_08873820;
    case 803u: goto L_08873828;
    case 804u: goto L_08873834;
    case 805u: goto L_08873848;
    case 806u: goto L_08873850;
    case 807u: goto L_08873854;
    case 808u: goto L_08873864;
    case 809u: goto L_0887386C;
    case 810u: goto L_08873878;
    case 811u: goto L_08873880;
    case 812u: goto L_08873888;
    case 813u: goto L_08873890;
    case 814u: goto L_088738A0;
    case 815u: goto L_088738AC;
    case 816u: goto L_088738C0;
    case 817u: goto L_088738C8;
    case 818u: goto L_088738CC;
    case 819u: goto L_088738D4;
    case 820u: goto L_088738DC;
    case 821u: goto L_088738EC;
    case 822u: goto L_088738F4;
    case 823u: goto L_08873918;
    case 824u: goto L_08873924;
    case 825u: goto L_0887392C;
    case 826u: goto L_08873930;
    case 827u: goto L_08873938;
    case 828u: goto L_0887394C;
    case 829u: goto L_08873968;
    case 830u: goto L_08873988;
    case 831u: goto L_08873994;
    case 832u: goto L_088739A0;
    case 833u: goto L_088739B4;
    case 834u: goto L_088739BC;
    case 835u: goto L_088739C4;
    case 836u: goto L_088739CC;
    case 837u: goto L_088739D4;
    case 838u: goto L_088739E4;
    case 839u: goto L_088739EC;
    case 840u: goto L_08873A0C;
    case 841u: goto L_08873A1C;
    case 842u: goto L_08873A24;
    case 843u: goto L_08873A34;
    case 844u: goto L_08873A44;
    case 845u: goto L_08873A54;
    case 846u: goto L_08873A5C;
    case 847u: goto L_08873A64;
    case 848u: goto L_08873A70;
    case 849u: goto L_08873A78;
    case 850u: goto L_08873A80;
    case 851u: goto L_08873A88;
    case 852u: goto L_08873A94;
    case 853u: goto L_08873A9C;
    case 854u: goto L_08873AA8;
    case 855u: goto L_08873AB0;
    case 856u: goto L_08873AB8;
    case 857u: goto L_08873AC0;
    case 858u: goto L_08873AC8;
    case 859u: goto L_08873AD8;
    case 860u: goto L_08873AE0;
    case 861u: goto L_08873AE4;
    case 862u: goto L_08873AF0;
    case 863u: goto L_08873AF8;
    case 864u: goto L_08873B00;
    case 865u: goto L_08873B10;
    case 866u: goto L_08873B18;
    case 867u: goto L_08873B20;
    case 868u: goto L_08873B2C;
    case 869u: goto L_08873B38;
    case 870u: goto L_08873B40;
    case 871u: goto L_08873B48;
    case 872u: goto L_08873B5C;
    case 873u: goto L_08873B68;
    case 874u: goto L_08873B74;
    case 875u: goto L_08873B7C;
    case 876u: goto L_08873B84;
    case 877u: goto L_08873B8C;
    case 878u: goto L_08873B9C;
    case 879u: goto L_08873BA4;
    case 880u: goto L_08873BAC;
    case 881u: goto L_08873BB8;
    case 882u: goto L_08873BC4;
    case 883u: goto L_08873BCC;
    case 884u: goto L_08873BD4;
    case 885u: goto L_08873BE8;
    case 886u: goto L_08873BF4;
    case 887u: goto L_08873C00;
    case 888u: goto L_08873C08;
    case 889u: goto L_08873C18;
    case 890u: goto L_08873C20;
    case 891u: goto L_08873C40;
    case 892u: goto L_08873CA0;
    case 893u: goto L_08873CAC;
    case 894u: goto L_08873CE4;
    case 895u: goto L_08873D10;
    case 896u: goto L_08873D30;
    case 897u: goto L_08873D88;
    case 898u: goto L_08873D94;
    case 899u: goto L_08873DA8;
    case 900u: goto L_08873DB0;
    case 901u: goto L_08873DC4;
    case 902u: goto L_08873DEC;
    case 903u: goto L_08873E00;
    case 904u: goto L_08873E1C;
    case 905u: goto L_08873E2C;
    case 906u: goto L_08873E48;
    case 907u: goto L_08873E50;
    case 908u: goto L_08873E58;
    case 909u: goto L_08873E60;
    case 910u: goto L_08873E6C;
    case 911u: goto L_08873E80;
    case 912u: goto L_08873E84;
    case 913u: goto L_08873E88;
    case 914u: goto L_08873E90;
    case 915u: goto L_08873E9C;
    case 916u: goto L_08873EA4;
    case 917u: goto L_08873EB0;
    case 918u: goto L_08873EB8;
    case 919u: goto L_08873ED0;
    case 920u: goto L_08873ED8;
    case 921u: goto L_08873EDC;
    case 922u: goto L_08873EE4;
    case 923u: goto L_08873EF4;
    case 924u: goto L_08873F0C;
    case 925u: goto L_08873F14;
    case 926u: goto L_08873F1C;
    case 927u: goto L_08873F28;
    case 928u: goto L_08873F30;
    case 929u: goto L_08873F38;
    case 930u: goto L_08873F40;
    case 931u: goto L_08873F4C;
    case 932u: goto L_08873F5C;
    case 933u: goto L_08873F64;
    case 934u: goto L_08873F90;
    case 935u: goto L_08873F98;
    case 936u: goto L_08873FB0;
    case 937u: goto L_08873FB8;
    case 938u: goto L_08873FCC;
    case 939u: goto L_08873FD4;
    case 940u: goto L_08873FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08870000:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08870018:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-208));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0887024C;
      }
      goto L_08870040;
    }
}
L_08870040:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870244;
      }
      goto L_08870050;
    }
}
L_08870050:
    hot_regs.g31 = (0x08870058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 140u, 0x0889098Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870058u) goto L_08870058;
    return;
L_08870058:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g7);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g7);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g7);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), hot_regs.g7);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g7);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (49049u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (49300u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08870130u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 121u, 0x08890828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870130u) goto L_08870130;
    return;
L_08870130:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), hot_regs.g6);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(132));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088701C0u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 169u, 0x089D9020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088701C0u) goto L_088701C0;
    return;
L_088701C0:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (49844u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088701D8u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 131u, 0x089D8A00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088701D8u) goto L_088701D8;
    return;
L_088701D8:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088701E8u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 169u, 0x089D9020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088701E8u) goto L_088701E8;
    return;
L_088701E8:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(108));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088701FCu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 131u, 0x089D8A00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088701FCu) goto L_088701FC;
    return;
L_088701FC:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(120));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0887020Cu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 169u, 0x089D9020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887020Cu) goto L_0887020C;
    return;
L_0887020C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0887021Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 642u, 0x08972FA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887021Cu) goto L_0887021C;
    return;
L_0887021C:
    hot_regs.g31 = (0x08870224u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870224u) goto L_08870224;
    return;
L_08870224:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08870234u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870234u) goto L_08870234;
    return;
L_08870234:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08870254;
      }
      goto L_0887023C;
    }
L_0887023C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7680)));
      if (branch_taken) {
          goto L_088702A4;
      }
      goto L_08870244;
    }
L_08870244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887035C;
      }
      goto L_0887024C;
    }
L_0887024C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887035C;
      }
      goto L_08870254;
    }
L_08870254:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08870268;
      }
      goto L_08870260;
    }
L_08870260:
    hot_regs.g31 = (0x08870268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870268u) goto L_08870268;
    return;
L_08870268:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 2u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(776)));
    hot_regs.g31 = (0x08870280u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870280u) goto L_08870280;
    return;
L_08870280:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0887028Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887028Cu) goto L_0887028C;
    return;
L_0887028C:
    hot_regs.g31 = (0x08870294u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870294u) goto L_08870294;
    return;
L_08870294:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x088702A0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088702A0u) goto L_088702A0;
    return;
L_088702A0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7680)));
    goto L_088702A4;
L_088702A4:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1025));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7676), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(76), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(136));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088702D8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088702D8u) goto L_088702D8;
    return;
L_088702D8:
    hot_regs.g4 = (2236u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7676), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x088702FCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(29552));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 525u, 0x088DFE80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088702FCu) goto L_088702FC;
    return;
L_088702FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(120));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08870318u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870318u) goto L_08870318;
    return;
L_08870318:
    hot_regs.g31 = (0x08870320u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 618u, 0x088B73ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870320u) goto L_08870320;
    return;
L_08870320:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(128));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x0887033Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887033Cu) goto L_0887033C;
    return;
L_0887033C:
    hot_regs.g31 = (0x08870344u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870344u) goto L_08870344;
    return;
L_08870344:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0887035C;
      }
      goto L_0887034C;
    }
L_0887034C:
    hot_regs.g31 = (0x08870354u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 784u, 0x0890F6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870354u) goto L_08870354;
    return;
L_08870354:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0887035C;
L_0887035C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0887037C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g7 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08870398u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(29232));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 523u, 0x08ABE6BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870398u) goto L_08870398;
    return;
L_08870398:
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
L_088703A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088703BCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(29232));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088703BCu) goto L_088703BC;
    return;
L_088703BC:
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
L_088703C8:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-27495)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088703D0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088703E0u);
    // nop
    hot_regs.g29 = g29;
    goto L_088703EC;
}
L_088703E0:
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
L_088703EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    if (g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_08870410;
    }
    goto L_08870400;
}
L_08870400:
    hot_regs.g31 = (0x08870408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870408u) goto L_08870408;
    return;
L_08870408:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    goto L_08870410;
L_08870410:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08870428;
      }
      goto L_08870418;
    }
L_08870418:
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27495), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870430;
      }
      goto L_08870420;
    }
L_08870420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887043C;
      }
      goto L_08870428;
    }
L_08870428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870448;
      }
      goto L_08870430;
    }
L_08870430:
    hot_regs.g31 = (0x08870438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870438u) goto L_08870438;
    return;
L_08870438:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_0887043C;
L_0887043C:
    hot_regs.g31 = (0x08870444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 258u, 0x088851A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870444u) goto L_08870444;
    return;
L_08870444:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27496), static_cast<std::uint8_t>(0u));
    goto L_08870448;
L_08870448:
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
L_08870454:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    if (g16 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
        goto L_08870480;
    }
    goto L_08870470;
}
L_08870470:
    hot_regs.g31 = (0x08870478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870478u) goto L_08870478;
    return;
L_08870478:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_08870480;
L_08870480:
    hot_regs.g31 = (0x08870488u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 303u, 0x08806654u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870488u) goto L_08870488;
    return;
L_08870488:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-27492));
      if (branch_taken) {
          goto L_088704A4;
      }
      goto L_08870494;
    }
L_08870494:
    hot_regs.g31 = (0x0887049Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887049Cu) goto L_0887049C;
    return;
L_0887049C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-27492));
    goto L_088704A4;
L_088704A4:
    hot_regs.g31 = (0x088704ACu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088704ACu) goto L_088704AC;
    return;
L_088704AC:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088704BCu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088704BCu) goto L_088704BC;
    return;
L_088704BC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088704C8u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 260u, 0x088851D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088704C8u) goto L_088704C8;
    return;
L_088704C8:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = ctx.gpr[16] == g4;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088704E4;
      }
      goto L_088704D8;
    }
}
L_088704D8:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088704E4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088704E4u) goto L_088704E4;
    return;
L_088704E4:
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
L_088704F8:
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
          goto L_08870558;
      }
      goto L_0887054C;
    }
}
L_0887054C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g7);
      if (branch_taken) {
          goto L_08870564;
      }
      goto L_08870558;
    }
L_08870558:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + g7);
    hot_regs.g7 = g7;
    goto L_08870564;
}
L_08870564:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088705C0;
      }
      goto L_0887056C;
    }
L_0887056C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x08870584u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870584u) goto L_08870584;
    return;
L_08870584:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088705C0;
      }
      goto L_0887059C;
    }
}
L_0887059C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x088705B0u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088705B0u) goto L_088705B0;
    return;
L_088705B0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    goto L_088705C0;
}
L_088705C0:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870608;
      }
      goto L_088705D0;
    }
L_088705D0:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
        goto L_08870600;
    }
    goto L_088705DC;
L_088705DC:
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
        goto L_08870600;
    }
    goto L_088705F0;
}
L_088705F0:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    g9 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g9);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = g9;
    goto L_08870600;
}
L_08870600:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088705D0;
      }
      goto L_08870608;
    }
L_08870608:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08870650;
      }
      goto L_08870618;
    }
L_08870618:
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08870644;
      }
      goto L_08870624;
    }
L_08870624:
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
          goto L_08870644;
      }
      goto L_08870638;
    }
}
L_08870638:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), g6);
    hot_regs.g6 = g6;
    goto L_08870644;
}
L_08870644:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08870694;
      }
      goto L_08870650;
    }
L_08870650:
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08870690;
      }
      goto L_08870658;
    }
L_08870658:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
        goto L_08870688;
    }
    goto L_08870664;
L_08870664:
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
        goto L_08870688;
    }
    goto L_08870678;
}
L_08870678:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    g9 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g9);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = g9;
    goto L_08870688;
}
L_08870688:
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08870658;
      }
      goto L_08870690;
    }
L_08870690:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08870694;
L_08870694:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088706E8;
      }
      goto L_0887069C;
    }
L_0887069C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088706E8;
      }
      goto L_088706AC;
    }
}
L_088706AC:
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
        goto L_088706DC;
    }
    goto L_088706B8;
L_088706B8:
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
        goto L_088706DC;
    }
    goto L_088706CC;
}
L_088706CC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g7);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
    goto L_088706DC;
}
L_088706DC:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088706AC;
      }
      goto L_088706E4;
    }
L_088706E4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088706E8;
L_088706E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887073C;
      }
      goto L_088706F8;
    }
L_088706F8:
{
    std::uint32_t g21 = ctx.gpr[21];
    if (g21 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08870730;
    }
    goto L_08870700;
}
L_08870700:
{
    std::uint32_t g21 = ctx.gpr[21];
    if (g21 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08870730;
    }
    goto L_08870708;
}
L_08870708:
{
    std::uint32_t g21 = ctx.gpr[21];
    hot_regs.g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g4 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08870730;
    }
    goto L_08870714;
}
L_08870714:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0887072C;
      }
      goto L_08870724;
    }
}
L_08870724:
    hot_regs.g31 = (0x0887072Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887072Cu) goto L_0887072C;
    return;
L_0887072C:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08870730;
L_08870730:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088706F8;
      }
      goto L_08870738;
    }
L_08870738:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0887073C;
L_0887073C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0887074C;
      }
      goto L_08870744;
    }
L_08870744:
    hot_regs.g31 = (0x0887074Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887074Cu) goto L_0887074C;
    return;
L_0887074C:
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
L_08870784:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g31 = (0x088707A4u);
    hot_regs.g4 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088707A4u) goto L_088707A4;
    return;
L_088707A4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g5 = (2235u << 16u);
      if (branch_taken) {
          goto L_088707D8;
      }
      goto L_088707B0;
    }
L_088707B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-27964));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g5 = (2235u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-27932));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g5 = (2183u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(976));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g5 = g5;
    goto L_088707D8;
}
L_088707D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870800;
      }
      goto L_088707E8;
    }
}
L_088707E8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08870804;
      }
      goto L_088707F0;
    }
L_088707F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08870800;
}
L_08870800:
    hot_regs.g4 = (2236u << 16u);
    goto L_08870804;
L_08870804:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(308)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = hot_regs.g5 == g4;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0887085C;
      }
      goto L_08870818;
    }
}
L_08870818:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(308)));
    if (g4 == 0u) {
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
        goto L_08870848;
    }
    goto L_08870828;
}
L_08870828:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08870844;
      }
      goto L_08870834;
    }
}
L_08870834:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08870844;
}
L_08870844:
    hot_regs.g4 = (2236u << 16u);
    goto L_08870848;
L_08870848:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(308)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(308), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08870884;
      }
      goto L_0887085C;
    }
}
L_0887085C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(308)));
    g4 = (g4 + static_cast<std::uint32_t>(304));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(20));
    hot_regs.g6 = (g29 | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x08870884u);
    ctx.gpr[9] = (0u | 1u);
    hot_regs.g4 = g4;
    goto L_088704F8;
}
L_08870884:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(301)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_088708BC;
    }
    goto L_08870898;
}
L_08870898:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088708B8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088708B8u) goto L_088708B8;
    return;
L_088708B8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    goto L_088708BC;
L_088708BC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088708E0;
      }
      goto L_088708C4;
    }
L_088708C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088708E0;
      }
      goto L_088708D8;
    }
}
L_088708D8:
    hot_regs.g31 = (0x088708E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088708E0u) goto L_088708E0;
    return;
L_088708E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g4 = g4;
        goto L_088708F8;
    }
    goto L_088708EC;
}
L_088708EC:
    hot_regs.g31 = (0x088708F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088708F4u) goto L_088708F4;
    return;
L_088708F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088708F8;
L_088708F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870918;
      }
      goto L_08870904;
    }
}
L_08870904:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08870920;
      }
      goto L_08870910;
    }
L_08870910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870928;
      }
      goto L_08870918;
    }
L_08870918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088712F0;
      }
      goto L_08870920;
    }
L_08870920:
    hot_regs.g31 = (0x08870928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870928u) goto L_08870928;
    return;
L_08870928:
    hot_regs.g31 = (0x08870930u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 249u, 0x0888510Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870930u) goto L_08870930;
    return;
L_08870930:
    hot_regs.g31 = (0x08870938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 542u, 0x08AC2318u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870938u) goto L_08870938;
    return;
L_08870938:
    hot_regs.g31 = (0x08870940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 428u, 0x08AF64B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870940u) goto L_08870940;
    return;
L_08870940:
    hot_regs.g31 = (0x08870948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 335u, 0x088FD89Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870948u) goto L_08870948;
    return;
L_08870948:
    hot_regs.g31 = (0x08870950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 375u, 0x089759ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870950u) goto L_08870950;
    return;
L_08870950:
    hot_regs.g31 = (0x08870958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 376u, 0x08885818u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870958u) goto L_08870958;
    return;
L_08870958:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    g16 = (2232u << 16u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(-25376));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08870970;
      }
      goto L_08870968;
    }
}
L_08870968:
    hot_regs.g31 = (0x08870970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870970u) goto L_08870970;
    return;
L_08870970:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870980u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870980u) goto L_08870980;
    return;
L_08870980:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g4 = g4;
        goto L_08870998;
    }
    goto L_0887098C;
}
L_0887098C:
    hot_regs.g31 = (0x08870994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870994u) goto L_08870994;
    return;
L_08870994:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_08870998;
L_08870998:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27476));
    hot_regs.g31 = (0x088709A4u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 430u, 0x08806E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088709A4u) goto L_088709A4;
    return;
L_088709A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g4 = g4;
        goto L_088709BC;
    }
    goto L_088709B0;
}
L_088709B0:
    hot_regs.g31 = (0x088709B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088709B8u) goto L_088709B8;
    return;
L_088709B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088709BC;
L_088709BC:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g31 = (0x088709C8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 315u, 0x0880673Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088709C8u) goto L_088709C8;
    return;
L_088709C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g4 = g4;
        goto L_088709E0;
    }
    goto L_088709D4;
}
L_088709D4:
    hot_regs.g31 = (0x088709DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088709DCu) goto L_088709DC;
    return;
L_088709DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    goto L_088709E0;
L_088709E0:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-10001));
    hot_regs.g31 = (0x088709ECu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088709ECu) goto L_088709EC;
    return;
L_088709EC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19664)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08870E78;
      }
      goto L_088709F8;
    }
L_088709F8:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x08870A04u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870A04u) goto L_08870A04;
    return;
L_08870A04:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08870E6C;
      }
      goto L_08870A14;
    }
L_08870A14:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-24512)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08870A2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870A44;
      }
      goto L_08870A38;
    }
}
L_08870A38:
    hot_regs.g31 = (0x08870A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870A40u) goto L_08870A40;
    return;
L_08870A40:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870A44;
L_08870A44:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25252));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870A58u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870A58u) goto L_08870A58;
    return;
L_08870A58:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870A68u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870A68u) goto L_08870A68;
    return;
L_08870A68:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870A74u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870A74u) goto L_08870A74;
    return;
L_08870A74:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870A84;
    }
}
L_08870A84:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870A90u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870A90u) goto L_08870A90;
    return;
L_08870A90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27496), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27495), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088712F0;
      }
      goto L_08870AA0;
    }
}
L_08870AA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870AB8;
      }
      goto L_08870AAC;
    }
}
L_08870AAC:
    hot_regs.g31 = (0x08870AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870AB4u) goto L_08870AB4;
    return;
L_08870AB4:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870AB8;
L_08870AB8:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25224));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870ACCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870ACCu) goto L_08870ACC;
    return;
L_08870ACC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870ADCu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870ADCu) goto L_08870ADC;
    return;
L_08870ADC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870AE8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870AE8u) goto L_08870AE8;
    return;
L_08870AE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870B04;
      }
      goto L_08870AF8;
    }
}
L_08870AF8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870B04u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870B04u) goto L_08870B04;
    return;
L_08870B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870B0C;
    }
L_08870B0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870B24;
      }
      goto L_08870B18;
    }
}
L_08870B18:
    hot_regs.g31 = (0x08870B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870B20u) goto L_08870B20;
    return;
L_08870B20:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870B24;
L_08870B24:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25196));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870B38u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870B38u) goto L_08870B38;
    return;
L_08870B38:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870B48u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870B48u) goto L_08870B48;
    return;
L_08870B48:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870B54u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870B54u) goto L_08870B54;
    return;
L_08870B54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870B70;
      }
      goto L_08870B64;
    }
}
L_08870B64:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870B70u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870B70u) goto L_08870B70;
    return;
L_08870B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870B78;
    }
L_08870B78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870B90;
      }
      goto L_08870B84;
    }
}
L_08870B84:
    hot_regs.g31 = (0x08870B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870B8Cu) goto L_08870B8C;
    return;
L_08870B8C:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870B90;
L_08870B90:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25164));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870BA4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870BA4u) goto L_08870BA4;
    return;
L_08870BA4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870BB4u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870BB4u) goto L_08870BB4;
    return;
L_08870BB4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870BC0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870BC0u) goto L_08870BC0;
    return;
L_08870BC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870BDC;
      }
      goto L_08870BD0;
    }
}
L_08870BD0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870BDCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870BDCu) goto L_08870BDC;
    return;
L_08870BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870BE4;
    }
L_08870BE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870BFC;
      }
      goto L_08870BF0;
    }
}
L_08870BF0:
    hot_regs.g31 = (0x08870BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870BF8u) goto L_08870BF8;
    return;
L_08870BF8:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870BFC;
L_08870BFC:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25132));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870C10u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870C10u) goto L_08870C10;
    return;
L_08870C10:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870C20u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870C20u) goto L_08870C20;
    return;
L_08870C20:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870C2Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870C2Cu) goto L_08870C2C;
    return;
L_08870C2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870C48;
      }
      goto L_08870C3C;
    }
}
L_08870C3C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870C48u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870C48u) goto L_08870C48;
    return;
L_08870C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870C50;
    }
L_08870C50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870C68;
      }
      goto L_08870C5C;
    }
}
L_08870C5C:
    hot_regs.g31 = (0x08870C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870C64u) goto L_08870C64;
    return;
L_08870C64:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870C68;
L_08870C68:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25108));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870C7Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870C7Cu) goto L_08870C7C;
    return;
L_08870C7C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870C8Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870C8Cu) goto L_08870C8C;
    return;
L_08870C8C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870C98u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870C98u) goto L_08870C98;
    return;
L_08870C98:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870CB4;
      }
      goto L_08870CA8;
    }
}
L_08870CA8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870CB4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870CB4u) goto L_08870CB4;
    return;
L_08870CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870CBC;
    }
L_08870CBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870CD4;
      }
      goto L_08870CC8;
    }
}
L_08870CC8:
    hot_regs.g31 = (0x08870CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870CD0u) goto L_08870CD0;
    return;
L_08870CD0:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870CD4;
L_08870CD4:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25080));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870CE8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870CE8u) goto L_08870CE8;
    return;
L_08870CE8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870CF8u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870CF8u) goto L_08870CF8;
    return;
L_08870CF8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870D04u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870D04u) goto L_08870D04;
    return;
L_08870D04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870D20;
      }
      goto L_08870D14;
    }
}
L_08870D14:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870D20u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870D20u) goto L_08870D20;
    return;
L_08870D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870D28;
    }
L_08870D28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870D40;
      }
      goto L_08870D34;
    }
}
L_08870D34:
    hot_regs.g31 = (0x08870D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870D3Cu) goto L_08870D3C;
    return;
L_08870D3C:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870D40;
L_08870D40:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25048));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870D54u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870D54u) goto L_08870D54;
    return;
L_08870D54:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870D64u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870D64u) goto L_08870D64;
    return;
L_08870D64:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870D70u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870D70u) goto L_08870D70;
    return;
L_08870D70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870D8C;
      }
      goto L_08870D80;
    }
}
L_08870D80:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870D8Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870D8Cu) goto L_08870D8C;
    return;
L_08870D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870D94;
    }
L_08870D94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870DAC;
      }
      goto L_08870DA0;
    }
}
L_08870DA0:
    hot_regs.g31 = (0x08870DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870DA8u) goto L_08870DA8;
    return;
L_08870DA8:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870DAC;
L_08870DAC:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-25016));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870DC0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870DC0u) goto L_08870DC0;
    return;
L_08870DC0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870DD0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870DD0u) goto L_08870DD0;
    return;
L_08870DD0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870DDCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870DDCu) goto L_08870DDC;
    return;
L_08870DDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870DF8;
      }
      goto L_08870DEC;
    }
}
L_08870DEC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870DF8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870DF8u) goto L_08870DF8;
    return;
L_08870DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870E00;
    }
L_08870E00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870E18;
      }
      goto L_08870E0C;
    }
}
L_08870E0C:
    hot_regs.g31 = (0x08870E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870E14u) goto L_08870E14;
    return;
L_08870E14:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870E18;
L_08870E18:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24988));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08870E2Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870E2Cu) goto L_08870E2C;
    return;
L_08870E2C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870E3Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870E3Cu) goto L_08870E3C;
    return;
L_08870E3C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870E48u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870E48u) goto L_08870E48;
    return;
L_08870E48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870E64;
      }
      goto L_08870E58;
    }
}
L_08870E58:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08870E64u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870E64u) goto L_08870E64;
    return;
L_08870E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870E6C;
    }
L_08870E6C:
    rt.unsupported(0x08870E6Cu, 0x0000000Du, "special? not lowered yet"); return;
L_08870E78:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x08870E84u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 137u, 0x08ADC734u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870E84u) goto L_08870E84;
    return;
L_08870E84:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088712E4;
      }
      goto L_08870E94;
    }
L_08870E94:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-24472)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08870EAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870EC4;
      }
      goto L_08870EB8;
    }
}
L_08870EB8:
    hot_regs.g31 = (0x08870EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870EC0u) goto L_08870EC0;
    return;
L_08870EC0:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870EC4;
L_08870EC4:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24968));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08870ED8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870ED8u) goto L_08870ED8;
    return;
L_08870ED8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870EE8u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870EE8u) goto L_08870EE8;
    return;
L_08870EE8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870EF4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870EF4u) goto L_08870EF4;
    return;
L_08870EF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870F10;
      }
      goto L_08870F04;
    }
}
L_08870F04:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08870F10u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870F10u) goto L_08870F10;
    return;
L_08870F10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870F18;
    }
L_08870F18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870F30;
      }
      goto L_08870F24;
    }
}
L_08870F24:
    hot_regs.g31 = (0x08870F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870F2Cu) goto L_08870F2C;
    return;
L_08870F2C:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870F30;
L_08870F30:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24920));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08870F44u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870F44u) goto L_08870F44;
    return;
L_08870F44:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870F54u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870F54u) goto L_08870F54;
    return;
L_08870F54:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870F60u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870F60u) goto L_08870F60;
    return;
L_08870F60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870F7C;
      }
      goto L_08870F70;
    }
}
L_08870F70:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08870F7Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870F7Cu) goto L_08870F7C;
    return;
L_08870F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870F84;
    }
L_08870F84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870F9C;
      }
      goto L_08870F90;
    }
}
L_08870F90:
    hot_regs.g31 = (0x08870F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870F98u) goto L_08870F98;
    return;
L_08870F98:
    hot_regs.g4 = (2232u << 16u);
    goto L_08870F9C;
L_08870F9C:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24876));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08870FB0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870FB0u) goto L_08870FB0;
    return;
L_08870FB0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08870FC0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870FC0u) goto L_08870FC0;
    return;
L_08870FC0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08870FCCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870FCCu) goto L_08870FCC;
    return;
L_08870FCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08870FE8;
      }
      goto L_08870FDC;
    }
}
L_08870FDC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08870FE8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08870FE8u) goto L_08870FE8;
    return;
L_08870FE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08870FF0;
    }
L_08870FF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871008;
      }
      goto L_08870FFC;
    }
}
L_08870FFC:
    hot_regs.g31 = (0x08871004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871004u) goto L_08871004;
    return;
L_08871004:
    hot_regs.g4 = (2232u << 16u);
    goto L_08871008;
L_08871008:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24828));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x0887101Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887101Cu) goto L_0887101C;
    return;
L_0887101C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0887102Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887102Cu) goto L_0887102C;
    return;
L_0887102C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08871038u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871038u) goto L_08871038;
    return;
L_08871038:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871054;
      }
      goto L_08871048;
    }
}
L_08871048:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08871054u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871054u) goto L_08871054;
    return;
L_08871054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_0887105C;
    }
L_0887105C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871074;
      }
      goto L_08871068;
    }
}
L_08871068:
    hot_regs.g31 = (0x08871070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871070u) goto L_08871070;
    return;
L_08871070:
    hot_regs.g4 = (2232u << 16u);
    goto L_08871074;
L_08871074:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24776));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08871088u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871088u) goto L_08871088;
    return;
L_08871088:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08871098u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871098u) goto L_08871098;
    return;
L_08871098:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088710A4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088710A4u) goto L_088710A4;
    return;
L_088710A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088710C0;
      }
      goto L_088710B4;
    }
}
L_088710B4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x088710C0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088710C0u) goto L_088710C0;
    return;
L_088710C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_088710C8;
    }
L_088710C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088710E0;
      }
      goto L_088710D4;
    }
}
L_088710D4:
    hot_regs.g31 = (0x088710DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088710DCu) goto L_088710DC;
    return;
L_088710DC:
    hot_regs.g4 = (2232u << 16u);
    goto L_088710E0;
L_088710E0:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24736));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x088710F4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088710F4u) goto L_088710F4;
    return;
L_088710F4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08871104u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871104u) goto L_08871104;
    return;
L_08871104:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08871110u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871110u) goto L_08871110;
    return;
L_08871110:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0887112C;
      }
      goto L_08871120;
    }
}
L_08871120:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x0887112Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887112Cu) goto L_0887112C;
    return;
L_0887112C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08871134;
    }
L_08871134:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0887114C;
      }
      goto L_08871140;
    }
}
L_08871140:
    hot_regs.g31 = (0x08871148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871148u) goto L_08871148;
    return;
L_08871148:
    hot_regs.g4 = (2232u << 16u);
    goto L_0887114C;
L_0887114C:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24692));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08871160u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871160u) goto L_08871160;
    return;
L_08871160:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08871170u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871170u) goto L_08871170;
    return;
L_08871170:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0887117Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887117Cu) goto L_0887117C;
    return;
L_0887117C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871198;
      }
      goto L_0887118C;
    }
}
L_0887118C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08871198u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871198u) goto L_08871198;
    return;
L_08871198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_088711A0;
    }
L_088711A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088711B8;
      }
      goto L_088711AC;
    }
}
L_088711AC:
    hot_regs.g31 = (0x088711B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088711B4u) goto L_088711B4;
    return;
L_088711B4:
    hot_regs.g4 = (2232u << 16u);
    goto L_088711B8;
L_088711B8:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24644));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x088711CCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088711CCu) goto L_088711CC;
    return;
L_088711CC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088711DCu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088711DCu) goto L_088711DC;
    return;
L_088711DC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088711E8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088711E8u) goto L_088711E8;
    return;
L_088711E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871204;
      }
      goto L_088711F8;
    }
}
L_088711F8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08871204u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871204u) goto L_08871204;
    return;
L_08871204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_0887120C;
    }
L_0887120C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871224;
      }
      goto L_08871218;
    }
}
L_08871218:
    hot_regs.g31 = (0x08871220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871220u) goto L_08871220;
    return;
L_08871220:
    hot_regs.g4 = (2232u << 16u);
    goto L_08871224;
L_08871224:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24596));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x08871238u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871238u) goto L_08871238;
    return;
L_08871238:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08871248u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871248u) goto L_08871248;
    return;
L_08871248:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08871254u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871254u) goto L_08871254;
    return;
L_08871254:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871270;
      }
      goto L_08871264;
    }
}
L_08871264:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08871270u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871270u) goto L_08871270;
    return;
L_08871270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_08871278;
    }
L_08871278:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2232u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871290;
      }
      goto L_08871284;
    }
}
L_08871284:
    hot_regs.g31 = (0x0887128Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887128Cu) goto L_0887128C;
    return;
L_0887128C:
    hot_regs.g4 = (2232u << 16u);
    goto L_08871290;
L_08871290:
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24552));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x088712A4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088712A4u) goto L_088712A4;
    return;
L_088712A4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088712B4u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 283u, 0x08B653C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088712B4u) goto L_088712B4;
    return;
L_088712B4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088712C0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 263u, 0x088851F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088712C0u) goto L_088712C0;
    return;
L_088712C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5824));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088712DC;
      }
      goto L_088712D0;
    }
}
L_088712D0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x088712DCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25856));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 556u, 0x08ABE8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088712DCu) goto L_088712DC;
    return;
L_088712DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08870A90;
      }
      goto L_088712E4;
    }
L_088712E4:
    rt.unsupported(0x088712E4u, 0x0000000Du, "special? not lowered yet"); return;
L_088712F0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08871308:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2232u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0887131Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-24432));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887131Cu) goto L_0887131C;
    return;
L_0887131C:
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
L_08871328:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2240u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25368));
    hot_regs.g5 = (2233u << 16u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08871354u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-19320));
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871354u) goto L_08871354;
    return;
L_08871354:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08871398;
      }
      goto L_08871360;
    }
L_08871360:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0887136Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887136Cu) goto L_0887136C;
    return;
L_0887136C:
    hot_regs.g31 = (0x08871374u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871374u) goto L_08871374;
    return;
L_08871374:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(-1));
    g4 = (ctx.gpr[16] + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (0u | 92u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871398;
      }
      goto L_0887138C;
    }
}
L_0887138C:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27464));
    hot_regs.g31 = (0x08871398u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871398u) goto L_08871398;
    return;
L_08871398:
    hot_regs.g31 = (0x088713A0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088713A0u) goto L_088713A0;
    return;
L_088713A0:
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
L_088713B4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088713C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 107u, 0x08A94A04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088713C4u) goto L_088713C4;
    return;
L_088713C4:
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
L_088713D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088713E8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 126u, 0x08A94B54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088713E8u) goto L_088713E8;
    return;
L_088713E8:
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
L_088713F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08871404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 145u, 0x08A94CB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871404u) goto L_08871404;
    return;
L_08871404:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u < hot_regs.g2 ? 1u : 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08871414:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08871424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 122u, 0x08A94B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871424u) goto L_08871424;
    return;
L_08871424:
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
L_08871430:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871438:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871440:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (17235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(18756));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (20527u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14896));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (18271u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(20563));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (12101u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(19777));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g4 = (17490u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21333));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    hot_regs.g4 = (47u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21065));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), hot_regs.g31);
    hot_regs.g31 = (0x088714ACu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088714ACu) goto L_088714AC;
    return;
L_088714AC:
    hot_regs.g31 = (0x088714B4u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 542u, 0x08B59EE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088714B4u) goto L_088714B4;
    return;
L_088714B4:
    hot_regs.g31 = (0x088714BCu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 196u, 0x088B53C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088714BCu) goto L_088714BC;
    return;
L_088714BC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088714D0;
      }
      goto L_088714C8;
    }
L_088714C8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088714E4;
      }
      goto L_088714D0;
    }
L_088714D0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_088714E4;
}
L_088714E4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088714F8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g7 = (g5 | 0u);
    g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(g5) > 0;
    hot_regs.g4 = (hot_regs.g7 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08871520;
      }
      goto L_08871510;
    }
}
L_08871510:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) >= 0;
    // nop
      if (branch_taken) {
          goto L_088715AC;
      }
      goto L_08871518;
    }
L_08871518:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871520;
    }
L_08871520:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g5 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08871564;
      }
      goto L_0887152C;
    }
}
L_0887152C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08871518;
      }
      goto L_08871534;
    }
L_08871534:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(216));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x0887154Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887154Cu) goto L_0887154C;
    return;
L_0887154C:
{
    float f0 = ctx.fpr[0];
    hot_regs.g4 = (17279u << 16u);
    f0 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    f0 = f0 / hot_regs.f12;
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.fpr[0] = f0;
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_08871564;
    }
}
L_08871564:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088715A0;
      }
      goto L_0887156C;
    }
L_0887156C:
    hot_regs.g5 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
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
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_088715A0;
    }
L_088715A0:
    hot_regs.g4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_088715B0;
      }
      goto L_088715AC;
    }
L_088715AC:
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    goto L_088715B0;
L_088715B0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088715BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(224));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088715ECu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088715ECu) goto L_088715EC;
    return;
L_088715EC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088716A0;
      }
      goto L_088715F8;
    }
L_088715F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(224));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08871610u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871610u) goto L_08871610;
    return;
L_08871610:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(12)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088716A0;
      }
      goto L_08871630;
    }
}
L_08871630:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(224));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08871648u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871648u) goto L_08871648;
    return;
L_08871648:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(232));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08871664u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871664u) goto L_08871664;
    return;
L_08871664:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08871680u);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871680u) goto L_08871680;
    return;
L_08871680:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088716A0;
      }
      goto L_08871688;
    }
L_08871688:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1364)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08871698u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
    goto L_088716C0;
}
L_08871698:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088716AC;
      }
      goto L_088716A0;
    }
L_088716A0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088716ACu);
    hot_regs.g5 = (0u | 43u);
    goto L_088716C0;
L_088716AC:
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
L_088716C0:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g2 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g2) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08871700;
      }
      goto L_088716D4;
    }
L_088716D4:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (0u | 42u);
    goto L_088716DC;
L_088716DC:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08871708;
      }
      goto L_088716E8;
    }
L_088716E8:
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08871708;
      }
      goto L_088716F0;
    }
L_088716F0:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(g2) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(44));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_088716DC;
      }
      goto L_08871700;
    }
}
L_08871700:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08871708;
      }
      goto L_08871708;
    }
L_08871708:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871710:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887175C;
      }
      goto L_08871728;
    }
L_08871728:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871750;
      }
      goto L_08871738;
    }
L_08871738:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871790;
      }
      goto L_08871748;
    }
L_08871748:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_08871750;
    }
L_08871750:
    hot_regs.g4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_0887175C;
    }
L_0887175C:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871784;
      }
      goto L_0887176C;
    }
L_0887176C:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08871790;
      }
      goto L_0887177C;
    }
L_0887177C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_08871784;
    }
L_08871784:
    hot_regs.g4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_0887179C;
      }
      goto L_08871790;
    }
L_08871790:
{
    float f0 = ctx.fpr[0];
    float f13 = hot_regs.f13;
    f0 = hot_regs.f12 - f13;
    f13 = hot_regs.f14 - f13;
    f0 = f0 / f13;
    ctx.fpr[0] = f0;
    hot_regs.f13 = f13;
    goto L_0887179C;
}
L_0887179C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088717A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g20);
    g20 = (0u | 0u);
    ctx.gpr[18] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[21] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08871850;
      }
      goto L_088717F0;
    }
}
L_088717F0:
    ctx.gpr[19] = (0u | 0u);
    goto L_088717F4;
L_088717F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0887180Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    goto L_088714F8;
}
L_0887180C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[22] = (g4 + ctx.gpr[19]);
    hot_regs.g31 = (0x08871820u);
    g4 = (ctx.gpr[22] | 0u);
    hot_regs.g4 = g4;
    goto L_08871710;
}
L_08871820:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08871840;
      }
      goto L_08871838;
    }
}
L_08871838:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    goto L_08871840;
L_08871840:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088717F4;
      }
      goto L_08871850;
    }
}
L_08871850:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[21] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08871880:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g2 = (0u | 0u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g2) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_088718BC;
      }
      goto L_08871894;
    }
L_08871894:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (hot_regs.g7 | 0u);
    goto L_088718A0;
L_088718A0:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088718C4;
      }
      goto L_088718AC;
    }
L_088718AC:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g2) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_088718A0;
      }
      goto L_088718BC;
    }
}
L_088718BC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 255u);
      if (branch_taken) {
          goto L_088718C4;
      }
      goto L_088718C4;
    }
L_088718C4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088718CC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g7 = (0u | 5u);
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08871944;
      }
      goto L_088718F4;
    }
}
L_088718F4:
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08871918;
      }
      goto L_088718FC;
    }
L_088718FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 3u);
    { const bool branch_taken = hot_regs.g5 == g4;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08871970;
      }
      goto L_08871908;
    }
}
L_08871908:
    if (hot_regs.g5 == hot_regs.g4) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
        goto L_08871974;
    }
    goto L_08871910;
L_08871910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871994;
      }
      goto L_08871918;
    }
L_08871918:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2232u << 16u);
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24400));
    hot_regs.g31 = (0x0887192Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887192Cu) goto L_0887192C;
    return;
L_0887192C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0887193Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887193Cu) goto L_0887193C;
    return;
L_0887193C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g2);
      if (branch_taken) {
          goto L_08871994;
      }
      goto L_08871944;
    }
L_08871944:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2232u << 16u);
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(-24380));
    hot_regs.g31 = (0x08871958u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871958u) goto L_08871958;
    return;
L_08871958:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08871968u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871968u) goto L_08871968;
    return;
L_08871968:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g2);
      if (branch_taken) {
          goto L_08871994;
      }
      goto L_08871970;
    }
L_08871970:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08871974;
L_08871974:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + static_cast<std::uint32_t>(-8));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08871994;
}
L_08871994:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
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
L_088719B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g7 == 0u;
    g4 = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088719F0;
      }
      goto L_088719D0;
    }
}
L_088719D0:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(96), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x088719E8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 348u, 0x08B5538Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088719E8u) goto L_088719E8;
    return;
L_088719E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871A0C;
      }
      goto L_088719F0;
    }
L_088719F0:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08871A04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871A04u) goto L_08871A04;
    return;
L_08871A04:
    hot_regs.g31 = (0x08871A0Cu);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 939u, 0x08B57808u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871A0Cu) goto L_08871A0C;
    return;
L_08871A0C:
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
L_08871A18:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g31);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(80), hot_regs.g29);
    hot_regs.g31 = (0x08871A44u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 347u, 0x08B55328u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871A44u) goto L_08871A44;
    return;
L_08871A44:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
        goto L_08871A60;
    }
    goto L_08871A4C;
L_08871A4C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08871A5Cu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871A5Cu) goto L_08871A5C;
    return;
L_08871A5C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    goto L_08871A60;
L_08871A60:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(80), hot_regs.g5);
    hot_regs.g2 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08871A78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g5 = (g5 << 3u);
    g5 = (g6 + g5);
    g5 = (g5 + static_cast<std::uint32_t>(-8));
    g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), g5);
    g5 = (static_cast<std::int32_t>(g6) < 4097 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08871AD8;
      }
      goto L_08871AA8;
    }
}
L_08871AA8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (0u | 24u);
    g5 = (g5 - hot_regs.g6);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (ctx.lo);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (static_cast<std::int32_t>(g5) < 4096 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08871AD8;
      }
      goto L_08871AD0;
    }
}
L_08871AD0:
    hot_regs.g31 = (0x08871AD8u);
    hot_regs.g5 = (0u | 4096u);
    goto L_08871C44;
L_08871AD8:
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
L_08871AE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g6 = (g6 - hot_regs.g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g8 = (g8 >> 29u);
    g6 = (g6 + g8);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g6 = (g6 << 3u);
    g6 = (g7 + g6);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g6);
    g6 = (g7 | 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08871B50;
      }
      goto L_08871B1C;
    }
}
L_08871B1C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    goto L_08871B20;
L_08871B20:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    g7 = (g7 - hot_regs.g5);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g9 = (g9 >> 29u);
    g7 = (g7 + g9);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g7 = (g7 << 3u);
    g7 = (ctx.gpr[8] + g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g7);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    if (g6 != 0u) {
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
        goto L_08871B20;
    }
    goto L_08871B50;
}
L_08871B50:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (hot_regs.g6 < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08871BC8;
      }
      goto L_08871B64;
    }
L_08871B64:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    goto L_08871B68;
L_08871B68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g6 = (g6 - hot_regs.g5);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g9 = (g9 >> 29u);
    g6 = (g6 + g9);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g6 = (g6 << 3u);
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    g6 = (g8 + g6);
    g8 = (g9 - hot_regs.g5);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 3u));
    g6 = (g6 >> 29u);
    g6 = (g8 + g6);
    g9 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g6 = (g6 << 3u);
    g6 = (g9 + g6);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g7 = (g7 + static_cast<std::uint32_t>(24));
    g8 = (g6 < g7 ? 1u : 0u);
    if (g8 == 0u) {
    g6 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
        goto L_08871B68;
    }
    goto L_08871BC8;
}
L_08871BC8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08871BD4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g7 = (ctx.gpr[17] << 3u);
    hot_regs.g6 = (hot_regs.g6 << 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08871C08u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871C08u) goto L_08871C08;
    return;
L_08871C08:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (ctx.gpr[17] << 3u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(28), hot_regs.g2);
    g4 = (hot_regs.g2 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    g4 = (g4 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(24), g4);
    g4 = (g16 | 0u);
    hot_regs.g31 = (0x08871C2Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    goto L_08871AE4;
}
L_08871C2C:
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
L_08871C44:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    hot_regs.g6 = (hot_regs.g4 << 3u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g7 = (ctx.gpr[17] << 3u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g7 + hot_regs.g7);
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08871C8Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871C8Cu) goto L_08871C8C;
    return;
L_08871C8C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g5 = (0u | 24u);
    g4 = (g4 - ctx.gpr[18]);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(40), g2);
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(44)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g2 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), g4);
    g4 = (ctx.lo);
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g2 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
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
L_08871CEC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08871D14;
      }
      goto L_08871D04;
    }
}
L_08871D04:
    hot_regs.g31 = (0x08871D0Cu);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g6);
    goto L_08871BD4;
L_08871D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871D20;
      }
      goto L_08871D14;
    }
L_08871D14:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g6 + g5);
    hot_regs.g31 = (0x08871D20u);
    g5 = (g5 + static_cast<std::uint32_t>(5));
    hot_regs.g5 = g5;
    goto L_08871BD4;
}
L_08871D20:
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
L_08871D2C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 4097 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08871D54;
      }
      goto L_08871D44;
    }
}
L_08871D44:
    hot_regs.g31 = (0x08871D4Cu);
    hot_regs.g5 = (0u | 5u);
    goto L_088719B4;
L_08871D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08871D7C;
      }
      goto L_08871D54;
    }
L_08871D54:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g31 = (0x08871D60u);
    g5 = (g5 + g5);
    hot_regs.g5 = g5;
    goto L_08871C44;
}
L_08871D60:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(44)));
    g5 = (static_cast<std::int32_t>(g5) < 4097 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08871D7C;
      }
      goto L_08871D74;
    }
}
L_08871D74:
    hot_regs.g31 = (0x08871D7Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27432));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871D7Cu) goto L_08871D7C;
    return;
L_08871D7C:
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
L_08871D88:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g19);
    g19 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g31);
    { const bool branch_taken = g19 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08871E64;
      }
      goto L_08871DAC;
    }
}
L_08871DAC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g7 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08871E64;
      }
      goto L_08871DB8;
    }
L_08871DB8:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g17 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (hot_regs.g5 - g17);
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), g6);
    g6 = (0u | 4u);
    { const bool branch_taken = hot_regs.g7 != g6;
    g17 = (ctx.gpr[8] - g17);
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08871DE8;
      }
      goto L_08871DE0;
    }
}
L_08871DE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08871E00;
      }
      goto L_08871DE8;
    }
L_08871DE8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (0u | 24u);
    g6 = (hot_regs.g4 - g6);
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g6 = (ctx.lo);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), g6);
    hot_regs.g6 = g6;
    goto L_08871E00;
}
L_08871E00:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    g6 = (g6 - hot_regs.g5);
    g6 = (static_cast<std::int32_t>(g6) < 161 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08871E28;
      }
      goto L_08871E14;
    }
}
L_08871E14:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08871E20u);
    hot_regs.g5 = (0u | 20u);
    goto L_08871CEC;
L_08871E20:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08871E28;
L_08871E28:
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    jump_target = ctx.gpr[19];
    hot_regs.g31 = (0x08871E40u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871E40u) goto L_08871E40;
    return;
L_08871E40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 1u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g4 = (g4 + ctx.gpr[18]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08871E64;
}
L_08871E64:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08871E80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g6 = (g4 - g6);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 3u));
    g7 = (g7 >> 29u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g18);
    g18 = (g6 + g7);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 3u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g19);
    g19 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    { const bool branch_taken = g19 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08871F1C;
      }
      goto L_08871ECC;
    }
}
L_08871ECC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    g4 = (ctx.gpr[17] - ctx.gpr[18]);
    hot_regs.g7 = (g4 << 3u);
    g5 = (hot_regs.g6 - g5);
    g5 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08871EF4;
      }
      goto L_08871EEC;
    }
}
L_08871EEC:
    hot_regs.g31 = (0x08871EF4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08871CEC;
L_08871EF4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08871F1C;
      }
      goto L_08871EFC;
    }
L_08871EFC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (g5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), 0u);
    g5 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08871EFC;
      }
      goto L_08871F1C;
    }
}
L_08871F1C:
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08871F30u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 588u, 0x08A93C14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871F30u) goto L_08871F30;
    return;
L_08871F30:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[19] = (ctx.gpr[17] << 3u);
      if (branch_taken) {
          goto L_08871F94;
      }
      goto L_08871F44;
    }
L_08871F44:
    ctx.gpr[20] = (0u | 0u);
    goto L_08871F48;
L_08871F48:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g5 - ctx.gpr[19]);
    ctx.gpr[22] = (hot_regs.g4 + ctx.gpr[20]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08871F68u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 28u, 0x08A94190u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871F68u) goto L_08871F68;
    return;
L_08871F68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(0), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g2 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08871F48;
      }
      goto L_08871F94;
    }
}
L_08871F94:
    ctx.gpr[20] = (hot_regs.g29 | 0u);
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27416));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08871FB0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871FB0u) goto L_08871FB0;
    return;
L_08871FB0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08871FC4u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 17u, 0x08A940D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08871FC4u) goto L_08871FC4;
    return;
L_08871FC4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(g17);
    g4 = (0u | 3u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(0), g4);
    g4 = (0u | 5u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g5 = (g5 - ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    g17 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (g4 - g17);
    g4 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (g17 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0887201C;
      }
      goto L_08872008;
    }
}
}
L_08872008:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872014u);
    hot_regs.g5 = (0u | 1u);
    goto L_08871CEC;
L_08872014:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_0887201C;
L_0887201C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), hot_regs.g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08872048:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08872070u);
    hot_regs.g6 = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 41u, 0x08B2463Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872070u) goto L_08872070;
    return;
L_08872070:
{
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    g18 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    g18 = (ctx.gpr[16] - g18);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08872098;
      }
      goto L_08872088;
    }
}
L_08872088:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27412));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08872098u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 705u, 0x089E7464u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872098u) goto L_08872098;
    return;
L_08872098:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g6 = (ctx.gpr[16] < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088720DC;
      }
      goto L_088720AC;
    }
L_088720AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g4 + static_cast<std::uint32_t>(-8));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g4 + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(-8));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (ctx.gpr[16] < g4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088720AC;
      }
      goto L_088720D8;
    }
}
L_088720D8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_088720DC;
L_088720DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    g4 = (g4 - hot_regs.g5);
    g4 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08872104;
      }
      goto L_088720F0;
    }
}
L_088720F0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088720FCu);
    hot_regs.g5 = (0u | 1u);
    goto L_08871CEC;
L_088720FC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    goto L_08872104;
L_08872104:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    g2 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(28)));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    g2 = (g2 + ctx.gpr[18]);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(0), g4);
    g4 = (g19 + static_cast<std::uint32_t>(4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g2 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08872148:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    hot_regs.g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    g18 = (g5 - g18);
    hot_regs.g7 = (0u | 6u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    ctx.gpr[19] = (g5 | 0u);
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0887218C;
      }
      goto L_0887217C;
    }
}
L_0887217C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872188u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_08872048;
L_08872188:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    goto L_0887218C;
L_0887218C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088721A8;
      }
      goto L_088721A0;
    }
}
L_088721A0:
    hot_regs.g31 = (0x088721A8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08871D2C;
L_088721A8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08872294;
      }
      goto L_088721B8;
    }
L_088721B8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088721D8;
      }
      goto L_088721C8;
    }
}
L_088721C8:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    hot_regs.g6 = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x088721D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08871E80;
L_088721D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (g4 << 3u);
    g5 = (g5 - hot_regs.g6);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08872208;
    }
    goto L_088721F8;
}
L_088721F8:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    hot_regs.g31 = (0x08872204u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08871CEC;
L_08872204:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08872208;
L_08872208:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    g5 = (g5 + ctx.gpr[18]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g4);
    g5 = (g5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), g5);
    g6 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(71)));
    g6 = (g6 << 3u);
    g5 = (g5 + g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    g5 = (0u | 8u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 < g6 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08872284;
      }
      goto L_0887225C;
    }
}
L_0887225C:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    goto L_08872260;
L_08872260:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 < g6 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08872260;
      }
      goto L_08872284;
    }
}
L_08872284:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g2 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0887232C;
      }
      goto L_08872294;
    }
}
L_08872294:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (g4 - hot_regs.g5);
    g4 = (static_cast<std::int32_t>(g4) < 161 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088722B4;
      }
      goto L_088722AC;
    }
}
L_088722AC:
    hot_regs.g31 = (0x088722B4u);
    hot_regs.g5 = (0u | 20u);
    goto L_08871CEC;
L_088722B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    g5 = (g5 + ctx.gpr[18]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g4);
    g5 = (g5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), g5);
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g5 = (0u | 1u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(48)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08872308;
      }
      goto L_088722F8;
    }
}
L_088722F8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08872308u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08871D88;
L_08872308:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(-4)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x0887231Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887231Cu) goto L_0887231C;
    return;
L_0887231C:
{
    std::uint32_t g2 = hot_regs.g2;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g2 = (g2 << 3u);
    { const bool branch_taken = 0u == 0u;
    g2 = (hot_regs.g4 - g2);
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_0887232C;
      }
      goto L_0887232C;
    }
}
L_0887232C:
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
L_08872348:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    g17 = (hot_regs.g5 - g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08872370u);
    hot_regs.g5 = (0u | 1u);
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08871D88;
}
L_08872370:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088723C0;
      }
      goto L_08872384;
    }
}
L_08872384:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + static_cast<std::uint32_t>(20));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088723C0;
      }
      goto L_08872398;
    }
}
L_08872398:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 4u);
    hot_regs.g31 = (0x088723A8u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08871D88;
L_088723A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(20));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08872398;
      }
      goto L_088723C0;
    }
}
L_088723C0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    g2 = (g2 + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088723DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g7 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (g4 | 0u);
    ctx.gpr[18] = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    g7 = (g7 & 2u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g7 == 0u;
    g4 = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0887241C;
      }
      goto L_0887240C;
    }
}
L_0887240C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08872418u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08872348;
L_08872418:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_0887241C;
L_0887241C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    g7 = (g5 + static_cast<std::uint32_t>(-24));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(20), g7);
    g5 = (g6 + static_cast<std::uint32_t>(-8));
    g6 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(12), g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08872438;
}
L_08872438:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08872484;
      }
      goto L_08872440;
    }
L_08872440:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g6 = (hot_regs.g4 < g6 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08872484;
      }
      goto L_08872450;
    }
}
L_08872450:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    ctx.gpr[8] = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g7 = (g5 | 0u);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g7 + static_cast<std::uint32_t>(4));
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    g5 = (g5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08872438;
      }
      goto L_08872484;
    }
}
L_08872484:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088724A8;
      }
      goto L_08872490;
    }
L_08872490:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (g18 | 0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), 0u);
    g18 = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    ctx.gpr[16] = (g18 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08872490;
      }
      goto L_088724A8;
    }
}
L_088724A8:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), hot_regs.g5);
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
L_088724C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g7 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (g4 | 0u);
    ctx.gpr[8] = (g7 & 65535u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    g4 = (static_cast<std::int32_t>(ctx.gpr[8]) < 200 ? 1u : 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0887253C;
      }
      goto L_088724FC;
    }
}
L_088724FC:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(46)));
    hot_regs.g5 = (0u | 200u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08872524;
      }
      goto L_0887250C;
    }
L_0887250C:
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0887251Cu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-24356));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887251Cu) goto L_0887251C;
    return;
L_0887251C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887253C;
      }
      goto L_08872524;
    }
L_08872524:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 225 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0887253C;
      }
      goto L_08872530;
    }
}
L_08872530:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0887253Cu);
    hot_regs.g5 = (0u | 5u);
    goto L_088719B4;
L_0887253C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08872548u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08872148;
L_08872548:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08872560;
      }
      goto L_08872554;
    }
L_08872554:
    hot_regs.g31 = (0x0887255Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 30u, 0x088C4228u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887255Cu) goto L_0887255C;
    return;
L_0887255C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    goto L_08872560;
L_08872560:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872570u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_088723DC;
L_08872570:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(46)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g18 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(36)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    g4 = (g4 < g5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0887259C;
      }
      goto L_08872594;
    }
}
L_08872594:
    hot_regs.g31 = (0x0887259Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887259Cu) goto L_0887259C;
    return;
L_0887259C:
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
L_088725B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g4 != hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088725F8;
      }
      goto L_088725D8;
    }
}
L_088725D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g5 = (g5 << 3u);
    g5 = (g4 - g5);
    g5 = (g5 + static_cast<std::uint32_t>(-8));
    hot_regs.g31 = (0x088725F0u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08872148;
}
L_088725F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887265C;
      }
      goto L_088725F8;
    }
L_088725F8:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (hot_regs.g6 & 1u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08872650;
      }
      goto L_08872608;
    }
L_08872608:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-4)));
    g5 = (g5 << 3u);
    g4 = (g4 >> 6u);
    g4 = (g4 & 511u);
    g6 = (g6 - g5);
    ctx.gpr[17] = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872634u);
    g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_088723DC;
}
L_08872634:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08872648;
      }
      goto L_0887263C;
    }
L_0887263C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
    goto L_08872648;
}
L_08872648:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887265C;
      }
      goto L_08872650;
    }
L_08872650:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(-17));
    g5 = (hot_regs.g6 & g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), g5);
    hot_regs.g5 = g5;
    goto L_0887265C;
}
L_0887265C:
    hot_regs.g31 = (0x08872664u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 30u, 0x088C4228u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872664u) goto L_08872664;
    return;
L_08872664:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08872680;
      }
      goto L_08872670;
    }
L_08872670:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872680u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    goto L_088723DC;
L_08872680:
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
L_08872694:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.g5 = (0u | 4u);
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    hot_regs.g31 = (0x088726D4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088726D4u) goto L_088726D4;
    return;
L_088726D4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088726E4u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088726E4u) goto L_088726E4;
    return;
L_088726E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (g4 - hot_regs.g5);
    g4 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08872708;
      }
      goto L_08872700;
    }
}
L_08872700:
    hot_regs.g31 = (0x08872708u);
    hot_regs.g5 = (0u | 1u);
    goto L_08871CEC;
L_08872708:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08872734:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088727C8;
      }
      goto L_0887275C;
    }
}
L_0887275C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g4 = (g4 - g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g5 = (g5 >> 29u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g4 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088727B0;
      }
      goto L_08872788;
    }
}
L_08872788:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2183u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088727A0u);
    g5 = (g5 + static_cast<std::uint32_t>(9652));
    hot_regs.g5 = g5;
    goto L_08871A18;
}
L_088727A0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088727F0;
      }
      goto L_088727A8;
    }
L_088727A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872834;
      }
      goto L_088727B0;
    }
L_088727B0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088727C0u);
    g5 = (g5 + static_cast<std::uint32_t>(-24336));
    hot_regs.g5 = g5;
    goto L_08872694;
}
L_088727C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872834;
      }
      goto L_088727C8;
    }
L_088727C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08872788;
      }
      goto L_088727D8;
    }
}
L_088727D8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088727E8u);
    g5 = (g5 + static_cast<std::uint32_t>(-24304));
    hot_regs.g5 = g5;
    goto L_08872694;
}
L_088727E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872834;
      }
      goto L_088727F0;
    }
L_088727F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08872814u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872814u) goto L_08872814;
    return;
L_08872814:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872824u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    goto L_088718CC;
L_08872824:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.g31 = (0x08872830u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08871A78;
L_08872830:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    goto L_08872834;
L_08872834:
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
L_08872848:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) <= 0;
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08872880;
      }
      goto L_0887285C;
    }
}
L_0887285C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    hot_regs.g5 = (2232u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g31 = (0x08872874u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-24264));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872874u) goto L_08872874;
    return;
L_08872874:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    goto L_08872880;
}
L_08872880:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    g6 = (g6 & 1u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0887293C;
      }
      goto L_08872890;
    }
}
L_08872890:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-16)));
    g6 = (g6 & 1u);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[8] = (hot_regs.g5 << 3u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088728CC;
      }
      goto L_088728A0;
    }
}
L_088728A0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    hot_regs.g5 = (2232u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g31 = (0x088728BCu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-24212));
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 743u, 0x089E77C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088728BCu) goto L_088728BC;
    return;
L_088728BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    goto L_088728CC;
}
L_088728CC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    g6 = (g6 - ctx.gpr[8]);
    g6 = (ctx.gpr[9] < g6 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0887293C;
      }
      goto L_088728E4;
    }
}
L_088728E4:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (0u | 0u);
    g6 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08872934;
      }
      goto L_088728F4;
    }
}
L_088728F4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    g9 = (g9 + g6);
    g11 = (g11 - ctx.gpr[8]);
    g11 = (g11 + g6);
    hot_regs.g2 = (aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(0)));
    g11 = (g11 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(0)));
    g9 = (g9 + static_cast<std::uint32_t>(4));
    g11 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), g11);
    g6 = (g6 + static_cast<std::uint32_t>(8));
    g11 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g11 != 0u;
    g9 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088728F4;
      }
      goto L_08872934;
    }
}
L_08872934:
    hot_regs.g5 = (ctx.gpr[9] + ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g5);
    goto L_0887293C;
L_0887293C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    g4 = (g4 | 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), g4);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08872958:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g17);
    g17 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g20);
    g20 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(49)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    g20 = (g20 - g4);
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x088729A4u);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    goto L_08871A18;
}
L_088729A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088729FC;
      }
      goto L_088729AC;
    }
L_088729AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    ctx.gpr[16] = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088729C4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 68u, 0x08AB05DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088729C4u) goto L_088729C4;
    return;
L_088729C4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088729D4u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_088718CC;
L_088729D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[21]));
    g4 = (g4 + ctx.gpr[20]);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(20), g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(12), g4);
    hot_regs.g31 = (0x088729F8u);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    goto L_08871A78;
}
L_088729F8:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    goto L_088729FC;
L_088729FC:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
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
L_08872A24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(36)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    g4 = (g4 < g6 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08872A58;
      }
      goto L_08872A50;
    }
}
L_08872A50:
    hot_regs.g31 = (0x08872A58u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 534u, 0x08A16D40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872A58u) goto L_08872A58;
    return;
L_08872A58:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    g17 = (g17 + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08872A80;
      }
      goto L_08872A68;
    }
}
L_08872A68:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872A78u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 513u, 0x089E67F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872A78u) goto L_08872A78;
    return;
L_08872A78:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08872A94;
      }
      goto L_08872A80;
    }
L_08872A80:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872A90u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 841u, 0x0893BF28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872A90u) goto L_08872A90;
    return;
L_08872A90:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_08872A94;
L_08872A94:
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08872AA8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 56u, 0x08AB04C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872AA8u) goto L_08872AA8;
    return;
L_08872AA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g5 = (0u | 6u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (g4 - g5);
    g4 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08872ADC;
      }
      goto L_08872AD4;
    }
}
L_08872AD4:
    hot_regs.g31 = (0x08872ADCu);
    hot_regs.g5 = (0u | 1u);
    goto L_08871CEC;
L_08872ADC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
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
L_08872AFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    g7 = (g7 - ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), 0u);
    g5 = (2183u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g6 = (g29 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x08872B38u);
    g5 = (g5 + static_cast<std::uint32_t>(10788));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    goto L_08871A18;
}
L_08872B38:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08872B50u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 148u, 0x08A9D3CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872B50u) goto L_08872B50;
    return;
L_08872B50:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g2);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), 0u);
    g2 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = g2 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08872B80;
      }
      goto L_08872B68;
    }
}
L_08872B68:
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g2);
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(28)));
    g6 = (g6 + hot_regs.g5);
    hot_regs.g31 = (0x08872B7Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = g6;
    goto L_088718CC;
}
L_08872B7C:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    goto L_08872B80;
L_08872B80:
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
L_08872B8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
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
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08872BB8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g9 = (2235u << 16u);
    f13 = std::bit_cast<float>(0u);
    g9 = (g9 + static_cast<std::uint32_t>(21408));
    g6 = (0u | 0u);
    g7 = (g9 + static_cast<std::uint32_t>(16));
    g4 = (g9 + static_cast<std::uint32_t>(32));
    g7 = (g6 + g7);
    g6 = (g6 + g4);
    g4 = (16256u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (2240u << 16u);
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[8] = (0u | 19u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    g4 = (g4 + static_cast<std::uint32_t>(-25240));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    hot_regs.g29 = g29;
    hot_regs.f13 = f13;
    goto L_08872C00;
}
}
L_08872C00:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g9 = (g9 + static_cast<std::uint32_t>(64));
    g7 = (g7 + static_cast<std::uint32_t>(64));
    ctx.gpr[10] = (static_cast<std::int32_t>(g5) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08872C00;
      }
      goto L_08872C3C;
    }
}
L_08872C3C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (48460u << 16u);
    g6 = (g6 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    hot_regs.g5 = (0u | 0u);
    g6 = (15267u << 16u);
    g6 = (g6 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(g6);
    hot_regs.g6 = g6;
    goto L_08872C58;
}
L_08872C58:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    f13 = f13 + hot_regs.f12;
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 20 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08872C58;
      }
      goto L_08872C70;
    }
}
}
L_08872C70:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08872C78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    ctx.gpr[22] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), hot_regs.g31);
    hot_regs.g31 = (0x08872CC8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872CC8u) goto L_08872CC8;
    return;
L_08872CC8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2235u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(21408));
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[21] = (g5 | 0u);
    hot_regs.g5 = g5;
    goto L_08872CDC;
}
L_08872CDC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = g6 == 0u;
    g6 = (static_cast<std::int32_t>(ctx.gpr[22]) < 100 ? 1u : 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08872D00;
      }
      goto L_08872CE8;
    }
}
L_08872CE8:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08872D00;
      }
      goto L_08872CF0;
    }
L_08872CF0:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08872CDC;
      }
      goto L_08872D00;
    }
L_08872D00:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 100u);
    { const bool branch_taken = ctx.gpr[22] == g6;
    g6 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08872D70;
      }
      goto L_08872D0C;
    }
}
L_08872D0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g21 = ctx.gpr[21];
    g7 = (g18 | 0u);
    g18 = (0u | 1u);
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g18));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g8 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    g8 = (g4 + g8);
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g19 = (hot_regs.g5 + static_cast<std::uint32_t>(32));
    g19 = (g4 + g19);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = g19 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[22];
    hot_regs.f22 = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08872D78;
      }
      goto L_08872D68;
    }
}
L_08872D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872D8C;
      }
      goto L_08872D70;
    }
L_08872D70:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08872F4C;
      }
      goto L_08872D78;
    }
L_08872D78:
    hot_regs.g31 = (0x08872D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872D80u) goto L_08872D80;
    return;
L_08872D80:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08872D8C;
      }
      goto L_08872D88;
    }
L_08872D88:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_08872D8C;
L_08872D8C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08872E30;
      }
      goto L_08872DA0;
    }
}
L_08872DA0:
    hot_regs.g31 = (0x08872DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872DA8u) goto L_08872DA8;
    return;
L_08872DA8:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    ctx.gpr[23] = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (2240u << 16u);
    ctx.gpr[30] = (hot_regs.g4 + static_cast<std::uint32_t>(-25240));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (ctx.hi);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[30]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g31 = (0x08872DE0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872DE0u) goto L_08872DE0;
    return;
L_08872DE0:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (ctx.hi);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[30]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g31 = (0x08872E0Cu);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872E0Cu) goto L_08872E0C;
    return;
L_08872E0C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    g4 = (ctx.hi);
    g4 = (g4 << 2u);
    g4 = (g4 + ctx.gpr[30]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = f12 + hot_regs.f14;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08872E30;
}
}
L_08872E30:
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 & 8u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08872EB0;
      }
      goto L_08872E60;
    }
L_08872E60:
    hot_regs.g31 = (0x08872E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872E68u) goto L_08872E68;
    return;
L_08872E68:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g5 = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (ctx.hi);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (2240u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-25240));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08872EC8;
      }
      goto L_08872EB0;
    }
L_08872EB0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
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
    goto L_08872EC8;
L_08872EC8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08872EE8;
      }
      goto L_08872EDC;
    }
}
}
L_08872EDC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08872EE8;
L_08872EE8:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    f12 = f12 + hot_regs.f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    f14 = std::bit_cast<float>(hot_regs.g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08872F48;
      }
      goto L_08872F08;
    }
}
L_08872F08:
    hot_regs.g31 = (0x08872F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08872F10u) goto L_08872F10;
    return;
L_08872F10:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08872F48;
      }
      goto L_08872F18;
    }
L_08872F18:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27384)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
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
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27380)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08872F48;
L_08872F48:
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    goto L_08872F4C;
L_08872F4C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
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
L_08872F84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-160));
    g4 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g4);
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(21408));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g4);
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (20352u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g23);
    g23 = (2238u << 16u);
    g4 = (16384u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(16));
    g23 = (g23 + static_cast<std::uint32_t>(14864));
    ctx.gpr[30] = (16384u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), hot_regs.g31);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    goto L_08873010;
}
L_08873010:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_08873020;
    }
L_08873020:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (0u | 3u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_0887303C;
    }
}
L_0887303C:
    hot_regs.g31 = (0x08873044u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 561u, 0x08906858u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873044u) goto L_08873044;
    return;
L_08873044:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08873050;
      }
      goto L_0887304C;
    }
L_0887304C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), 0u);
    goto L_08873050;
L_08873050:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0887336C;
      }
      goto L_0887305C;
    }
L_0887305C:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08873068u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873068u) goto L_08873068;
    return;
L_08873068:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    f12 = std::bit_cast<float>(g4);
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    if (static_cast<std::int32_t>(g4) < 0) {
    f12 = f12 + hot_regs.f20;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08873088;
    }
    goto L_08873088;
}
}
L_08873088:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088730A0;
      }
      goto L_0887309C;
    }
L_0887309C:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_088730A0;
L_088730A0:
    hot_regs.g4 = (ctx.gpr[17] & 2u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08873130;
      }
      goto L_088730AC;
    }
L_088730AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08873110;
      }
      goto L_088730B8;
    }
L_088730B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08873110;
      }
      goto L_088730D8;
    }
}
L_088730D8:
    hot_regs.g31 = (0x088730E0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088730E0u) goto L_088730E0;
    return;
L_088730E0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08873110;
      }
      goto L_088730E8;
    }
L_088730E8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27400)));
    hot_regs.g31 = (0x088730F4u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    goto L_08872B8C;
L_088730F4:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873130;
      }
      goto L_08873110;
    }
L_08873110:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27396)));
    hot_regs.g31 = (0x0887311Cu);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    goto L_08872B8C;
L_0887311C:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08873130;
L_08873130:
    hot_regs.g4 = (ctx.gpr[17] & 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088731A8;
      }
      goto L_0887313C;
    }
L_0887313C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (hot_regs.g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08873194;
    }
    goto L_08873148;
L_08873148:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = g4;
        goto L_08873194;
    }
    goto L_08873168;
}
L_08873168:
    hot_regs.g31 = (0x08873170u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873170u) goto L_08873170;
    return;
L_08873170:
    if (hot_regs.g2 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
        goto L_08873194;
    }
    goto L_08873178;
L_08873178:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27392)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 + f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088731A8;
      }
      goto L_08873194;
    }
}
L_08873194:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27388)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 + f12;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088731A8;
}
L_088731A8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x088731CCu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088731CCu) goto L_088731CC;
    return;
L_088731CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08873324;
      }
      goto L_088731D8;
    }
L_088731D8:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((hot_regs.f22 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088731F0;
      }
      goto L_088731EC;
    }
L_088731EC:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088731F0;
L_088731F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(1914)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08873300;
      }
      goto L_08873208;
    }
}
L_08873208:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g31 = (0x0887321Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 561u, 0x08906858u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887321Cu) goto L_0887321C;
    return;
L_0887321C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0887322C;
      }
      goto L_08873224;
    }
L_08873224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088732E8;
      }
      goto L_0887322C;
    }
L_0887322C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08873250u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873250u) goto L_08873250;
    return;
L_08873250:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088732E8;
      }
      goto L_08873258;
    }
L_08873258:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
          goto L_088732E8;
      }
      goto L_08873278;
    }
L_08873278:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (2048u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088732E8;
      }
      goto L_0887328C;
    }
}
L_0887328C:
    hot_regs.g31 = (0x08873294u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873294u) goto L_08873294;
    return;
L_08873294:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088732CC;
      }
      goto L_0887329C;
    }
L_0887329C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088732ACu);
    hot_regs.g6 = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088732ACu) goto L_088732AC;
    return;
L_088732AC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g5 | ctx.gpr[30]);
    hot_regs.g31 = (0x088732C0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 887u, 0x0890FF64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088732C0u) goto L_088732C0;
    return;
L_088732C0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088732CCu);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088732CCu) goto L_088732CC;
    return;
L_088732CC:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x088732E8u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 167u, 0x089D1074u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088732E8u) goto L_088732E8;
    return;
L_088732E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(1914)));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08873208;
      }
      goto L_08873300;
    }
}
L_08873300:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08873324;
      }
      goto L_0887330C;
    }
L_0887330C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08873324u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 577u, 0x088937CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873324u) goto L_08873324;
    return;
L_08873324:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0887336C;
      }
      goto L_0887333C;
    }
}
L_0887333C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08873354u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 626u, 0x08893C18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873354u) goto L_08873354;
    return;
L_08873354:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x0887336Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 647u, 0x08893E14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887336Cu) goto L_0887336C;
    return;
L_0887336C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g4);
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 100 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08873010;
      }
      goto L_0887338C;
    }
}
L_0887338C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088733D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (18804u << 16u);
    g5 = (g5 | 9216u);
    f12 = std::bit_cast<float>(g5);
    hot_regs.g2 = (g4 | 0u);
    g5 = (51572u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 | 9216u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08873400:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f15));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08873418:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (2178u << 16u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (0u | 52u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08873448u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-24460));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873448u) goto L_08873448;
    return;
L_08873448:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(-48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08873464u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 816u, 0x08B1B6D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873464u) goto L_08873464;
    return;
L_08873464:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_0887347C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6004)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2235u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(27808));
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088734A8;
      }
      goto L_08873498;
    }
}
L_08873498:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6004), g4);
    hot_regs.g31 = (0x088734A8u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    goto L_08873418;
}
L_088734A8:
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
L_088734BC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (g5 << 24u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    g5 = (g5 << 24u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g5 == hot_regs.g6;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08873504;
      }
      goto L_088734EC;
    }
}
L_088734EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 << 4u);
    g5 = (g5 + g4);
    g5 = (g5 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08873504;
}
L_08873504:
    hot_regs.g31 = (0x0887350Cu);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 364u, 0x08819EE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887350Cu) goto L_0887350C;
    return;
L_0887350C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), hot_regs.g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g17);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0887352C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x0887353Cu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887353Cu) goto L_0887353C;
    return;
L_0887353C:
    hot_regs.g31 = (0x08873544u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873544u) goto L_08873544;
    return;
L_08873544:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g2) < -125 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
      if (branch_taken) {
          goto L_08873570;
      }
      goto L_08873550;
    }
L_08873550:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27176)));
    g5 = (hot_regs.g4 - g5);
    g5 = (g5 < static_cast<std::uint32_t>(201) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08873574;
      }
      goto L_08873564;
    }
}
L_08873564:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27176), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08873578;
      }
      goto L_08873570;
    }
L_08873570:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27176), hot_regs.g4);
    goto L_08873574;
L_08873574:
    hot_regs.g2 = (0u | 0u);
    goto L_08873578;
L_08873578:
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
L_08873584:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08873594u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873594u) goto L_08873594;
    return;
L_08873594:
    hot_regs.g31 = (0x0887359Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 100u, 0x0898C420u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887359Cu) goto L_0887359C;
    return;
L_0887359C:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g2) < 126 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8144)));
      if (branch_taken) {
          goto L_088735C8;
      }
      goto L_088735A8;
    }
L_088735A8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27172)));
    g5 = (hot_regs.g4 - g5);
    g5 = (g5 < static_cast<std::uint32_t>(201) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088735CC;
      }
      goto L_088735BC;
    }
}
L_088735BC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27172), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088735D0;
      }
      goto L_088735C8;
    }
L_088735C8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-27172), hot_regs.g4);
    goto L_088735CC;
L_088735CC:
    hot_regs.g2 = (0u | 0u);
    goto L_088735D0;
L_088735D0:
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
L_088735DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 255u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g5));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08873600:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (2237u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    g17 = (2237u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(-28416));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08873638;
      }
      goto L_08873630;
    }
}
L_08873630:
    hot_regs.g31 = (0x08873638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873638u) goto L_08873638;
    return;
L_08873638:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    hot_regs.g31 = (0x08873644u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 728u, 0x089C7184u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873644u) goto L_08873644;
    return;
L_08873644:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08873668u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 81u, 0x08874584u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873668u) goto L_08873668;
    return;
L_08873668:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    hot_regs.g31 = (0x08873678u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08873D30;
L_08873678:
    hot_regs.g31 = (0x08873680u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27160));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 269u, 0x0893509Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873680u) goto L_08873680;
    return;
L_08873680:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088736A0;
      }
      goto L_0887368C;
    }
}
L_0887368C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x08873698u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873698u) goto L_08873698;
    return;
L_08873698:
    hot_regs.g31 = (0x088736A0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088736A0u) goto L_088736A0;
    return;
L_088736A0:
    hot_regs.g31 = (0x088736A8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 609u, 0x0882E9A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088736A8u) goto L_088736A8;
    return;
L_088736A8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088736B8;
      }
      goto L_088736B0;
    }
L_088736B0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(396), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_088736B8;
L_088736B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088736CC;
      }
      goto L_088736C4;
    }
L_088736C4:
    hot_regs.g31 = (0x088736CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088736CCu) goto L_088736CC;
    return;
L_088736CC:
    hot_regs.g31 = (0x088736D4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088736D4u) goto L_088736D4;
    return;
L_088736D4:
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
L_088736E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08873700u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0205_entry, 205u, 734u, 0x08B3AAF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873700u) goto L_08873700;
    return;
L_08873700:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0887378C;
      }
      goto L_08873708;
    }
L_08873708:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
        goto L_08873720;
    }
    goto L_08873714;
L_08873714:
    hot_regs.g31 = (0x0887371Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0887371Cu) goto L_0887371C;
    return;
L_0887371C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08873720;
L_08873720:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08873754;
      }
      goto L_0887372C;
    }
}
L_0887372C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(16))))));
    if (g5 != 0u) {
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = g5;
        goto L_08873758;
    }
    goto L_0887373C;
}
L_0887373C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    g6 = (2213u << 16u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g6 = (g6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = g6 == g5;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0887375C;
      }
      goto L_08873754;
    }
}
L_08873754:
    hot_regs.g4 = (0u | 1u);
    goto L_08873758;
L_08873758:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_0887375C;
L_0887375C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0887378C;
      }
      goto L_08873764;
    }
L_08873764:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    hot_regs.g4 = g4;
        goto L_0887377C;
    }
    goto L_08873770;
}
L_08873770:
    hot_regs.g31 = (0x08873778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 656u, 0x08B66B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873778u) goto L_08873778;
    return;
L_08873778:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5880)));
    goto L_0887377C;
L_0887377C:
    hot_regs.g31 = (0x08873784u);
    hot_regs.g5 = (0u | 1u);
    goto L_088739EC;
L_08873784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873938;
      }
      goto L_0887378C;
    }
L_0887378C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2237u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(140)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0887386C;
      }
      goto L_088737A0;
    }
}
L_088737A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2237u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088737E4;
      }
      goto L_088737BC;
    }
}
L_088737BC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2237u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-28736));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(100)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    g5 = (static_cast<std::int32_t>(g5) < 0 ? 1u : 0u);
    g5 = (g5 ^ 1u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088737E8;
      }
      goto L_088737E0;
    }
}
L_088737E0:
    hot_regs.g4 = (0u | 1u);
    goto L_088737E4;
L_088737E4:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_088737E8;
L_088737E8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088737FC;
      }
      goto L_088737F0;
    }
L_088737F0:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x088737FCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 126u, 0x08AE0790u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088737FCu) goto L_088737FC;
    return;
L_088737FC:
    hot_regs.g31 = (0x08873804u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088739A0;
L_08873804:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08873810u);
    hot_regs.g5 = (0u | 1u);
    goto L_088739EC;
L_08873810:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    hot_regs.g31 = (0x08873820u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08873D30;
L_08873820:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873864;
      }
      goto L_08873828;
    }
L_08873828:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2237u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08873854;
      }
      goto L_08873834;
    }
}
L_08873834:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x08873848u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28416));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873848u) goto L_08873848;
    return;
L_08873848:
    hot_regs.g31 = (0x08873850u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873850u) goto L_08873850;
    return;
L_08873850:
    hot_regs.g4 = (2237u << 16u);
    goto L_08873854;
L_08873854:
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08873864u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28416));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873864u) goto L_08873864;
    return;
L_08873864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873938;
      }
      goto L_0887386C;
    }
L_0887386C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08873880;
      }
      goto L_08873878;
    }
L_08873878:
    hot_regs.g31 = (0x08873880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873880u) goto L_08873880;
    return;
L_08873880:
    hot_regs.g31 = (0x08873888u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873888u) goto L_08873888;
    return;
L_08873888:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088738A0;
      }
      goto L_08873890;
    }
L_08873890:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    hot_regs.g31 = (0x088738A0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08873D30;
L_088738A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = g4 != 0u;
    g4 = (2237u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088738CC;
      }
      goto L_088738AC;
    }
}
L_088738AC:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x088738C0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28416));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088738C0u) goto L_088738C0;
    return;
L_088738C0:
    hot_regs.g31 = (0x088738C8u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088738C8u) goto L_088738C8;
    return;
L_088738C8:
    hot_regs.g4 = (2237u << 16u);
    goto L_088738CC;
L_088738CC:
    hot_regs.g31 = (0x088738D4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28416));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 614u, 0x0882E9CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088738D4u) goto L_088738D4;
    return;
L_088738D4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0887392C;
      }
      goto L_088738DC;
    }
L_088738DC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(8))))));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    g5 = (g16 + g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088738F4;
      }
      goto L_088738EC;
    }
}
L_088738EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08873918;
      }
      goto L_088738F4;
    }
L_088738F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g6 << 3u);
    g4 = (g4 + g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 + g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08873918;
}
L_08873918:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08873924u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873924u) goto L_08873924;
    return;
L_08873924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873930;
      }
      goto L_0887392C;
    }
L_0887392C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    goto L_08873930;
L_08873930:
    hot_regs.g31 = (0x08873938u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 640u, 0x0886FD40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873938u) goto L_08873938;
    return;
L_08873938:
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
L_0887394C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(16))))));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(18))))));
    g6 = (g4 + g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08873988;
      }
      goto L_08873968;
    }
}
L_08873968:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g6 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 3u);
    g4 = (g4 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    g6 = (g6 + g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08873988;
      }
      goto L_08873988;
    }
}
L_08873988:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08873994u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873994u) goto L_08873994;
    return;
L_08873994:
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
L_088739A0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088739B4u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    goto L_088703C8;
}
L_088739B4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088739C4;
      }
      goto L_088739BC;
    }
L_088739BC:
    hot_regs.g31 = (0x088739C4u);
    // nop
    goto L_088703EC;
L_088739C4:
    hot_regs.g31 = (0x088739CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08873E2C;
L_088739CC:
    hot_regs.g31 = (0x088739D4u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 630u, 0x0886FCACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088739D4u) goto L_088739D4;
    return;
L_088739D4:
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
L_088739E4:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088739EC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g31 = (0x08873A0Cu);
    ctx.gpr[17] = (hot_regs.g5 & 255u);
    hot_regs.g29 = g29;
    goto L_088739A0;
}
L_08873A0C:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27352));
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27344));
    hot_regs.g31 = (0x08873A1Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08873D30;
L_08873A1C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-27191), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08873C08;
      }
      goto L_08873A24;
    }
L_08873A24:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (0u | 198u);
    hot_regs.g31 = (0x08873A34u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873A34u) goto L_08873A34;
    return;
L_08873A34:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    g18 = (2237u << 16u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g18 = (g18 + static_cast<std::uint32_t>(-28416));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08873A5C;
      }
      goto L_08873A44;
    }
}
L_08873A44:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x08873A54u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873A54u) goto L_08873A54;
    return;
L_08873A54:
    hot_regs.g31 = (0x08873A5Cu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873A5Cu) goto L_08873A5C;
    return;
L_08873A5C:
    hot_regs.g31 = (0x08873A64u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 549u, 0x0882E670u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873A64u) goto L_08873A64;
    return;
L_08873A64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08873A78;
      }
      goto L_08873A70;
    }
L_08873A70:
    hot_regs.g31 = (0x08873A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873A78u) goto L_08873A78;
    return;
L_08873A78:
    hot_regs.g31 = (0x08873A80u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873A80u) goto L_08873A80;
    return;
L_08873A80:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08873B84;
      }
      goto L_08873A88;
    }
L_08873A88:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08873AF8;
      }
      goto L_08873A94;
    }
L_08873A94:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08873AB0;
      }
      goto L_08873A9C;
    }
L_08873A9C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x08873AA8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873AA8u) goto L_08873AA8;
    return;
L_08873AA8:
    hot_regs.g31 = (0x08873AB0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873AB0u) goto L_08873AB0;
    return;
L_08873AB0:
    hot_regs.g31 = (0x08873AB8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 614u, 0x0882E9CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873AB8u) goto L_08873AB8;
    return;
L_08873AB8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
      if (branch_taken) {
          goto L_08873AF8;
      }
      goto L_08873AC0;
    }
L_08873AC0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08873AE4;
      }
      goto L_08873AC8;
    }
L_08873AC8:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x08873AD8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873AD8u) goto L_08873AD8;
    return;
L_08873AD8:
    hot_regs.g31 = (0x08873AE0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873AE0u) goto L_08873AE0;
    return;
L_08873AE0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_08873AE4;
L_08873AE4:
    hot_regs.g5 = (0u | 3u);
    hot_regs.g31 = (0x08873AF0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 942u, 0x0882FCA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873AF0u) goto L_08873AF0;
    return;
L_08873AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873C08;
      }
      goto L_08873AF8;
    }
L_08873AF8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-27152));
      if (branch_taken) {
          goto L_08873B18;
      }
      goto L_08873B00;
    }
L_08873B00:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x08873B10u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B10u) goto L_08873B10;
    return;
L_08873B10:
    hot_regs.g31 = (0x08873B18u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B18u) goto L_08873B18;
    return;
L_08873B18:
    hot_regs.g31 = (0x08873B20u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 605u, 0x0882E980u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B20u) goto L_08873B20;
    return;
L_08873B20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08873B40;
      }
      goto L_08873B2C;
    }
}
L_08873B2C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x08873B38u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B38u) goto L_08873B38;
    return;
L_08873B38:
    hot_regs.g31 = (0x08873B40u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B40u) goto L_08873B40;
    return;
L_08873B40:
    hot_regs.g31 = (0x08873B48u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B48u) goto L_08873B48;
    return;
L_08873B48:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08873B5Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B5Cu) goto L_08873B5C;
    return;
L_08873B5C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08873B68u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 641u, 0x08AE2634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B68u) goto L_08873B68;
    return;
L_08873B68:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873B7C;
      }
      goto L_08873B74;
    }
L_08873B74:
    hot_regs.g31 = (0x08873B7Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B7Cu) goto L_08873B7C;
    return;
L_08873B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08873C08;
      }
      goto L_08873B84;
    }
L_08873B84:
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-27152));
      if (branch_taken) {
          goto L_08873BA4;
      }
      goto L_08873B8C;
    }
L_08873B8C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x08873B9Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873B9Cu) goto L_08873B9C;
    return;
L_08873B9C:
    hot_regs.g31 = (0x08873BA4u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873BA4u) goto L_08873BA4;
    return;
L_08873BA4:
    hot_regs.g31 = (0x08873BACu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 605u, 0x0882E980u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873BACu) goto L_08873BAC;
    return;
L_08873BAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7688)));
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08873BCC;
      }
      goto L_08873BB8;
    }
}
L_08873BB8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7688), hot_regs.g4);
    hot_regs.g31 = (0x08873BC4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 286u, 0x0882D794u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873BC4u) goto L_08873BC4;
    return;
L_08873BC4:
    hot_regs.g31 = (0x08873BCCu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-27188));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873BCCu) goto L_08873BCC;
    return;
L_08873BCC:
    hot_regs.g31 = (0x08873BD4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 601u, 0x0882E950u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873BD4u) goto L_08873BD4;
    return;
L_08873BD4:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    hot_regs.g31 = (0x08873BE8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873BE8u) goto L_08873BE8;
    return;
L_08873BE8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08873BF4u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 641u, 0x08AE2634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873BF4u) goto L_08873BF4;
    return;
L_08873BF4:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08873C08;
      }
      goto L_08873C00;
    }
L_08873C00:
    hot_regs.g31 = (0x08873C08u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873C08u) goto L_08873C08;
    return;
L_08873C08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08873C20;
      }
      goto L_08873C18;
    }
L_08873C18:
    hot_regs.g31 = (0x08873C20u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 771u, 0x08B67310u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873C20u) goto L_08873C20;
    return;
L_08873C20:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(hot_regs.g4));
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
L_08873C40:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-27660));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.g5 = (2183u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (hot_regs.g5 + static_cast<std::uint32_t>(13788));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(38));
    hot_regs.g5 = (0u | 7u);
    hot_regs.g6 = (0u | 10u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08873CA0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873CA0u) goto L_08873CA0;
    return;
L_08873CA0:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    hot_regs.g31 = (0x08873CACu);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 579u, 0x0886F950u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873CACu) goto L_08873CAC;
    return;
L_08873CAC:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(262), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(263), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(270));
    hot_regs.g5 = (0u | 7u);
    hot_regs.g6 = (0u | 10u);
    hot_regs.g31 = (0x08873CE4u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873CE4u) goto L_08873CE4;
    return;
L_08873CE4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(416), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08873D10u);
    hot_regs.g6 = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873D10u) goto L_08873D10;
    return;
L_08873D10:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_08873D30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g7);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g6);
    g6 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g6);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08873E1C;
      }
      goto L_08873D88;
    }
}
L_08873D88:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08873E1C;
      }
      goto L_08873D94;
    }
L_08873D94:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    g5 = (2183u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(20648));
    { const bool branch_taken = g5 != hot_regs.g4;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08873E1C;
      }
      goto L_08873DA8;
    }
}
L_08873DA8:
    hot_regs.g31 = (0x08873DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873DB0u) goto L_08873DB0;
    return;
L_08873DB0:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27124)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27128)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08873DC4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873DC4u) goto L_08873DC4;
    return;
L_08873DC4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    ctx.gpr[16] = (hot_regs.g5 + static_cast<std::uint32_t>(-28736));
    hot_regs.g31 = (0x08873DECu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873DECu) goto L_08873DEC;
    return;
L_08873DEC:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27116)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27120)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08873E00u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873E00u) goto L_08873E00;
    return;
L_08873E00:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    g4 = (g4 & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08873E1C;
}
L_08873E1C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08873E2C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    if (g4 != 0u) {
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(18))))));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_08873E58;
    }
    goto L_08873E48;
}
L_08873E48:
    hot_regs.g31 = (0x08873E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873E50u) goto L_08873E50;
    return;
L_08873E50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(18))))));
    goto L_08873E58;
L_08873E58:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08873E80;
      }
      goto L_08873E60;
    }
L_08873E60:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(16))))));
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 1u);
        goto L_08873E84;
    }
    goto L_08873E6C;
L_08873E6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g6 = (2213u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(21956));
    { const bool branch_taken = g6 == g4;
    g4 = (hot_regs.g5 & 255u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08873E88;
      }
      goto L_08873E80;
    }
}
L_08873E80:
    hot_regs.g5 = (0u | 1u);
    goto L_08873E84;
L_08873E84:
    hot_regs.g4 = (hot_regs.g5 & 255u);
    goto L_08873E88;
L_08873E88:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08873EE4;
      }
      goto L_08873E90;
    }
L_08873E90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08873EA4;
      }
      goto L_08873E9C;
    }
L_08873E9C:
    hot_regs.g31 = (0x08873EA4u);
    hot_regs.g5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    return;
L_08873EA4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08873EB8;
      }
      goto L_08873EB0;
    }
L_08873EB0:
    hot_regs.g31 = (0x08873EB8u);
    hot_regs.g5 = (0u | 0u);
    ctx.pc = 0x08B72FECu;
    return;
L_08873EB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08873EDC;
      }
      goto L_08873ED0;
    }
}
L_08873ED0:
    hot_regs.g31 = (0x08873ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873ED8u) goto L_08873ED8;
    return;
L_08873ED8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    goto L_08873EDC;
L_08873EDC:
    hot_regs.g31 = (0x08873EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 764u, 0x08A53F2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873EE4u) goto L_08873EE4;
    return;
L_08873EE4:
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
L_08873EF4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08873F0Cu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873F0Cu) goto L_08873F0C;
    return;
L_08873F0C:
    hot_regs.g31 = (0x08873F14u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 2u, 0x0898C008u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873F14u) goto L_08873F14;
    return;
L_08873F14:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08873F40;
      }
      goto L_08873F1C;
    }
L_08873F1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08873F30;
      }
      goto L_08873F28;
    }
L_08873F28:
    hot_regs.g31 = (0x08873F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 452u, 0x08B65D8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873F30u) goto L_08873F30;
    return;
L_08873F30:
    hot_regs.g31 = (0x08873F38u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5868)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 237u, 0x08A54ED4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873F38u) goto L_08873F38;
    return;
L_08873F38:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08873F4C;
      }
      goto L_08873F40;
    }
L_08873F40:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08873F4Cu);
    hot_regs.g5 = (0u | 1u);
    goto L_088739EC;
L_08873F4C:
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
L_08873F5C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08873F64:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7072)));
    g18 = (2237u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    g18 = (g18 + static_cast<std::uint32_t>(-28736));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08873FB0;
      }
      goto L_08873F90;
    }
}
L_08873F90:
    hot_regs.g31 = (0x08873F98u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 151u, 0x08ADC7A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873F98u) goto L_08873F98;
    return;
L_08873F98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g5 = (g5 & 2u);
    g5 = (0u < g5 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g5 = (g5 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08873FCC;
      }
      goto L_08873FB0;
    }
}
L_08873FB0:
    hot_regs.g31 = (0x08873FB8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 153u, 0x08ADC7B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08873FB8u) goto L_08873FB8;
    return;
L_08873FB8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g5 = (g5 & 2u);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    hot_regs.g5 = g5;
    goto L_08873FCC;
}
L_08873FCC:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 5u, 0x08874038u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08873FD4;
    }
L_08873FD4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-7076)));
    hot_regs.g7 = (2233u << 16u);
    ctx.gpr[8] = (hot_regs.g6 << 4u);
    ctx.gpr[9] = (hot_regs.g6 << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-20960));
    hot_regs.g7 = (ctx.gpr[8] + hot_regs.g7);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 5u, 0x08874038u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08873FFC;
    }
L_08873FFC:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-27112)));
    ctx.pc = 0x08874000u; return;
}

void recomp_unit_0027(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0027_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_27(Runtime &runtime) {
    runtime.register_generated_unit(27u, 0x08870000u, 16384u, &recomp_unit_0027, &recomp_unit_0027_entry);
    runtime.register_function(0x08870000u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870018u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870040u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870050u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870058u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870130u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088701FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887020Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887021Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870234u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887023Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870244u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887024Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870254u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870260u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870268u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870280u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887028Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870294u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088702FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870318u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870320u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887033Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870344u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887034Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870354u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887035Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887037Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088703ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870400u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870408u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870410u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870418u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870420u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870428u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870430u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870438u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887043Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870444u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870448u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870454u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870470u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870478u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870480u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870488u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870494u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887049Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088704F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887054Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870558u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870564u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887056Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870584u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887059Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088705F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870600u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870608u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870618u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870624u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870638u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870644u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870650u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870658u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870664u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870678u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870688u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870690u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870694u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887069Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088706F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870714u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870724u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887072Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870730u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870738u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887073Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870744u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887074Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088707F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870800u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870804u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870818u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870828u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870844u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887085Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870884u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870898u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088708F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870904u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870910u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870920u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870928u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870930u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870938u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870940u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870948u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870950u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870958u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870968u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870970u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870980u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887098Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870994u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870998u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088709F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870A90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ACCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ADCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870AF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870B90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870BFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870C98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CB4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CBCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870CF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870D94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870DF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870E94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870ED8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870EF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870F9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08870FFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871004u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871008u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887101Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887102Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871038u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871048u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871054u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887105Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871068u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871070u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871074u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871088u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871098u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088710F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871104u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871110u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871120u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887112Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871134u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871140u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871148u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887114Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871160u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871170u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887117Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887118Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871198u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088711F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871204u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887120Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871218u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871220u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871238u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871248u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871254u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871264u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871270u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871278u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871284u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887128Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871290u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088712F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871308u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887131Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871328u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871354u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871360u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887136Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871374u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887138Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088713F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871404u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871414u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871424u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871430u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871438u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871440u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088714F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871510u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871518u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871520u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887152Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871534u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887154Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871564u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887156Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088715F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871610u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871630u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871648u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871664u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871688u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871698u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088716F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871710u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871728u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871738u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871748u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871750u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887175Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887176Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887177Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871790u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887179Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088717F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887180Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871820u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871838u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871840u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871850u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871880u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871894u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088718FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871908u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871910u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887192Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887193Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871944u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871958u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871968u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871970u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871974u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871994u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088719F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871A78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AD0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871AE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871B68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871BD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871C8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871CECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D04u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871D88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871DE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871ECCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871EFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871F94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08871FC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872008u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872014u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887201Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872048u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872070u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872088u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872098u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088720FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872104u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872148u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887217Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872188u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887218Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088721F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872204u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887225Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872260u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872284u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872294u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088722F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872308u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887231Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887232Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872348u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872370u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872384u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872398u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088723DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887240Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872418u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887241Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872438u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872440u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872450u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872484u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872490u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088724FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887250Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887251Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872524u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872530u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887253Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872548u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872554u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887255Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872560u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872570u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872594u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887259Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088725F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872608u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872634u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887263Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872648u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872650u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887265Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872664u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872670u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872694u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088726E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872734u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887275Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872788u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088727F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872814u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872824u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872830u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887285Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872874u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872880u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872890u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088728F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872934u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887293Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872958u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729A4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729F8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088729FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872A94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872ADCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872AFCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872B8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872BB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C3Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872C78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872CF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872D8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872DE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872E68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872EE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08872F84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873010u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873020u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887303Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873044u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887304Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873050u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887305Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873068u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873088u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887309Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088730F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873110u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887311Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873130u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887313Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873148u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873168u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873170u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873178u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873194u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731D8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088731F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873208u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887321Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873224u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887322Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873250u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873258u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873278u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887328Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873294u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887329Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088732E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873300u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887330Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873324u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887333Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873354u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887336Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887338Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088733D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873400u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873418u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873448u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873464u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887347Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873498u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088734ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873504u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887350Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887352Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887353Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873544u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873550u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873564u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873570u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873574u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873578u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873584u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873594u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887359Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735D0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088735DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873600u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873630u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873638u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873644u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873668u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873678u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873680u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887368Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873698u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736A8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736B0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736B8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088736E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873700u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873708u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873714u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887371Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873720u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887372Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887373Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873754u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873758u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887375Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873764u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873770u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873778u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887377Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873784u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887378Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737E0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737E8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737F0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088737FCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873804u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873810u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873820u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873828u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873834u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873848u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873850u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873854u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873864u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887386Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873878u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873880u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873888u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873890u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738ACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738C0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738C8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738DCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088738F4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873918u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873924u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887392Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873930u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873938u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x0887394Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873968u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873988u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873994u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739A0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739B4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739BCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739C4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739CCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739D4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739E4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x088739ECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A24u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A34u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A44u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A54u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A70u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A78u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873A9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AC0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AC8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AD8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AE0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AF0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873AF8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B68u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B74u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B7Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B8Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873B9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BE8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873BF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C08u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C18u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C20u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873C40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CA0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CACu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873CE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D10u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873D94u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DA8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DC4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873DECu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E00u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E2Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E48u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E50u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E58u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E60u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E6Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E80u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E84u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E88u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873E9Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EA4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873ED0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873ED8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EDCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EE4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873EF4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F0Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F14u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F1Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F28u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F30u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F38u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F40u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F4Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F5Cu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F64u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F90u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873F98u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FB0u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FB8u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FCCu, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FD4u, &recomp_unit_0027, "recomp_unit_0027");
    runtime.register_function(0x08873FFCu, &recomp_unit_0027, "recomp_unit_0027");
}
} // namespace psprecomp
