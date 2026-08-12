#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0109[4094] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 11, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20,
    0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 36, 0, 37, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0,
    0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 61, 62, 0, 0, 0, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0,
    66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89,
    0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92,
    0, 0, 0, 0, 93, 94, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0,
    105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119,
    0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 127, 0, 0, 0, 128, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145,
    0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 165, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    174, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 182, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 194, 0,
    0, 195, 0, 0, 0, 0, 196, 0, 0, 197, 198, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 203, 0, 0, 0, 0, 204,
    0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211, 0, 212, 0, 0, 0, 213, 0, 214,
    0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 222, 223, 224,
    0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 229, 0, 0, 230, 0, 231, 0, 0, 232, 233, 0, 234, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0,
    0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 247, 0, 0, 0, 248, 249, 0, 0, 0, 250, 0, 251,
    0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0,
    0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 262, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0,
    0, 267, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 274, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0,
    0, 0, 283, 284, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 292,
    0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299,
    300, 0, 0, 301, 0, 302, 0, 0, 303, 304, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0,
    0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0,
    0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 333, 334,
    0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341,
    0, 0, 0, 0, 0, 0, 342, 343, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0, 363, 364, 365, 0, 366, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 373,
    0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 377, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 381, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 388,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 394,
    0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 406,
    0, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 411, 0, 0, 412, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0,
    0, 418, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 424, 0, 425, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 0, 463, 0, 0, 464, 465, 0, 466, 0, 467, 0, 0, 0,
    0, 468, 0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 486, 0, 487,
    0, 0, 488, 0, 489, 0, 0, 490, 0, 0, 0, 491, 0, 492, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 502, 0, 503, 0, 504, 0, 505, 0, 506, 0, 507,
    0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 0, 514, 0, 515, 516, 0, 517, 0, 518, 0, 519, 0, 0, 0, 520, 0, 521,
    0, 522, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0, 0, 534, 0,
    0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 0, 540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0,
    0, 549, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0, 555, 0, 556, 0,
    557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 562, 0, 0, 563, 0, 564, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569,
    0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0,
    0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 580, 0, 581, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0,
    586, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 590, 0, 0, 591, 592, 0, 0, 593, 0, 0, 594, 595, 0, 0, 596, 0, 0, 597,
    598, 0, 0, 599, 0, 0, 600, 601, 0, 0, 602, 0, 0, 603, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0,
    0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0,
    0, 620, 621, 0, 622, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 627, 628, 0, 629, 0, 0, 630, 0,
    0, 0, 0, 0, 0, 631, 0, 632, 633, 0, 634, 0, 635, 0, 0, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 639, 0, 640, 0,
    641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 648, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 650, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 0,
    658, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 667, 0, 668,
    0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 673, 0, 674, 0, 0, 0,
    675, 0, 676, 0, 0, 0, 0, 677, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0,
    686, 0, 687, 0, 688, 0, 689, 0, 0, 0, 690, 0, 691, 0, 692, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 697, 0, 698, 0, 0,
    0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0, 702, 703, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0,
    709, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715, 0, 0, 0, 0, 0, 0, 0,
    0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 719, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 726, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 729, 0, 0, 0, 730, 731, 0, 732, 0, 733, 0, 734, 735, 0, 736, 0, 0, 0,
    0, 0, 0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 744, 0, 745, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 748, 0, 0, 749, 0, 750,
    751, 752, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 757, 0, 0, 758, 0,
    0, 759, 0, 760, 761, 762, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 766, 0, 767, 0, 768,
    0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 779, 780,
    0, 781, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 783, 0, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 0, 0, 787, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 790, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 791, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 793, 0, 794, 0, 795, 0, 0, 0, 796,
    0, 797, 0, 798, 0, 0, 0, 799, 0, 0, 800, 0, 801, 0, 802, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804,
    0, 805, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 813, 814, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 817, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    819, 0, 0, 820, 0, 0, 0, 821, 0, 0, 822, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 0,
    0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 830,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0,
    0, 0, 0, 0, 0, 833, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 0, 838, 0,
    0, 0, 839, 0, 840, 0, 0, 841, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 845, 0, 0, 0, 846, 0, 847, 0, 848, 0, 849,
};
void recomp_unit_0109_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0109[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B8000;
    case 2u: goto L_089B8014;
    case 3u: goto L_089B8020;
    case 4u: goto L_089B8038;
    case 5u: goto L_089B8040;
    case 6u: goto L_089B8054;
    case 7u: goto L_089B8068;
    case 8u: goto L_089B808C;
    case 9u: goto L_089B809C;
    case 10u: goto L_089B80A8;
    case 11u: goto L_089B80B0;
    case 12u: goto L_089B80B4;
    case 13u: goto L_089B80C8;
    case 14u: goto L_089B8100;
    case 15u: goto L_089B8118;
    case 16u: goto L_089B8134;
    case 17u: goto L_089B8148;
    case 18u: goto L_089B8158;
    case 19u: goto L_089B8170;
    case 20u: goto L_089B817C;
    case 21u: goto L_089B8190;
    case 22u: goto L_089B81A4;
    case 23u: goto L_089B81C4;
    case 24u: goto L_089B81CC;
    case 25u: goto L_089B81D4;
    case 26u: goto L_089B81F4;
    case 27u: goto L_089B81FC;
    case 28u: goto L_089B8224;
    case 29u: goto L_089B822C;
    case 30u: goto L_089B8234;
    case 31u: goto L_089B8294;
    case 32u: goto L_089B82F4;
    case 33u: goto L_089B8300;
    case 34u: goto L_089B8308;
    case 35u: goto L_089B8320;
    case 36u: goto L_089B8384;
    case 37u: goto L_089B838C;
    case 38u: goto L_089B8394;
    case 39u: goto L_089B83A8;
    case 40u: goto L_089B83C0;
    case 41u: goto L_089B83F8;
    case 42u: goto L_089B8404;
    case 43u: goto L_089B840C;
    case 44u: goto L_089B8414;
    case 45u: goto L_089B841C;
    case 46u: goto L_089B8424;
    case 47u: goto L_089B8440;
    case 48u: goto L_089B844C;
    case 49u: goto L_089B845C;
    case 50u: goto L_089B846C;
    case 51u: goto L_089B8498;
    case 52u: goto L_089B84A4;
    case 53u: goto L_089B84AC;
    case 54u: goto L_089B84B4;
    case 55u: goto L_089B84C8;
    case 56u: goto L_089B84D8;
    case 57u: goto L_089B84F4;
    case 58u: goto L_089B8504;
    case 59u: goto L_089B8520;
    case 60u: goto L_089B8534;
    case 61u: goto L_089B8544;
    case 62u: goto L_089B8548;
    case 63u: goto L_089B855C;
    case 64u: goto L_089B8564;
    case 65u: goto L_089B856C;
    case 66u: goto L_089B8580;
    case 67u: goto L_089B858C;
    case 68u: goto L_089B85B0;
    case 69u: goto L_089B85D8;
    case 70u: goto L_089B8600;
    case 71u: goto L_089B8670;
    case 72u: goto L_089B8678;
    case 73u: goto L_089B86C8;
    case 74u: goto L_089B86D0;
    case 75u: goto L_089B86E4;
    case 76u: goto L_089B8754;
    case 77u: goto L_089B875C;
    case 78u: goto L_089B87AC;
    case 79u: goto L_089B87B4;
    case 80u: goto L_089B87C8;
    case 81u: goto L_089B8838;
    case 82u: goto L_089B8840;
    case 83u: goto L_089B8890;
    case 84u: goto L_089B8898;
    case 85u: goto L_089B88AC;
    case 86u: goto L_089B891C;
    case 87u: goto L_089B8924;
    case 88u: goto L_089B8974;
    case 89u: goto L_089B897C;
    case 90u: goto L_089B8990;
    case 91u: goto L_089B89F4;
    case 92u: goto L_089B89FC;
    case 93u: goto L_089B8A10;
    case 94u: goto L_089B8A14;
    case 95u: goto L_089B8A2C;
    case 96u: goto L_089B8A98;
    case 97u: goto L_089B8AA0;
    case 98u: goto L_089B8AB4;
    case 99u: goto L_089B8AD0;
    case 100u: goto L_089B8B24;
    case 101u: goto L_089B8B2C;
    case 102u: goto L_089B8B38;
    case 103u: goto L_089B8B60;
    case 104u: goto L_089B8B6C;
    case 105u: goto L_089B8B80;
    case 106u: goto L_089B8B94;
    case 107u: goto L_089B8BAC;
    case 108u: goto L_089B8BB4;
    case 109u: goto L_089B8BBC;
    case 110u: goto L_089B8BC4;
    case 111u: goto L_089B8BDC;
    case 112u: goto L_089B8BEC;
    case 113u: goto L_089B8BFC;
    case 114u: goto L_089B8C14;
    case 115u: goto L_089B8C28;
    case 116u: goto L_089B8C48;
    case 117u: goto L_089B8C50;
    case 118u: goto L_089B8C58;
    case 119u: goto L_089B8C7C;
    case 120u: goto L_089B8C8C;
    case 121u: goto L_089B8C98;
    case 122u: goto L_089B8CA8;
    case 123u: goto L_089B8CB4;
    case 124u: goto L_089B8CE0;
    case 125u: goto L_089B8CF4;
    case 126u: goto L_089B8D4C;
    case 127u: goto L_089B8D84;
    case 128u: goto L_089B8D94;
    case 129u: goto L_089B8DA0;
    case 130u: goto L_089B8DB0;
    case 131u: goto L_089B8DE8;
    case 132u: goto L_089B8E0C;
    case 133u: goto L_089B8E14;
    case 134u: goto L_089B8E38;
    case 135u: goto L_089B8E64;
    case 136u: goto L_089B8E88;
    case 137u: goto L_089B8E94;
    case 138u: goto L_089B8EA4;
    case 139u: goto L_089B8EB0;
    case 140u: goto L_089B8EB8;
    case 141u: goto L_089B8EC4;
    case 142u: goto L_089B8ED0;
    case 143u: goto L_089B8EE0;
    case 144u: goto L_089B8EEC;
    case 145u: goto L_089B8EFC;
    case 146u: goto L_089B8F08;
    case 147u: goto L_089B8F10;
    case 148u: goto L_089B8F1C;
    case 149u: goto L_089B8F28;
    case 150u: goto L_089B8F34;
    case 151u: goto L_089B8F50;
    case 152u: goto L_089B8F58;
    case 153u: goto L_089B8F6C;
    case 154u: goto L_089B8F88;
    case 155u: goto L_089B8F90;
    case 156u: goto L_089B8F9C;
    case 157u: goto L_089B8FAC;
    case 158u: goto L_089B8FB4;
    case 159u: goto L_089B8FC8;
    case 160u: goto L_089B8FD4;
    case 161u: goto L_089B8FD8;
    case 162u: goto L_089B8FEC;
    case 163u: goto L_089B901C;
    case 164u: goto L_089B905C;
    case 165u: goto L_089B9060;
    case 166u: goto L_089B90A8;
    case 167u: goto L_089B90C4;
    case 168u: goto L_089B90C8;
    case 169u: goto L_089B9120;
    case 170u: goto L_089B9128;
    case 171u: goto L_089B913C;
    case 172u: goto L_089B9160;
    case 173u: goto L_089B9170;
    case 174u: goto L_089B9180;
    case 175u: goto L_089B9188;
    case 176u: goto L_089B9194;
    case 177u: goto L_089B91A4;
    case 178u: goto L_089B91B0;
    case 179u: goto L_089B91B8;
    case 180u: goto L_089B91C0;
    case 181u: goto L_089B91CC;
    case 182u: goto L_089B91D4;
    case 183u: goto L_089B91D8;
    case 184u: goto L_089B91E0;
    case 185u: goto L_089B91EC;
    case 186u: goto L_089B91F4;
    case 187u: goto L_089B9214;
    case 188u: goto L_089B9234;
    case 189u: goto L_089B9240;
    case 190u: goto L_089B924C;
    case 191u: goto L_089B9258;
    case 192u: goto L_089B9260;
    case 193u: goto L_089B926C;
    case 194u: goto L_089B9278;
    case 195u: goto L_089B9284;
    case 196u: goto L_089B9298;
    case 197u: goto L_089B92A4;
    case 198u: goto L_089B92A8;
    case 199u: goto L_089B92BC;
    case 200u: goto L_089B92CC;
    case 201u: goto L_089B92DC;
    case 202u: goto L_089B92E4;
    case 203u: goto L_089B92E8;
    case 204u: goto L_089B92FC;
    case 205u: goto L_089B9304;
    case 206u: goto L_089B9320;
    case 207u: goto L_089B9328;
    case 208u: goto L_089B9330;
    case 209u: goto L_089B9340;
    case 210u: goto L_089B934C;
    case 211u: goto L_089B935C;
    case 212u: goto L_089B9364;
    case 213u: goto L_089B9374;
    case 214u: goto L_089B937C;
    case 215u: goto L_089B9384;
    case 216u: goto L_089B93A0;
    case 217u: goto L_089B93B0;
    case 218u: goto L_089B93C0;
    case 219u: goto L_089B93CC;
    case 220u: goto L_089B93DC;
    case 221u: goto L_089B93E4;
    case 222u: goto L_089B93F4;
    case 223u: goto L_089B93F8;
    case 224u: goto L_089B93FC;
    case 225u: goto L_089B9408;
    case 226u: goto L_089B9418;
    case 227u: goto L_089B9420;
    case 228u: goto L_089B9430;
    case 229u: goto L_089B9434;
    case 230u: goto L_089B9440;
    case 231u: goto L_089B9448;
    case 232u: goto L_089B9454;
    case 233u: goto L_089B9458;
    case 234u: goto L_089B9460;
    case 235u: goto L_089B9494;
    case 236u: goto L_089B949C;
    case 237u: goto L_089B94AC;
    case 238u: goto L_089B94CC;
    case 239u: goto L_089B94E0;
    case 240u: goto L_089B94F0;
    case 241u: goto L_089B9504;
    case 242u: goto L_089B9510;
    case 243u: goto L_089B951C;
    case 244u: goto L_089B9530;
    case 245u: goto L_089B9538;
    case 246u: goto L_089B954C;
    case 247u: goto L_089B9550;
    case 248u: goto L_089B9560;
    case 249u: goto L_089B9564;
    case 250u: goto L_089B9574;
    case 251u: goto L_089B957C;
    case 252u: goto L_089B9594;
    case 253u: goto L_089B95B4;
    case 254u: goto L_089B95C8;
    case 255u: goto L_089B95F0;
    case 256u: goto L_089B95F8;
    case 257u: goto L_089B9604;
    case 258u: goto L_089B9614;
    case 259u: goto L_089B9630;
    case 260u: goto L_089B9648;
    case 261u: goto L_089B9664;
    case 262u: goto L_089B9668;
    case 263u: goto L_089B96B8;
    case 264u: goto L_089B96C4;
    case 265u: goto L_089B96E4;
    case 266u: goto L_089B96EC;
    case 267u: goto L_089B9704;
    case 268u: goto L_089B970C;
    case 269u: goto L_089B971C;
    case 270u: goto L_089B9728;
    case 271u: goto L_089B9734;
    case 272u: goto L_089B974C;
    case 273u: goto L_089B9760;
    case 274u: goto L_089B9764;
    case 275u: goto L_089B9798;
    case 276u: goto L_089B97A4;
    case 277u: goto L_089B97BC;
    case 278u: goto L_089B97C4;
    case 279u: goto L_089B97CC;
    case 280u: goto L_089B97DC;
    case 281u: goto L_089B97E8;
    case 282u: goto L_089B97F8;
    case 283u: goto L_089B9808;
    case 284u: goto L_089B980C;
    case 285u: goto L_089B9818;
    case 286u: goto L_089B982C;
    case 287u: goto L_089B9838;
    case 288u: goto L_089B983C;
    case 289u: goto L_089B9860;
    case 290u: goto L_089B986C;
    case 291u: goto L_089B9874;
    case 292u: goto L_089B987C;
    case 293u: goto L_089B9888;
    case 294u: goto L_089B9894;
    case 295u: goto L_089B98B8;
    case 296u: goto L_089B98C4;
    case 297u: goto L_089B98DC;
    case 298u: goto L_089B98EC;
    case 299u: goto L_089B98FC;
    case 300u: goto L_089B9900;
    case 301u: goto L_089B990C;
    case 302u: goto L_089B9914;
    case 303u: goto L_089B9920;
    case 304u: goto L_089B9924;
    case 305u: goto L_089B992C;
    case 306u: goto L_089B9938;
    case 307u: goto L_089B996C;
    case 308u: goto L_089B9974;
    case 309u: goto L_089B9984;
    case 310u: goto L_089B99A4;
    case 311u: goto L_089B99B8;
    case 312u: goto L_089B99C8;
    case 313u: goto L_089B99D4;
    case 314u: goto L_089B99E4;
    case 315u: goto L_089B99F0;
    case 316u: goto L_089B9A10;
    case 317u: goto L_089B9A28;
    case 318u: goto L_089B9A48;
    case 319u: goto L_089B9A4C;
    case 320u: goto L_089B9A94;
    case 321u: goto L_089B9AA8;
    case 322u: goto L_089B9AB0;
    case 323u: goto L_089B9ABC;
    case 324u: goto L_089B9AE8;
    case 325u: goto L_089B9AF0;
    case 326u: goto L_089B9B04;
    case 327u: goto L_089B9B20;
    case 328u: goto L_089B9B28;
    case 329u: goto L_089B9B30;
    case 330u: goto L_089B9B38;
    case 331u: goto L_089B9B54;
    case 332u: goto L_089B9B5C;
    case 333u: goto L_089B9B78;
    case 334u: goto L_089B9B7C;
    case 335u: goto L_089B9B88;
    case 336u: goto L_089B9BA0;
    case 337u: goto L_089B9BC0;
    case 338u: goto L_089B9BD0;
    case 339u: goto L_089B9BD8;
    case 340u: goto L_089B9BF4;
    case 341u: goto L_089B9BFC;
    case 342u: goto L_089B9C18;
    case 343u: goto L_089B9C1C;
    case 344u: goto L_089B9C28;
    case 345u: goto L_089B9C34;
    case 346u: goto L_089B9C3C;
    case 347u: goto L_089B9C54;
    case 348u: goto L_089B9C68;
    case 349u: goto L_089B9C90;
    case 350u: goto L_089B9CA4;
    case 351u: goto L_089B9CAC;
    case 352u: goto L_089B9CB8;
    case 353u: goto L_089B9CC0;
    case 354u: goto L_089B9CC8;
    case 355u: goto L_089B9CD4;
    case 356u: goto L_089B9CE4;
    case 357u: goto L_089B9CF0;
    case 358u: goto L_089B9D10;
    case 359u: goto L_089B9D18;
    case 360u: goto L_089B9D20;
    case 361u: goto L_089B9D28;
    case 362u: goto L_089B9D30;
    case 363u: goto L_089B9D44;
    case 364u: goto L_089B9D48;
    case 365u: goto L_089B9D4C;
    case 366u: goto L_089B9D54;
    case 367u: goto L_089B9D58;
    case 368u: goto L_089B9D74;
    case 369u: goto L_089B9D88;
    case 370u: goto L_089B9DBC;
    case 371u: goto L_089B9DD8;
    case 372u: goto L_089B9DF0;
    case 373u: goto L_089B9DFC;
    case 374u: goto L_089B9E04;
    case 375u: goto L_089B9E18;
    case 376u: goto L_089B9E58;
    case 377u: goto L_089B9E5C;
    case 378u: goto L_089B9E90;
    case 379u: goto L_089B9E9C;
    case 380u: goto L_089B9EE0;
    case 381u: goto L_089B9EE4;
    case 382u: goto L_089B9F18;
    case 383u: goto L_089B9F24;
    case 384u: goto L_089B9F38;
    case 385u: goto L_089B9F5C;
    case 386u: goto L_089B9F6C;
    case 387u: goto L_089B9F74;
    case 388u: goto L_089B9F7C;
    case 389u: goto L_089B9F90;
    case 390u: goto L_089B9FB4;
    case 391u: goto L_089B9FC4;
    case 392u: goto L_089B9FE4;
    case 393u: goto L_089B9FEC;
    case 394u: goto L_089B9FFC;
    case 395u: goto L_089BA008;
    case 396u: goto L_089BA014;
    case 397u: goto L_089BA01C;
    case 398u: goto L_089BA024;
    case 399u: goto L_089BA02C;
    case 400u: goto L_089BA034;
    case 401u: goto L_089BA044;
    case 402u: goto L_089BA050;
    case 403u: goto L_089BA058;
    case 404u: goto L_089BA064;
    case 405u: goto L_089BA06C;
    case 406u: goto L_089BA07C;
    case 407u: goto L_089BA088;
    case 408u: goto L_089BA094;
    case 409u: goto L_089BA09C;
    case 410u: goto L_089BA0A4;
    case 411u: goto L_089BA0B4;
    case 412u: goto L_089BA0C0;
    case 413u: goto L_089BA0C8;
    case 414u: goto L_089BA0D4;
    case 415u: goto L_089BA0DC;
    case 416u: goto L_089BA0EC;
    case 417u: goto L_089BA0F8;
    case 418u: goto L_089BA104;
    case 419u: goto L_089BA10C;
    case 420u: goto L_089BA114;
    case 421u: goto L_089BA124;
    case 422u: goto L_089BA130;
    case 423u: goto L_089BA138;
    case 424u: goto L_089BA14C;
    case 425u: goto L_089BA154;
    case 426u: goto L_089BA158;
    case 427u: goto L_089BA170;
    case 428u: goto L_089BA188;
    case 429u: goto L_089BA1C8;
    case 430u: goto L_089BA228;
    case 431u: goto L_089BA244;
    case 432u: goto L_089BA27C;
    case 433u: goto L_089BA298;
    case 434u: goto L_089BA2A8;
    case 435u: goto L_089BA2C4;
    case 436u: goto L_089BA2C8;
    case 437u: goto L_089BA2D8;
    case 438u: goto L_089BA310;
    case 439u: goto L_089BA370;
    case 440u: goto L_089BA3AC;
    case 441u: goto L_089BA3BC;
    case 442u: goto L_089BA3D4;
    case 443u: goto L_089BA3E4;
    case 444u: goto L_089BA3EC;
    case 445u: goto L_089BA41C;
    case 446u: goto L_089BA448;
    case 447u: goto L_089BA460;
    case 448u: goto L_089BA470;
    case 449u: goto L_089BA4A0;
    case 450u: goto L_089BA4D4;
    case 451u: goto L_089BA4DC;
    case 452u: goto L_089BA4E4;
    case 453u: goto L_089BA51C;
    case 454u: goto L_089BA52C;
    case 455u: goto L_089BA540;
    case 456u: goto L_089BA54C;
    case 457u: goto L_089BA558;
    case 458u: goto L_089BA560;
    case 459u: goto L_089BA56C;
    case 460u: goto L_089BA588;
    case 461u: goto L_089BA5B4;
    case 462u: goto L_089BA5BC;
    case 463u: goto L_089BA5D0;
    case 464u: goto L_089BA5DC;
    case 465u: goto L_089BA5E0;
    case 466u: goto L_089BA5E8;
    case 467u: goto L_089BA5F0;
    case 468u: goto L_089BA604;
    case 469u: goto L_089BA618;
    case 470u: goto L_089BA620;
    case 471u: goto L_089BA628;
    case 472u: goto L_089BA630;
    case 473u: goto L_089BA644;
    case 474u: goto L_089BA654;
    case 475u: goto L_089BA65C;
    case 476u: goto L_089BA678;
    case 477u: goto L_089BA694;
    case 478u: goto L_089BA6D0;
    case 479u: goto L_089BA6E4;
    case 480u: goto L_089BA6EC;
    case 481u: goto L_089BA718;
    case 482u: goto L_089BA73C;
    case 483u: goto L_089BA748;
    case 484u: goto L_089BA754;
    case 485u: goto L_089BA760;
    case 486u: goto L_089BA774;
    case 487u: goto L_089BA77C;
    case 488u: goto L_089BA788;
    case 489u: goto L_089BA790;
    case 490u: goto L_089BA79C;
    case 491u: goto L_089BA7AC;
    case 492u: goto L_089BA7B4;
    case 493u: goto L_089BA7B8;
    case 494u: goto L_089BA7C0;
    case 495u: goto L_089BA7C8;
    case 496u: goto L_089BA7D0;
    case 497u: goto L_089BA7D8;
    case 498u: goto L_089BA804;
    case 499u: goto L_089BA814;
    case 500u: goto L_089BA840;
    case 501u: goto L_089BA850;
    case 502u: goto L_089BA854;
    case 503u: goto L_089BA85C;
    case 504u: goto L_089BA864;
    case 505u: goto L_089BA86C;
    case 506u: goto L_089BA874;
    case 507u: goto L_089BA87C;
    case 508u: goto L_089BA884;
    case 509u: goto L_089BA88C;
    case 510u: goto L_089BA898;
    case 511u: goto L_089BA8A0;
    case 512u: goto L_089BA8A8;
    case 513u: goto L_089BA8B4;
    case 514u: goto L_089BA8C0;
    case 515u: goto L_089BA8C8;
    case 516u: goto L_089BA8CC;
    case 517u: goto L_089BA8D4;
    case 518u: goto L_089BA8DC;
    case 519u: goto L_089BA8E4;
    case 520u: goto L_089BA8F4;
    case 521u: goto L_089BA8FC;
    case 522u: goto L_089BA904;
    case 523u: goto L_089BA90C;
    case 524u: goto L_089BA914;
    case 525u: goto L_089BA920;
    case 526u: goto L_089BA928;
    case 527u: goto L_089BA934;
    case 528u: goto L_089BA93C;
    case 529u: goto L_089BA944;
    case 530u: goto L_089BA950;
    case 531u: goto L_089BA958;
    case 532u: goto L_089BA964;
    case 533u: goto L_089BA96C;
    case 534u: goto L_089BA978;
    case 535u: goto L_089BA984;
    case 536u: goto L_089BA990;
    case 537u: goto L_089BA99C;
    case 538u: goto L_089BA9A4;
    case 539u: goto L_089BA9AC;
    case 540u: goto L_089BA9B8;
    case 541u: goto L_089BA9C0;
    case 542u: goto L_089BA9C8;
    case 543u: goto L_089BA9D0;
    case 544u: goto L_089BA9D8;
    case 545u: goto L_089BA9E0;
    case 546u: goto L_089BA9E8;
    case 547u: goto L_089BA9F0;
    case 548u: goto L_089BA9F8;
    case 549u: goto L_089BAA04;
    case 550u: goto L_089BAA0C;
    case 551u: goto L_089BAA14;
    case 552u: goto L_089BAA4C;
    case 553u: goto L_089BAA60;
    case 554u: goto L_089BAA68;
    case 555u: goto L_089BAA70;
    case 556u: goto L_089BAA78;
    case 557u: goto L_089BAA80;
    case 558u: goto L_089BAA88;
    case 559u: goto L_089BAA98;
    case 560u: goto L_089BAAA0;
    case 561u: goto L_089BAAA8;
    case 562u: goto L_089BAAB4;
    case 563u: goto L_089BAAC0;
    case 564u: goto L_089BAAC8;
    case 565u: goto L_089BAAD0;
    case 566u: goto L_089BAADC;
    case 567u: goto L_089BAAE8;
    case 568u: goto L_089BAAF4;
    case 569u: goto L_089BAAFC;
    case 570u: goto L_089BAB08;
    case 571u: goto L_089BAB14;
    case 572u: goto L_089BAB20;
    case 573u: goto L_089BAB28;
    case 574u: goto L_089BAB4C;
    case 575u: goto L_089BAB54;
    case 576u: goto L_089BAB68;
    case 577u: goto L_089BAB70;
    case 578u: goto L_089BAB84;
    case 579u: goto L_089BAB98;
    case 580u: goto L_089BABAC;
    case 581u: goto L_089BABB4;
    case 582u: goto L_089BABBC;
    case 583u: goto L_089BABC4;
    case 584u: goto L_089BABF0;
    case 585u: goto L_089BABF8;
    case 586u: goto L_089BAC00;
    case 587u: goto L_089BAC08;
    case 588u: goto L_089BAC18;
    case 589u: goto L_089BAC2C;
    case 590u: goto L_089BAC38;
    case 591u: goto L_089BAC44;
    case 592u: goto L_089BAC48;
    case 593u: goto L_089BAC54;
    case 594u: goto L_089BAC60;
    case 595u: goto L_089BAC64;
    case 596u: goto L_089BAC70;
    case 597u: goto L_089BAC7C;
    case 598u: goto L_089BAC80;
    case 599u: goto L_089BAC8C;
    case 600u: goto L_089BAC98;
    case 601u: goto L_089BAC9C;
    case 602u: goto L_089BACA8;
    case 603u: goto L_089BACB4;
    case 604u: goto L_089BACB8;
    case 605u: goto L_089BACC0;
    case 606u: goto L_089BACC8;
    case 607u: goto L_089BACE4;
    case 608u: goto L_089BACF0;
    case 609u: goto L_089BAD1C;
    case 610u: goto L_089BAD30;
    case 611u: goto L_089BAD38;
    case 612u: goto L_089BAD54;
    case 613u: goto L_089BAD70;
    case 614u: goto L_089BAD88;
    case 615u: goto L_089BADA4;
    case 616u: goto L_089BAE90;
    case 617u: goto L_089BAEB0;
    case 618u: goto L_089BAEB8;
    case 619u: goto L_089BAEE4;
    case 620u: goto L_089BAF04;
    case 621u: goto L_089BAF08;
    case 622u: goto L_089BAF10;
    case 623u: goto L_089BAF1C;
    case 624u: goto L_089BAF28;
    case 625u: goto L_089BAF34;
    case 626u: goto L_089BAF58;
    case 627u: goto L_089BAF60;
    case 628u: goto L_089BAF64;
    case 629u: goto L_089BAF6C;
    case 630u: goto L_089BAF78;
    case 631u: goto L_089BAF94;
    case 632u: goto L_089BAF9C;
    case 633u: goto L_089BAFA0;
    case 634u: goto L_089BAFA8;
    case 635u: goto L_089BAFB0;
    case 636u: goto L_089BAFC0;
    case 637u: goto L_089BAFC8;
    case 638u: goto L_089BAFD4;
    case 639u: goto L_089BAFF0;
    case 640u: goto L_089BAFF8;
    case 641u: goto L_089BB000;
    case 642u: goto L_089BB008;
    case 643u: goto L_089BB010;
    case 644u: goto L_089BB018;
    case 645u: goto L_089BB020;
    case 646u: goto L_089BB028;
    case 647u: goto L_089BB060;
    case 648u: goto L_089BB068;
    case 649u: goto L_089BB070;
    case 650u: goto L_089BB094;
    case 651u: goto L_089BB098;
    case 652u: goto L_089BB0C0;
    case 653u: goto L_089BB0D0;
    case 654u: goto L_089BB0D8;
    case 655u: goto L_089BB0E4;
    case 656u: goto L_089BB0F0;
    case 657u: goto L_089BB0F8;
    case 658u: goto L_089BB100;
    case 659u: goto L_089BB104;
    case 660u: goto L_089BB124;
    case 661u: goto L_089BB12C;
    case 662u: goto L_089BB138;
    case 663u: goto L_089BB140;
    case 664u: goto L_089BB158;
    case 665u: goto L_089BB168;
    case 666u: goto L_089BB170;
    case 667u: goto L_089BB174;
    case 668u: goto L_089BB17C;
    case 669u: goto L_089BB19C;
    case 670u: goto L_089BB1B8;
    case 671u: goto L_089BB1CC;
    case 672u: goto L_089BB1D8;
    case 673u: goto L_089BB1E8;
    case 674u: goto L_089BB1F0;
    case 675u: goto L_089BB200;
    case 676u: goto L_089BB208;
    case 677u: goto L_089BB21C;
    case 678u: goto L_089BB224;
    case 679u: goto L_089BB230;
    case 680u: goto L_089BB24C;
    case 681u: goto L_089BB258;
    case 682u: goto L_089BB260;
    case 683u: goto L_089BB268;
    case 684u: goto L_089BB270;
    case 685u: goto L_089BB278;
    case 686u: goto L_089BB280;
    case 687u: goto L_089BB288;
    case 688u: goto L_089BB290;
    case 689u: goto L_089BB298;
    case 690u: goto L_089BB2A8;
    case 691u: goto L_089BB2B0;
    case 692u: goto L_089BB2B8;
    case 693u: goto L_089BB2C8;
    case 694u: goto L_089BB2D4;
    case 695u: goto L_089BB2E0;
    case 696u: goto L_089BB2E8;
    case 697u: goto L_089BB2EC;
    case 698u: goto L_089BB2F4;
    case 699u: goto L_089BB310;
    case 700u: goto L_089BB31C;
    case 701u: goto L_089BB328;
    case 702u: goto L_089BB330;
    case 703u: goto L_089BB334;
    case 704u: goto L_089BB33C;
    case 705u: goto L_089BB344;
    case 706u: goto L_089BB354;
    case 707u: goto L_089BB368;
    case 708u: goto L_089BB374;
    case 709u: goto L_089BB380;
    case 710u: goto L_089BB398;
    case 711u: goto L_089BB3A4;
    case 712u: goto L_089BB3B8;
    case 713u: goto L_089BB3D0;
    case 714u: goto L_089BB3D8;
    case 715u: goto L_089BB3E0;
    case 716u: goto L_089BB404;
    case 717u: goto L_089BB438;
    case 718u: goto L_089BB448;
    case 719u: goto L_089BB484;
    case 720u: goto L_089BB48C;
    case 721u: goto L_089BB49C;
    case 722u: goto L_089BB4B0;
    case 723u: goto L_089BB4C0;
    case 724u: goto L_089BB4C8;
    case 725u: goto L_089BB4E4;
    case 726u: goto L_089BB4F4;
    case 727u: goto L_089BB520;
    case 728u: goto L_089BB530;
    case 729u: goto L_089BB538;
    case 730u: goto L_089BB548;
    case 731u: goto L_089BB54C;
    case 732u: goto L_089BB554;
    case 733u: goto L_089BB55C;
    case 734u: goto L_089BB564;
    case 735u: goto L_089BB568;
    case 736u: goto L_089BB570;
    case 737u: goto L_089BB58C;
    case 738u: goto L_089BB594;
    case 739u: goto L_089BB5B0;
    case 740u: goto L_089BB5CC;
    case 741u: goto L_089BB604;
    case 742u: goto L_089BB650;
    case 743u: goto L_089BB664;
    case 744u: goto L_089BB66C;
    case 745u: goto L_089BB674;
    case 746u: goto L_089BB6D4;
    case 747u: goto L_089BB6DC;
    case 748u: goto L_089BB6E8;
    case 749u: goto L_089BB6F4;
    case 750u: goto L_089BB6FC;
    case 751u: goto L_089BB700;
    case 752u: goto L_089BB704;
    case 753u: goto L_089BB710;
    case 754u: goto L_089BB718;
    case 755u: goto L_089BB75C;
    case 756u: goto L_089BB764;
    case 757u: goto L_089BB76C;
    case 758u: goto L_089BB778;
    case 759u: goto L_089BB784;
    case 760u: goto L_089BB78C;
    case 761u: goto L_089BB790;
    case 762u: goto L_089BB794;
    case 763u: goto L_089BB7A0;
    case 764u: goto L_089BB7A8;
    case 765u: goto L_089BB7E0;
    case 766u: goto L_089BB7EC;
    case 767u: goto L_089BB7F4;
    case 768u: goto L_089BB7FC;
    case 769u: goto L_089BB804;
    case 770u: goto L_089BB814;
    case 771u: goto L_089BB83C;
    case 772u: goto L_089BB860;
    case 773u: goto L_089BB888;
    case 774u: goto L_089BB8A8;
    case 775u: goto L_089BB8CC;
    case 776u: goto L_089BB8D8;
    case 777u: goto L_089BB8E4;
    case 778u: goto L_089BB8F0;
    case 779u: goto L_089BB8F8;
    case 780u: goto L_089BB8FC;
    case 781u: goto L_089BB904;
    case 782u: goto L_089BB924;
    case 783u: goto L_089BB930;
    case 784u: goto L_089BB940;
    case 785u: goto L_089BB94C;
    case 786u: goto L_089BB958;
    case 787u: goto L_089BB96C;
    case 788u: goto L_089BB9B0;
    case 789u: goto L_089BB9B8;
    case 790u: goto L_089BB9BC;
    case 791u: goto L_089BB9EC;
    case 792u: goto L_089BBA4C;
    case 793u: goto L_089BBA5C;
    case 794u: goto L_089BBA64;
    case 795u: goto L_089BBA6C;
    case 796u: goto L_089BBA7C;
    case 797u: goto L_089BBA84;
    case 798u: goto L_089BBA8C;
    case 799u: goto L_089BBA9C;
    case 800u: goto L_089BBAA8;
    case 801u: goto L_089BBAB0;
    case 802u: goto L_089BBAB8;
    case 803u: goto L_089BBAC0;
    case 804u: goto L_089BBAFC;
    case 805u: goto L_089BBB04;
    case 806u: goto L_089BBB18;
    case 807u: goto L_089BBB5C;
    case 808u: goto L_089BBBA0;
    case 809u: goto L_089BBBA8;
    case 810u: goto L_089BBBB0;
    case 811u: goto L_089BBBD0;
    case 812u: goto L_089BBBE0;
    case 813u: goto L_089BBC0C;
    case 814u: goto L_089BBC10;
    case 815u: goto L_089BBC2C;
    case 816u: goto L_089BBC34;
    case 817u: goto L_089BBC44;
    case 818u: goto L_089BBC48;
    case 819u: goto L_089BBC80;
    case 820u: goto L_089BBC8C;
    case 821u: goto L_089BBC9C;
    case 822u: goto L_089BBCA8;
    case 823u: goto L_089BBCAC;
    case 824u: goto L_089BBCF4;
    case 825u: goto L_089BBD10;
    case 826u: goto L_089BBD40;
    case 827u: goto L_089BBD68;
    case 828u: goto L_089BBDB4;
    case 829u: goto L_089BBDE4;
    case 830u: goto L_089BBDFC;
    case 831u: goto L_089BBE48;
    case 832u: goto L_089BBE78;
    case 833u: goto L_089BBE94;
    case 834u: goto L_089BBE9C;
    case 835u: goto L_089BBEA4;
    case 836u: goto L_089BBEC8;
    case 837u: goto L_089BBEEC;
    case 838u: goto L_089BBEF8;
    case 839u: goto L_089BBF08;
    case 840u: goto L_089BBF10;
    case 841u: goto L_089BBF1C;
    case 842u: goto L_089BBF2C;
    case 843u: goto L_089BBF60;
    case 844u: goto L_089BBFC0;
    case 845u: goto L_089BBFCC;
    case 846u: goto L_089BBFDC;
    case 847u: goto L_089BBFE4;
    case 848u: goto L_089BBFEC;
    case 849u: goto L_089BBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B8000:
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(4192), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 738u, 0x089B7FFCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089B8014;
    }
L_089B8014:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + hot_regs.g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(4234), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B8020:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g29 = g29;
    goto L_089B8038;
}
L_089B8038:
    hot_regs.g31 = (0x089B8040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8040u) goto L_089B8040;
    return;
L_089B8040:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(26320), hot_regs.g2);
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g17 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089B8038;
      }
      goto L_089B8054;
    }
}
L_089B8054:
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
L_089B8068:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 & 255u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089B808Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 481u, 0x0880A288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B808Cu) goto L_089B808C;
    return;
L_089B808C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B80B0;
      }
      goto L_089B809C;
    }
}
L_089B809C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B80A8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 475u, 0x0880A244u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B80A8u) goto L_089B80A8;
    return;
L_089B80A8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089B80B4;
      }
      goto L_089B80B0;
    }
L_089B80B0:
    hot_regs.g2 = (0u | 1u);
    goto L_089B80B4;
L_089B80B4:
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
L_089B80C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g4 = (15488u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f14 / hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 63u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g31 = (0x089B8100u);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 951u, 0x08B578B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8100u) goto L_089B8100;
    return;
L_089B8100:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g2 | 0u);
    g4 = (2234u << 16u);
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g4 = (g4 + static_cast<std::uint32_t>(6254));
    if (hot_regs.g6 != 0u) {
    g5 = (0u | 63u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_089B8118;
    }
    goto L_089B8118;
}
L_089B8118:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    g16 = (hot_regs.g5 + hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g16 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089B8158;
      }
      goto L_089B8134;
    }
}
L_089B8134:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g16 + static_cast<std::uint32_t>(63));
    g16 = (0u | 107u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 107 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g16 = (g4 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_089B8148;
    }
    goto L_089B8148;
}
L_089B8148:
{
    std::uint32_t g2 = hot_regs.g2;
    hot_regs.g4 = (ctx.gpr[16] << 16u);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 & 255u);
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_089B817C;
      }
      goto L_089B8158;
    }
}
L_089B8158:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 63u);
    g4 = (g4 - g16);
    g16 = (0u | 20u);
    hot_regs.g5 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g16 = (g4 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_089B8170;
    }
    goto L_089B8170;
}
L_089B8170:
{
    std::uint32_t g2 = hot_regs.g2;
    hot_regs.g4 = (ctx.gpr[16] << 16u);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    g2 = (g2 & 255u);
    hot_regs.g2 = g2;
    goto L_089B817C;
}
L_089B817C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B8190:
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g2 = (hot_regs.g5 & 255u);
      if (branch_taken) {
          goto L_089B81CC;
      }
      goto L_089B81A4;
    }
L_089B81A4:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 < f14));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - f14;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
        goto L_089B81D4;
    }
    goto L_089B81C4;
}
}
L_089B81C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B822C;
      }
      goto L_089B81CC;
    }
L_089B81CC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089B822C;
      }
      goto L_089B81D4;
    }
L_089B81D4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = f13 - hot_regs.f14;
    f13 = f12 - f13;
    f12 = f13 / f12;
    hot_regs.f15 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f15));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089B81FC;
    }
    goto L_089B81F4;
}
L_089B81F4:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g2);
    goto L_089B81FC;
L_089B81FC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g2 = (0u | 127u);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & 255u);
    hot_regs.g5 = (static_cast<std::int32_t>(g2) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g2 = (g4 | 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089B8224;
    }
    goto L_089B8224;
}
}
L_089B8224:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 & 255u);
      if (branch_taken) {
          goto L_089B822C;
      }
      goto L_089B822C;
    }
L_089B822C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8234:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
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
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089B8294u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8294u) goto L_089B8294;
    return;
L_089B8294:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (hot_regs.g4 & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8308;
      }
      goto L_089B82F4;
    }
L_089B82F4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8308;
      }
      goto L_089B8300;
    }
L_089B8300:
    hot_regs.g31 = (0x089B8308u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8308u) goto L_089B8308;
    return;
L_089B8308:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B8320:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), hot_regs.g7);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[11] & 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (2237u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28320));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089B8384u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8384u) goto L_089B8384;
    return;
L_089B8384:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8394;
      }
      goto L_089B838C;
    }
L_089B838C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83A8;
      }
      goto L_089B8394;
    }
L_089B8394:
    hot_regs.g4 = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089B83A8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B83A8u) goto L_089B83A8;
    return;
L_089B83A8:
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
L_089B83C0:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (g6 & 65535u);
    g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32480)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = g6 != 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089B840C;
      }
      goto L_089B83F8;
    }
}
L_089B83F8:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8414;
      }
      goto L_089B8404;
    }
L_089B8404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B840C;
    }
L_089B840C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B8414;
    }
L_089B8414:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 250 ? 1u : 0u);
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B841C;
    }
L_089B841C:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B8424;
    }
L_089B8424:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (hot_regs.g5 << 6u);
    hot_regs.g7 = (hot_regs.g5 << 3u);
    g17 = (g6 - hot_regs.g7);
    g17 = (hot_regs.g4 + g17);
    g6 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(6264)));
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B8440;
    }
}
L_089B8440:
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[18]) < 238 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B844C;
    }
L_089B844C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(6256)));
    hot_regs.g7 = (0u | 4u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_089B84B4;
      }
      goto L_089B845C;
    }
L_089B845C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(21524)));
    g6 = (static_cast<std::int32_t>(g6) < 40 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089B8498;
      }
      goto L_089B846C;
    }
}
L_089B846C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6266), static_cast<std::uint16_t>(ctx.gpr[18]));
    g6 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6308), static_cast<std::uint8_t>(g6));
    g6 = (g4 + static_cast<std::uint32_t>(21524));
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 << 2u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g4 = (g4 + ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(21364), hot_regs.g5);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B8498;
    }
}
L_089B8498:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B84AC;
      }
      goto L_089B84A4;
    }
L_089B84A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B84AC;
    }
L_089B84AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B84B4;
    }
L_089B84B4:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6308)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g7 = (2234u << 16u);
      if (branch_taken) {
          goto L_089B8580;
      }
      goto L_089B84C8;
    }
L_089B84C8:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(6016));
    g6 = (ctx.gpr[18] + g7);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_089B84D8;
}
L_089B84D8:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (ctx.gpr[17] + g16);
    g8 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(6266)));
    g8 = (g8 + hot_regs.g7);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    // nop
    ctx.gpr[8] = g8;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089B856C;
      }
      goto L_089B84F4;
    }
}
L_089B84F4:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (hot_regs.g4 << 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    g19 = (ctx.gpr[17] + g19);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089B8548;
      }
      goto L_089B8504;
    }
}
L_089B8504:
    hot_regs.g6 = (0u | 3u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(6268));
    ctx.gpr[20] = (hot_regs.g6 - hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(6266));
    hot_regs.g6 = (ctx.gpr[20] + ctx.gpr[20]);
    hot_regs.g31 = (0x089B8520u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8520u) goto L_089B8520;
    return;
L_089B8520:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(6280));
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(6276));
    hot_regs.g31 = (0x089B8534u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8534u) goto L_089B8534;
    return;
L_089B8534:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(6296));
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(6292));
    hot_regs.g31 = (0x089B8544u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8544u) goto L_089B8544;
    return;
L_089B8544:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6308)));
    goto L_089B8548;
L_089B8548:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(6266), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(6292), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089B8564;
      }
      goto L_089B855C;
    }
L_089B855C:
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6308), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089B8564;
L_089B8564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B856C;
    }
L_089B856C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    ctx.gpr[8] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[16] = (g4 + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B84D8;
      }
      goto L_089B8580;
    }
}
L_089B8580:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B85B0;
      }
      goto L_089B858C;
    }
L_089B858C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (g4 + g4);
    g6 = (g17 + g6);
    g4 = (g4 << 2u);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(6266), static_cast<std::uint16_t>(ctx.gpr[18]));
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6276), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(6292), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(6308), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_089B85B0;
}
L_089B85B0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B85D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-304));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(26344)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g5 & 7u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089B86D0;
      }
      goto L_089B8600;
    }
}
L_089B8600:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(21264));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21268), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x089B8670u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8670u) goto L_089B8670;
    return;
L_089B8670:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B86C8;
      }
      goto L_089B8678;
    }
L_089B8678:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B86C8;
    }
L_089B86C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21344), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B86D0;
    }
L_089B86D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B87B4;
      }
      goto L_089B86E4;
    }
}
L_089B86E4:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(21280));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21284), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x089B8754u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8754u) goto L_089B8754;
    return;
L_089B8754:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B87AC;
      }
      goto L_089B875C;
    }
L_089B875C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21348), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B87AC;
    }
L_089B87AC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21348), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B87B4;
    }
L_089B87B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8898;
      }
      goto L_089B87C8;
    }
}
L_089B87C8:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(21296));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x089B8838u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8838u) goto L_089B8838;
    return;
L_089B8838:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8890;
      }
      goto L_089B8840;
    }
L_089B8840:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21352), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8890;
    }
L_089B8890:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21352), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8898;
    }
L_089B8898:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    g4 = (g4 + static_cast<std::uint32_t>(3));
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B897C;
      }
      goto L_089B88AC;
    }
}
L_089B88AC:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(21312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21312), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    hot_regs.g31 = (0x089B891Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B891Cu) goto L_089B891C;
    return;
L_089B891C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8974;
      }
      goto L_089B8924;
    }
L_089B8924:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21356), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8974;
    }
L_089B8974:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21356), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B897C;
    }
L_089B897C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8990;
    }
}
L_089B8990:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(21328));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (16968u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f20;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21336), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x089B89F4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B89F4u) goto L_089B89F4;
    return;
L_089B89F4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8A10;
      }
      goto L_089B89FC;
    }
L_089B89FC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    f12 = f12 - hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21360), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089B8A14;
      }
      goto L_089B8A10;
    }
}
L_089B8A10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21360), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_089B8A14;
L_089B8A14:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B8A2C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x089B8A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8A98u) goto L_089B8A98;
    return;
L_089B8A98:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8AB4;
      }
      goto L_089B8AA0;
    }
L_089B8AA0:
{
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g19 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 4u));
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 >> 1u);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089B8AD0;
      }
      goto L_089B8AB4;
    }
}
L_089B8AB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g5 = (g4 << 3u);
    g4 = (g4 + hot_regs.g5);
    g20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 4u));
    g20 = (g20 & 255u);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g20) >> 4u));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
    goto L_089B8AD0;
}
L_089B8AD0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    g4 = (16347u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    g4 = (g4 | 34079u);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g5 = (16475u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g4 = (hot_regs.g5 | 34079u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    hot_regs.g6 = (20352u << 16u);
    hot_regs.g7 = (16968u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(hot_regs.g6);
    g4 = (15872u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g7);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[21] = (0u | 5u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089B8B24;
}
}
L_089B8B24:
    hot_regs.g31 = (0x089B8B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8B2Cu) goto L_089B8B2C;
    return;
L_089B8B2C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (ctx.gpr[18] << 2u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    g17 = (ctx.gpr[16] + g17);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089B8B6C;
      }
      goto L_089B8B38;
    }
}
L_089B8B38:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[18] & 3u);
    g4 = (g4 << 2u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(26320)));
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[23]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.hi);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    if (static_cast<std::int32_t>(g4) < 0) {
    f12 = f12 + ctx.fpr[30];
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_089B8B60;
    }
    goto L_089B8B60;
}
}
L_089B8B60:
{
    float f12 = hot_regs.f12;
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(21344), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089B8B6C;
}
L_089B8B6C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8B80;
    }
L_089B8B80:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8B94;
    }
L_089B8B94:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8BB4;
      }
      goto L_089B8BAC;
    }
L_089B8BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8BB4;
    }
L_089B8BB4:
    hot_regs.g31 = (0x089B8BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8BBCu) goto L_089B8BBC;
    return;
L_089B8BBC:
    if (hot_regs.g2 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
        goto L_089B8BDC;
    }
    goto L_089B8BC4;
L_089B8BC4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    f12 = f12 / ctx.fpr[24];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089B8BEC;
      }
      goto L_089B8BDC;
    }
}
L_089B8BDC:
{
    float f12 = hot_regs.f12;
    f12 = f12 / hot_regs.f22;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = f12;
    goto L_089B8BEC;
}
L_089B8BEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    g4 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8BFC;
    }
}
L_089B8BFC:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21344)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (g16 | 0u);
    hot_regs.g31 = (0x089B8C14u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    goto L_089B8190;
}
L_089B8C14:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(hot_regs.g2));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8CE0;
      }
      goto L_089B8C28;
    }
}
L_089B8C28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    g5 = (g5 << 8u);
    g4 = (g4 + g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089B8CB4;
      }
      goto L_089B8C48;
    }
}
L_089B8C48:
    hot_regs.g31 = (0x089B8C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8C50u) goto L_089B8C50;
    return;
L_089B8C50:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8C7C;
      }
      goto L_089B8C58;
    }
L_089B8C58:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    // nop
    // nop
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.lo);
    g4 = (ctx.gpr[19] + g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8CB4;
      }
      goto L_089B8C7C;
    }
}
L_089B8C7C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B8C8Cu);
    hot_regs.g5 = (hot_regs.g5 >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 690u, 0x089B7A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8C8Cu) goto L_089B8C8C;
    return;
L_089B8C8C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B8CA8;
      }
      goto L_089B8C98;
    }
L_089B8C98:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    g4 = (hot_regs.g5 - g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8CB4;
      }
      goto L_089B8CA8;
    }
}
L_089B8CA8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    g4 = (hot_regs.g5 + g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
    goto L_089B8CB4;
}
L_089B8CB4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] << 4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21264));
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B8CE0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8CE0u) goto L_089B8CE0;
    return;
L_089B8CE0:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g18 = (g18 & 255u);
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089B8B24;
      }
      goto L_089B8CF4;
    }
}
L_089B8CF4:
{
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B8D4C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089B8D94;
      }
      goto L_089B8D84;
    }
}
L_089B8D84:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
      if (branch_taken) {
          goto L_089B8DA0;
      }
      goto L_089B8D94;
    }
L_089B8D94:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
    goto L_089B8DA0;
L_089B8DA0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[20] << 5u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8FEC;
      }
      goto L_089B8DB0;
    }
}
L_089B8DB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    g6 = (0u - g4);
    g4 = (g4 << 6u);
    hot_regs.g7 = (g20 + g20);
    g19 = (g6 + g4);
    g4 = (g20 + hot_regs.g7);
    g6 = (g4 << 3u);
    g20 = (g6 - g4);
    g19 = (g16 + g19);
    g20 = (g16 + g20);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (g16 + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 1u);
    g4 = (g20 + ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    goto L_089B8DE8;
}
L_089B8DE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4192)));
    g4 = (g4 << 5u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g6 = (ctx.gpr[19] + g4);
    g6 = (g6 + static_cast<std::uint32_t>(160));
    g4 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089B8E14;
      }
      goto L_089B8E0C;
    }
}
L_089B8E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8E14;
    }
L_089B8E14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    hot_regs.g7 = (hot_regs.g29 + ctx.gpr[17]);
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g9 = (ctx.gpr[16] + g4);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(4234)));
    ctx.gpr[8] = (0u | 0u);
    g10 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    { const bool branch_taken = g10 == 0u;
    g10 = (g4 << 5u);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_089B8EC4;
      }
      goto L_089B8E38;
    }
}
L_089B8E38:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (0u - g10);
    g10 = (g10 << 6u);
    g2 = (g4 + g4);
    g10 = (g11 + g10);
    g11 = (g4 + g2);
    g4 = (ctx.gpr[16] + g10);
    g10 = (g11 << 3u);
    g10 = (g10 - g11);
    g10 = (ctx.gpr[16] + g10);
    g11 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g2 = (g10 + ctx.gpr[8]);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    goto L_089B8E64;
}
L_089B8E64:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    g2 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(4192)));
    g2 = (g2 << 5u);
    g3 = (g2 + g2);
    g2 = (g2 + g3);
    g2 = (hot_regs.g4 + g2);
    g2 = (g2 + static_cast<std::uint32_t>(160));
    g3 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] == g3;
    // nop
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
      if (branch_taken) {
          goto L_089B8E94;
      }
      goto L_089B8E88;
    }
}
L_089B8E88:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    g8 = (g8 & 255u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089B8EB8;
      }
      goto L_089B8E94;
    }
}
L_089B8E94:
{
    std::uint32_t g2 = hot_regs.g2;
    ctx.gpr[3] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    g2 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] == g2;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_089B8EB0;
      }
      goto L_089B8EA4;
    }
}
L_089B8EA4:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    g8 = (g8 & 255u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089B8EB8;
      }
      goto L_089B8EB0;
    }
}
L_089B8EB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
      if (branch_taken) {
          goto L_089B8EC4;
      }
      goto L_089B8EB8;
    }
L_089B8EB8:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = g2 != 0u;
    g2 = (ctx.gpr[10] + ctx.gpr[8]);
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_089B8E64;
      }
      goto L_089B8EC4;
    }
}
L_089B8EC4:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8ED0;
    }
L_089B8ED0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    g4 = (g4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8F10;
      }
      goto L_089B8EE0;
    }
}
L_089B8EE0:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B8F10;
      }
      goto L_089B8EEC;
    }
L_089B8EEC:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089B8EFCu);
    hot_regs.g6 = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8EFCu) goto L_089B8EFC;
    return;
L_089B8EFC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B8F08u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8F08u) goto L_089B8F08;
    return;
L_089B8F08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8F10;
    }
L_089B8F10:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8F1C;
    }
L_089B8F1C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8FB4;
      }
      goto L_089B8F28;
    }
L_089B8F28:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[23];
    hot_regs.g5 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_089B8F58;
      }
      goto L_089B8F34;
    }
L_089B8F34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = g7; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.lo);
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(g4));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = static_cast<std::int32_t>(g7) > 0;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089B8F58;
      }
      goto L_089B8F50;
    }
}
L_089B8F50:
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[30]));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(80))))));
    goto L_089B8F58;
L_089B8F58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g7 & 255u);
    g7 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    g4 = (g7 - g4);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089B8F90;
      }
      goto L_089B8F6C;
    }
}
L_089B8F6C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(68)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(68), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B8F9C;
      }
      goto L_089B8F88;
    }
}
L_089B8F88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8FB4;
      }
      goto L_089B8F90;
    }
L_089B8F90:
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(68), 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
      if (branch_taken) {
          goto L_089B8FD8;
      }
      goto L_089B8F9C;
    }
L_089B8F9C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8FB4;
      }
      goto L_089B8FAC;
    }
L_089B8FAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(16), g4);
    hot_regs.g4 = g4;
    goto L_089B8FB4;
}
L_089B8FB4:
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089B8FC8u);
    hot_regs.g6 = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8FC8u) goto L_089B8FC8;
    return;
L_089B8FC8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B8FD4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 703u, 0x089B7B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B8FD4u) goto L_089B8FD4;
    return;
L_089B8FD4:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4234)));
    goto L_089B8FD8;
L_089B8FD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g17 & 255u);
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[20] + g17);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089B8DE8;
      }
      goto L_089B8FEC;
    }
}
L_089B8FEC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B901C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g16);
    g16 = (g4 | 0u);
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(4)));
    g4 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089B90A8;
      }
      goto L_089B905C;
    }
}
L_089B905C:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    goto L_089B9060;
L_089B9060:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    g6 = (g4 << 5u);
    g5 = (g5 << 5u);
    g7 = (0u - g5);
    g5 = (g5 << 6u);
    g5 = (g7 + g5);
    g7 = (g6 + g6);
    g5 = (g16 + g5);
    g6 = (g6 + g7);
    g5 = (g5 + g6);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(232), static_cast<std::uint8_t>(0u));
    g5 = (g16 + g6);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(4312), static_cast<std::uint8_t>(0u));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 & 255u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
        goto L_089B9060;
    }
    goto L_089B90A8;
}
L_089B90A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (0u | 0u);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4234)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B95B4;
      }
      goto L_089B90C4;
    }
}
L_089B90C4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    goto L_089B90C8;
L_089B90C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g21 = ctx.gpr[21];
    g5 = (g4 + g4);
    g5 = (g4 + g5);
    g6 = (g5 << 3u);
    g5 = (g6 - g5);
    g5 = (ctx.gpr[16] + g5);
    g5 = (g5 + ctx.gpr[22]);
    g4 = (g4 << 5u);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(4192)));
    g6 = (0u - g4);
    g4 = (g4 << 6u);
    g4 = (g6 + g4);
    g5 = (g5 << 5u);
    g6 = (g5 + g5);
    g4 = (ctx.gpr[16] + g4);
    g5 = (g5 + g6);
    g21 = (g4 + g5);
    g21 = (g21 + static_cast<std::uint32_t>(160));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = g5 != g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_089B9128;
      }
      goto L_089B9120;
    }
}
L_089B9120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9594;
      }
      goto L_089B9128;
    }
L_089B9128:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B9594;
      }
      goto L_089B913C;
    }
}
L_089B913C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (ctx.gpr[20] << 5u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g18 = (ctx.gpr[16] + g4);
    g18 = (g18 + static_cast<std::uint32_t>(4240));
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089B9180;
      }
      goto L_089B9160;
    }
}
L_089B9160:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089B9180;
      }
      goto L_089B9170;
    }
L_089B9170:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089B9188;
      }
      goto L_089B9180;
    }
L_089B9180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B957C;
      }
      goto L_089B9188;
    }
L_089B9188:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9214;
      }
      goto L_089B9194;
    }
L_089B9194:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(26344)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B91C0;
      }
      goto L_089B91A4;
    }
}
L_089B91A4:
    hot_regs.g4 = (ctx.gpr[20] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B91B8;
      }
      goto L_089B91B0;
    }
L_089B91B0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089B91D8;
      }
      goto L_089B91B8;
    }
L_089B91B8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089B91D8;
      }
      goto L_089B91C0;
    }
L_089B91C0:
    hot_regs.g4 = (ctx.gpr[20] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B91D4;
      }
      goto L_089B91CC;
    }
L_089B91CC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089B91D8;
      }
      goto L_089B91D4;
    }
L_089B91D4:
    hot_regs.g4 = (0u | 1u);
    goto L_089B91D8;
L_089B91D8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9214;
      }
      goto L_089B91E0;
    }
L_089B91E0:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g31 = (0x089B91ECu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B91ECu) goto L_089B91EC;
    return;
L_089B91EC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089B9214;
      }
      goto L_089B91F4;
    }
L_089B91F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 + static_cast<std::uint32_t>(6028));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(8), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B957C;
      }
      goto L_089B9214;
    }
}
L_089B9214:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (0u | 1u);
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(g4));
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g21 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g21 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B9240;
      }
      goto L_089B9234;
    }
}
L_089B9234:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089B957C;
      }
      goto L_089B9240;
    }
L_089B9240:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B926C;
      }
      goto L_089B924C;
    }
L_089B924C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g31 = (0x089B9258u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 542u, 0x0880A5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9258u) goto L_089B9258;
    return;
L_089B9258:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B926C;
      }
      goto L_089B9260;
    }
L_089B9260:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089B957C;
      }
      goto L_089B926C;
    }
L_089B926C:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B9304;
      }
      goto L_089B9278;
    }
L_089B9278:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B92A4;
      }
      goto L_089B9284;
    }
L_089B9284:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g5 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    g19 = (0u | 63u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    if (g5 != 0u) {
    g19 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
        goto L_089B9298;
    }
    goto L_089B9298;
}
L_089B9298:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 & 255u);
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 << 1u);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089B92A8;
      }
      goto L_089B92A4;
    }
}
L_089B92A4:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    goto L_089B92A8;
L_089B92A8:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x089B92BCu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B92BCu) goto L_089B92BC;
    return;
L_089B92BC:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(66)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x089B92CCu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B92CCu) goto L_089B92CC;
    return;
L_089B92CC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x089B92DCu);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 507u, 0x0880A3C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B92DCu) goto L_089B92DC;
    return;
L_089B92DC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B92E8;
      }
      goto L_089B92E4;
    }
L_089B92E4:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B92E8;
L_089B92E8:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089B92FCu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B92FCu) goto L_089B92FC;
    return;
L_089B92FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9574;
      }
      goto L_089B9304;
    }
L_089B9304:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x089B9320u);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 666u, 0x089B788Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9320u) goto L_089B9320;
    return;
L_089B9320:
    hot_regs.g31 = (0x089B9328u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9328u) goto L_089B9328;
    return;
L_089B9328:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9330;
      }
      goto L_089B9330;
    }
L_089B9330:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089B93B0;
      }
      goto L_089B9340;
    }
L_089B9340:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9364;
      }
      goto L_089B934C;
    }
L_089B934C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(6000));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[19] = (g4 | 0u);
    hot_regs.g4 = g4;
        goto L_089B935C;
    }
    goto L_089B935C;
}
L_089B935C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9374;
      }
      goto L_089B9364;
    }
L_089B9364:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-6000));
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[19] = (g4 | 0u);
    hot_regs.g4 = g4;
        goto L_089B9374;
    }
    goto L_089B9374;
}
L_089B9374:
    hot_regs.g31 = (0x089B937Cu);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B937Cu) goto L_089B937C;
    return;
L_089B937C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B93A0;
      }
      goto L_089B9384;
    }
L_089B9384:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.gpr[19]);
    hot_regs.g4 = (16192u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089B93A0;
}
L_089B93A0:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089B93B0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B93B0u) goto L_089B93B0;
    return;
L_089B93B0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089B93FC;
      }
      goto L_089B93C0;
    }
L_089B93C0:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B93E4;
      }
      goto L_089B93CC;
    }
L_089B93CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(10));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
        goto L_089B93DC;
    }
    goto L_089B93DC;
}
L_089B93DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089B93F8;
      }
      goto L_089B93E4;
    }
L_089B93E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-10));
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
        goto L_089B93F4;
    }
    goto L_089B93F4;
}
L_089B93F4:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_089B93F8;
L_089B93F8:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089B93FC;
L_089B93FC:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9420;
      }
      goto L_089B9408;
    }
L_089B9408:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 63u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g5 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_089B9418;
    }
    goto L_089B9418;
}
L_089B9418:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g5 << 1u);
      if (branch_taken) {
          goto L_089B9420;
      }
      goto L_089B9420;
    }
L_089B9420:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9454;
      }
      goto L_089B9430;
    }
L_089B9430:
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    goto L_089B9434;
L_089B9434:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(26309)));
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089B9448;
      }
      goto L_089B9440;
    }
}
L_089B9440:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_089B9458;
      }
      goto L_089B9448;
    }
L_089B9448:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < 5 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089B9434;
      }
      goto L_089B9454;
    }
}
L_089B9454:
    hot_regs.g5 = (0u | 0u);
    goto L_089B9458;
L_089B9458:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B949C;
      }
      goto L_089B9460;
    }
L_089B9460:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26319)));
    hot_regs.g6 = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g4 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = (ctx.lo);
    hot_regs.g31 = (0x089B9494u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9494u) goto L_089B9494;
    return;
L_089B9494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B94E0;
      }
      goto L_089B949C;
    }
L_089B949C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26319)));
    g5 = (static_cast<std::int32_t>(g5) < 127 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089B94CC;
      }
      goto L_089B94AC;
    }
}
L_089B94AC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26319)));
    hot_regs.g6 = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (ctx.lo);
    hot_regs.g4 = g4;
    goto L_089B94CC;
}
L_089B94CC:
    hot_regs.g6 = (hot_regs.g4 & 255u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089B94E0u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B94E0u) goto L_089B94E0;
    return;
L_089B94E0:
    hot_regs.g5 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B94F0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    goto L_089B8234;
L_089B94F0:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(66)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B9504u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    goto L_089B80C8;
L_089B9504:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089B9564;
      }
      goto L_089B9510;
    }
L_089B9510:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9538;
      }
      goto L_089B951C;
    }
L_089B951C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(10));
    g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (g19 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
        goto L_089B9530;
    }
    goto L_089B9530;
}
L_089B9530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_089B9550;
      }
      goto L_089B9538;
    }
L_089B9538:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(-10));
    g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (g19 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
        goto L_089B954C;
    }
    goto L_089B954C;
}
L_089B954C:
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    goto L_089B9550;
L_089B9550:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g6 = (ctx.gpr[19] & 255u);
    hot_regs.g31 = (0x089B9560u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9560u) goto L_089B9560;
    return;
L_089B9560:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_089B9564;
L_089B9564:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g6 = (ctx.gpr[19] & 255u);
    hot_regs.g31 = (0x089B9574u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9574u) goto L_089B9574;
    return;
L_089B9574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9594;
      }
      goto L_089B957C;
    }
L_089B957C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g20 = (g20 & 255u);
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089B913C;
      }
      goto L_089B9594;
    }
}
L_089B9594:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(144)));
    g22 = (g22 + static_cast<std::uint32_t>(1));
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4234)));
    g22 = (g22 & 255u);
    g4 = (static_cast<std::int32_t>(g22) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
        goto L_089B90C8;
    }
    goto L_089B95B4;
}
L_089B95B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B9648;
      }
      goto L_089B95C8;
    }
}
L_089B95C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (hot_regs.g5 << 5u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4240));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g6 = (g6 + static_cast<std::uint32_t>(6028));
    { const bool branch_taken = hot_regs.g7 != g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089B95F8;
      }
      goto L_089B95F0;
    }
}
L_089B95F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9630;
      }
      goto L_089B95F8;
    }
L_089B95F8:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9630;
      }
      goto L_089B9604;
    }
L_089B9604:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g31 = (0x089B9614u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 550u, 0x0880A680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9614u) goto L_089B9614;
    return;
L_089B9614:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 + static_cast<std::uint32_t>(6028));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), g4);
    g4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089B9630;
}
L_089B9630:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g5 = (g5 & 255u);
    g4 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089B95C8;
      }
      goto L_089B9648;
    }
}
L_089B9648:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4234)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(7)));
    hot_regs.g4 = g4;
        goto L_089B9A4C;
    }
    goto L_089B9664;
}
L_089B9664:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    goto L_089B9668;
L_089B9668:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    g5 = (g4 + g4);
    g5 = (g4 + g5);
    g6 = (g5 << 3u);
    g5 = (g6 - g5);
    g5 = (ctx.gpr[16] + g5);
    g5 = (g5 + ctx.gpr[18]);
    g4 = (g4 << 5u);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(4192)));
    g6 = (0u - g4);
    g4 = (g4 << 6u);
    g4 = (g6 + g4);
    g5 = (g5 << 5u);
    g6 = (g5 + g5);
    g4 = (ctx.gpr[16] + g4);
    g5 = (g5 + g6);
    g19 = (g4 + g5);
    g19 = (g19 + static_cast<std::uint32_t>(160));
    g4 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B96B8;
    }
}
L_089B96B8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B96C4;
    }
L_089B96C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g5 - g4);
    g4 = (ctx.gpr[16] + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(6264)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B96EC;
      }
      goto L_089B96E4;
    }
}
L_089B96E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B96EC;
    }
L_089B96EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16352)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(6028));
    g4 = (hot_regs.g5 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B970C;
      }
      goto L_089B9704;
    }
}
L_089B9704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B970C;
    }
L_089B970C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    g4 = (g4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B974C;
      }
      goto L_089B971C;
    }
}
L_089B971C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B974C;
      }
      goto L_089B9728;
    }
L_089B9728:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089B974C;
      }
      goto L_089B9734;
    }
L_089B9734:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (0u | 1u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(68), hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B974C;
    }
}
L_089B974C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B9760;
    }
}
L_089B9760:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    goto L_089B9764;
L_089B9764:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g22 = ctx.gpr[22];
    g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g5 = (hot_regs.g4 + g5);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g22 = (ctx.hi);
    g22 = (g22 & 255u);
    g5 = (g22 << 5u);
    g6 = (g5 + g5);
    g5 = (g5 + g6);
    g20 = (ctx.gpr[16] + g5);
    g20 = (g20 + static_cast<std::uint32_t>(4240));
    g5 = (aot_mem.aot_load8(g20 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_089B9A10;
      }
      goto L_089B9798;
    }
}
L_089B9798:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B97CC;
      }
      goto L_089B97A4;
    }
L_089B97A4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26340)));
    { const std::uint32_t dividend = g5; const std::uint32_t divisor = hot_regs.g6; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g5 = (ctx.lo);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089B97C4;
      }
      goto L_089B97BC;
    }
}
L_089B97BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9A10;
      }
      goto L_089B97C4;
    }
L_089B97C4:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), hot_regs.g4);
    goto L_089B97CC;
L_089B97CC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089B97DCu);
    hot_regs.g6 = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B97DCu) goto L_089B97DC;
    return;
L_089B97DC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B980C;
      }
      goto L_089B97E8;
    }
L_089B97E8:
    hot_regs.g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B97F8u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    goto L_089B8234;
L_089B97F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B9808u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    goto L_089B80C8;
L_089B9808:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(hot_regs.g2));
    goto L_089B980C;
L_089B980C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9838;
      }
      goto L_089B9818;
    }
L_089B9818:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    g21 = (0u | 63u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g21) ? 1u : 0u);
    if (g4 != 0u) {
    g21 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
        goto L_089B982C;
    }
    goto L_089B982C;
}
L_089B982C:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 & 255u);
    { const bool branch_taken = 0u == 0u;
    g21 = (g21 << 1u);
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_089B983C;
      }
      goto L_089B9838;
    }
}
L_089B9838:
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    goto L_089B983C;
L_089B983C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(81)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (0u < hot_regs.g5 ? 1u : 0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089B9860u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 474u, 0x0880A214u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9860u) goto L_089B9860;
    return;
L_089B9860:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089B98DC;
      }
      goto L_089B986C;
    }
L_089B986C:
    hot_regs.g31 = (0x089B9874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 167u, 0x08A11520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9874u) goto L_089B9874;
    return;
L_089B9874:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B98DC;
      }
      goto L_089B987C;
    }
L_089B987C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.gpr[23]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[23]) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089B9894;
      }
      goto L_089B9888;
    }
}
L_089B9888:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_089B9894;
L_089B9894:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16192u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (20224u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (20224u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089B98C4;
      }
      goto L_089B98B8;
    }
}
}
L_089B98B8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089B98DC;
      }
      goto L_089B98C4;
    }
}
L_089B98C4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f13;
    g23 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g23 = (g4 + g23);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    goto L_089B98DC;
}
}
L_089B98DC:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089B98ECu);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 539u, 0x0880A5B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B98ECu) goto L_089B98EC;
    return;
L_089B98EC:
    ctx.gpr[23] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9920;
      }
      goto L_089B98FC;
    }
L_089B98FC:
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[23]);
    goto L_089B9900;
L_089B9900:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(26309)));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B9914;
      }
      goto L_089B990C;
    }
}
L_089B990C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089B9924;
      }
      goto L_089B9914;
    }
L_089B9914:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(ctx.gpr[23]) < 5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[16] + ctx.gpr[23]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B9900;
      }
      goto L_089B9920;
    }
}
L_089B9920:
    hot_regs.g4 = (0u | 0u);
    goto L_089B9924;
L_089B9924:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9974;
      }
      goto L_089B992C;
    }
L_089B992C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9974;
      }
      goto L_089B9938;
    }
L_089B9938:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26319)));
    hot_regs.g5 = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g4 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = (ctx.lo);
    hot_regs.g31 = (0x089B996Cu);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B996Cu) goto L_089B996C;
    return;
L_089B996C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B99B8;
      }
      goto L_089B9974;
    }
L_089B9974:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26319)));
    g4 = (static_cast<std::int32_t>(g4) < 127 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B99A4;
      }
      goto L_089B9984;
    }
}
L_089B9984:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26319)));
    hot_regs.g5 = (0u | 127u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.lo);
    hot_regs.g4 = g4;
    goto L_089B99A4;
}
L_089B99A4:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g6 = (ctx.gpr[21] & 255u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089B99B8u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 516u, 0x0880A438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B99B8u) goto L_089B99B8;
    return;
L_089B99B8:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(66)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g31 = (0x089B99C8u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 536u, 0x0880A584u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B99C8u) goto L_089B99C8;
    return;
L_089B99C8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B99E4;
      }
      goto L_089B99D4;
    }
L_089B99D4:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(67)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g31 = (0x089B99E4u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 538u, 0x0880A5ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B99E4u) goto L_089B99E4;
    return;
L_089B99E4:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7696));
    hot_regs.g31 = (0x089B99F0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 546u, 0x0880A624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B99F0u) goto L_089B99F0;
    return;
L_089B99F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(g4));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (0u + static_cast<std::uint32_t>(-1));
    g17 = (g17 & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089B9A28;
      }
      goto L_089B9A10;
    }
}
L_089B9A10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g4 = (g4 & 255u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_089B9764;
    }
    goto L_089B9A28;
}
L_089B9A28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(144)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4234)));
    g18 = (g18 & 255u);
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
        goto L_089B9668;
    }
    goto L_089B9A48;
}
L_089B9A48:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    goto L_089B9A4C;
L_089B9A4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(7)));
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (ctx.hi);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B9A94:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089B9AA8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28320));
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 448u, 0x089B6B10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9AA8u) goto L_089B9AA8;
    return;
L_089B9AA8:
    hot_regs.g31 = (0x089B9AB0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-13220));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9AB0u) goto L_089B9AB0;
    return;
L_089B9AB0:
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
L_089B9ABC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g5 & 255u);
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x089B9AE8u);
    hot_regs.g5 = (g29 | 0u);
    ctx.pc = 0x08B735A4u;
    hot_regs.g29 = g29;
    return;
}
L_089B9AE8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B28;
      }
      goto L_089B9AF0;
    }
L_089B9AF0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089B9B04u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 485u, 0x08ABE3E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9B04u) goto L_089B9B04;
    return;
L_089B9B04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 1u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(g4));
    ctx.gpr[17] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[17] != g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B9B30;
      }
      goto L_089B9B20;
    }
}
L_089B9B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B88;
      }
      goto L_089B9B28;
    }
L_089B9B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B88;
      }
      goto L_089B9B30;
    }
L_089B9B30:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B9B5C;
      }
      goto L_089B9B38;
    }
L_089B9B38:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089B9B54u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9B54u) goto L_089B9B54;
    return;
L_089B9B54:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_089B9B7C;
      }
      goto L_089B9B5C;
    }
L_089B9B5C:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089B9B78u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9B78u) goto L_089B9B78;
    return;
L_089B9B78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    goto L_089B9B7C;
L_089B9B7C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g17 != hot_regs.g4;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089B9B30;
      }
      goto L_089B9B88;
    }
}
L_089B9B88:
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
L_089B9BA0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089B9BC0u);
    ctx.gpr[18] = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9BC0u) goto L_089B9BC0;
    return;
L_089B9BC0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089B9C28;
      }
      goto L_089B9BD0;
    }
L_089B9BD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089B9BFC;
      }
      goto L_089B9BD8;
    }
L_089B9BD8:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089B9BF4u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9BF4u) goto L_089B9BF4;
    return;
L_089B9BF4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_089B9C1C;
      }
      goto L_089B9BFC;
    }
L_089B9BFC:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089B9C18u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9C18u) goto L_089B9C18;
    return;
L_089B9C18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    goto L_089B9C1C;
L_089B9C1C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g17 != hot_regs.g4;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089B9BD0;
      }
      goto L_089B9C28;
    }
}
L_089B9C28:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x089B9C34u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 500u, 0x08ABE564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9C34u) goto L_089B9C34;
    return;
L_089B9C34:
    hot_regs.g31 = (0x089B9C3Cu);
    hot_regs.g4 = (0u | 0u);
    ctx.pc = 0x08B735ACu;
    return;
L_089B9C3C:
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
L_089B9C54:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089B9C68u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 484u, 0x08ABE3BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9C68u) goto L_089B9C68;
    return;
L_089B9C68:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(300), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(301), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(304), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(308), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(312), 0u);
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
L_089B9C90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089B9CA4u);
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    goto L_089B9C54;
}
L_089B9CA4:
    hot_regs.g31 = (0x089B9CACu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-13200));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9CACu) goto L_089B9CAC;
    return;
L_089B9CAC:
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
L_089B9CB8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9CC0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9CC8:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2204u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(-25400));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089B9CD4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089B9CE4u);
    // nop
    hot_regs.g29 = g29;
    goto L_089B9CC8;
}
L_089B9CE4:
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
L_089B9CF0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089B9D10u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_089B9CC8;
}
L_089B9D10:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089B9D58;
    }
    goto L_089B9D18;
L_089B9D18:
    hot_regs.g31 = (0x089B9D20u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9D20u) goto L_089B9D20;
    return;
L_089B9D20:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089B9D48;
    }
    goto L_089B9D28;
L_089B9D28:
    hot_regs.g31 = (0x089B9D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9D30u) goto L_089B9D30;
    return;
L_089B9D30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 ^ ctx.gpr[16]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089B9D4C;
      }
      goto L_089B9D44;
    }
}
L_089B9D44:
    ctx.gpr[17] = (0u | 1u);
    goto L_089B9D48;
L_089B9D48:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_089B9D4C;
L_089B9D4C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D58;
      }
      goto L_089B9D54;
    }
L_089B9D54:
    ctx.gpr[18] = (0u | 1u);
    goto L_089B9D58;
L_089B9D58:
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
L_089B9D74:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089B9D88u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9D88u) goto L_089B9D88;
    return;
L_089B9D88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(25048));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(188), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(0u));
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
L_089B9DBC:
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
          goto L_089B9E04;
      }
      goto L_089B9DD8;
    }
}
L_089B9DD8:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25048));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089B9DF0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9DF0u) goto L_089B9DF0;
    return;
L_089B9DF0:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E04;
      }
      goto L_089B9DFC;
    }
L_089B9DFC:
    hot_regs.g31 = (0x089B9E04u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9E04u) goto L_089B9E04;
    return;
L_089B9E04:
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
L_089B9E18:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(196)));
    f12 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g6 = (16256u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g6);
    f13 = f12 / f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(184)));
    g4 = (g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    f13 = hot_regs.f14 + f13;
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089B9E5C;
      }
      goto L_089B9E58;
    }
}
}
L_089B9E58:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089B9E5C;
L_089B9E5C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(192)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(188)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(184)));
    hot_regs.g5 = (hot_regs.g5 - hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g31 = (0x089B9E90u);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 571u, 0x08AC61E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9E90u) goto L_089B9E90;
    return;
L_089B9E90:
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
L_089B9E9C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (g4 | 0u);
    g4 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(196)));
    hot_regs.g6 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = std::bit_cast<float>(hot_regs.g6);
    f13 = f13 / f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(184)));
    g4 = (g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    f13 = hot_regs.f14 - f13;
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f13 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089B9EE4;
      }
      goto L_089B9EE0;
    }
}
}
L_089B9EE0:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089B9EE4;
L_089B9EE4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(192)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(188)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(184)));
    hot_regs.g5 = (hot_regs.g5 - hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g31 = (0x089B9F18u);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 571u, 0x08AC61E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9F18u) goto L_089B9F18;
    return;
L_089B9F18:
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
L_089B9F24:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089B9F38u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 507u, 0x08AC5C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9F38u) goto L_089B9F38;
    return;
L_089B9F38:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(184)));
    f13 = std::bit_cast<float>(hot_regs.g5);
    g4 = (g16 | 0u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g31 = (0x089B9F5Cu);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089BA1C8;
}
}
L_089B9F5C:
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
L_089B9F6C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9F74:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9F7C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089B9F90u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 511u, 0x08AC5CC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9F90u) goto L_089B9F90;
    return;
L_089B9F90:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(184)));
    f13 = std::bit_cast<float>(hot_regs.g5);
    g4 = (g16 | 0u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g31 = (0x089B9FB4u);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089BA1C8;
}
}
L_089B9FB4:
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
L_089B9FC4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), hot_regs.g31);
    hot_regs.g31 = (0x089B9FE4u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9FE4u) goto L_089B9FE4;
    return;
L_089B9FE4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA01C;
      }
      goto L_089B9FEC;
    }
L_089B9FEC:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 154u);
    hot_regs.g31 = (0x089B9FFCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089B9FFCu) goto L_089B9FFC;
    return;
L_089B9FFC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089BA008u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA008u) goto L_089BA008;
    return;
L_089BA008:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089BA024;
      }
      goto L_089BA014;
    }
L_089BA014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA02C;
      }
      goto L_089BA01C;
    }
L_089BA01C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089BA158;
      }
      goto L_089BA024;
    }
L_089BA024:
    hot_regs.g31 = (0x089BA02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA02Cu) goto L_089BA02C;
    return;
L_089BA02C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA06C;
      }
      goto L_089BA034;
    }
L_089BA034:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (0u | 171u);
    hot_regs.g31 = (0x089BA044u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA044u) goto L_089BA044;
    return;
L_089BA044:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x089BA050u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA050u) goto L_089BA050;
    return;
L_089BA050:
    hot_regs.g31 = (0x089BA058u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA058u) goto L_089BA058;
    return;
L_089BA058:
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), hot_regs.g2);
      if (branch_taken) {
          goto L_089BA06C;
      }
      goto L_089BA064;
    }
L_089BA064:
    hot_regs.g31 = (0x089BA06Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA06Cu) goto L_089BA06C;
    return;
L_089BA06C:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 155u);
    hot_regs.g31 = (0x089BA07Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA07Cu) goto L_089BA07C;
    return;
L_089BA07C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089BA088u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA088u) goto L_089BA088;
    return;
L_089BA088:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089BA09C;
      }
      goto L_089BA094;
    }
L_089BA094:
    hot_regs.g31 = (0x089BA09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA09Cu) goto L_089BA09C;
    return;
L_089BA09C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA0DC;
      }
      goto L_089BA0A4;
    }
L_089BA0A4:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    hot_regs.g5 = (0u | 171u);
    hot_regs.g31 = (0x089BA0B4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA0B4u) goto L_089BA0B4;
    return;
L_089BA0B4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x089BA0C0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA0C0u) goto L_089BA0C0;
    return;
L_089BA0C0:
    hot_regs.g31 = (0x089BA0C8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA0C8u) goto L_089BA0C8;
    return;
L_089BA0C8:
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), hot_regs.g2);
      if (branch_taken) {
          goto L_089BA0DC;
      }
      goto L_089BA0D4;
    }
L_089BA0D4:
    hot_regs.g31 = (0x089BA0DCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA0DCu) goto L_089BA0DC;
    return;
L_089BA0DC:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 153u);
    hot_regs.g31 = (0x089BA0ECu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA0ECu) goto L_089BA0EC;
    return;
L_089BA0EC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089BA0F8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 89u, 0x089844FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA0F8u) goto L_089BA0F8;
    return;
L_089BA0F8:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089BA10C;
      }
      goto L_089BA104;
    }
L_089BA104:
    hot_regs.g31 = (0x089BA10Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA10Cu) goto L_089BA10C;
    return;
L_089BA10C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA154;
      }
      goto L_089BA114;
    }
L_089BA114:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    hot_regs.g5 = (0u | 171u);
    hot_regs.g31 = (0x089BA124u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 867u, 0x08AF7A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA124u) goto L_089BA124;
    return;
L_089BA124:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (0x089BA130u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 237u, 0x08984D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA130u) goto L_089BA130;
    return;
L_089BA130:
    hot_regs.g31 = (0x089BA138u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 937u, 0x08B577E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA138u) goto L_089BA138;
    return;
L_089BA138:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(hot_regs.g2));
    g16 = (hot_regs.g4 | 0u);
    { const bool branch_taken = g16 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089BA154;
      }
      goto L_089BA14C;
    }
}
L_089BA14C:
    hot_regs.g31 = (0x089BA154u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA154u) goto L_089BA154;
    return;
L_089BA154:
    hot_regs.g2 = (0u | 1u);
    goto L_089BA158;
L_089BA158:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BA170:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089BA188u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 577u, 0x08AC6238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA188u) goto L_089BA188;
    return;
L_089BA188:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(188)));
    f12 = std::bit_cast<float>(hot_regs.g2);
    f13 = std::bit_cast<float>(g4);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(192)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (hot_regs.g5 - g4);
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f12 = f12 - f13;
    f12 = f12 / f14;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089BA1C8:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f26));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g16);
    f26 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    g16 = (g4 | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    g4 = (16512u << 16u);
    f12 = std::bit_cast<float>(g4);
    g18 = (0u | 0u);
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(196)));
    f26 = f26 + f12;
    hot_regs.g5 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_089BA2D8;
      }
      goto L_089BA228;
    }
}
}
L_089BA228:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g5);
    ctx.gpr[19] = (0u | 0u);
    g5 = (16608u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g5 = (16672u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    goto L_089BA244;
}
L_089BA244:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
    f12 = std::bit_cast<float>(ctx.gpr[18]);
    f13 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f12 = f12 / f13;
    f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    f13 = ctx.fpr[28] / f13;
    f14 = std::bit_cast<float>(ctx.gpr[19]);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    f12 = f12 + f13;
    ctx.set_fpu_condition((f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    f20 = f20 + f14;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089BA2A8;
      }
      goto L_089BA27C;
    }
}
L_089BA27C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (0u | 1u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089BA298u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_089BA310;
L_089BA298:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089BA2C8;
      }
      goto L_089BA2A8;
    }
L_089BA2A8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g5 = (0u | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089BA2C4u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_089BA310;
L_089BA2C4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    goto L_089BA2C8;
L_089BA2C8:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089BA244;
      }
      goto L_089BA2D8;
    }
}
L_089BA2D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BA310:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g5 & 255u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (0u | 0u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), hot_regs.g31);
    hot_regs.g31 = (0x089BA370u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA370u) goto L_089BA370;
    return;
L_089BA370:
    ctx.fpr[26] = ctx.fpr[26] + hot_regs.f22;
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f20;
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[30] = ctx.fpr[26] + ctx.fpr[28];
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f15;
    hot_regs.f13 = hot_regs.f20 + hot_regs.f15;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[28];
    hot_regs.f14 = ctx.fpr[30] + hot_regs.f15;
    hot_regs.g31 = (0x089BA3ACu);
    hot_regs.f15 = ctx.fpr[24] + hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA3ACu) goto L_089BA3AC;
    return;
L_089BA3AC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089BA3BCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA3BCu) goto L_089BA3BC;
    return;
L_089BA3BC:
    hot_regs.f12 = hot_regs.f22 - ctx.fpr[28];
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.f13 = hot_regs.f20 - ctx.fpr[28];
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g31 = (0x089BA3D4u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA3D4u) goto L_089BA3D4;
    return;
L_089BA3D4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089BA3E4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA3E4u) goto L_089BA3E4;
    return;
L_089BA3E4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089BA41C;
      }
      goto L_089BA3EC;
    }
L_089BA3EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(20)));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BA448;
      }
      goto L_089BA41C;
    }
}
L_089BA41C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(24)));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089BA448;
}
L_089BA448:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x089BA460u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA460u) goto L_089BA460;
    return;
L_089BA460:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089BA470u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 107u, 0x08AF5130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA470u) goto L_089BA470;
    return;
L_089BA470:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
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
L_089BA4A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-27012));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g7 = (2223u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(10924));
    hot_regs.g5 = (0u | 72u);
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089BA4D4u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(17092));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA4D4u) goto L_089BA4D4;
    return;
L_089BA4D4:
    hot_regs.g31 = (0x089BA4DCu);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(11212));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 814u, 0x08AAFA54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA4DCu) goto L_089BA4DC;
    return;
L_089BA4DC:
    hot_regs.g31 = (0x089BA4E4u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(11215));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 814u, 0x08AAFA54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA4E4u) goto L_089BA4E4;
    return;
L_089BA4E4:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (0u | 209u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11222), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11223), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(11224), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11226), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11228), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11232), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11253), static_cast<std::uint8_t>(0u));
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
L_089BA51C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089BA560;
      }
      goto L_089BA52C;
    }
}
L_089BA52C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-27028));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5848), 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089BA54C;
      }
      goto L_089BA540;
    }
}
L_089BA540:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), g6);
    hot_regs.g6 = g6;
    goto L_089BA54C;
}
L_089BA54C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BA560;
      }
      goto L_089BA558;
    }
}
L_089BA558:
    hot_regs.g31 = (0x089BA560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA560u) goto L_089BA560;
    return;
L_089BA560:
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
L_089BA56C:
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
          goto L_089BA5F0;
      }
      goto L_089BA588;
    }
}
L_089BA588:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-27012));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g7 = (2223u << 16u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(10924));
    hot_regs.g5 = (0u | 72u);
    hot_regs.g6 = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x089BA5B4u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(17104));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA5B4u) goto L_089BA5B4;
    return;
L_089BA5B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA5BC;
    }
L_089BA5BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-27028));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), g4);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5848), 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089BA5DC;
      }
      goto L_089BA5D0;
    }
}
L_089BA5D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    goto L_089BA5DC;
}
L_089BA5DC:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_089BA5E0;
L_089BA5E0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA5F0;
      }
      goto L_089BA5E8;
    }
L_089BA5E8:
    hot_regs.g31 = (0x089BA5F0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA5F0u) goto L_089BA5F0;
    return;
L_089BA5F0:
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
L_089BA604:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (g5 << 16u);
    g7 = (hot_regs.g6 << 16u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 16u));
    g7 = (0u | 0u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    goto L_089BA618;
}
L_089BA618:
    { const bool branch_taken = hot_regs.g7 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089BA644;
      }
      goto L_089BA620;
    }
L_089BA620:
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089BA644;
      }
      goto L_089BA628;
    }
L_089BA628:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    goto L_089BA630;
L_089BA630:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    aot_mem.aot_store16(g8 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g9) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    g8 = (g8 + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089BA630;
      }
      goto L_089BA644;
    }
}
L_089BA644:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(g7) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(512));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089BA618;
      }
      goto L_089BA654;
    }
}
L_089BA654:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA65C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(9244), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(9252), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (g4 | 0u);
    goto L_089BA678;
}
L_089BA678:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(9276), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(9788), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(10300), static_cast<std::uint16_t>(0u));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 256 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(2));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089BA678;
      }
      goto L_089BA694;
    }
}
L_089BA694:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10812), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10816), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10820), 0u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10824), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10825), static_cast<std::uint8_t>(0u));
    g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10832), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10828), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10836), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10852), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10840), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10844), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(10848), 0u);
    g5 = (0u | 0u);
    hot_regs.g5 = g5;
    goto L_089BA6D0;
}
L_089BA6D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 256 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BA6D0;
      }
      goto L_089BA6E4;
    }
}
L_089BA6E4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA6EC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4203)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[20] = (2236u << 16u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089BA9F8;
      }
      goto L_089BA718;
    }
}
L_089BA718:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(29552)));
    g5 = (50944u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(29552)));
    g4 = (ctx.gpr[16] | 0u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x089BA73Cu);
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(29552), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089BB368;
}
L_089BA73C:
    hot_regs.g4 = (0u | 7u);
    hot_regs.g31 = (0x089BA748u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA748u) goto L_089BA748;
    return;
L_089BA748:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g31 = (0x089BA754u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA754u) goto L_089BA754;
    return;
L_089BA754:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x089BA760u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA760u) goto L_089BA760;
    return;
L_089BA760:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (2236u << 16u);
    g19 = (g19 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089BA944;
      }
      goto L_089BA774;
    }
}
L_089BA774:
    hot_regs.g31 = (0x089BA77Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 48u, 0x089C0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA77Cu) goto L_089BA77C;
    return;
L_089BA77C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24920)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA790;
      }
      goto L_089BA788;
    }
L_089BA788:
    hot_regs.g31 = (0x089BA790u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 432u, 0x089C5CFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA790u) goto L_089BA790;
    return;
L_089BA790:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9256)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BA914;
      }
      goto L_089BA79C;
    }
L_089BA79C:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    g17 = (2238u << 16u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g17 = (g17 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089BA7B8;
      }
      goto L_089BA7AC;
    }
}
L_089BA7AC:
    hot_regs.g31 = (0x089BA7B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA7B4u) goto L_089BA7B4;
    return;
L_089BA7B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089BA7B8;
L_089BA7B8:
    hot_regs.g31 = (0x089BA7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA7C0u) goto L_089BA7C0;
    return;
L_089BA7C0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA7D0;
      }
      goto L_089BA7C8;
    }
L_089BA7C8:
    hot_regs.g31 = (0x089BA7D0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BB3E0;
L_089BA7D0:
    hot_regs.g31 = (0x089BA7D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 253u, 0x089C4F8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA7D8u) goto L_089BA7D8;
    return;
L_089BA7D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g6 + g4);
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(224)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10856)));
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BA840;
      }
      goto L_089BA804;
    }
}
L_089BA804:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x089BA814u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA814u) goto L_089BA814;
    return;
L_089BA814:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g6 + g4);
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10868)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10856), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089BA854;
      }
      goto L_089BA840;
    }
}
L_089BA840:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x089BA850u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA850u) goto L_089BA850;
    return;
L_089BA850:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10868)));
    goto L_089BA854;
L_089BA854:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA87C;
      }
      goto L_089BA85C;
    }
L_089BA85C:
    hot_regs.g31 = (0x089BA864u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BB9EC;
L_089BA864:
    hot_regs.g31 = (0x089BA86Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 375u, 0x089BDD20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA86Cu) goto L_089BA86C;
    return;
L_089BA86C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA87C;
      }
      goto L_089BA874;
    }
L_089BA874:
    hot_regs.g31 = (0x089BA87Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 671u, 0x089BF4F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA87Cu) goto L_089BA87C;
    return;
L_089BA87C:
    hot_regs.g31 = (0x089BA884u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 342u, 0x089BDA30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA884u) goto L_089BA884;
    return;
L_089BA884:
    hot_regs.g31 = (0x089BA88Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BB5CC;
L_089BA88C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA8A0;
      }
      goto L_089BA898;
    }
L_089BA898:
    hot_regs.g31 = (0x089BA8A0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 361u, 0x089C57B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA8A0u) goto L_089BA8A0;
    return;
L_089BA8A0:
    hot_regs.g31 = (0x089BA8A8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 195u, 0x089C4B68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA8A8u) goto L_089BA8A8;
    return;
L_089BA8A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10920)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BA8E4;
      }
      goto L_089BA8B4;
    }
L_089BA8B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA8CC;
      }
      goto L_089BA8C0;
    }
L_089BA8C0:
    hot_regs.g31 = (0x089BA8C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA8C8u) goto L_089BA8C8;
    return;
L_089BA8C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    goto L_089BA8CC;
L_089BA8CC:
    hot_regs.g31 = (0x089BA8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA8D4u) goto L_089BA8D4;
    return;
L_089BA8D4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA8E4;
      }
      goto L_089BA8DC;
    }
L_089BA8DC:
    hot_regs.g31 = (0x089BA8E4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 290u, 0x089BD59Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA8E4u) goto L_089BA8E4;
    return;
L_089BA8E4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11236), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11237), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x089BA8F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 222u, 0x089BD108u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA8F4u) goto L_089BA8F4;
    return;
L_089BA8F4:
    hot_regs.g31 = (0x089BA8FCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 156u, 0x089C4858u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA8FCu) goto L_089BA8FC;
    return;
L_089BA8FC:
    hot_regs.g31 = (0x089BA904u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 804u, 0x089BFF80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA904u) goto L_089BA904;
    return;
L_089BA904:
    hot_regs.g31 = (0x089BA90Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 250u, 0x089BD32Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA90Cu) goto L_089BA90C;
    return;
L_089BA90C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA914;
    }
L_089BA914:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11244)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA928;
      }
      goto L_089BA920;
    }
L_089BA920:
    hot_regs.g31 = (0x089BA928u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 48u, 0x089C0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA928u) goto L_089BA928;
    return;
L_089BA928:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11252)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA934;
    }
L_089BA934:
    hot_regs.g31 = (0x089BA93Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BB3E0;
L_089BA93C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA944;
    }
L_089BA944:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11244)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA958;
      }
      goto L_089BA950;
    }
L_089BA950:
    hot_regs.g31 = (0x089BA958u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 48u, 0x089C0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA958u) goto L_089BA958;
    return;
L_089BA958:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11252)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA96C;
      }
      goto L_089BA964;
    }
L_089BA964:
    hot_regs.g31 = (0x089BA96Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BB3E0;
L_089BA96C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9258)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BA9AC;
      }
      goto L_089BA978;
    }
L_089BA978:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA9AC;
      }
      goto L_089BA984;
    }
L_089BA984:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9256)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089BA9AC;
      }
      goto L_089BA990;
    }
L_089BA990:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA9A4;
      }
      goto L_089BA99C;
    }
L_089BA99C:
    hot_regs.g31 = (0x089BA9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9A4u) goto L_089BA9A4;
    return;
L_089BA9A4:
    hot_regs.g31 = (0x089BA9ACu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 765u, 0x088128A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9ACu) goto L_089BA9AC;
    return;
L_089BA9AC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA9F8;
      }
      goto L_089BA9B8;
    }
L_089BA9B8:
    hot_regs.g31 = (0x089BA9C0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BBF60;
L_089BA9C0:
    hot_regs.g31 = (0x089BA9C8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 65u, 0x089BC530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9C8u) goto L_089BA9C8;
    return;
L_089BA9C8:
    hot_regs.g31 = (0x089BA9D0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 209u, 0x089C15C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9D0u) goto L_089BA9D0;
    return;
L_089BA9D0:
    hot_regs.g31 = (0x089BA9D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 720u, 0x089BF9F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9D8u) goto L_089BA9D8;
    return;
L_089BA9D8:
    hot_regs.g31 = (0x089BA9E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 365u, 0x089BDC34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9E0u) goto L_089BA9E0;
    return;
L_089BA9E0:
    hot_regs.g31 = (0x089BA9E8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 168u, 0x089BCDB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9E8u) goto L_089BA9E8;
    return;
L_089BA9E8:
    hot_regs.g31 = (0x089BA9F0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 26u, 0x089BC1D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9F0u) goto L_089BA9F0;
    return;
L_089BA9F0:
    hot_regs.g31 = (0x089BA9F8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 118u, 0x089BC858u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BA9F8u) goto L_089BA9F8;
    return;
L_089BA9F8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAA0C;
      }
      goto L_089BAA04;
    }
L_089BAA04:
    hot_regs.g31 = (0x089BAA0Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 283u, 0x089C1C78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BAA0Cu) goto L_089BAA0C;
    return;
L_089BAA0C:
    hot_regs.g31 = (0x089BAA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 123u, 0x089E8B80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BAA14u) goto L_089BAA14;
    return;
L_089BAA14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (50944u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(29552), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g20 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BAA4C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 65535u);
    g5 = (g5 << 9u);
    g2 = (hot_regs.g4 + g5);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(538));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BAA60:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(11224)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAA68:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(11221)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAA70:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(9260))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAA78:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11228)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAA80:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(11220)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAA88:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    hot_regs.g5 = (16704u << 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_089BAAA0;
      }
      goto L_089BAA98;
    }
L_089BAA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAAA0;
      }
      goto L_089BAAA0;
    }
L_089BAAA0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAAA8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAAC0;
      }
      goto L_089BAAB4;
    }
L_089BAAB4:
    hot_regs.g4 = (17194u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_089BAAC8;
      }
      goto L_089BAAC0;
    }
L_089BAAC0:
    hot_regs.g4 = (17220u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
    goto L_089BAAC8;
L_089BAAC8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAAD0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAAE8;
      }
      goto L_089BAADC;
    }
L_089BAADC:
    hot_regs.g4 = (17080u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_089BAAF4;
      }
      goto L_089BAAE8;
    }
L_089BAAE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17027u << 16u);
    g4 = (g4 | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_089BAAF4;
}
L_089BAAF4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAAFC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAB14;
      }
      goto L_089BAB08;
    }
L_089BAB08:
    hot_regs.g4 = (17080u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_089BAB20;
      }
      goto L_089BAB14;
    }
L_089BAB14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17027u << 16u);
    g4 = (g4 | 39322u);
    ctx.fpr[0] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_089BAB20;
}
L_089BAB20:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAB28:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (2279u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    g17 = (g17 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089BAB4Cu);
    hot_regs.g4 = (g16 | 0u);
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_089BA65C;
}
L_089BAB4C:
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    goto L_089BAB54;
L_089BAB54:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(hot_regs.f12)) && f13 == hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089BAB84;
      }
      goto L_089BAB68;
    }
}
L_089BAB68:
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_089BAB70;
L_089BAB70:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 256 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(2));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089BAB70;
      }
      goto L_089BAB84;
    }
}
L_089BAB84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(512));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089BAB54;
      }
      goto L_089BAB98;
    }
}
L_089BAB98:
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
L_089BABAC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(9256)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BABB4:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BABBC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BABC4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2234u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(6320));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089BABF0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12212));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BABF0u) goto L_089BABF0;
    return;
L_089BABF0:
    hot_regs.g31 = (0x089BABF8u);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BABF8u) goto L_089BABF8;
    return;
L_089BABF8:
    hot_regs.g31 = (0x089BAC00u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BAC00u) goto L_089BAC00;
    return;
L_089BAC00:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(10924));
    goto L_089BAC08;
L_089BAC08:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x089BAC18u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 58u, 0x08AF4530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BAC18u) goto L_089BAC18;
    return;
L_089BAC18:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 72 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089BAC08;
      }
      goto L_089BAC2C;
    }
}
L_089BAC2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13164)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BAC48;
      }
      goto L_089BAC38;
    }
L_089BAC38:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12384));
    hot_regs.g31 = (0x089BAC44u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BAC44u) goto L_089BAC44;
    return;
L_089BAC44:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13164), hot_regs.g2);
    goto L_089BAC48;
L_089BAC48:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13160)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BAC64;
      }
      goto L_089BAC54;
    }
L_089BAC54:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12504));
    hot_regs.g31 = (0x089BAC60u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BAC60u) goto L_089BAC60;
    return;
L_089BAC60:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13160), hot_regs.g2);
    goto L_089BAC64;
L_089BAC64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13152)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BAC80;
      }
      goto L_089BAC70;
    }
L_089BAC70:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12340));
    hot_regs.g31 = (0x089BAC7Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BAC7Cu) goto L_089BAC7C;
    return;
L_089BAC7C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13152), hot_regs.g2);
    goto L_089BAC80;
L_089BAC80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13148)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BAC9C;
      }
      goto L_089BAC8C;
    }
L_089BAC8C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12316));
    hot_regs.g31 = (0x089BAC98u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12304));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BAC98u) goto L_089BAC98;
    return;
L_089BAC98:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13148), hot_regs.g2);
    goto L_089BAC9C;
L_089BAC9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13156)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BACB8;
      }
      goto L_089BACA8;
    }
L_089BACA8:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12292));
    hot_regs.g31 = (0x089BACB4u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12276));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BACB4u) goto L_089BACB4;
    return;
L_089BACB4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-13156), hot_regs.g2);
    goto L_089BACB8;
L_089BACB8:
    hot_regs.g31 = (0x089BACC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BACC0u) goto L_089BACC0;
    return;
L_089BACC0:
    hot_regs.g31 = (0x089BACC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BACF0;
L_089BACC8:
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
L_089BACE4:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(10820)));
    jump_target = hot_regs.g31;
    g2 = (0u < g2 ? 1u : 0u);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BACF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (2279u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 1u);
    g4 = (g4 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    goto L_089BAD1C;
}
L_089BAD1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BAD1C;
      }
      goto L_089BAD30;
    }
}
L_089BAD30:
    hot_regs.g31 = (0x089BAD38u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BAB28;
L_089BAD38:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11240), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(9256), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(9258), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(9257), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[28] | 0u);
    goto L_089BAD54;
}
L_089BAD54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g5 + ctx.gpr[28]);
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(9536), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(9540), static_cast<std::uint16_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089BAD54;
      }
      goto L_089BAD70;
    }
}
L_089BAD70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9546), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(11218), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11220), static_cast<std::uint8_t>(0u));
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(9260), static_cast<std::uint16_t>(g4));
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    goto L_089BAD88;
}
L_089BAD88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (ctx.gpr[16] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9262), static_cast<std::uint8_t>(ctx.gpr[17]));
    g4 = (g4 & 255u);
    g5 = (static_cast<std::int32_t>(g4) < 13 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BAD88;
      }
      goto L_089BADA4;
    }
}
L_089BADA4:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(-13168), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(9516), static_cast<std::uint16_t>(0u));
    g4 = (17174u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(9524), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9520), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(8730), static_cast<std::uint16_t>(0u));
    g4 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(-13166), static_cast<std::uint16_t>(0u));
    g5 = (g4 + g4);
    g6 = (g4 << 8u);
    g4 = (g4 + g5);
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(9526), static_cast<std::uint16_t>(0u));
    g4 = (g4 << 5u);
    g5 = (2238u << 16u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9528), std::bit_cast<std::uint32_t>(f20));
    g4 = (g6 + g4);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9532), std::bit_cast<std::uint32_t>(f20));
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10860), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10856), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10864), 0u);
    g4 = (0u | 5u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10868), g4);
    g6 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(7800)));
    hot_regs.g7 = (g6 + g6);
    ctx.gpr[8] = (g6 << 8u);
    g6 = (g6 + hot_regs.g7);
    g6 = (g6 << 5u);
    g6 = (ctx.gpr[8] + g6);
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10876), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10872), g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10880), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10884), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10888), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10892), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10896), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10900), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10904), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10908), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10912), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10916), g4);
    g4 = (0u | 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10920), g4);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11244), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(11248), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11252), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11253), static_cast<std::uint8_t>(0u));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f20 = f20;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089BAE90:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2279u << 16u);
    f12 = std::bit_cast<float>(0u);
    hot_regs.g6 = (g5 + static_cast<std::uint32_t>(17968));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(1562), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(17968), std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089BAEB0:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9257), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAEB8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (g6 & 65535u);
    f12 = std::bit_cast<float>(0u);
    g8 = (2279u << 16u);
    g7 = (g6 << 2u);
    g8 = (g8 + static_cast<std::uint32_t>(17968));
    g7 = (g7 + g8);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f12)) && f13 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089BAFA8;
      }
      goto L_089BAEE4;
    }
}
}
L_089BAEE4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g6 | 0u);
    g6 = (g9 << 9u);
    g6 = (hot_regs.g4 + g6);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (0u | 5u);
    hot_regs.g7 = (0u | 0u);
    { const bool branch_taken = g9 != ctx.gpr[10];
    hot_regs.g4 = (g6 | 0u);
    hot_regs.g6 = g6;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089BAF58;
      }
      goto L_089BAF04;
    }
}
L_089BAF04:
    ctx.gpr[9] = (0u | 1u);
    goto L_089BAF08;
L_089BAF08:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (hot_regs.g5 + hot_regs.g7);
      if (branch_taken) {
          goto L_089BAFA0;
      }
      goto L_089BAF10;
    }
L_089BAF10:
    hot_regs.g7 = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAFA0;
      }
      goto L_089BAF1C;
    }
L_089BAF1C:
    ctx.gpr[10] = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(4634)));
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089BAF34;
      }
      goto L_089BAF28;
    }
L_089BAF28:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9532), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13166), static_cast<std::uint16_t>(0u));
    hot_regs.g7 = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_089BAF34;
L_089BAF34:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(g7));
    g7 = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    g8 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(4634), static_cast<std::uint16_t>(g7));
    g8 = (g8 & 65535u);
    g7 = (g8 + g8);
    ctx.gpr[9] = (static_cast<std::int32_t>(g8) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g4 = (hot_regs.g6 + g7);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089BAF08;
      }
      goto L_089BAF58;
    }
}
L_089BAF58:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAF9C;
      }
      goto L_089BAF60;
    }
L_089BAF60:
    ctx.gpr[9] = (0u | 1u);
    goto L_089BAF64;
L_089BAF64:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    hot_regs.g7 = (hot_regs.g5 + hot_regs.g7);
      if (branch_taken) {
          goto L_089BAF94;
      }
      goto L_089BAF6C;
    }
L_089BAF6C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089BAF94;
      }
      goto L_089BAF78;
    }
}
L_089BAF78:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(g7));
    g8 = (g8 & 65535u);
    g7 = (g8 + g8);
    ctx.gpr[9] = (static_cast<std::int32_t>(g8) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g6 + g7);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089BAF64;
      }
      goto L_089BAF94;
    }
}
L_089BAF94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_089BAFA0;
      }
      goto L_089BAF9C;
    }
L_089BAF9C:
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    goto L_089BAFA0;
L_089BAFA0:
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(538), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(4634), static_cast<std::uint16_t>(0u));
    goto L_089BAFA8;
L_089BAFA8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAFB0:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = (hot_regs.g4 | 0u);
    goto L_089BAFC0;
L_089BAFC0:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g7 = (hot_regs.g5 + hot_regs.g7);
      if (branch_taken) {
          goto L_089BAFF0;
      }
      goto L_089BAFC8;
    }
L_089BAFC8:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089BAFF0;
      }
      goto L_089BAFD4;
    }
}
L_089BAFD4:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(8730), static_cast<std::uint16_t>(g7));
    g9 = (g9 & 65535u);
    g7 = (g9 + g9);
    ctx.gpr[8] = (static_cast<std::int32_t>(g9) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (hot_regs.g4 + g7);
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089BAFC0;
      }
      goto L_089BAFF0;
    }
}
L_089BAFF0:
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(8730), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAFF8:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11226), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB000:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11222), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB008:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11223), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB010:
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(11224), static_cast<std::uint16_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB018:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(10920), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB020:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(10884), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB028:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (hot_regs.g6 & 255u);
    ctx.gpr[19] = (hot_regs.g7 & 255u);
    hot_regs.g4 = (ctx.gpr[8] & 255u);
    ctx.gpr[18] = (g17 + static_cast<std::uint32_t>(9276));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089BB068;
      }
      goto L_089BB060;
    }
}
L_089BB060:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(9257), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089BB094;
      }
      goto L_089BB068;
    }
L_089BB068:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB094;
      }
      goto L_089BB070;
    }
L_089BB070:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x089BB094u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 493u, 0x08ABAB74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB094u) goto L_089BB094;
    return;
L_089BB094:
    hot_regs.g4 = (0u | 0u);
    goto L_089BB098;
L_089BB098:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + g4);
    g5 = (ctx.gpr[17] + g5);
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(9276), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(9788), static_cast<std::uint16_t>(0u));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(10300), static_cast<std::uint16_t>(0u));
    g4 = (g4 & 65535u);
    g5 = (static_cast<std::int32_t>(g4) < 256 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BB098;
      }
      goto L_089BB0C0;
    }
}
L_089BB0C0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089BB0D0u);
    hot_regs.g6 = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB0D0u) goto L_089BB0D0;
    return;
L_089BB0D0:
    hot_regs.g31 = (0x089BB0D8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 327u, 0x08AB9A5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB0D8u) goto L_089BB0D8;
    return;
L_089BB0D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(10820)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(10300));
      if (branch_taken) {
          goto L_089BB100;
      }
      goto L_089BB0E4;
    }
L_089BB0E4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089BB0F0u);
    hot_regs.g6 = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 155u, 0x08AB8ADCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB0F0u) goto L_089BB0F0;
    return;
L_089BB0F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB100;
      }
      goto L_089BB0F8;
    }
L_089BB0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB17C;
      }
      goto L_089BB100;
    }
L_089BB100:
    hot_regs.g4 = (0u | 0u);
    goto L_089BB104;
L_089BB104:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + g4);
    g5 = (ctx.gpr[17] + g5);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(9788), static_cast<std::uint16_t>(0u));
    g4 = (g4 & 65535u);
    g5 = (static_cast<std::int32_t>(g4) < 256 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BB104;
      }
      goto L_089BB124;
    }
}
L_089BB124:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB138;
      }
      goto L_089BB12C;
    }
L_089BB12C:
{
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(9276), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(10300), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(10820), 0u);
    goto L_089BB138;
}
L_089BB138:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB170;
      }
      goto L_089BB140;
    }
L_089BB140:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(10820), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(10300));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089BB158u);
    hot_regs.g6 = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB158u) goto L_089BB158;
    return;
L_089BB158:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(9788));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089BB168u);
    hot_regs.g6 = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 147u, 0x08AB8A5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB168u) goto L_089BB168;
    return;
L_089BB168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB174;
      }
      goto L_089BB170;
    }
L_089BB170:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(10820), 0u);
    goto L_089BB174;
L_089BB174:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10824), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10825), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_089BB17C;
L_089BB17C:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_089BB19C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g5 | 0u);
    g5 = (g6 << 16u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(9260), static_cast<std::uint16_t>(g6));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (0u | 10u);
    { const bool branch_taken = g5 != g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089BB1CC;
      }
      goto L_089BB1B8;
    }
}
L_089BB1B8:
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 40u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11213), static_cast<std::uint8_t>(hot_regs.g5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11214), static_cast<std::uint8_t>(hot_regs.g6));
      if (branch_taken) {
          goto L_089BB1E8;
      }
      goto L_089BB1CC;
    }
L_089BB1CC:
    hot_regs.g6 = (0u | 11u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089BB1E8;
      }
      goto L_089BB1D8;
    }
L_089BB1D8:
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 40u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11216), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11217), static_cast<std::uint8_t>(hot_regs.g6));
    goto L_089BB1E8;
L_089BB1E8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB1F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 255u);
    g4 = (g4 + g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9262), static_cast<std::uint8_t>(hot_regs.g6));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BB200:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11228), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB208:
    ctx.gpr[10] = (hot_regs.g6 & 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = (hot_regs.g4 | 0u);
    goto L_089BB21C;
L_089BB21C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g7 = (hot_regs.g5 + hot_regs.g7);
      if (branch_taken) {
          goto L_089BB24C;
      }
      goto L_089BB224;
    }
L_089BB224:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089BB24C;
      }
      goto L_089BB230;
    }
}
L_089BB230:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(g7));
    g9 = (g9 & 65535u);
    g7 = (g9 + g9);
    ctx.gpr[8] = (static_cast<std::int32_t>(g9) < 256 ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (hot_regs.g4 + g7);
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089BB21C;
      }
      goto L_089BB24C;
    }
}
L_089BB24C:
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(0u));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(ctx.gpr[10]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB258:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11220), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB260:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(10832), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB268:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(10900), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB270:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(9256), static_cast<std::uint8_t>(hot_regs.g5));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB278:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB280:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(9252), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB288:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB290:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB298:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089BB2A8u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB2A8u) goto L_089BB2A8;
    return;
L_089BB2A8:
    hot_regs.g31 = (0x089BB2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB2B0u) goto L_089BB2B0;
    return;
L_089BB2B0:
    hot_regs.g31 = (0x089BB2B8u);
    hot_regs.g4 = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB2B8u) goto L_089BB2B8;
    return;
L_089BB2B8:
    hot_regs.g4 = (16156u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 10486u);
    hot_regs.g31 = (0x089BB2C8u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB2C8u) goto L_089BB2C8;
    return;
L_089BB2C8:
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
L_089BB2D4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-13168))))));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089BB2E8;
      }
      goto L_089BB2E0;
    }
L_089BB2E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089BB2EC;
      }
      goto L_089BB2E8;
    }
L_089BB2E8:
    hot_regs.g2 = (0u | 0u);
    goto L_089BB2EC;
L_089BB2EC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB2F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
        goto L_089BB33C;
    }
    goto L_089BB310;
}
L_089BB310:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x089BB31Cu);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB31Cu) goto L_089BB31C;
    return;
L_089BB31C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB334;
      }
      goto L_089BB328;
    }
L_089BB328:
    hot_regs.g31 = (0x089BB330u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB330u) goto L_089BB330;
    return;
L_089BB330:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_089BB334;
L_089BB334:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_089BB33C;
L_089BB33C:
    hot_regs.g31 = (0x089BB344u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12208));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB344u) goto L_089BB344;
    return;
L_089BB344:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 20000u);
    hot_regs.g31 = (0x089BB354u);
    hot_regs.g6 = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB354u) goto L_089BB354;
    return;
L_089BB354:
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
L_089BB368:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11232)));
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(11221)));
      if (branch_taken) {
          goto L_089BB3A4;
      }
      goto L_089BB374;
    }
L_089BB374:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 209 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB380;
    }
L_089BB380:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(11221)));
    g5 = (static_cast<std::int32_t>(g5) < 210 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB398;
    }
}
L_089BB398:
    hot_regs.g5 = (0u | 209u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB3A4;
    }
L_089BB3A4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(11232), g6);
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < 101 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB3B8;
    }
}
L_089BB3B8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(11221)));
    g5 = (static_cast<std::int32_t>(g5) < 100 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BB3D8;
      }
      goto L_089BB3D0;
    }
}
L_089BB3D0:
    hot_regs.g5 = (0u | 100u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_089BB3D8;
L_089BB3D8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB3E0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-224));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(9264)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089BB484;
      }
      goto L_089BB404;
    }
}
L_089BB404:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g18 = (2238u << 16u);
    hot_regs.g6 = (g4 + g4);
    hot_regs.g7 = (g4 << 8u);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g7 + g4);
    g18 = (g18 + static_cast<std::uint32_t>(-6992));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10872)));
    g4 = (g4 + g18);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = hot_regs.g5 == g4;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089BB48C;
      }
      goto L_089BB438;
    }
}
L_089BB438:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g31 = (0x089BB448u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB448u) goto L_089BB448;
    return;
L_089BB448:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g6 + g4);
    g4 = (g4 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(176)));
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(11221)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(10872), g4);
    f12 = std::bit_cast<float>(g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(10884)));
    { const bool branch_taken = 0u == 0u;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089BB4B0;
      }
      goto L_089BB484;
    }
}
}
L_089BB484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5B0;
      }
      goto L_089BB48C;
    }
L_089BB48C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g31 = (0x089BB49Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 612u, 0x089BF18Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB49Cu) goto L_089BB49C;
    return;
L_089BB49C:
{
    float f12 = hot_regs.f12;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10884)));
    f12 = std::bit_cast<float>(hot_regs.g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
    goto L_089BB4B0;
}
L_089BB4B0:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BB4C0;
      }
      goto L_089BB4C0;
    }
L_089BB4C0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5B0;
      }
      goto L_089BB4C8;
    }
L_089BB4C8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (17336u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7872)));
    g5 = (g5 | 32768u);
    g17 = (2236u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g17 = (g17 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089BB4F4;
      }
      goto L_089BB4E4;
    }
}
L_089BB4E4:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7872), hot_regs.g4);
    hot_regs.g31 = (0x089BB4F4u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7864));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 464u, 0x089C6318u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB4F4u) goto L_089BB4F4;
    return;
L_089BB4F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7868)));
    g6 = (g4 + g4);
    hot_regs.g7 = (g4 << 8u);
    g4 = (g4 + g6);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g7 + g4);
    g18 = (g4 + g18);
    g6 = (0u | 4u);
    { const bool branch_taken = hot_regs.g5 != g6;
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(176)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089BB538;
      }
      goto L_089BB520;
    }
}
L_089BB520:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12200));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089BB530u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB530u) goto L_089BB530;
    return;
L_089BB530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2052)));
      if (branch_taken) {
          goto L_089BB54C;
      }
      goto L_089BB538;
    }
L_089BB538:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-12192));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089BB548u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB548u) goto L_089BB548;
    return;
L_089BB548:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2052)));
    goto L_089BB54C;
L_089BB54C:
    if (ctx.gpr[18] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11252)));
        goto L_089BB568;
    }
    goto L_089BB554;
L_089BB554:
    hot_regs.g31 = (0x089BB55Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089BABAC;
L_089BB55C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB594;
      }
      goto L_089BB564;
    }
L_089BB564:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11252)));
    goto L_089BB568;
L_089BB568:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB594;
      }
      goto L_089BB570;
    }
L_089BB570:
    hot_regs.g7 = (16608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089BB58Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 315u, 0x089BD72Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB58Cu) goto L_089BB58C;
    return;
L_089BB58C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB5B0;
      }
      goto L_089BB594;
    }
L_089BB594:
    hot_regs.g7 = (17008u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089BB5B0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 315u, 0x089BD72Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB5B0u) goto L_089BB5B0;
    return;
L_089BB5B0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BB5CC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9292)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089BB9BC;
      }
      goto L_089BB604;
    }
}
L_089BB604:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (16179u << 16u);
    hot_regs.g6 = (g4 + g4);
    hot_regs.g7 = (g4 << 8u);
    g4 = (g4 + hot_regs.g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
    g5 = (g5 | 13107u);
    g4 = (g4 << 5u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    g16 = (2238u << 16u);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (hot_regs.g7 + g4);
    g16 = (g16 + static_cast<std::uint32_t>(-6992));
    g4 = (g4 + g16);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(320)));
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16928u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089BB9B8;
      }
      goto L_089BB650;
    }
}
}
L_089BB650:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BB9B8;
      }
      goto L_089BB664;
    }
L_089BB664:
    hot_regs.g31 = (0x089BB66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 617u, 0x088634F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB66Cu) goto L_089BB66C;
    return;
L_089BB66C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB9B8;
      }
      goto L_089BB674;
    }
L_089BB674:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(7800)));
    g5 = (g4 + g4);
    g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g4 = (g6 + g4);
    g4 = (g4 + ctx.gpr[16]);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(320)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(9088)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g17 = (2238u << 16u);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g22 = (2238u << 16u);
    g4 = (16448u << 16u);
    g5 = (16000u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g17 = (g17 + static_cast<std::uint32_t>(14304));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f13));
    ctx.gpr[19] = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-9752)));
    ctx.gpr[21] = (g28 + static_cast<std::uint32_t>(-12168));
    hot_regs.f22 = std::bit_cast<float>(g5);
    { const bool branch_taken = g6 == hot_regs.g7;
    g22 = (g22 + static_cast<std::uint32_t>(-8144));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    ctx.gpr[22] = g22;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089BB764;
      }
      goto L_089BB6D4;
    }
}
}
L_089BB6D4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12180));
      if (branch_taken) {
          goto L_089BB704;
      }
      goto L_089BB6DC;
    }
L_089BB6DC:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x089BB6E8u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB6E8u) goto L_089BB6E8;
    return;
L_089BB6E8:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB700;
      }
      goto L_089BB6F4;
    }
L_089BB6F4:
    hot_regs.g31 = (0x089BB6FCu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB6FCu) goto L_089BB6FC;
    return;
L_089BB6FC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089BB700;
L_089BB700:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_089BB704;
L_089BB704:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089BB710u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB710u) goto L_089BB710;
    return;
L_089BB710:
    hot_regs.g31 = (0x089BB718u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB718u) goto L_089BB718;
    return;
L_089BB718:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(320)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9088)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089BB75Cu);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB75Cu) goto L_089BB75C;
    return;
L_089BB75C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB7E0;
      }
      goto L_089BB764;
    }
L_089BB764:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(-12160));
      if (branch_taken) {
          goto L_089BB794;
      }
      goto L_089BB76C;
    }
L_089BB76C:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x089BB778u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB778u) goto L_089BB778;
    return;
L_089BB778:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB790;
      }
      goto L_089BB784;
    }
L_089BB784:
    hot_regs.g31 = (0x089BB78Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB78Cu) goto L_089BB78C;
    return;
L_089BB78C:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_089BB790;
L_089BB790:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_089BB794;
L_089BB794:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089BB7A0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB7A0u) goto L_089BB7A0;
    return;
L_089BB7A0:
    hot_regs.g31 = (0x089BB7A8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 309u, 0x089F5AC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB7A8u) goto L_089BB7A8;
    return;
L_089BB7A8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(320)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089BB7E0u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB7E0u) goto L_089BB7E0;
    return;
L_089BB7E0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089BB7ECu);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 843u, 0x08887B04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB7ECu) goto L_089BB7EC;
    return;
L_089BB7EC:
    hot_regs.g31 = (0x089BB7F4u);
    hot_regs.g4 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB7F4u) goto L_089BB7F4;
    return;
L_089BB7F4:
    hot_regs.g31 = (0x089BB7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB7FCu) goto L_089BB7FC;
    return;
L_089BB7FC:
    hot_regs.g31 = (0x089BB804u);
    hot_regs.g4 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 82u, 0x08B0C604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB804u) goto L_089BB804;
    return;
L_089BB804:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & 512u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089BB860;
      }
      goto L_089BB814;
    }
}
L_089BB814:
    hot_regs.g4 = (0u | 204u);
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 185u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (0u | 180u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g31 = (0x089BB83Cu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB83Cu) goto L_089BB83C;
    return;
L_089BB83C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089BB8A8;
      }
      goto L_089BB860;
    }
}
}
L_089BB860:
    hot_regs.g4 = (0u | 178u);
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 162u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (0u | 180u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g31 = (0x089BB888u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB888u) goto L_089BB888;
    return;
L_089BB888:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089BB8A8;
}
}
L_089BB8A8:
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g6 = (17122u << 16u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (0u | 461u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f12 = hot_regs.f14 / hot_regs.f12;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g31 = (0x089BB8CCu);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB8CCu) goto L_089BB8CC;
    return;
L_089BB8CC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (ctx.gpr[17] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_089BB904;
    }
    goto L_089BB8D8;
L_089BB8D8:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x089BB8E4u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB8E4u) goto L_089BB8E4;
    return;
L_089BB8E4:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB8FC;
      }
      goto L_089BB8F0;
    }
L_089BB8F0:
    hot_regs.g31 = (0x089BB8F8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB8F8u) goto L_089BB8F8;
    return;
L_089BB8F8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089BB8FC;
L_089BB8FC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_089BB904;
L_089BB904:
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.g31 = (0x089BB924u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(320)));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 170u, 0x08990C28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB924u) goto L_089BB924;
    return;
L_089BB924:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089BB930u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB930u) goto L_089BB930;
    return;
L_089BB930:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6864)));
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089BB94C;
      }
      goto L_089BB940;
    }
L_089BB940:
    hot_regs.g4 = (0u | 100u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12184), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6864), ctx.gpr[16]);
    goto L_089BB94C;
L_089BB94C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12184)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB9B0;
      }
      goto L_089BB958;
    }
L_089BB958:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12184), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089BB96Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 854u, 0x08887BB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB96Cu) goto L_089BB96C;
    return;
L_089BB96C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g6 = (17162u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (0u | 461u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f12 = hot_regs.f14 / hot_regs.f12;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g31 = (0x089BB9B0u);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BB9B0u) goto L_089BB9B0;
    return;
L_089BB9B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB9BC;
      }
      goto L_089BB9B8;
    }
L_089BB9B8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12184), 0u);
    goto L_089BB9BC;
L_089BB9BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BB9EC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g6 = (g5 + g5);
    hot_regs.g7 = (g5 << 8u);
    g5 = (g5 + g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (2238u << 16u);
    g5 = (g5 << 5u);
    g5 = (hot_regs.g7 + g5);
    g17 = (g17 + static_cast<std::uint32_t>(-6992));
    g5 = (g5 + g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g16 = (g4 | 0u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(9260))))));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(1252)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 << 16u);
    g5 = (0u | 4u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g6 != g5;
    g4 = (static_cast<std::int32_t>(g4) < 10 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089BBA5C;
      }
      goto L_089BBA4C;
    }
}
}
L_089BBA4C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g7 = (g7 & 8u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089BBA7C;
      }
      goto L_089BBA5C;
    }
}
L_089BBA5C:
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089BBA7C;
      }
      goto L_089BBA64;
    }
L_089BBA64:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBA6C;
    }
L_089BBA6C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g5 = (g5 & 8u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBA7C;
    }
}
L_089BBA7C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA9C;
      }
      goto L_089BBA84;
    }
L_089BBA84:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBA8C;
    }
L_089BBA8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBA9C;
    }
}
L_089BBA9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBAB0;
      }
      goto L_089BBAA8;
    }
L_089BBAA8:
    hot_regs.g31 = (0x089BBAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBAB0u) goto L_089BBAB0;
    return;
L_089BBAB0:
    hot_regs.g31 = (0x089BBAB8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 638u, 0x089C6DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBAB8u) goto L_089BBAB8;
    return;
L_089BBAB8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB04;
      }
      goto L_089BBAC0;
    }
L_089BBAC0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (g4 + g4);
    hot_regs.g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g4 = (hot_regs.g6 + g4);
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1252)));
    g4 = (ctx.gpr[16] | 0u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 << 16u);
    hot_regs.g31 = (0x089BBAFCu);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_089BBB18;
}
}
L_089BBAFC:
    hot_regs.g31 = (0x089BBB04u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 192u, 0x089BCF8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBB04u) goto L_089BBB04;
    return;
L_089BBB04:
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
L_089BBB18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g16);
    g16 = (g4 | 0u);
    g4 = (g5 << 16u);
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(9266)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089BBBA8;
      }
      goto L_089BBB5C;
    }
}
L_089BBB5C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(9260))))));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g6 = (g5 + g5);
    hot_regs.f22 = std::bit_cast<float>(0u);
    g8 = (g5 << 8u);
    g5 = (g5 + g6);
    g5 = (g5 << 5u);
    g6 = (g8 + g5);
    g5 = (2238u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    g8 = (16256u << 16u);
    ctx.gpr[9] = (0u | 4u);
    ctx.fpr[26] = std::bit_cast<float>(g8);
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[9];
    g6 = (g6 + g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089BBBB0;
      }
      goto L_089BBBA0;
    }
}
}
L_089BBBA0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_089BBC10;
      }
      goto L_089BBBA8;
    }
L_089BBBA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF2C;
      }
      goto L_089BBBB0;
    }
L_089BBBB0:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (16672u << 16u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(1252)));
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(336)));
        goto L_089BBC10;
    }
    goto L_089BBBD0;
L_089BBBD0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-12152)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g7 != 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12152), ctx.gpr[8]);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089BBC0C;
      }
      goto L_089BBBE0;
    }
}
L_089BBBE0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-12152), g6);
    g6 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(9260), static_cast<std::uint16_t>(g6));
    g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g7 = (g6 + g6);
    ctx.gpr[8] = (g6 << 8u);
    g6 = (g6 + hot_regs.g7);
    g6 = (g6 << 5u);
    g6 = (ctx.gpr[8] + g6);
    g6 = (g6 + hot_regs.g5);
    hot_regs.g6 = g6;
    goto L_089BBC0C;
}
L_089BBC0C:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(336)));
    goto L_089BBC10;
L_089BBC10:
{
    float f20 = hot_regs.f20;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    f20 = std::bit_cast<float>(hot_regs.g5);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f20)));
    ctx.set_fpu_condition((ctx.fpr[24] <= f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089BBC34;
      }
      goto L_089BBC2C;
    }
}
L_089BBC2C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089BBC48;
      }
      goto L_089BBC34;
    }
L_089BBC34:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BBC48;
      }
      goto L_089BBC44;
    }
L_089BBC44:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_089BBC48;
L_089BBC48:
{
    float f13 = hot_regs.f13;
    float f24 = ctx.fpr[24];
    f13 = f24 / hot_regs.f20;
    hot_regs.g5 = (16928u << 16u);
    hot_regs.g6 = (16768u << 16u);
    hot_regs.g7 = (16512u << 16u);
    ctx.gpr[8] = (15488u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g7);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f24 = std::bit_cast<float>(ctx.gpr[8]);
    f13 = f13 + hot_regs.f15;
    f13 = f13 + ctx.fpr[16];
    { const bool branch_taken = hot_regs.g4 != 0u;
    { const float fs = f13; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    hot_regs.f13 = f13;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_089BBC8C;
      }
      goto L_089BBC80;
    }
}
L_089BBC80:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089BBCA8;
      }
      goto L_089BBC8C;
    }
L_089BBC8C:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(hot_regs.f20)) && hot_regs.f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16267u << 16u);
      if (branch_taken) {
          goto L_089BBCAC;
      }
      goto L_089BBC9C;
    }
L_089BBC9C:
    hot_regs.g4 = (17024u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    goto L_089BBCA8;
L_089BBCA8:
    hot_regs.g4 = (16267u << 16u);
    goto L_089BBCAC;
L_089BBCAC:
    hot_regs.g4 = (hot_regs.g4 | 34079u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (17328u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (16936u << 16u);
    hot_regs.g6 = (17000u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    ctx.fpr[30] = hot_regs.f13 + hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089BBCF4u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBCF4u) goto L_089BBCF4;
    return;
L_089BBCF4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(11168));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g31 = (0x089BBD10u);
    hot_regs.g7 = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBD10u) goto L_089BBD10;
    return;
L_089BBD10:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x089BBD40u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBD40u) goto L_089BBD40;
    return;
L_089BBD40:
    hot_regs.g5 = (17362u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g5 = (hot_regs.g5 | 57672u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    ctx.fpr[30] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x089BBD68u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBD68u) goto L_089BBD68;
    return;
L_089BBD68:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g5);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g4);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(11156));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g31 = (0x089BBDB4u);
    hot_regs.g7 = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBDB4u) goto L_089BBDB4;
    return;
L_089BBDB4:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x089BBDE4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBDE4u) goto L_089BBDE4;
    return;
L_089BBDE4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g31 = (0x089BBDFCu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBDFCu) goto L_089BBDFC;
    return;
L_089BBDFC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g5);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g4);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(11172));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g31 = (0x089BBE48u);
    hot_regs.g7 = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBE48u) goto L_089BBE48;
    return;
L_089BBE48:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x089BBE78u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 84u, 0x08AF4770u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBE78u) goto L_089BBE78;
    return;
L_089BBE78:
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089BBF2C;
      }
      goto L_089BBE94;
    }
L_089BBE94:
    hot_regs.g31 = (0x089BBE9Cu);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBE9Cu) goto L_089BBE9C;
    return;
L_089BBE9C:
    hot_regs.g31 = (0x089BBEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBEA4u) goto L_089BBEA4;
    return;
L_089BBEA4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11221)));
    hot_regs.g5 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x089BBEC8u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 62u, 0x08B0C4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBEC8u) goto L_089BBEC8;
    return;
L_089BBEC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 43u);
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(g4));
    g4 = (17146u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(40));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089BBF10;
      }
      goto L_089BBEEC;
    }
}
L_089BBEEC:
    hot_regs.g4 = (16288u << 16u);
    hot_regs.g31 = (0x089BBEF8u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBEF8u) goto L_089BBEF8;
    return;
L_089BBEF8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 362u);
    hot_regs.g31 = (0x089BBF08u);
    hot_regs.g6 = (0u | 35u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBF08u) goto L_089BBF08;
    return;
L_089BBF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBF2C;
      }
      goto L_089BBF10;
    }
L_089BBF10:
    hot_regs.g4 = (16192u << 16u);
    hot_regs.g31 = (0x089BBF1Cu);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBF1Cu) goto L_089BBF1C;
    return;
L_089BBF1C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 366u);
    hot_regs.g31 = (0x089BBF2Cu);
    hot_regs.g6 = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 19u, 0x08B0C138u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBF2Cu) goto L_089BBF2C;
    return;
L_089BBF2C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089BBF60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g21);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g22);
    g21 = (2239u << 16u);
    g22 = (2240u << 16u);
    g21 = (g21 + static_cast<std::uint32_t>(32064));
    g22 = (g22 + static_cast<std::uint32_t>(-30112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), hot_regs.g31);
    ctx.gpr[17] = (g21 | 0u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (0u | 0u);
    g21 = (g21 + static_cast<std::uint32_t>(38));
    g21 = (g4 + g21);
    g4 = (17288u << 16u);
    ctx.gpr[16] = (0u | 0u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    ctx.gpr[22] = g22;
    hot_regs.g29 = g29;
    goto L_089BBFC0;
}
L_089BBFC0:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 14u, 0x089BC0E8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089BBFCC;
    }
L_089BBFCC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(36))))));
    hot_regs.g4 = (hot_regs.g4 & 32u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 14u, 0x089BC0E8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089BBFDC;
    }
L_089BBFDC:
    hot_regs.g31 = (0x089BBFE4u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 60u, 0x08B0C498u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBFE4u) goto L_089BBFE4;
    return;
L_089BBFE4:
    hot_regs.g31 = (0x089BBFECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 8u, 0x08B0C05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBFECu) goto L_089BBFEC;
    return;
L_089BBFEC:
    hot_regs.g31 = (0x089BBFF4u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 68u, 0x08B0C520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089BBFF4u) goto L_089BBFF4;
    return;
L_089BBFF4:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(1)));
    hot_regs.g6 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(2)));
    ctx.pc = 0x089BC000u; return;}

}

void recomp_unit_0109(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0109_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_109(Runtime &runtime) {
    runtime.register_generated_unit(109u, 0x089B8000u, 16384u, &recomp_unit_0109, &recomp_unit_0109_entry);
    runtime.register_function(0x089B8000u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8014u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8020u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8038u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8040u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8054u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8068u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B808Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B809Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8100u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8118u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8148u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8158u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B817Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8190u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8224u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B822Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8294u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8300u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8308u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8320u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8384u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B838Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8394u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8404u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B840Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8414u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B841Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8424u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8440u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B844Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B845Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B846Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8498u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8504u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8534u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8544u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8548u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B855Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8564u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B856Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8580u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B858Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8600u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8670u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8678u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8754u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B875Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8838u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8840u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8890u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8898u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B891Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8924u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8974u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B897Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8990u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8ED0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B901Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B905Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9060u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9128u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B913Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9160u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9180u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9188u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9194u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9214u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9240u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B924Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9260u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B926Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9278u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9284u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9298u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9304u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9320u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9328u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9330u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9340u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B934Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B935Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9364u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9374u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B937Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9384u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B93FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9408u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9418u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9420u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9430u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9434u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9440u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9448u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9454u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9458u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9494u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B949Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9504u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9510u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B951Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9530u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9538u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B954Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9550u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9560u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9564u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9574u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B957Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9594u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B95F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9604u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9614u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9630u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9648u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9664u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9668u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9704u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B970Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B971Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9728u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9734u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B974Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9760u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9764u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9798u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9808u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B980Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9818u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B982Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9838u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B983Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B986Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9874u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B987Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9888u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9894u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9900u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B990Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9914u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9920u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9924u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B992Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9938u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B996Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9974u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9984u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ABCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA008u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA014u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA01Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA024u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA02Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA034u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA044u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA050u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA058u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA064u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA06Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA07Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA088u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA094u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA09Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA104u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA10Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA114u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA124u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA130u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA14Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA154u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA158u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA188u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA228u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA244u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA27Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA298u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA310u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA370u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA41Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA448u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA470u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA51Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA52Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA540u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA54Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA558u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA560u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA56Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA588u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA604u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA618u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA620u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA628u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA630u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA644u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA654u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA65Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA678u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA694u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA718u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA73Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA748u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA754u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA760u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA774u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA77Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA788u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA790u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA79Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA804u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA840u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA850u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA854u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA85Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA864u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA86Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA874u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA87Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA884u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA88Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA898u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA904u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA90Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA914u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA920u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA928u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA934u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA93Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA944u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA950u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA958u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA964u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA96Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA978u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA984u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA990u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA99Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAADCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB000u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB008u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB010u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB018u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB020u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB028u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB060u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB068u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB094u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB098u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB100u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB104u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB124u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB12Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB140u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB158u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB168u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB170u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB174u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB17Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB19Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB200u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB208u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB21Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB224u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB230u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB24Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB260u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB268u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB270u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB278u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB280u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB288u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB290u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB298u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB310u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB31Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB328u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB330u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB334u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB33Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB344u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB354u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB368u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB374u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB380u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB398u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB404u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB438u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB448u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB48Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB49Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB530u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB538u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB548u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB54Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB554u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB55Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB564u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB568u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB58Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB594u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB604u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB650u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB664u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB66Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB674u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB700u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB704u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB710u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB718u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB75Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB764u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB76Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB778u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB784u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB78Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB790u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB794u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB804u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB83Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB888u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB904u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB924u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB930u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB940u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB94Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB958u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB96Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBBE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBCF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBE9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBF60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBFF4u, &recomp_unit_0109, "recomp_unit_0109");
}
} // namespace psprecomp
