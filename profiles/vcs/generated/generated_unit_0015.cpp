#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0015[4095] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5,
    0, 6, 0, 0, 7, 0, 8, 0, 0, 9, 0, 10, 0, 0, 11, 0, 12, 0, 0, 13, 0, 14, 0, 0, 15, 0, 16, 0, 0, 17, 0, 18,
    0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27,
    28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 0, 34, 35, 36, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 55, 0, 56, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 60, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 0,
    79, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 88,
    0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0,
    0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 112, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 116,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 123,
    0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 135, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137,
    0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0,
    0, 156, 0, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 164,
    0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 182,
    0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198,
    0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213,
    0, 214, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 0, 0, 220, 0, 0, 221, 0, 222, 0, 0, 223,
    0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    0, 232, 0, 233, 0, 0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 250, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 304,
    0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0,
    319, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328,
    0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0,
    0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 341, 0, 342,
    0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0,
    351, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0,
    359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375,
    0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 383, 0, 0,
    384, 0, 0, 385, 0, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0,
    0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0,
    396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399,
    0, 400, 0, 0, 401, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 409, 0, 0, 410, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 417, 0, 0, 418, 0, 0,
    419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0,
    426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0,
    433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 0, 440, 0, 0, 441, 0, 442, 0,
    0, 443, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0,
    450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0,
    459, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463,
    0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0,
    472, 0, 473, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 483,
    0, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 0, 490, 0, 0, 0, 0, 491, 0,
    0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 497, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 500,
    0, 501, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 514, 0, 0,
    515, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 0,
    0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526,
    0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0,
    0, 532, 0, 533, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0,
    541, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0,
    551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557,
    0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0, 0, 565, 0, 0, 0,
    0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 571, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0,
    578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0,
    0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0,
    608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0,
    617, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 621, 0, 0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0,
    0, 625, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 632,
    0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 0,
    641, 0, 642, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 655, 0, 0, 656, 0, 0, 0, 0,
    0, 657, 0, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0,
    665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 669, 0, 0, 670, 0, 671, 0, 0, 672, 0, 0, 0, 0,
    0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 676, 0, 0, 677, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0,
    0, 683, 0, 0, 0, 684, 0, 685, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0,
    690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0,
    700, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 704, 0, 705, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708,
    0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 711, 0, 0, 712, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 715,
    0, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 721, 0, 722, 0, 723, 0, 0, 0,
    724, 0, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 731, 0, 0, 732, 0,
    733, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 740, 0, 0, 741, 0,
    742, 0, 743, 0, 0, 744, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 752, 0, 753,
    0, 0, 754, 0, 0, 755, 0, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 0, 759, 0, 0, 760, 0, 761, 0, 0, 762, 0, 0, 763, 0,
    0, 0, 764, 0, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 0, 772, 0, 0, 773, 0, 0,
    774, 0, 0, 0, 775, 0, 0, 776, 0, 777, 0, 778, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783,
    0, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 790, 0, 791,
    0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 796, 0, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 799, 0, 0, 800, 0,
    0, 0, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 806, 0, 807, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0,
    0, 0, 813, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 822, 0, 0, 823, 0, 0, 0, 824, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 827, 0, 0, 828, 0, 0, 829, 0, 830, 0, 0, 831, 0, 0, 0, 0, 0, 0,
    832, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 835, 0, 0, 836, 0, 0, 837, 0, 0, 0, 0, 838, 0, 839, 0, 840, 0, 0, 0, 841, 0,
    842, 0, 0, 843, 0, 0, 0, 0, 0, 0, 0, 844, 0, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0,
    0, 0, 0, 0, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 853, 0, 0, 854, 0, 0, 0, 0, 0, 855,
    0, 856, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0, 859, 0, 860, 0, 0, 861, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0,
    0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 868, 0, 869, 0, 0, 870,
    0, 0, 0, 0, 0, 0, 0, 0, 871, 0, 0, 0, 872, 0, 0, 0, 0, 0, 873, 0, 0, 0, 874, 0, 0, 0, 875, 0, 0, 0, 0, 0,
    0, 0, 876, 0, 0, 0, 877, 0, 0, 0, 878, 0, 0, 0, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 880, 0, 881, 0,
    0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 883, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 887,
    0, 888, 0, 0, 889, 0, 0, 890, 0, 891, 0, 0, 892, 0, 0, 0, 0, 0, 0, 893, 0, 0, 0, 894, 0, 0, 0, 0, 895, 0, 896,
};
void recomp_unit_0015_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,31,5,29,2,17 fprs=12,13,14,20 gpr_occ=3650 fpr_occ=1241 gpr_total=4575 fpr_total=1627
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_2 = ctx.gpr[2];
    std::uint32_t aot_gpr_17 = ctx.gpr[17];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[31] = aot_gpr_31; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[2] = aot_gpr_2; ctx.gpr[17] = aot_gpr_17; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_2 = ctx.gpr[2]; aot_gpr_17 = ctx.gpr[17]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08840000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0015[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08840000;
    case 2u: goto L_08840008;
    case 3u: goto L_0884005C;
    case 4u: goto L_08840064;
    case 5u: goto L_0884007C;
    case 6u: goto L_08840084;
    case 7u: goto L_08840090;
    case 8u: goto L_08840098;
    case 9u: goto L_088400A4;
    case 10u: goto L_088400AC;
    case 11u: goto L_088400B8;
    case 12u: goto L_088400C0;
    case 13u: goto L_088400CC;
    case 14u: goto L_088400D4;
    case 15u: goto L_088400E0;
    case 16u: goto L_088400E8;
    case 17u: goto L_088400F4;
    case 18u: goto L_088400FC;
    case 19u: goto L_08840108;
    case 20u: goto L_08840120;
    case 21u: goto L_0884012C;
    case 22u: goto L_08840134;
    case 23u: goto L_08840140;
    case 24u: goto L_08840148;
    case 25u: goto L_08840154;
    case 26u: goto L_0884015C;
    case 27u: goto L_0884017C;
    case 28u: goto L_08840180;
    case 29u: goto L_0884019C;
    case 30u: goto L_088401A8;
    case 31u: goto L_088401C8;
    case 32u: goto L_088401E8;
    case 33u: goto L_088401F4;
    case 34u: goto L_08840214;
    case 35u: goto L_08840218;
    case 36u: goto L_0884021C;
    case 37u: goto L_08840230;
    case 38u: goto L_08840238;
    case 39u: goto L_08840244;
    case 40u: goto L_0884024C;
    case 41u: goto L_08840258;
    case 42u: goto L_08840278;
    case 43u: goto L_08840288;
    case 44u: goto L_08840294;
    case 45u: goto L_088402A0;
    case 46u: goto L_088402B4;
    case 47u: goto L_088402C0;
    case 48u: goto L_088402CC;
    case 49u: goto L_088402E0;
    case 50u: goto L_088402FC;
    case 51u: goto L_0884030C;
    case 52u: goto L_0884031C;
    case 53u: goto L_08840324;
    case 54u: goto L_0884032C;
    case 55u: goto L_08840338;
    case 56u: goto L_08840340;
    case 57u: goto L_08840344;
    case 58u: goto L_08840350;
    case 59u: goto L_08840358;
    case 60u: goto L_08840388;
    case 61u: goto L_0884038C;
    case 62u: goto L_0884039C;
    case 63u: goto L_088403AC;
    case 64u: goto L_088403B8;
    case 65u: goto L_088403C0;
    case 66u: goto L_088403C8;
    case 67u: goto L_088403D0;
    case 68u: goto L_088403E0;
    case 69u: goto L_088403F0;
    case 70u: goto L_08840400;
    case 71u: goto L_0884040C;
    case 72u: goto L_08840414;
    case 73u: goto L_0884042C;
    case 74u: goto L_08840440;
    case 75u: goto L_08840448;
    case 76u: goto L_08840460;
    case 77u: goto L_0884046C;
    case 78u: goto L_08840474;
    case 79u: goto L_08840480;
    case 80u: goto L_0884049C;
    case 81u: goto L_088404A8;
    case 82u: goto L_088404C0;
    case 83u: goto L_088404C8;
    case 84u: goto L_088404D0;
    case 85u: goto L_088404D8;
    case 86u: goto L_088404E8;
    case 87u: goto L_088404F0;
    case 88u: goto L_088404FC;
    case 89u: goto L_08840508;
    case 90u: goto L_08840520;
    case 91u: goto L_0884052C;
    case 92u: goto L_0884053C;
    case 93u: goto L_08840544;
    case 94u: goto L_08840560;
    case 95u: goto L_0884056C;
    case 96u: goto L_08840578;
    case 97u: goto L_08840588;
    case 98u: goto L_08840590;
    case 99u: goto L_0884059C;
    case 100u: goto L_088405B0;
    case 101u: goto L_088405E4;
    case 102u: goto L_088405EC;
    case 103u: goto L_088405F4;
    case 104u: goto L_08840640;
    case 105u: goto L_08840654;
    case 106u: goto L_08840660;
    case 107u: goto L_08840668;
    case 108u: goto L_08840674;
    case 109u: goto L_0884067C;
    case 110u: goto L_088406E4;
    case 111u: goto L_088406F0;
    case 112u: goto L_088406F8;
    case 113u: goto L_08840760;
    case 114u: goto L_08840768;
    case 115u: goto L_08840774;
    case 116u: goto L_0884077C;
    case 117u: goto L_088407E4;
    case 118u: goto L_088407F0;
    case 119u: goto L_088407F8;
    case 120u: goto L_08840860;
    case 121u: goto L_08840868;
    case 122u: goto L_08840874;
    case 123u: goto L_0884087C;
    case 124u: goto L_08840888;
    case 125u: goto L_08840890;
    case 126u: goto L_08840918;
    case 127u: goto L_08840924;
    case 128u: goto L_0884092C;
    case 129u: goto L_088409B4;
    case 130u: goto L_088409BC;
    case 131u: goto L_088409C8;
    case 132u: goto L_088409D0;
    case 133u: goto L_08840A58;
    case 134u: goto L_08840A64;
    case 135u: goto L_08840A6C;
    case 136u: goto L_08840AF4;
    case 137u: goto L_08840AFC;
    case 138u: goto L_08840B08;
    case 139u: goto L_08840B10;
    case 140u: goto L_08840B5C;
    case 141u: goto L_08840B68;
    case 142u: goto L_08840B70;
    case 143u: goto L_08840BBC;
    case 144u: goto L_08840BC4;
    case 145u: goto L_08840BD0;
    case 146u: goto L_08840BD8;
    case 147u: goto L_08840C00;
    case 148u: goto L_08840C0C;
    case 149u: goto L_08840C14;
    case 150u: goto L_08840C3C;
    case 151u: goto L_08840C48;
    case 152u: goto L_08840C50;
    case 153u: goto L_08840C60;
    case 154u: goto L_08840C6C;
    case 155u: goto L_08840C78;
    case 156u: goto L_08840C84;
    case 157u: goto L_08840C90;
    case 158u: goto L_08840C9C;
    case 159u: goto L_08840CA8;
    case 160u: goto L_08840CB4;
    case 161u: goto L_08840CC0;
    case 162u: goto L_08840CE8;
    case 163u: goto L_08840CF4;
    case 164u: goto L_08840CFC;
    case 165u: goto L_08840D0C;
    case 166u: goto L_08840D18;
    case 167u: goto L_08840D24;
    case 168u: goto L_08840D30;
    case 169u: goto L_08840D3C;
    case 170u: goto L_08840D48;
    case 171u: goto L_08840D54;
    case 172u: goto L_08840D60;
    case 173u: goto L_08840D6C;
    case 174u: goto L_08840D94;
    case 175u: goto L_08840DA0;
    case 176u: goto L_08840DA8;
    case 177u: goto L_08840DB4;
    case 178u: goto L_08840DC0;
    case 179u: goto L_08840DD8;
    case 180u: goto L_08840DE4;
    case 181u: goto L_08840DF4;
    case 182u: goto L_08840DFC;
    case 183u: goto L_08840E18;
    case 184u: goto L_08840E24;
    case 185u: goto L_08840E30;
    case 186u: goto L_08840E40;
    case 187u: goto L_08840E48;
    case 188u: goto L_08840E54;
    case 189u: goto L_08840E68;
    case 190u: goto L_08840EAC;
    case 191u: goto L_08840ED8;
    case 192u: goto L_08840EE0;
    case 193u: goto L_08840F54;
    case 194u: goto L_08840F60;
    case 195u: goto L_08840F68;
    case 196u: goto L_08840FDC;
    case 197u: goto L_08840FE4;
    case 198u: goto L_08840FFC;
    case 199u: goto L_0884101C;
    case 200u: goto L_08841024;
    case 201u: goto L_08841030;
    case 202u: goto L_08841038;
    case 203u: goto L_088410AC;
    case 204u: goto L_088410B8;
    case 205u: goto L_088410C0;
    case 206u: goto L_08841134;
    case 207u: goto L_0884113C;
    case 208u: goto L_08841148;
    case 209u: goto L_08841150;
    case 210u: goto L_0884119C;
    case 211u: goto L_088411A8;
    case 212u: goto L_088411B0;
    case 213u: goto L_088411FC;
    case 214u: goto L_08841204;
    case 215u: goto L_08841210;
    case 216u: goto L_08841218;
    case 217u: goto L_08841230;
    case 218u: goto L_0884123C;
    case 219u: goto L_08841244;
    case 220u: goto L_0884125C;
    case 221u: goto L_08841268;
    case 222u: goto L_08841270;
    case 223u: goto L_0884127C;
    case 224u: goto L_08841288;
    case 225u: goto L_08841294;
    case 226u: goto L_088412A0;
    case 227u: goto L_088412AC;
    case 228u: goto L_088412B8;
    case 229u: goto L_088412C4;
    case 230u: goto L_088412D0;
    case 231u: goto L_088412F8;
    case 232u: goto L_08841304;
    case 233u: goto L_0884130C;
    case 234u: goto L_08841318;
    case 235u: goto L_08841324;
    case 236u: goto L_08841330;
    case 237u: goto L_0884133C;
    case 238u: goto L_08841348;
    case 239u: goto L_08841354;
    case 240u: goto L_08841360;
    case 241u: goto L_0884136C;
    case 242u: goto L_08841394;
    case 243u: goto L_0884139C;
    case 244u: goto L_088413A4;
    case 245u: goto L_088413B0;
    case 246u: goto L_088413B8;
    case 247u: goto L_088413C4;
    case 248u: goto L_088413E8;
    case 249u: goto L_088413F0;
    case 250u: goto L_088413F4;
    case 251u: goto L_0884144C;
    case 252u: goto L_08841454;
    case 253u: goto L_0884145C;
    case 254u: goto L_08841464;
    case 255u: goto L_088414C8;
    case 256u: goto L_088414D0;
    case 257u: goto L_088414DC;
    case 258u: goto L_088414E4;
    case 259u: goto L_08841548;
    case 260u: goto L_08841550;
    case 261u: goto L_0884155C;
    case 262u: goto L_08841564;
    case 263u: goto L_088415C8;
    case 264u: goto L_0884161C;
    case 265u: goto L_08841628;
    case 266u: goto L_08841630;
    case 267u: goto L_08841638;
    case 268u: goto L_08841640;
    case 269u: goto L_0884169C;
    case 270u: goto L_088416A4;
    case 271u: goto L_088416B0;
    case 272u: goto L_088416B8;
    case 273u: goto L_08841718;
    case 274u: goto L_08841720;
    case 275u: goto L_0884172C;
    case 276u: goto L_08841734;
    case 277u: goto L_08841790;
    case 278u: goto L_08841798;
    case 279u: goto L_088417A4;
    case 280u: goto L_088417AC;
    case 281u: goto L_088417B4;
    case 282u: goto L_088417BC;
    case 283u: goto L_08841818;
    case 284u: goto L_08841820;
    case 285u: goto L_0884182C;
    case 286u: goto L_08841834;
    case 287u: goto L_08841894;
    case 288u: goto L_0884189C;
    case 289u: goto L_088418A8;
    case 290u: goto L_088418B0;
    case 291u: goto L_0884190C;
    case 292u: goto L_08841914;
    case 293u: goto L_0884191C;
    case 294u: goto L_08841924;
    case 295u: goto L_08841930;
    case 296u: goto L_08841938;
    case 297u: goto L_08841940;
    case 298u: goto L_08841948;
    case 299u: goto L_08841950;
    case 300u: goto L_08841958;
    case 301u: goto L_08841960;
    case 302u: goto L_08841968;
    case 303u: goto L_08841974;
    case 304u: goto L_0884197C;
    case 305u: goto L_08841984;
    case 306u: goto L_0884198C;
    case 307u: goto L_088419B4;
    case 308u: goto L_088419BC;
    case 309u: goto L_088419C8;
    case 310u: goto L_088419D4;
    case 311u: goto L_088419E0;
    case 312u: goto L_08841A10;
    case 313u: goto L_08841A18;
    case 314u: goto L_08841A20;
    case 315u: goto L_08841A2C;
    case 316u: goto L_08841A38;
    case 317u: goto L_08841A44;
    case 318u: goto L_08841A74;
    case 319u: goto L_08841A80;
    case 320u: goto L_08841A90;
    case 321u: goto L_08841AA4;
    case 322u: goto L_08841AB4;
    case 323u: goto L_08841AC0;
    case 324u: goto L_08841ACC;
    case 325u: goto L_08841AD4;
    case 326u: goto L_08841ADC;
    case 327u: goto L_08841AE4;
    case 328u: goto L_08841AFC;
    case 329u: goto L_08841B08;
    case 330u: goto L_08841B24;
    case 331u: goto L_08841B54;
    case 332u: goto L_08841B5C;
    case 333u: goto L_08841B68;
    case 334u: goto L_08841B84;
    case 335u: goto L_08841BB8;
    case 336u: goto L_08841BC0;
    case 337u: goto L_08841BC8;
    case 338u: goto L_08841BD4;
    case 339u: goto L_08841BDC;
    case 340u: goto L_08841BE8;
    case 341u: goto L_08841BF4;
    case 342u: goto L_08841BFC;
    case 343u: goto L_08841C08;
    case 344u: goto L_08841C10;
    case 345u: goto L_08841C1C;
    case 346u: goto L_08841C28;
    case 347u: goto L_08841C40;
    case 348u: goto L_08841C4C;
    case 349u: goto L_08841C5C;
    case 350u: goto L_08841C64;
    case 351u: goto L_08841C80;
    case 352u: goto L_08841C8C;
    case 353u: goto L_08841CA4;
    case 354u: goto L_08841CBC;
    case 355u: goto L_08841CCC;
    case 356u: goto L_08841CDC;
    case 357u: goto L_08841CEC;
    case 358u: goto L_08841CF8;
    case 359u: goto L_08841D00;
    case 360u: goto L_08841D08;
    case 361u: goto L_08841D14;
    case 362u: goto L_08841D28;
    case 363u: goto L_08841D40;
    case 364u: goto L_08841D4C;
    case 365u: goto L_08841D54;
    case 366u: goto L_08841DBC;
    case 367u: goto L_08841DC8;
    case 368u: goto L_08841DD0;
    case 369u: goto L_08841E38;
    case 370u: goto L_08841E44;
    case 371u: goto L_08841E4C;
    case 372u: goto L_08841E58;
    case 373u: goto L_08841E64;
    case 374u: goto L_08841E70;
    case 375u: goto L_08841E7C;
    case 376u: goto L_08841E88;
    case 377u: goto L_08841E94;
    case 378u: goto L_08841EA0;
    case 379u: goto L_08841EAC;
    case 380u: goto L_08841ED4;
    case 381u: goto L_08841EE0;
    case 382u: goto L_08841EE8;
    case 383u: goto L_08841EF4;
    case 384u: goto L_08841F00;
    case 385u: goto L_08841F0C;
    case 386u: goto L_08841F18;
    case 387u: goto L_08841F24;
    case 388u: goto L_08841F30;
    case 389u: goto L_08841F3C;
    case 390u: goto L_08841F48;
    case 391u: goto L_08841F70;
    case 392u: goto L_08841F78;
    case 393u: goto L_08841F84;
    case 394u: goto L_08841F8C;
    case 395u: goto L_08841FF4;
    case 396u: goto L_08842000;
    case 397u: goto L_08842008;
    case 398u: goto L_08842070;
    case 399u: goto L_0884207C;
    case 400u: goto L_08842084;
    case 401u: goto L_08842090;
    case 402u: goto L_0884209C;
    case 403u: goto L_088420A8;
    case 404u: goto L_088420B4;
    case 405u: goto L_088420C0;
    case 406u: goto L_088420CC;
    case 407u: goto L_088420D8;
    case 408u: goto L_088420E4;
    case 409u: goto L_0884210C;
    case 410u: goto L_08842118;
    case 411u: goto L_08842120;
    case 412u: goto L_0884212C;
    case 413u: goto L_08842138;
    case 414u: goto L_08842144;
    case 415u: goto L_08842150;
    case 416u: goto L_0884215C;
    case 417u: goto L_08842168;
    case 418u: goto L_08842174;
    case 419u: goto L_08842180;
    case 420u: goto L_088421A8;
    case 421u: goto L_088421B0;
    case 422u: goto L_088421BC;
    case 423u: goto L_088421C4;
    case 424u: goto L_088421EC;
    case 425u: goto L_088421F8;
    case 426u: goto L_08842200;
    case 427u: goto L_08842228;
    case 428u: goto L_08842230;
    case 429u: goto L_0884223C;
    case 430u: goto L_08842244;
    case 431u: goto L_0884226C;
    case 432u: goto L_08842278;
    case 433u: goto L_08842280;
    case 434u: goto L_088422A8;
    case 435u: goto L_088422B4;
    case 436u: goto L_088422BC;
    case 437u: goto L_088422C8;
    case 438u: goto L_088422D0;
    case 439u: goto L_088422D8;
    case 440u: goto L_088422E4;
    case 441u: goto L_088422F0;
    case 442u: goto L_088422F8;
    case 443u: goto L_08842304;
    case 444u: goto L_08842310;
    case 445u: goto L_08842318;
    case 446u: goto L_08842338;
    case 447u: goto L_08842340;
    case 448u: goto L_0884235C;
    case 449u: goto L_08842374;
    case 450u: goto L_08842380;
    case 451u: goto L_0884238C;
    case 452u: goto L_088423A0;
    case 453u: goto L_088423AC;
    case 454u: goto L_088423B8;
    case 455u: goto L_088423C4;
    case 456u: goto L_088423DC;
    case 457u: goto L_088423E4;
    case 458u: goto L_088423EC;
    case 459u: goto L_08842400;
    case 460u: goto L_08842404;
    case 461u: goto L_08842414;
    case 462u: goto L_0884243C;
    case 463u: goto L_0884247C;
    case 464u: goto L_08842494;
    case 465u: goto L_088424A0;
    case 466u: goto L_088424A8;
    case 467u: goto L_088424B4;
    case 468u: goto L_088424BC;
    case 469u: goto L_088424C4;
    case 470u: goto L_088424DC;
    case 471u: goto L_088424E4;
    case 472u: goto L_08842500;
    case 473u: goto L_08842508;
    case 474u: goto L_08842510;
    case 475u: goto L_0884251C;
    case 476u: goto L_08842528;
    case 477u: goto L_08842534;
    case 478u: goto L_08842540;
    case 479u: goto L_08842548;
    case 480u: goto L_08842558;
    case 481u: goto L_08842564;
    case 482u: goto L_08842570;
    case 483u: goto L_0884257C;
    case 484u: goto L_08842588;
    case 485u: goto L_08842590;
    case 486u: goto L_0884259C;
    case 487u: goto L_088425C0;
    case 488u: goto L_088425D0;
    case 489u: goto L_088425D8;
    case 490u: goto L_088425E4;
    case 491u: goto L_088425F8;
    case 492u: goto L_08842604;
    case 493u: goto L_08842614;
    case 494u: goto L_08842634;
    case 495u: goto L_0884263C;
    case 496u: goto L_08842648;
    case 497u: goto L_08842650;
    case 498u: goto L_08842658;
    case 499u: goto L_08842664;
    case 500u: goto L_0884267C;
    case 501u: goto L_08842684;
    case 502u: goto L_08842690;
    case 503u: goto L_088426A4;
    case 504u: goto L_088426B8;
    case 505u: goto L_088426C0;
    case 506u: goto L_088426CC;
    case 507u: goto L_088426E8;
    case 508u: goto L_088426F8;
    case 509u: goto L_08842710;
    case 510u: goto L_08842720;
    case 511u: goto L_08842730;
    case 512u: goto L_08842764;
    case 513u: goto L_0884276C;
    case 514u: goto L_08842774;
    case 515u: goto L_08842780;
    case 516u: goto L_088427A4;
    case 517u: goto L_088427B4;
    case 518u: goto L_088427CC;
    case 519u: goto L_088427DC;
    case 520u: goto L_088427EC;
    case 521u: goto L_0884280C;
    case 522u: goto L_0884281C;
    case 523u: goto L_0884282C;
    case 524u: goto L_08842844;
    case 525u: goto L_08842874;
    case 526u: goto L_0884287C;
    case 527u: goto L_08842894;
    case 528u: goto L_088428AC;
    case 529u: goto L_088428B8;
    case 530u: goto L_088428C8;
    case 531u: goto L_088428F4;
    case 532u: goto L_08842904;
    case 533u: goto L_0884290C;
    case 534u: goto L_08842918;
    case 535u: goto L_08842924;
    case 536u: goto L_0884292C;
    case 537u: goto L_08842938;
    case 538u: goto L_08842954;
    case 539u: goto L_08842964;
    case 540u: goto L_08842978;
    case 541u: goto L_08842980;
    case 542u: goto L_0884298C;
    case 543u: goto L_08842998;
    case 544u: goto L_088429AC;
    case 545u: goto L_088429B4;
    case 546u: goto L_088429BC;
    case 547u: goto L_088429CC;
    case 548u: goto L_088429D4;
    case 549u: goto L_088429E0;
    case 550u: goto L_088429F8;
    case 551u: goto L_08842A00;
    case 552u: goto L_08842A14;
    case 553u: goto L_08842A44;
    case 554u: goto L_08842A4C;
    case 555u: goto L_08842A6C;
    case 556u: goto L_08842A74;
    case 557u: goto L_08842A7C;
    case 558u: goto L_08842A88;
    case 559u: goto L_08842AA0;
    case 560u: goto L_08842AA8;
    case 561u: goto L_08842AB4;
    case 562u: goto L_08842AC8;
    case 563u: goto L_08842ADC;
    case 564u: goto L_08842AE4;
    case 565u: goto L_08842AF0;
    case 566u: goto L_08842B0C;
    case 567u: goto L_08842B1C;
    case 568u: goto L_08842B34;
    case 569u: goto L_08842B44;
    case 570u: goto L_08842B54;
    case 571u: goto L_08842B88;
    case 572u: goto L_08842B90;
    case 573u: goto L_08842B98;
    case 574u: goto L_08842BA4;
    case 575u: goto L_08842BC8;
    case 576u: goto L_08842BD8;
    case 577u: goto L_08842BF0;
    case 578u: goto L_08842C00;
    case 579u: goto L_08842C10;
    case 580u: goto L_08842C30;
    case 581u: goto L_08842C40;
    case 582u: goto L_08842C50;
    case 583u: goto L_08842C68;
    case 584u: goto L_08842C98;
    case 585u: goto L_08842CA0;
    case 586u: goto L_08842CB8;
    case 587u: goto L_08842CD0;
    case 588u: goto L_08842CDC;
    case 589u: goto L_08842CEC;
    case 590u: goto L_08842D14;
    case 591u: goto L_08842D24;
    case 592u: goto L_08842D2C;
    case 593u: goto L_08842D38;
    case 594u: goto L_08842D44;
    case 595u: goto L_08842D4C;
    case 596u: goto L_08842D58;
    case 597u: goto L_08842D74;
    case 598u: goto L_08842D84;
    case 599u: goto L_08842D98;
    case 600u: goto L_08842DA0;
    case 601u: goto L_08842DAC;
    case 602u: goto L_08842DB8;
    case 603u: goto L_08842DC8;
    case 604u: goto L_08842DD0;
    case 605u: goto L_08842DDC;
    case 606u: goto L_08842DE8;
    case 607u: goto L_08842DF8;
    case 608u: goto L_08842E00;
    case 609u: goto L_08842E0C;
    case 610u: goto L_08842E20;
    case 611u: goto L_08842E2C;
    case 612u: goto L_08842E3C;
    case 613u: goto L_08842E5C;
    case 614u: goto L_08842E64;
    case 615u: goto L_08842E70;
    case 616u: goto L_08842E78;
    case 617u: goto L_08842E80;
    case 618u: goto L_08842E8C;
    case 619u: goto L_08842EA4;
    case 620u: goto L_08842EAC;
    case 621u: goto L_08842EB8;
    case 622u: goto L_08842ECC;
    case 623u: goto L_08842ED4;
    case 624u: goto L_08842EEC;
    case 625u: goto L_08842F04;
    case 626u: goto L_08842F10;
    case 627u: goto L_08842F20;
    case 628u: goto L_08842F4C;
    case 629u: goto L_08842F5C;
    case 630u: goto L_08842F64;
    case 631u: goto L_08842F70;
    case 632u: goto L_08842F7C;
    case 633u: goto L_08842F84;
    case 634u: goto L_08842F90;
    case 635u: goto L_08842FAC;
    case 636u: goto L_08842FBC;
    case 637u: goto L_08842FD0;
    case 638u: goto L_08842FD8;
    case 639u: goto L_08842FE4;
    case 640u: goto L_08842FF0;
    case 641u: goto L_08843000;
    case 642u: goto L_08843008;
    case 643u: goto L_08843014;
    case 644u: goto L_08843020;
    case 645u: goto L_08843030;
    case 646u: goto L_08843038;
    case 647u: goto L_08843044;
    case 648u: goto L_0884305C;
    case 649u: goto L_08843064;
    case 650u: goto L_08843078;
    case 651u: goto L_088430A8;
    case 652u: goto L_088430B0;
    case 653u: goto L_088430D0;
    case 654u: goto L_088430D8;
    case 655u: goto L_088430E0;
    case 656u: goto L_088430EC;
    case 657u: goto L_08843104;
    case 658u: goto L_0884310C;
    case 659u: goto L_08843118;
    case 660u: goto L_0884312C;
    case 661u: goto L_08843134;
    case 662u: goto L_0884314C;
    case 663u: goto L_08843164;
    case 664u: goto L_08843170;
    case 665u: goto L_08843180;
    case 666u: goto L_088431A8;
    case 667u: goto L_088431B8;
    case 668u: goto L_088431C0;
    case 669u: goto L_088431CC;
    case 670u: goto L_088431D8;
    case 671u: goto L_088431E0;
    case 672u: goto L_088431EC;
    case 673u: goto L_08843208;
    case 674u: goto L_08843218;
    case 675u: goto L_0884322C;
    case 676u: goto L_08843234;
    case 677u: goto L_08843240;
    case 678u: goto L_0884324C;
    case 679u: goto L_0884325C;
    case 680u: goto L_08843264;
    case 681u: goto L_08843270;
    case 682u: goto L_08843278;
    case 683u: goto L_08843284;
    case 684u: goto L_08843294;
    case 685u: goto L_0884329C;
    case 686u: goto L_088432A8;
    case 687u: goto L_088432BC;
    case 688u: goto L_088432C8;
    case 689u: goto L_088432DC;
    case 690u: goto L_08843300;
    case 691u: goto L_08843308;
    case 692u: goto L_0884331C;
    case 693u: goto L_0884332C;
    case 694u: goto L_08843338;
    case 695u: goto L_08843344;
    case 696u: goto L_0884334C;
    case 697u: goto L_08843358;
    case 698u: goto L_08843364;
    case 699u: goto L_08843374;
    case 700u: goto L_08843380;
    case 701u: goto L_0884338C;
    case 702u: goto L_08843398;
    case 703u: goto L_088433A4;
    case 704u: goto L_088433AC;
    case 705u: goto L_088433B4;
    case 706u: goto L_088433C8;
    case 707u: goto L_088433E4;
    case 708u: goto L_088433FC;
    case 709u: goto L_0884341C;
    case 710u: goto L_08843434;
    case 711u: goto L_08843440;
    case 712u: goto L_0884344C;
    case 713u: goto L_08843458;
    case 714u: goto L_08843460;
    case 715u: goto L_0884347C;
    case 716u: goto L_0884348C;
    case 717u: goto L_08843498;
    case 718u: goto L_088434A4;
    case 719u: goto L_088434C0;
    case 720u: goto L_088434D4;
    case 721u: goto L_088434E0;
    case 722u: goto L_088434E8;
    case 723u: goto L_088434F0;
    case 724u: goto L_08843500;
    case 725u: goto L_0884350C;
    case 726u: goto L_0884351C;
    case 727u: goto L_08843528;
    case 728u: goto L_08843534;
    case 729u: goto L_08843554;
    case 730u: goto L_08843560;
    case 731u: goto L_0884356C;
    case 732u: goto L_08843578;
    case 733u: goto L_08843580;
    case 734u: goto L_08843588;
    case 735u: goto L_08843598;
    case 736u: goto L_088435A0;
    case 737u: goto L_088435AC;
    case 738u: goto L_088435D4;
    case 739u: goto L_088435E0;
    case 740u: goto L_088435EC;
    case 741u: goto L_088435F8;
    case 742u: goto L_08843600;
    case 743u: goto L_08843608;
    case 744u: goto L_08843614;
    case 745u: goto L_0884361C;
    case 746u: goto L_08843628;
    case 747u: goto L_08843634;
    case 748u: goto L_08843644;
    case 749u: goto L_08843650;
    case 750u: goto L_0884365C;
    case 751u: goto L_08843668;
    case 752u: goto L_08843674;
    case 753u: goto L_0884367C;
    case 754u: goto L_08843688;
    case 755u: goto L_08843694;
    case 756u: goto L_088436A4;
    case 757u: goto L_088436B0;
    case 758u: goto L_088436BC;
    case 759u: goto L_088436CC;
    case 760u: goto L_088436D8;
    case 761u: goto L_088436E0;
    case 762u: goto L_088436EC;
    case 763u: goto L_088436F8;
    case 764u: goto L_08843708;
    case 765u: goto L_08843714;
    case 766u: goto L_08843720;
    case 767u: goto L_0884372C;
    case 768u: goto L_08843738;
    case 769u: goto L_08843740;
    case 770u: goto L_0884374C;
    case 771u: goto L_08843758;
    case 772u: goto L_08843768;
    case 773u: goto L_08843774;
    case 774u: goto L_08843780;
    case 775u: goto L_08843790;
    case 776u: goto L_0884379C;
    case 777u: goto L_088437A4;
    case 778u: goto L_088437AC;
    case 779u: goto L_088437B8;
    case 780u: goto L_088437C8;
    case 781u: goto L_088437D0;
    case 782u: goto L_088437DC;
    case 783u: goto L_088437FC;
    case 784u: goto L_0884380C;
    case 785u: goto L_08843818;
    case 786u: goto L_08843824;
    case 787u: goto L_08843834;
    case 788u: goto L_08843858;
    case 789u: goto L_08843860;
    case 790u: goto L_08843874;
    case 791u: goto L_0884387C;
    case 792u: goto L_08843884;
    case 793u: goto L_08843890;
    case 794u: goto L_088438A8;
    case 795u: goto L_088438B0;
    case 796u: goto L_088438BC;
    case 797u: goto L_088438D0;
    case 798u: goto L_088438E4;
    case 799u: goto L_088438EC;
    case 800u: goto L_088438F8;
    case 801u: goto L_08843914;
    case 802u: goto L_08843924;
    case 803u: goto L_0884393C;
    case 804u: goto L_0884394C;
    case 805u: goto L_0884395C;
    case 806u: goto L_08843990;
    case 807u: goto L_08843998;
    case 808u: goto L_088439A0;
    case 809u: goto L_088439AC;
    case 810u: goto L_088439D0;
    case 811u: goto L_088439E0;
    case 812u: goto L_088439F8;
    case 813u: goto L_08843A08;
    case 814u: goto L_08843A18;
    case 815u: goto L_08843A38;
    case 816u: goto L_08843A48;
    case 817u: goto L_08843A58;
    case 818u: goto L_08843A70;
    case 819u: goto L_08843AA0;
    case 820u: goto L_08843AA8;
    case 821u: goto L_08843AC0;
    case 822u: goto L_08843AD8;
    case 823u: goto L_08843AE4;
    case 824u: goto L_08843AF4;
    case 825u: goto L_08843B20;
    case 826u: goto L_08843B30;
    case 827u: goto L_08843B38;
    case 828u: goto L_08843B44;
    case 829u: goto L_08843B50;
    case 830u: goto L_08843B58;
    case 831u: goto L_08843B64;
    case 832u: goto L_08843B80;
    case 833u: goto L_08843B90;
    case 834u: goto L_08843BA4;
    case 835u: goto L_08843BAC;
    case 836u: goto L_08843BB8;
    case 837u: goto L_08843BC4;
    case 838u: goto L_08843BD8;
    case 839u: goto L_08843BE0;
    case 840u: goto L_08843BE8;
    case 841u: goto L_08843BF8;
    case 842u: goto L_08843C00;
    case 843u: goto L_08843C0C;
    case 844u: goto L_08843C2C;
    case 845u: goto L_08843C3C;
    case 846u: goto L_08843C48;
    case 847u: goto L_08843C54;
    case 848u: goto L_08843C78;
    case 849u: goto L_08843C9C;
    case 850u: goto L_08843CA4;
    case 851u: goto L_08843CC8;
    case 852u: goto L_08843CD0;
    case 853u: goto L_08843CD8;
    case 854u: goto L_08843CE4;
    case 855u: goto L_08843CFC;
    case 856u: goto L_08843D04;
    case 857u: goto L_08843D10;
    case 858u: goto L_08843D24;
    case 859u: goto L_08843D34;
    case 860u: goto L_08843D3C;
    case 861u: goto L_08843D48;
    case 862u: goto L_08843D64;
    case 863u: goto L_08843D74;
    case 864u: goto L_08843D8C;
    case 865u: goto L_08843D9C;
    case 866u: goto L_08843DAC;
    case 867u: goto L_08843DE0;
    case 868u: goto L_08843DE8;
    case 869u: goto L_08843DF0;
    case 870u: goto L_08843DFC;
    case 871u: goto L_08843E20;
    case 872u: goto L_08843E30;
    case 873u: goto L_08843E48;
    case 874u: goto L_08843E58;
    case 875u: goto L_08843E68;
    case 876u: goto L_08843E88;
    case 877u: goto L_08843E98;
    case 878u: goto L_08843EA8;
    case 879u: goto L_08843EC0;
    case 880u: goto L_08843EF0;
    case 881u: goto L_08843EF8;
    case 882u: goto L_08843F10;
    case 883u: goto L_08843F28;
    case 884u: goto L_08843F34;
    case 885u: goto L_08843F44;
    case 886u: goto L_08843F6C;
    case 887u: goto L_08843F7C;
    case 888u: goto L_08843F84;
    case 889u: goto L_08843F90;
    case 890u: goto L_08843F9C;
    case 891u: goto L_08843FA4;
    case 892u: goto L_08843FB0;
    case 893u: goto L_08843FCC;
    case 894u: goto L_08843FDC;
    case 895u: goto L_08843FF0;
    case 896u: goto L_08843FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08840000:
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08840064;
      }
      goto L_08840008;
    }
L_08840008:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(21));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (16076u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x0884005Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884005Cu) goto L_0884005C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884005C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884007C;
      }
      goto L_08840064;
    }
L_08840064:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(21));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x0884007Cu);
    aot_fpr_13 = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884007Cu) goto L_0884007C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884007C:
    aot_gpr_31 = (0x08840084u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840084u) goto L_08840084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840084:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08840090;
    }
L_08840090:
    aot_gpr_31 = (0x08840098u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840098u) goto L_08840098;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840098:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-950));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_088400A4;
    }
L_088400A4:
    aot_gpr_31 = (0x088400ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400ACu) goto L_088400AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088400AC:
    aot_gpr_4 = (0u | 246u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_088400B8;
    }
L_088400B8:
    aot_gpr_31 = (0x088400C0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400C0u) goto L_088400C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088400C0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_088400CC;
    }
L_088400CC:
    aot_gpr_31 = (0x088400D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400D4u) goto L_088400D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088400D4:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_088400E0;
    }
L_088400E0:
    aot_gpr_31 = (0x088400E8u);
    ctx.gpr[16] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 859u, 0x08833F6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400E8u) goto L_088400E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088400E8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 21 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_088400F4;
L_088400F4:
    aot_gpr_31 = (0x088400FCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 859u, 0x08833F6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088400FCu) goto L_088400FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088400FC:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884012C;
      }
      goto L_08840108;
    }
L_08840108:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_31 = (0x08840120u);
    ctx.gpr[18] = (aot_gpr_4 & 63u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 860u, 0x08833F74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840120u) goto L_08840120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840120:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_2) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_0884012C;
L_0884012C:
    aot_gpr_31 = (0x08840134u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 859u, 0x08833F6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840134u) goto L_08840134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840134:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 6 ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_08840140;
L_08840140:
    aot_gpr_31 = (0x08840148u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 859u, 0x08833F6Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840148u) goto L_08840148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840148:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < 7 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
        goto L_08840180;
    }
    goto L_08840154;
L_08840154:
    aot_gpr_31 = (0x0884015Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 860u, 0x08833F74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884015Cu) goto L_0884015C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884015C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_4 = (aot_gpr_4 & 63u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_2) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_0884017C;
L_0884017C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    goto L_08840180;
L_08840180:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088401A8;
      }
      goto L_0884019C;
    }
L_0884019C:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088401A8;
L_088401A8:
    aot_gpr_4 = (18243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20480u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08840218;
    }
    goto L_088401C8;
L_088401C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (16320u << 16u);
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_088401F4;
      }
      goto L_088401E8;
    }
L_088401E8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_088401F4;
L_088401F4:
    aot_gpr_4 = (18243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20480u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_0884021C;
      }
      goto L_08840214;
    }
L_08840214:
    ctx.gpr[16] = (0u | 1u);
    goto L_08840218;
L_08840218:
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0884021C;
L_0884021C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    aot_gpr_4 = (aot_gpr_4 >> 6u);
    { const bool branch_taken = ctx.gpr[16] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_08840230;
    }
L_08840230:
    aot_gpr_31 = (0x08840238u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840238u) goto L_08840238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840238:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_08840244;
    }
L_08840244:
    aot_gpr_31 = (0x0884024Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884024Cu) goto L_0884024C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884024C:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08840278;
      }
      goto L_08840258;
    }
L_08840258:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[16] & 1u);
    aot_gpr_5 = (aot_gpr_5 << 6u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_08840278;
    }
L_08840278:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_08840288;
    }
L_08840288:
    ctx.gpr[16] = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x08840294u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840294u) goto L_08840294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840294:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088402A0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402A0u) goto L_088402A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088402A0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2112), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088402B4u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2112));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 35u, 0x08830240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402B4u) goto L_088402B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088402B4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x088402C0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402C0u) goto L_088402C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088402C0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088402CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402CCu) goto L_088402CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088402CC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2116), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088402E0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2116));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 35u, 0x08830240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088402E0u) goto L_088402E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088402E0:
    aot_fpr_12 = ctx.fpr[22] + ctx.fpr[0];
    aot_gpr_4 = (17096u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0884030C;
      }
      goto L_088402FC;
    }
L_088402FC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-65));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_mem.aot_direct_store8(aot_gpr_17 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0884030C;
L_0884030C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884031Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 196u, 0x08830E2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884031Cu) goto L_0884031C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884031C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08840344;
      }
      goto L_08840324;
    }
L_08840324:
    aot_gpr_31 = (0x0884032Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 120u, 0x08830890u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884032Cu) goto L_0884032C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884032C:
    aot_gpr_4 = (aot_gpr_2 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08840340;
      }
      goto L_08840338;
    }
L_08840338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08840344;
      }
      goto L_08840340;
    }
L_08840340:
    ctx.gpr[16] = (0u | 1u);
    goto L_08840344;
L_08840344:
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_31 = (0x08840350u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840350u) goto L_08840350;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840350:
    { const bool branch_taken = aot_gpr_2 != aot_gpr_17;
    // nop
      if (branch_taken) {
          goto L_0884038C;
      }
      goto L_08840358;
    }
L_08840358:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    ctx.gpr[6] = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[6]);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0884038C;
      }
      goto L_08840388;
    }
L_08840388:
    ctx.gpr[19] = (0u | 1u);
    goto L_0884038C;
L_0884038C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 16u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088403B8;
      }
      goto L_0884039C;
    }
L_0884039C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 64u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088403B8;
      }
      goto L_088403AC;
    }
L_088403AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(627)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088403C8;
      }
      goto L_088403B8;
    }
L_088403B8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088403C8;
      }
      goto L_088403C0;
    }
L_088403C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08841BC0;
      }
      goto L_088403C8;
    }
L_088403C8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841BC0;
      }
      goto L_088403D0;
    }
L_088403D0:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2192));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2128));
    aot_gpr_31 = (0x088403E0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088403E0u) goto L_088403E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088403E0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x088403F0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088403F0u) goto L_088403F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088403F0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08840400u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840400u) goto L_08840400;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840400:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884040Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884040Cu) goto L_0884040C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884040C:
    aot_gpr_31 = (0x08840414u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 82u, 0x08830634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840414u) goto L_08840414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840414:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_20) || std::isnan(aot_fpr_12)) && aot_fpr_20 == aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08840448;
      }
      goto L_0884042C;
    }
L_0884042C:
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_20;
    aot_gpr_31 = (0x08840440u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2192));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 85u, 0x08830678u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840440u) goto L_08840440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884046C;
      }
      goto L_08840448;
    }
L_08840448:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2240));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08840460u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840460u) goto L_08840460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840460:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2192));
    aot_gpr_31 = (0x0884046Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884046Cu) goto L_0884046C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884046C:
    aot_gpr_31 = (0x08840474u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840474u) goto L_08840474;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840474:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2192));
    aot_gpr_31 = (0x08840480u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840480u) goto L_08840480;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840480:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_088404A8;
      }
      goto L_0884049C;
    }
L_0884049C:
    aot_gpr_4 = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_088404C8;
      }
      goto L_088404A8;
    }
L_088404A8:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_088404C8;
      }
      goto L_088404C0;
    }
L_088404C0:
    aot_gpr_4 = (49024u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_088404C8;
L_088404C8:
    aot_gpr_31 = (0x088404D0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 70u, 0x08830508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404D0u) goto L_088404D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088404D0:
    aot_gpr_31 = (0x088404D8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 76u, 0x088305B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404D8u) goto L_088404D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088404D8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2208));
    aot_gpr_31 = (0x088404E8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404E8u) goto L_088404E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088404E8:
    aot_gpr_31 = (0x088404F0u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404F0u) goto L_088404F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088404F0:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088404FCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088404FCu) goto L_088404FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088404FC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08840508u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840508u) goto L_08840508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840508:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(2128));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08840520u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840520u) goto L_08840520;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840520:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0884052Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884052Cu) goto L_0884052C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884052C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884053Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884053Cu) goto L_0884053C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884053C:
    aot_gpr_31 = (0x08840544u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840544u) goto L_08840544;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840544:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2208)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08840560u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840560u) goto L_08840560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840560:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884056Cu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884056Cu) goto L_0884056C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884056C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08840578u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840578u) goto L_08840578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840578:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08840588u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840588u) goto L_08840588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840588:
    aot_gpr_31 = (0x08840590u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840590u) goto L_08840590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840590:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0884059Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884059Cu) goto L_0884059C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884059C:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08840BC4;
      }
      goto L_088405B0;
    }
L_088405B0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    ctx.gpr[6] = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (ctx.gpr[6] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_5 = (0u | 16u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_088405F4;
      }
      goto L_088405E4;
    }
L_088405E4:
    aot_gpr_31 = (0x088405ECu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088405ECu) goto L_088405EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088405EC:
    { const bool branch_taken = aot_gpr_17 == aot_gpr_2;
    // nop
      if (branch_taken) {
          goto L_08840BC4;
      }
      goto L_088405F4;
    }
L_088405F4:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[28] = ctx.fpr[28] + aot_fpr_13;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (49016u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 20972u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_08840640;
    }
L_08840640:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_08840654;
    }
L_08840654:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08840660u);
    aot_gpr_5 = (64u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840660u) goto L_08840660;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840660:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08840768;
      }
      goto L_08840668;
    }
L_08840668:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840674u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840674u) goto L_08840674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840674:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088406E4;
      }
      goto L_0884067C;
    }
L_0884067C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 150u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[7] = (0u | 195u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088406E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088406E4u) goto L_088406E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088406E4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088406F0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088406F0u) goto L_088406F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088406F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_088406F8;
    }
L_088406F8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(7));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 150u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[7] = (0u | 195u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840760u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840760u) goto L_08840760;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_08840768;
    }
L_08840768:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840774u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840774u) goto L_08840774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840774:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088407E4;
      }
      goto L_0884077C;
    }
L_0884077C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(6));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 160u);
    ctx.gpr[6] = (0u | 160u);
    ctx.gpr[7] = (0u | 140u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088407E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088407E4u) goto L_088407E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088407E4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088407F0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088407F0u) goto L_088407F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088407F0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840860;
      }
      goto L_088407F8;
    }
L_088407F8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(7));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    aot_gpr_5 = (16025u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16948u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 160u);
    ctx.gpr[6] = (0u | 160u);
    ctx.gpr[7] = (0u | 140u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840860u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840860u) goto L_08840860;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840860:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08840AFC;
      }
      goto L_08840868;
    }
L_08840868:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08840874u);
    aot_gpr_5 = (64u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840874u) goto L_08840874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840874:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088409BC;
      }
      goto L_0884087C;
    }
L_0884087C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840888u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840888u) goto L_08840888;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840888:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840918;
      }
      goto L_08840890;
    }
L_08840890:
    aot_gpr_4 = (17214u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840918u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840918u) goto L_08840918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840918:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840924u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840924u) goto L_08840924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840924:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_0884092C;
    }
L_0884092C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (17214u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[6] = (17279u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088409B4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088409B4u) goto L_088409B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088409B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_088409BC;
    }
L_088409BC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088409C8u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088409C8u) goto L_088409C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088409C8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840A58;
      }
      goto L_088409D0;
    }
L_088409D0:
    aot_gpr_4 = (17234u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (17219u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840A58u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840A58u) goto L_08840A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840A58:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840A64u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840A64u) goto L_08840A64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840A64:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840A6C;
    }
L_08840A6C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (17234u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[6] = (17219u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[28]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840AF4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840AF4u) goto L_08840AF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840AFC;
    }
L_08840AFC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840B08u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840B08u) goto L_08840B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840B08:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840B5C;
      }
      goto L_08840B10;
    }
L_08840B10:
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840B5Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840B5Cu) goto L_08840B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840B5C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840B68u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840B68u) goto L_08840B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840B68:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840B70;
    }
L_08840B70:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840BBCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840BBCu) goto L_08840BBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840BC4;
    }
L_08840BC4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840BD0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840BD0u) goto L_08840BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840BD0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840C00;
      }
      goto L_08840BD8;
    }
L_08840BD8:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1960)));
    aot_gpr_4 = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08840C00u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C00u) goto L_08840C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C00:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840C0Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C0Cu) goto L_08840C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C0C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840C3C;
      }
      goto L_08840C14;
    }
L_08840C14:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08840C3Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C3Cu) goto L_08840C3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C3C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840C48u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C48u) goto L_08840C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C48:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840CE8;
      }
      goto L_08840C50;
    }
L_08840C50:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840CE8;
      }
      goto L_08840C60;
    }
L_08840C60:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2256));
    aot_gpr_31 = (0x08840C6Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C6Cu) goto L_08840C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C6C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840C78u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C78u) goto L_08840C78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C78:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2272));
    aot_gpr_31 = (0x08840C84u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C84u) goto L_08840C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C84:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840C90u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C90u) goto L_08840C90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C90:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2288));
    aot_gpr_31 = (0x08840C9Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840C9Cu) goto L_08840C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840C9C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840CA8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CA8u) goto L_08840CA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840CA8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2304));
    aot_gpr_31 = (0x08840CB4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CB4u) goto L_08840CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840CB4:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840CC0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 174u, 0x08830D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CC0u) goto L_08840CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840CC0:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08840CE8u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CE8u) goto L_08840CE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840CE8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840CF4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840CF4u) goto L_08840CF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840CF4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840D94;
      }
      goto L_08840CFC;
    }
L_08840CFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840D94;
      }
      goto L_08840D0C;
    }
L_08840D0C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2320));
    aot_gpr_31 = (0x08840D18u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D18u) goto L_08840D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D18:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840D24u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D24u) goto L_08840D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D24:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2336));
    aot_gpr_31 = (0x08840D30u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D30u) goto L_08840D30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D30:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840D3Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D3Cu) goto L_08840D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D3C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2352));
    aot_gpr_31 = (0x08840D48u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D48u) goto L_08840D48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D48:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840D54u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D54u) goto L_08840D54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D54:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2368));
    aot_gpr_31 = (0x08840D60u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D60u) goto L_08840D60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D60:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840D6Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 174u, 0x08830D2Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D6Cu) goto L_08840D6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D6C:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08840D94u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840D94u) goto L_08840D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840D94:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2224));
    aot_gpr_31 = (0x08840DA0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DA0u) goto L_08840DA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DA0:
    aot_gpr_31 = (0x08840DA8u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DA8u) goto L_08840DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DA8:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08840DB4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DB4u) goto L_08840DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DB4:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08840DC0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DC0u) goto L_08840DC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DC0:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(2128));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08840DD8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DD8u) goto L_08840DD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DD8:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08840DE4u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DE4u) goto L_08840DE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DE4:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08840DF4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DF4u) goto L_08840DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DF4:
    aot_gpr_31 = (0x08840DFCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840DFCu) goto L_08840DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840DFC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2224)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08840E18u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E18u) goto L_08840E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840E18:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08840E24u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E24u) goto L_08840E24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840E24:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08840E30u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E30u) goto L_08840E30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840E30:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08840E40u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E40u) goto L_08840E40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840E40:
    aot_gpr_31 = (0x08840E48u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E48u) goto L_08840E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840E48:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08840E54u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840E54u) goto L_08840E54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840E54:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08841204;
      }
      goto L_08840E68;
    }
L_08840E68:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_20 = aot_fpr_12 + aot_fpr_20;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_13;
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(604)));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08840FE4;
      }
      goto L_08840EAC;
    }
L_08840EAC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_13;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840ED8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840ED8u) goto L_08840ED8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840ED8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08840F54;
      }
      goto L_08840EE0;
    }
L_08840EE0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840F54u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840F54u) goto L_08840F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840F54:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08840F60u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840F60u) goto L_08840F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840F60:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_08840F68;
    }
L_08840F68:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (aot_gpr_5 | 0u);
    ctx.gpr[7] = (aot_gpr_5 | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08840FDCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08840FDCu) goto L_08840FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08840FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_08840FE4;
    }
L_08840FE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(608)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0884101C;
      }
      goto L_08840FFC;
    }
L_08840FFC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_13;
    goto L_0884101C;
L_0884101C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884113C;
      }
      goto L_08841024;
    }
L_08841024:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841030u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841030u) goto L_08841030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841030:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088410AC;
      }
      goto L_08841038;
    }
L_08841038:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088410ACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088410ACu) goto L_088410AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088410AC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088410B8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088410B8u) goto L_088410B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088410B8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_088410C0;
    }
L_088410C0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (17152u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 & 255u);
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    ctx.gpr[6] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08841134u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841134u) goto L_08841134;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841134:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_0884113C;
    }
L_0884113C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841148u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841148u) goto L_08841148;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841148:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884119C;
      }
      goto L_08841150;
    }
L_08841150:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x0884119Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884119Cu) goto L_0884119C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884119C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088411A8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088411A8u) goto L_088411A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088411A8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_088411B0;
    }
L_088411B0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_2 = (0u | 1u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x088411FCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088411FCu) goto L_088411FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088411FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_08841204;
    }
L_08841204:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841210u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841210u) goto L_08841210;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841210:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841230;
      }
      goto L_08841218;
    }
L_08841218:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x08841230u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841230u) goto L_08841230;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841230:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884123Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884123Cu) goto L_0884123C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884123C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884125C;
      }
      goto L_08841244;
    }
L_08841244:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[6]);
    aot_gpr_31 = (0x0884125Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884125Cu) goto L_0884125C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884125C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841268u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841268u) goto L_08841268;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841268:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088412F8;
      }
      goto L_08841270;
    }
L_08841270:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2384));
    aot_gpr_31 = (0x0884127Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2144));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884127Cu) goto L_0884127C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884127C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841288u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841288u) goto L_08841288;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841288:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2400));
    aot_gpr_31 = (0x08841294u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841294u) goto L_08841294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841294:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088412A0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412A0u) goto L_088412A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088412A0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2416));
    aot_gpr_31 = (0x088412ACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412ACu) goto L_088412AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088412AC:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088412B8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412B8u) goto L_088412B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088412B8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2432));
    aot_gpr_31 = (0x088412C4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412C4u) goto L_088412C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088412C4:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088412D0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412D0u) goto L_088412D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088412D0:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x088412F8u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088412F8u) goto L_088412F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088412F8:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841304u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841304u) goto L_08841304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841304:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841394;
      }
      goto L_0884130C;
    }
L_0884130C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2448));
    aot_gpr_31 = (0x08841318u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2160));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841318u) goto L_08841318;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841318:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841324u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841324u) goto L_08841324;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841324:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2464));
    aot_gpr_31 = (0x08841330u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841330u) goto L_08841330;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841330:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884133Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884133Cu) goto L_0884133C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884133C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2480));
    aot_gpr_31 = (0x08841348u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841348u) goto L_08841348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841348:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841354u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841354u) goto L_08841354;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841354:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2496));
    aot_gpr_31 = (0x08841360u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841360u) goto L_08841360;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841360:
    ctx.gpr[21] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884136Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884136Cu) goto L_0884136C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884136C:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841394u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841394u) goto L_08841394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841394:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_0884139C;
    }
L_0884139C:
    aot_gpr_31 = (0x088413A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413A4u) goto L_088413A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088413A4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_31 = (0x088413B0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413B0u) goto L_088413B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088413B0:
    aot_gpr_31 = (0x088413B8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413B8u) goto L_088413B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088413B8:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088413C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413C4u) goto L_088413C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088413C4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_088413F4;
      }
      goto L_088413E8;
    }
L_088413E8:
    aot_gpr_31 = (0x088413F0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 73u, 0x08830548u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088413F0u) goto L_088413F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088413F0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088413F4;
L_088413F4:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2176)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2212)));
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    { const float fs = aot_fpr_14; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2184)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2184), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884144Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884144Cu) goto L_0884144C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884144C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_088414D0;
      }
      goto L_08841454;
    }
L_08841454:
    aot_gpr_31 = (0x0884145Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884145Cu) goto L_0884145C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884145C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088414D0;
      }
      goto L_08841464;
    }
L_08841464:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(22));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (49248u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16480u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16307u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    aot_gpr_31 = (0x088414C8u);
    ctx.gpr[11] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088414C8u) goto L_088414C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088414C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088415C8;
      }
      goto L_088414D0;
    }
L_088414D0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088414DCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088414DCu) goto L_088414DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088414DC:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841550;
      }
      goto L_088414E4;
    }
L_088414E4:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(22));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (49248u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16480u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16670u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16307u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    aot_gpr_31 = (0x08841548u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841548u) goto L_08841548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088415C8;
      }
      goto L_08841550;
    }
L_08841550:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884155Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884155Cu) goto L_0884155C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884155C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088415C8;
      }
      goto L_08841564;
    }
L_08841564:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(22));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (16608u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (49248u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16480u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (48844u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16307u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 145u);
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    aot_gpr_31 = (0x088415C8u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088415C8u) goto L_088415C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088415C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2176)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2212)));
    aot_gpr_4 = (16657u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2228)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2180)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(604)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08841798;
      }
      goto L_0884161C;
    }
L_0884161C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841628u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841628u) goto L_08841628;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841628:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_088416A4;
      }
      goto L_08841630;
    }
L_08841630:
    aot_gpr_31 = (0x08841638u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841638u) goto L_08841638;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841638:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088416A4;
      }
      goto L_08841640;
    }
L_08841640:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 22u);
    ctx.gpr[9] = (0u | 22u);
    ctx.gpr[10] = (0u | 22u);
    aot_gpr_31 = (0x0884169Cu);
    ctx.gpr[11] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884169Cu) goto L_0884169C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884169C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_088416A4;
    }
L_088416A4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088416B0u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088416B0u) goto L_088416B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088416B0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841720;
      }
      goto L_088416B8;
    }
L_088416B8:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16670u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 22u);
    ctx.gpr[9] = (0u | 22u);
    ctx.gpr[10] = (0u | 22u);
    aot_gpr_31 = (0x08841718u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841718u) goto L_08841718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_08841720;
    }
L_08841720:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884172Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884172Cu) goto L_0884172C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884172C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_08841734;
    }
L_08841734:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 22u);
    ctx.gpr[9] = (0u | 22u);
    ctx.gpr[10] = (0u | 22u);
    aot_gpr_31 = (0x08841790u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841790u) goto L_08841790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841790:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_08841798;
    }
L_08841798:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088417A4u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088417A4u) goto L_088417A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088417A4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_08841820;
      }
      goto L_088417AC;
    }
L_088417AC:
    aot_gpr_31 = (0x088417B4u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088417B4u) goto L_088417B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088417B4:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841820;
      }
      goto L_088417BC;
    }
L_088417BC:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 40u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841818u);
    ctx.gpr[11] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841818u) goto L_08841818;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_08841820;
    }
L_08841820:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884182Cu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884182Cu) goto L_0884182C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884182C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884189C;
      }
      goto L_08841834;
    }
L_08841834:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16670u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 40u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841894u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841894u) goto L_08841894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_0884189C;
    }
L_0884189C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088418A8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088418A8u) goto L_088418A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088418A8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884190C;
      }
      goto L_088418B0;
    }
L_088418B0:
    aot_gpr_5 = (aot_gpr_17 + static_cast<std::uint32_t>(25));
    ctx.gpr[6] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(2176));
    aot_gpr_4 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16320u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (49088u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (48896u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    ctx.gpr[8] = (0u | 40u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0884190Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884190Cu) goto L_0884190C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884190C:
    aot_gpr_31 = (0x08841914u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841914u) goto L_08841914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841914:
    { const bool branch_taken = aot_gpr_17 != aot_gpr_2;
    // nop
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_0884191C;
    }
L_0884191C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_08841924;
    }
L_08841924:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841930u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841930u) goto L_08841930;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841930:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_08841948;
      }
      goto L_08841938;
    }
L_08841938:
    aot_gpr_31 = (0x08841940u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841940u) goto L_08841940;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841940:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841A74;
      }
      goto L_08841948;
    }
L_08841948:
    aot_gpr_31 = (0x08841950u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841950u) goto L_08841950;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841950:
    aot_gpr_31 = (0x08841958u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841958u) goto L_08841958;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841958:
    aot_gpr_31 = (0x08841960u);
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841960u) goto L_08841960;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841960:
    aot_gpr_31 = (0x08841968u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841968u) goto L_08841968;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841968:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08841974u);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841974u) goto L_08841974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841974:
    aot_gpr_31 = (0x0884197Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884197Cu) goto L_0884197C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884197C:
    aot_gpr_31 = (0x08841984u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841984u) goto L_08841984;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841984:
    aot_gpr_31 = (0x0884198Cu);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884198Cu) goto L_0884198C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884198C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_13;
    aot_gpr_4 = (15951u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23592u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08841A18;
      }
      goto L_088419B4;
    }
L_088419B4:
    aot_gpr_31 = (0x088419BCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088419BCu) goto L_088419BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088419BC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2560));
    aot_gpr_31 = (0x088419C8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088419C8u) goto L_088419C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088419C8:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088419D4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088419D4u) goto L_088419D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088419D4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2576));
    aot_gpr_31 = (0x088419E0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088419E0u) goto L_088419E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088419E0:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (0u | 1u);
    aot_gpr_31 = (0x08841A10u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A10u) goto L_08841A10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841A74;
      }
      goto L_08841A18;
    }
L_08841A18:
    aot_gpr_31 = (0x08841A20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A20u) goto L_08841A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A20:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2592));
    aot_gpr_31 = (0x08841A2Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A2Cu) goto L_08841A2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A2C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841A38u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A38u) goto L_08841A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A38:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2608));
    aot_gpr_31 = (0x08841A44u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A44u) goto L_08841A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A44:
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08841A74u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A74u) goto L_08841A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A74:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2512));
    aot_gpr_31 = (0x08841A80u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A80u) goto L_08841A80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A80:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2528));
    aot_gpr_31 = (0x08841A90u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841A90u) goto L_08841A90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841A90:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08841AA4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841AA4u) goto L_08841AA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841AA4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08841AB4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841AB4u) goto L_08841AB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841AB4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2544));
    aot_gpr_31 = (0x08841AC0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841AC0u) goto L_08841AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841AC0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841ACCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841ACCu) goto L_08841ACC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841ACC:
    { const bool branch_taken = aot_gpr_2 == 0u;
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_08841AE4;
      }
      goto L_08841AD4;
    }
L_08841AD4:
    aot_gpr_31 = (0x08841ADCu);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841ADCu) goto L_08841ADC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841ADC:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_08841AE4;
    }
L_08841AE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(608)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08841B5C;
      }
      goto L_08841AFC;
    }
L_08841AFC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2624));
    aot_gpr_31 = (0x08841B08u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2544));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B08u) goto L_08841B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841B08:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2640));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08841B24u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B24u) goto L_08841B24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841B24:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08841B54u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B54u) goto L_08841B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841B54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08841BB8;
      }
      goto L_08841B5C;
    }
L_08841B5C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2656));
    aot_gpr_31 = (0x08841B68u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2544));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B68u) goto L_08841B68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841B68:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2672));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08841B84u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841B84u) goto L_08841B84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841B84:
    aot_gpr_4 = (16608u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[7] = (0u | 0u);
    aot_gpr_31 = (0x08841BB8u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841BB8u) goto L_08841BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BC0;
    }
L_08841BC0:
    aot_gpr_31 = (0x08841BC8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841BC8u) goto L_08841BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841BC8:
    aot_gpr_4 = (0u | 4u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BD4;
    }
L_08841BD4:
    aot_gpr_31 = (0x08841BDCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841BDCu) goto L_08841BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841BDC:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BE8;
    }
L_08841BE8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_17 + static_cast<std::uint32_t>(627)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BF4;
    }
L_08841BF4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08841BFC;
    }
L_08841BFC:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2736));
    aot_gpr_31 = (0x08841C08u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C08u) goto L_08841C08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C08:
    aot_gpr_31 = (0x08841C10u);
    aot_gpr_4 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C10u) goto L_08841C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C10:
    aot_gpr_4 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841C1Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 184u, 0x08830DB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C1Cu) goto L_08841C1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C1C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841C28u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C28u) goto L_08841C28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C28:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2688));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08841C40u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 39u, 0x08830288u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C40u) goto L_08841C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C40:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08841C4Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C4Cu) goto L_08841C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C4C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841C5Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C5Cu) goto L_08841C5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C5C:
    aot_gpr_31 = (0x08841C64u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C64u) goto L_08841C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2736)));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08841C80u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 45u, 0x0883032Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C80u) goto L_08841C80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C80:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841C8Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841C8Cu) goto L_08841C8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841C8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(608)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08841CBC;
      }
      goto L_08841CA4;
    }
L_08841CA4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(604)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08842230;
      }
      goto L_08841CBC;
    }
L_08841CBC:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(2768));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2752));
    aot_gpr_31 = (0x08841CCCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841CCCu) goto L_08841CCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841CCC:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08841CDCu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841CDCu) goto L_08841CDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841CDC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08841CECu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841CECu) goto L_08841CEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841CEC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841CF8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841CF8u) goto L_08841CF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841CF8:
    aot_gpr_31 = (0x08841D00u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 81u, 0x0883060Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841D00u) goto L_08841D00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841D00:
    aot_gpr_31 = (0x08841D08u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841D08u) goto L_08841D08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841D08:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08841D14u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 40u, 0x088302B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841D14u) goto L_08841D14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841D14:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_088421B0;
      }
      goto L_08841D28;
    }
L_08841D28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(604)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08841F78;
      }
      goto L_08841D40;
    }
L_08841D40:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841D4Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841D4Cu) goto L_08841D4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841D4C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841DBC;
      }
      goto L_08841D54;
    }
L_08841D54:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 120u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[7] = (0u | 120u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08841DBCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841DBCu) goto L_08841DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841DBC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841DC8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841DC8u) goto L_08841DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841DC8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841E38;
      }
      goto L_08841DD0;
    }
L_08841DD0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 120u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[7] = (0u | 120u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08841E38u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E38u) goto L_08841E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E38:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841E44u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E44u) goto L_08841E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E44:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841ED4;
      }
      goto L_08841E4C;
    }
L_08841E4C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2784));
    aot_gpr_31 = (0x08841E58u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E58u) goto L_08841E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E58:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841E64u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E64u) goto L_08841E64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E64:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2800));
    aot_gpr_31 = (0x08841E70u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E70u) goto L_08841E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E70:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841E7Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E7Cu) goto L_08841E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E7C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2816));
    aot_gpr_31 = (0x08841E88u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E88u) goto L_08841E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E88:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841E94u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841E94u) goto L_08841E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841E94:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2832));
    aot_gpr_31 = (0x08841EA0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841EA0u) goto L_08841EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841EA0:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841EACu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841EACu) goto L_08841EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841EAC:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841ED4u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841ED4u) goto L_08841ED4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841ED4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841EE0u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841EE0u) goto L_08841EE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841EE0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_08841EE8;
    }
L_08841EE8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2848));
    aot_gpr_31 = (0x08841EF4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841EF4u) goto L_08841EF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841EF4:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841F00u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F00u) goto L_08841F00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F00:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2864));
    aot_gpr_31 = (0x08841F0Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F0Cu) goto L_08841F0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F0C:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841F18u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F18u) goto L_08841F18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F18:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2880));
    aot_gpr_31 = (0x08841F24u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F24u) goto L_08841F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F24:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841F30u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F30u) goto L_08841F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F30:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2896));
    aot_gpr_31 = (0x08841F3Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F3Cu) goto L_08841F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F3C:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08841F48u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F48u) goto L_08841F48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F48:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x08841F70u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F70u) goto L_08841F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_08841F78;
    }
L_08841F78:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08841F84u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841F84u) goto L_08841F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841F84:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08841FF4;
      }
      goto L_08841F8C;
    }
L_08841F8C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 120u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08841FF4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08841FF4u) goto L_08841FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08841FF4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08842000u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842000u) goto L_08842000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842000:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08842070;
      }
      goto L_08842008;
    }
L_08842008:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    aot_gpr_5 = (16281u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1960)));
    aot_gpr_5 = (16968u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_2 = (0u | 1u);
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 120u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_2, 0u, aot_gpr_2};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08842070u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842070u) goto L_08842070;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842070:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884207Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884207Cu) goto L_0884207C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884207C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884210C;
      }
      goto L_08842084;
    }
L_08842084:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2912));
    aot_gpr_31 = (0x08842090u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842090u) goto L_08842090;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842090:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884209Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884209Cu) goto L_0884209C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884209C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2928));
    aot_gpr_31 = (0x088420A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420A8u) goto L_088420A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088420A8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088420B4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420B4u) goto L_088420B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088420B4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2944));
    aot_gpr_31 = (0x088420C0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420C0u) goto L_088420C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088420C0:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088420CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420CCu) goto L_088420CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088420CC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2960));
    aot_gpr_31 = (0x088420D8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420D8u) goto L_088420D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088420D8:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088420E4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088420E4u) goto L_088420E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088420E4:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x0884210Cu);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884210Cu) goto L_0884210C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884210C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08842118u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842118u) goto L_08842118;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842118:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_08842120;
    }
L_08842120:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2976));
    aot_gpr_31 = (0x0884212Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884212Cu) goto L_0884212C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884212C:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842138u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 103u, 0x088307A4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842138u) goto L_08842138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842138:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2992));
    aot_gpr_31 = (0x08842144u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842144u) goto L_08842144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842144:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842150u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842150u) goto L_08842150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842150:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3008));
    aot_gpr_31 = (0x0884215Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884215Cu) goto L_0884215C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884215C:
    ctx.gpr[19] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842168u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 102u, 0x0883079Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842168u) goto L_08842168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842168:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3024));
    aot_gpr_31 = (0x08842174u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 63u, 0x08830460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842174u) goto L_08842174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842174:
    ctx.gpr[20] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842180u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 175u, 0x08830D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842180u) goto L_08842180;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842180:
    ctx.gpr[8] = (aot_gpr_2 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_31 = (0x088421A8u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088421A8u) goto L_088421A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088421A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_088421B0;
    }
L_088421B0:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088421BCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088421BCu) goto L_088421BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088421BC:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088421EC;
      }
      goto L_088421C4;
    }
L_088421C4:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088421ECu);
    aot_fpr_13 = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088421ECu) goto L_088421EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088421EC:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088421F8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088421F8u) goto L_088421F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088421F8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08842228;
      }
      goto L_08842200;
    }
L_08842200:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08842228u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842228u) goto L_08842228;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08842230;
    }
L_08842230:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x0884223Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884223Cu) goto L_0884223C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884223C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0884226C;
      }
      goto L_08842244;
    }
L_08842244:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(14));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2704));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x0884226Cu);
    aot_fpr_13 = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884226Cu) goto L_0884226C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884226C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08842278u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 372u, 0x08B0D88Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842278u) goto L_08842278;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842278:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088422A8;
      }
      goto L_08842280;
    }
L_08842280:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(15));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(2720));
    ctx.gpr[6] = (2236u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[6] = (16968u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x088422A8u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422A8u) goto L_088422A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088422A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x088422B4u);
    aot_gpr_5 = (512u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422B4u) goto L_088422B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088422B4:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088422D0;
      }
      goto L_088422BC;
    }
L_088422BC:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088422C8u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422C8u) goto L_088422C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088422C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842304;
      }
      goto L_088422D0;
    }
L_088422D0:
    aot_gpr_31 = (0x088422D8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422D8u) goto L_088422D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088422D8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-984));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088422F8;
      }
      goto L_088422E4;
    }
L_088422E4:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x088422F0u);
    aot_gpr_5 = (0u | 4u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088422F0u) goto L_088422F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088422F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842304;
      }
      goto L_088422F8;
    }
L_088422F8:
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_gpr_31 = (0x08842304u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842304u) goto L_08842304;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842304:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08842310u);
    aot_gpr_5 = (512u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842310u) goto L_08842310;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842310:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08842500;
      }
      goto L_08842318;
    }
L_08842318:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (15846u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26215u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08842500;
      }
      goto L_08842338;
    }
L_08842338:
    aot_gpr_31 = (0x08842340u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842340u) goto L_08842340;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842340:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08842500;
      }
      goto L_0884235C;
    }
L_0884235C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(3048), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (50298u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3052), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08842374u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842374u) goto L_08842374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842374:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08842380u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842380u) goto L_08842380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842380:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0884238Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884238Cu) goto L_0884238C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884238C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3048));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088423A0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423A0u) goto L_088423A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088423A0:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_31 = (0x088423ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423ACu) goto L_088423AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088423AC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x088423B8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423B8u) goto L_088423B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088423B8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x088423C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423C4u) goto L_088423C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088423C4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3052));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x088423DCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088423DCu) goto L_088423DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088423DC:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088423EC;
      }
      goto L_088423E4;
    }
L_088423E4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3052), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088423EC;
L_088423EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(3052)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08842404;
      }
      goto L_08842400;
    }
L_08842400:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(3052)));
    goto L_08842404;
L_08842404:
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842414u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3040), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 125u, 0x08830904u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842414u) goto L_08842414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842414:
    aot_gpr_4 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3044), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3044));
    aot_gpr_31 = (0x0884243Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3040));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884243Cu) goto L_0884243C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884243C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1640)));
    aot_gpr_4 = (15846u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26215u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15836u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 10485u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_31 = (0x0884247Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 75u, 0x088305A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884247Cu) goto L_0884247C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884247C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16672u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842494u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842494u) goto L_08842494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842494:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088424B4;
      }
      goto L_088424A0;
    }
L_088424A0:
    aot_gpr_31 = (0x088424A8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088424A8u) goto L_088424A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088424A8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-972));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088424BC;
      }
      goto L_088424B4;
    }
L_088424B4:
    aot_gpr_4 = (16448u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    goto L_088424BC;
L_088424BC:
    aot_gpr_31 = (0x088424C4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088424C4u) goto L_088424C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088424C4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08842500;
      }
      goto L_088424DC;
    }
L_088424DC:
    aot_gpr_31 = (0x088424E4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 108u, 0x088307E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088424E4u) goto L_088424E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088424E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_2 + static_cast<std::uint32_t>(8)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_20;
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_4 = (aot_gpr_17 | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842500u);
    aot_gpr_5 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0193_entry, 193u, 371u, 0x08B09D30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842500u) goto L_08842500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842500:
    aot_gpr_31 = (0x08842508u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 86u, 0x08830694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842508u) goto L_08842508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842508:
    aot_gpr_31 = (0x08842510u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 114u, 0x08830840u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842510u) goto L_08842510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842510:
    ctx.gpr[16] = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884251Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884251Cu) goto L_0884251C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884251C:
    aot_gpr_4 = (0u | 246u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0884259C;
      }
      goto L_08842528;
    }
L_08842528:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0884259C;
      }
      goto L_08842534;
    }
L_08842534:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(3056));
    aot_gpr_31 = (0x08842540u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 86u, 0x08830694u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842540u) goto L_08842540;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842540:
    aot_gpr_31 = (0x08842548u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1336)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842548u) goto L_08842548;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842548:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842558u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842558u) goto L_08842558;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842558:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3136));
    aot_gpr_31 = (0x08842564u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842564u) goto L_08842564;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842564:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08842570u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842570u) goto L_08842570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842570:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1852)));
    aot_gpr_31 = (0x0884257Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884257Cu) goto L_0884257C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884257C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08842588u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842588u) goto L_08842588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842588:
    aot_gpr_31 = (0x08842590u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842590u) goto L_08842590;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842590:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884259Cu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 93u, 0x0883072Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884259Cu) goto L_0884259C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884259C:
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 32u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr_4));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088425C0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1280)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425C0u) goto L_088425C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088425C0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088425D0u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425D0u) goto L_088425D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088425D0:
    aot_gpr_31 = (0x088425D8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425D8u) goto L_088425D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088425D8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x088425E4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425E4u) goto L_088425E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088425E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1632)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088425F8u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088425F8u) goto L_088425F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088425F8:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0884263C;
      }
      goto L_08842604;
    }
L_08842604:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08842614u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842614u) goto L_08842614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842614:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842634u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842634u) goto L_08842634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842648;
      }
      goto L_0884263C;
    }
L_0884263C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842648u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842648u) goto L_08842648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842648:
    aot_gpr_31 = (0x08842650u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842650u) goto L_08842650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842650:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08842918;
      }
      goto L_08842658;
    }
L_08842658:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0884287C;
      }
      goto L_08842664;
    }
L_08842664:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1548)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0884287C;
      }
      goto L_0884267C;
    }
L_0884267C:
    aot_gpr_31 = (0x08842684u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842684u) goto L_08842684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842684:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0884287C;
      }
      goto L_08842690;
    }
L_08842690:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (49097u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x088426A4u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426A4u) goto L_088426A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088426A4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(3));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0884276C;
      }
      goto L_088426B8;
    }
L_088426B8:
    aot_gpr_31 = (0x088426C0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426C0u) goto L_088426C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088426C0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3152));
    aot_gpr_31 = (0x088426CCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426CCu) goto L_088426CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088426CC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3168));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3184));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088426E8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426E8u) goto L_088426E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088426E8:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088426F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088426F8u) goto L_088426F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088426F8:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3200));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842710u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842710u) goto L_08842710;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842710:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842720u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842720u) goto L_08842720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842720:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08842730u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842730u) goto L_08842730;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842730:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08842764u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842764u) goto L_08842764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842764:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842918;
      }
      goto L_0884276C;
    }
L_0884276C:
    aot_gpr_31 = (0x08842774u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842774u) goto L_08842774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842774:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3216));
    aot_gpr_31 = (0x08842780u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842780u) goto L_08842780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842780:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3232));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3248));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3264));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088427A4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427A4u) goto L_088427A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088427A4:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088427B4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427B4u) goto L_088427B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088427B4:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(3280));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088427CCu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427CCu) goto L_088427CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088427CC:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x088427DCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427DCu) goto L_088427DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088427DC:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x088427ECu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088427ECu) goto L_088427EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088427EC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3296));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0884280Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884280Cu) goto L_0884280C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884280C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0884281Cu);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884281Cu) goto L_0884281C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884281C:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0884282Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884282Cu) goto L_0884282C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884282C:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842844u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842844u) goto L_08842844;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842844:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08842874u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842874u) goto L_08842874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842918;
      }
      goto L_0884287C;
    }
L_0884287C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842894u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842894u) goto L_08842894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842894:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x088428ACu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088428ACu) goto L_088428AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088428AC:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_088428C8;
      }
      goto L_088428B8;
    }
L_088428B8:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_088428C8;
L_088428C8:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3312), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3320), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3320));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3324), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x088428F4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3324));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088428F4u) goto L_088428F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088428F4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3316), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3316));
    aot_gpr_31 = (0x08842904u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3312));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842904u) goto L_08842904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842904:
    aot_gpr_31 = (0x0884290Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884290Cu) goto L_0884290C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884290C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842918u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842918u) goto L_08842918;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842918:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08842924u);
    aot_gpr_5 = (0u | 16384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842924u) goto L_08842924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842924:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08842980;
      }
      goto L_0884292C;
    }
L_0884292C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842938u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842938u) goto L_08842938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842938:
    aot_gpr_4 = (16275u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842954u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842954u) goto L_08842954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842954:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842964u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842964u) goto L_08842964;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842964:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842978u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842978u) goto L_08842978;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842998;
      }
      goto L_08842980;
    }
L_08842980:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884298Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884298Cu) goto L_0884298C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884298C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842998u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842998u) goto L_08842998;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842998:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088429ACu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429ACu) goto L_088429AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088429AC:
    aot_gpr_31 = (0x088429B4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429B4u) goto L_088429B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088429B4:
    aot_gpr_31 = (0x088429BCu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1292)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429BCu) goto L_088429BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088429BC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088429CCu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429CCu) goto L_088429CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088429CC:
    aot_gpr_31 = (0x088429D4u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429D4u) goto L_088429D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088429D4:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088429E0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429E0u) goto L_088429E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088429E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1624)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x088429F8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088429F8u) goto L_088429F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088429F8:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08842A4C;
      }
      goto L_08842A00;
    }
L_08842A00:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08842A14u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842A14u) goto L_08842A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842A14:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842A44u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842A44u) goto L_08842A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842A6C;
      }
      goto L_08842A4C;
    }
L_08842A4C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16457u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x08842A6Cu);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842A6Cu) goto L_08842A6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842A6C:
    aot_gpr_31 = (0x08842A74u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842A74u) goto L_08842A74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842A74:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08842D38;
      }
      goto L_08842A7C;
    }
L_08842A7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08842CA0;
      }
      goto L_08842A88;
    }
L_08842A88:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1540)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08842CA0;
      }
      goto L_08842AA0;
    }
L_08842AA0:
    aot_gpr_31 = (0x08842AA8u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842AA8u) goto L_08842AA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842AA8:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08842CA0;
      }
      goto L_08842AB4;
    }
L_08842AB4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (16329u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x08842AC8u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842AC8u) goto L_08842AC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842AC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08842B90;
      }
      goto L_08842ADC;
    }
L_08842ADC:
    aot_gpr_31 = (0x08842AE4u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842AE4u) goto L_08842AE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842AE4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3328));
    aot_gpr_31 = (0x08842AF0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842AF0u) goto L_08842AF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842AF0:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3344));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3360));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842B0Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B0Cu) goto L_08842B0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B0C:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842B1Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B1Cu) goto L_08842B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B1C:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3376));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842B34u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B34u) goto L_08842B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B34:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842B44u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B44u) goto L_08842B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B44:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08842B54u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B54u) goto L_08842B54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B54:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08842B88u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B88u) goto L_08842B88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842D38;
      }
      goto L_08842B90;
    }
L_08842B90:
    aot_gpr_31 = (0x08842B98u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842B98u) goto L_08842B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842B98:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3392));
    aot_gpr_31 = (0x08842BA4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842BA4u) goto L_08842BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842BA4:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3408));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3424));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3440));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842BC8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842BC8u) goto L_08842BC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842BC8:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842BD8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842BD8u) goto L_08842BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842BD8:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(3456));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842BF0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842BF0u) goto L_08842BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842BF0:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842C00u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C00u) goto L_08842C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842C00:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08842C10u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C10u) goto L_08842C10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842C10:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3472));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842C30u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C30u) goto L_08842C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842C30:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08842C40u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C40u) goto L_08842C40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842C40:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842C50u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C50u) goto L_08842C50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842C50:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08842C68u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C68u) goto L_08842C68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842C68:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08842C98u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842C98u) goto L_08842C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842D38;
      }
      goto L_08842CA0;
    }
L_08842CA0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842CB8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842CB8u) goto L_08842CB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842CB8:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x08842CD0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842CD0u) goto L_08842CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842CD0:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08842CEC;
      }
      goto L_08842CDC;
    }
L_08842CDC:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08842CEC;
L_08842CEC:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3488), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3496), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3496));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3500), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842D14u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3500));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D14u) goto L_08842D14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D14:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3492), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3492));
    aot_gpr_31 = (0x08842D24u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D24u) goto L_08842D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D24:
    aot_gpr_31 = (0x08842D2Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D2Cu) goto L_08842D2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D2C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842D38u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D38u) goto L_08842D38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08842D44u);
    aot_gpr_5 = (0u | 16384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D44u) goto L_08842D44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D44:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08842DA0;
      }
      goto L_08842D4C;
    }
L_08842D4C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842D58u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D58u) goto L_08842D58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D58:
    aot_gpr_4 = (16275u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842D74u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D74u) goto L_08842D74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D74:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842D84u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D84u) goto L_08842D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D84:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842D98u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842D98u) goto L_08842D98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842DB8;
      }
      goto L_08842DA0;
    }
L_08842DA0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842DACu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DACu) goto L_08842DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842DAC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842DB8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DB8u) goto L_08842DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842DB8:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08842DC8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DC8u) goto L_08842DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842DC8:
    aot_gpr_31 = (0x08842DD0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DD0u) goto L_08842DD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842DD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1276)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843008;
      }
      goto L_08842DDC;
    }
L_08842DDC:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842DE8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1276)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DE8u) goto L_08842DE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842DE8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08842DF8u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842DF8u) goto L_08842DF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842DF8:
    aot_gpr_31 = (0x08842E00u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E00u) goto L_08842E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842E00:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08842E0Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E0Cu) goto L_08842E0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842E0C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1632)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08842E20u);
    aot_gpr_5 = (0u | 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E20u) goto L_08842E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842E20:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08842E64;
      }
      goto L_08842E2C;
    }
L_08842E2C:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08842E3Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E3Cu) goto L_08842E3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842E3C:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08842E5Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E5Cu) goto L_08842E5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842E5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842E70;
      }
      goto L_08842E64;
    }
L_08842E64:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842E70u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E70u) goto L_08842E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842E70:
    aot_gpr_31 = (0x08842E78u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842E78u) goto L_08842E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842E78:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08842F70;
      }
      goto L_08842E80;
    }
L_08842E80:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08842ED4;
      }
      goto L_08842E8C;
    }
L_08842E8C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1548)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08842ED4;
      }
      goto L_08842EA4;
    }
L_08842EA4:
    aot_gpr_31 = (0x08842EACu);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1488));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842EACu) goto L_08842EAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842EAC:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08842ED4;
      }
      goto L_08842EB8;
    }
L_08842EB8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (49097u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x08842ECCu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842ECCu) goto L_08842ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842F70;
      }
      goto L_08842ED4;
    }
L_08842ED4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842EECu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842EECu) goto L_08842EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842EEC:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x08842F04u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F04u) goto L_08842F04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842F04:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08842F20;
      }
      goto L_08842F10;
    }
L_08842F10:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08842F20;
L_08842F20:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3504), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3512), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3512));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3516), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08842F4Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3516));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F4Cu) goto L_08842F4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842F4C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3508), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3508));
    aot_gpr_31 = (0x08842F5Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3504));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F5Cu) goto L_08842F5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842F5C:
    aot_gpr_31 = (0x08842F64u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F64u) goto L_08842F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842F64:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842F70u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F70u) goto L_08842F70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842F70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08842F7Cu);
    aot_gpr_5 = (0u | 16384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F7Cu) goto L_08842F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842F7C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08842FD8;
      }
      goto L_08842F84;
    }
L_08842F84:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842F90u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842F90u) goto L_08842F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842F90:
    aot_gpr_4 = (16275u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842FACu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FACu) goto L_08842FAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842FAC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842FBCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FBCu) goto L_08842FBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842FBC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08842FD0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FD0u) goto L_08842FD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08842FF0;
      }
      goto L_08842FD8;
    }
L_08842FD8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08842FE4u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FE4u) goto L_08842FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842FE4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08842FF0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08842FF0u) goto L_08842FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08842FF0:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843000u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843000u) goto L_08843000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843000:
    aot_gpr_31 = (0x08843008u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843008u) goto L_08843008;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843008:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1288)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843264;
      }
      goto L_08843014;
    }
L_08843014:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843020u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1288)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843020u) goto L_08843020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843020:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843030u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843030u) goto L_08843030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843030:
    aot_gpr_31 = (0x08843038u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843038u) goto L_08843038;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843038:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843044u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843044u) goto L_08843044;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843044:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1624)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    ctx.gpr[18] = (0u | 1u);
    aot_gpr_31 = (0x0884305Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884305Cu) goto L_0884305C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884305C:
    { const bool branch_taken = aot_gpr_2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088430B0;
      }
      goto L_08843064;
    }
L_08843064:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08843078u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843078u) goto L_08843078;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843078:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088430A8u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088430A8u) goto L_088430A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088430A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088430D0;
      }
      goto L_088430B0;
    }
L_088430B0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16457u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x088430D0u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088430D0u) goto L_088430D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088430D0:
    aot_gpr_31 = (0x088430D8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088430D8u) goto L_088430D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088430D8:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088431CC;
      }
      goto L_088430E0;
    }
L_088430E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843134;
      }
      goto L_088430EC;
    }
L_088430EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1540)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08843134;
      }
      goto L_08843104;
    }
L_08843104:
    aot_gpr_31 = (0x0884310Cu);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1424));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884310Cu) goto L_0884310C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884310C:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843134;
      }
      goto L_08843118;
    }
L_08843118:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (16329u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x0884312Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884312Cu) goto L_0884312C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884312C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088431CC;
      }
      goto L_08843134;
    }
L_08843134:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884314Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884314Cu) goto L_0884314C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884314C:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x08843164u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843164u) goto L_08843164;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843164:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843180;
      }
      goto L_08843170;
    }
L_08843170:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08843180;
L_08843180:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3528), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3528));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3532), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088431A8u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3532));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431A8u) goto L_088431A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088431A8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3524), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3524));
    aot_gpr_31 = (0x088431B8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3520));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431B8u) goto L_088431B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088431B8:
    aot_gpr_31 = (0x088431C0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431C0u) goto L_088431C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088431C0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088431CCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431CCu) goto L_088431CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088431CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x088431D8u);
    aot_gpr_5 = (0u | 16384u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431D8u) goto L_088431D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088431D8:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843234;
      }
      goto L_088431E0;
    }
L_088431E0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088431ECu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088431ECu) goto L_088431EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088431EC:
    aot_gpr_4 = (16275u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843208u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843208u) goto L_08843208;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843208:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843218u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843218u) goto L_08843218;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843218:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x0884322Cu);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884322Cu) goto L_0884322C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884322C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884324C;
      }
      goto L_08843234;
    }
L_08843234:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843240u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843240u) goto L_08843240;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843240:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x0884324Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884324Cu) goto L_0884324C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884324C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x0884325Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884325Cu) goto L_0884325C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884325C:
    aot_gpr_31 = (0x08843264u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843264u) goto L_08843264;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843264:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08843270u);
    aot_gpr_5 = (1024u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843270u) goto L_08843270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843270:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088434F0;
      }
      goto L_08843278;
    }
L_08843278:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843284u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1272)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843284u) goto L_08843284;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843284:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843294u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843294u) goto L_08843294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843294:
    aot_gpr_31 = (0x0884329Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884329Cu) goto L_0884329C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884329C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x088432A8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088432A8u) goto L_088432A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088432A8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x088432BCu);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088432BCu) goto L_088432BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088432BC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843308;
      }
      goto L_088432C8;
    }
L_088432C8:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    aot_gpr_31 = (0x088432DCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088432DCu) goto L_088432DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088432DC:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[24] + aot_fpr_14;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843300u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843300u) goto L_08843300;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884331C;
      }
      goto L_08843308;
    }
L_08843308:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x0884331Cu);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884331Cu) goto L_0884331C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884331C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884332Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884332Cu) goto L_0884332C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884332C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843338u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843338u) goto L_08843338;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843338:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843344u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843344u) goto L_08843344;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843344:
    aot_gpr_31 = (0x0884334Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884334Cu) goto L_0884334C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884334C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1344)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843434;
      }
      goto L_08843358;
    }
L_08843358:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843364u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1344)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843364u) goto L_08843364;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843364:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843374u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843374u) goto L_08843374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843374:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843380u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843380u) goto L_08843380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843380:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884338Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884338Cu) goto L_0884338C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884338C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_31 = (0x08843398u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843398u) goto L_08843398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843398:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088433A4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088433A4u) goto L_088433A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088433A4:
    aot_gpr_31 = (0x088433ACu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088433ACu) goto L_088433AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088433AC:
    aot_gpr_31 = (0x088433B4u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 191u, 0x08830E04u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088433B4u) goto L_088433B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088433B4:
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[0]) || std::isnan(aot_fpr_12)) && ctx.fpr[0] == aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_088433E4;
      }
      goto L_088433C8;
    }
L_088433C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_4 = (16119u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 21980u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(1876), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_088433FC;
      }
      goto L_088433E4;
    }
L_088433E4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_4 = (15982u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 11457u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(1876), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_088433FC;
L_088433FC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_4 = (16584u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08843434;
      }
      goto L_0884341C;
    }
L_0884341C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1876)));
    aot_gpr_4 = (16584u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 62915u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_17 + static_cast<std::uint32_t>(1876), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08843434;
L_08843434:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08843440u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 382u, 0x08B0D940u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843440u) goto L_08843440;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843440:
    aot_gpr_4 = (0u | 3u);
    { const bool branch_taken = aot_gpr_2 == aot_gpr_4;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0884344C;
    }
L_0884344C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08843458;
    }
L_08843458:
    aot_gpr_31 = (0x08843460u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843460u) goto L_08843460;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843460:
    aot_gpr_4 = (16068u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 38922u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x0884347Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1340)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884347Cu) goto L_0884347C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884347C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884348Cu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884348Cu) goto L_0884348C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884348C:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843498u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843498u) goto L_08843498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843498:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088434A4u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434A4u) goto L_088434A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088434A4:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x088434C0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434C0u) goto L_088434C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088434C0:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x088434D4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 5u, 0x088600C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434D4u) goto L_088434D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088434D4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088434E0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434E0u) goto L_088434E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088434E0:
    aot_gpr_31 = (0x088434E8u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088434E8u) goto L_088434E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088434E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088434F0;
    }
L_088434F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_17 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 246u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08843608;
      }
      goto L_08843500;
    }
L_08843500:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x0884350Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1272)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884350Cu) goto L_0884350C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884350C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x0884351Cu);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884351Cu) goto L_0884351C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884351C:
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843528u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843528u) goto L_08843528;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843528:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08843534u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843534u) goto L_08843534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843534:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843554u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843554u) goto L_08843554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843554:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843560u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843560u) goto L_08843560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843560:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884356Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884356Cu) goto L_0884356C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884356C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843578u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843578u) goto L_08843578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843578:
    aot_gpr_31 = (0x08843580u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843580u) goto L_08843580;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843580:
    aot_gpr_31 = (0x08843588u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1284)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843588u) goto L_08843588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843588:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843598u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843598u) goto L_08843598;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843598:
    aot_gpr_31 = (0x088435A0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435A0u) goto L_088435A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088435A0:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x088435ACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435ACu) goto L_088435AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088435AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1620)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1604)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088435D4u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435D4u) goto L_088435D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088435D4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088435E0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435E0u) goto L_088435E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088435E0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088435ECu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435ECu) goto L_088435EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088435EC:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088435F8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088435F8u) goto L_088435F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088435F8:
    aot_gpr_31 = (0x08843600u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843600u) goto L_08843600;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08843608;
    }
L_08843608:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08843614u);
    aot_gpr_5 = (512u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 166u, 0x08830CE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843614u) goto L_08843614;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843614:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088437AC;
      }
      goto L_0884361C;
    }
L_0884361C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0884367C;
      }
      goto L_08843628;
    }
L_08843628:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843634u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1336)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843634u) goto L_08843634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843634:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843644u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843644u) goto L_08843644;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843644:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843650u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843650u) goto L_08843650;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843650:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0884365Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884365Cu) goto L_0884365C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884365C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_gpr_31 = (0x08843668u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843668u) goto L_08843668;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843668:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843674u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843674u) goto L_08843674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843674:
    aot_gpr_31 = (0x0884367Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884367Cu) goto L_0884367C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884367C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1344)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088436E0;
      }
      goto L_08843688;
    }
L_08843688:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843694u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1344)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843694u) goto L_08843694;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843694:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088436A4u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436A4u) goto L_088436A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088436A4:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x088436B0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436B0u) goto L_088436B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088436B0:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x088436BCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436BCu) goto L_088436BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088436BC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1608)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x088436CCu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436CCu) goto L_088436CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088436CC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x088436D8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436D8u) goto L_088436D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088436D8:
    aot_gpr_31 = (0x088436E0u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436E0u) goto L_088436E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088436E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1340)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843740;
      }
      goto L_088436EC;
    }
L_088436EC:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088436F8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1340)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088436F8u) goto L_088436F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088436F8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843708u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843708u) goto L_08843708;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843708:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843714u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843714u) goto L_08843714;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843714:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843720u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843720u) goto L_08843720;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843720:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    aot_gpr_31 = (0x0884372Cu);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884372Cu) goto L_0884372C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884372C:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843738u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843738u) goto L_08843738;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843738:
    aot_gpr_31 = (0x08843740u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843740u) goto L_08843740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843740:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0884374C;
    }
L_0884374C:
    ctx.gpr[16] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843758u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1316)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843758u) goto L_08843758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843758:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843768u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843768u) goto L_08843768;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843768:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x08843774u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843774u) goto L_08843774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843774:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843780u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843780u) goto L_08843780;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843780:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1616)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_gpr_31 = (0x08843790u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843790u) goto L_08843790;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843790:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x0884379Cu);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884379Cu) goto L_0884379C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884379C:
    aot_gpr_31 = (0x088437A4u);
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437A4u) goto L_088437A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088437A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 4u, 0x08844028u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_088437AC;
    }
L_088437AC:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x088437B8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1272)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437B8u) goto L_088437B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088437B8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x088437C8u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437C8u) goto L_088437C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088437C8:
    aot_gpr_31 = (0x088437D0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437D0u) goto L_088437D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088437D0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_31 = (0x088437DCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088437DCu) goto L_088437DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088437DC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1628)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0884380C;
      }
      goto L_088437FC;
    }
L_088437FC:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_0884380C;
L_0884380C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08843818u);
    aot_gpr_5 = (0u | 2u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843818u) goto L_08843818;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843818:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843860;
      }
      goto L_08843824;
    }
L_08843824:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08843834u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843834u) goto L_08843834;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843834:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_20 + aot_fpr_14;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843858u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843858u) goto L_08843858;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843874;
      }
      goto L_08843860;
    }
L_08843860:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1612)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08843874u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843874u) goto L_08843874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843874:
    aot_gpr_31 = (0x0884387Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884387Cu) goto L_0884387C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884387C:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08843B44;
      }
      goto L_08843884;
    }
L_08843884:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843AA8;
      }
      goto L_08843890;
    }
L_08843890:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1544)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08843AA8;
      }
      goto L_088438A8;
    }
L_088438A8:
    aot_gpr_31 = (0x088438B0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1456));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088438B0u) goto L_088438B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088438B0:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843AA8;
      }
      goto L_088438BC;
    }
L_088438BC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (49097u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x088438D0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088438D0u) goto L_088438D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088438D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843998;
      }
      goto L_088438E4;
    }
L_088438E4:
    aot_gpr_31 = (0x088438ECu);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1456));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088438ECu) goto L_088438EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088438EC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3536));
    aot_gpr_31 = (0x088438F8u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088438F8u) goto L_088438F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088438F8:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3552));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3568));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843914u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843914u) goto L_08843914;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843914:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843924u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843924u) goto L_08843924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843924:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3584));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0884393Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884393Cu) goto L_0884393C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884393C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x0884394Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884394Cu) goto L_0884394C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884394C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x0884395Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0884395Cu) goto L_0884395C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0884395C:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08843990u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843990u) goto L_08843990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843B44;
      }
      goto L_08843998;
    }
L_08843998:
    aot_gpr_31 = (0x088439A0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1456));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439A0u) goto L_088439A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088439A0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3600));
    aot_gpr_31 = (0x088439ACu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439ACu) goto L_088439AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088439AC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3616));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3632));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3648));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088439D0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439D0u) goto L_088439D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088439D0:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x088439E0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439E0u) goto L_088439E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088439E0:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(3664));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x088439F8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x088439F8u) goto L_088439F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_088439F8:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08843A08u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A08u) goto L_08843A08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843A08:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08843A18u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A18u) goto L_08843A18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843A18:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3680));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843A38u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A38u) goto L_08843A38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843A38:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08843A48u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A48u) goto L_08843A48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843A48:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843A58u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A58u) goto L_08843A58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843A58:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843A70u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843A70u) goto L_08843A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843A70:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08843AA0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843AA0u) goto L_08843AA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843B44;
      }
      goto L_08843AA8;
    }
L_08843AA8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    ctx.fpr[22] = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843AC0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843AC0u) goto L_08843AC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843AC0:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_14;
    aot_gpr_31 = (0x08843AD8u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843AD8u) goto L_08843AD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843AD8:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843AF4;
      }
      goto L_08843AE4;
    }
L_08843AE4:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08843AF4;
L_08843AF4:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3696), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3704), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3704));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3708), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08843B20u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3708));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B20u) goto L_08843B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843B20:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3700), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3700));
    aot_gpr_31 = (0x08843B30u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3696));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B30u) goto L_08843B30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843B30:
    aot_gpr_31 = (0x08843B38u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B38u) goto L_08843B38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843B38:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843B44u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B44u) goto L_08843B44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843B44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08843B50u);
    aot_gpr_5 = (0u | 512u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B50u) goto L_08843B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843B50:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843BAC;
      }
      goto L_08843B58;
    }
L_08843B58:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843B64u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B64u) goto L_08843B64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843B64:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843B80u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B80u) goto L_08843B80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843B80:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843B90u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843B90u) goto L_08843B90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843B90:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_31 = (0x08843BA4u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BA4u) goto L_08843BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843BC4;
      }
      goto L_08843BAC;
    }
L_08843BAC:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843BB8u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BB8u) goto L_08843BB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843BB8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843BC4u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 2u, 0x0886001Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BC4u) goto L_08843BC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843BC4:
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08843BD8u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 105u, 0x088307B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BD8u) goto L_08843BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843BD8:
    aot_gpr_31 = (0x08843BE0u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BE0u) goto L_08843BE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843BE0:
    aot_gpr_31 = (0x08843BE8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1284)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 34u, 0x08830238u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BE8u) goto L_08843BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843BE8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    aot_gpr_31 = (0x08843BF8u);
    ctx.gpr[6] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 87u, 0x088306B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843BF8u) goto L_08843BF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843BF8:
    aot_gpr_31 = (0x08843C00u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 104u, 0x088307ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C00u) goto L_08843C00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843C00:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x08843C0Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 84u, 0x08830668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C0Cu) goto L_08843C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843C0C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1620)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(600)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08843C3C;
      }
      goto L_08843C2C;
    }
L_08843C2C:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08843C3C;
L_08843C3C:
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(944));
    aot_gpr_31 = (0x08843C48u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C48u) goto L_08843C48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843C48:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843CA4;
      }
      goto L_08843C54;
    }
L_08843C54:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1604)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_13;
    aot_gpr_31 = (0x08843C78u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 67u, 0x08830498u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C78u) goto L_08843C78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843C78:
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = aot_fpr_20 + aot_fpr_14;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843C9Cu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843C9Cu) goto L_08843C9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843CC8;
      }
      goto L_08843CA4;
    }
L_08843CA4:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1604)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_fpr_13 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16457u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08843CC8u);
    aot_fpr_14 = aot_fpr_20 + aot_fpr_14;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843CC8u) goto L_08843CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843CC8:
    aot_gpr_31 = (0x08843CD0u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 128u, 0x08830934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843CD0u) goto L_08843CD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843CD0:
    { const bool branch_taken = aot_gpr_2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08843F90;
      }
      goto L_08843CD8;
    }
L_08843CD8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1782)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843EF8;
      }
      goto L_08843CE4;
    }
L_08843CE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1536)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29904)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08843EF8;
      }
      goto L_08843CFC;
    }
L_08843CFC:
    aot_gpr_31 = (0x08843D04u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 142u, 0x08830A70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D04u) goto L_08843D04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D04:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843EF8;
      }
      goto L_08843D10;
    }
L_08843D10:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (16329u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_gpr_31 = (0x08843D24u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D24u) goto L_08843D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843DE8;
      }
      goto L_08843D34;
    }
L_08843D34:
    aot_gpr_31 = (0x08843D3Cu);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D3Cu) goto L_08843D3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D3C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3712));
    aot_gpr_31 = (0x08843D48u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D48u) goto L_08843D48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D48:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3728));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3744));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843D64u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D64u) goto L_08843D64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D64:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843D74u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D74u) goto L_08843D74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D74:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3760));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843D8Cu);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D8Cu) goto L_08843D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D8C:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843D9Cu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843D9Cu) goto L_08843D9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843D9C:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08843DACu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843DACu) goto L_08843DAC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843DAC:
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    aot_gpr_4 = (0u | 31u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08843DE0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843DE0u) goto L_08843DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843DE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843F90;
      }
      goto L_08843DE8;
    }
L_08843DE8:
    aot_gpr_31 = (0x08843DF0u);
    aot_gpr_4 = (aot_gpr_17 + static_cast<std::uint32_t>(1392));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 138u, 0x08830A50u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843DF0u) goto L_08843DF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843DF0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3776));
    aot_gpr_31 = (0x08843DFCu);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 80u, 0x088305ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843DFCu) goto L_08843DFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843DFC:
    ctx.gpr[18] = (aot_gpr_2 | 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(3792));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(3808));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(3824));
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843E20u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 148u, 0x08830B10u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E20u) goto L_08843E20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E20:
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843E30u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E30u) goto L_08843E30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E30:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(3840));
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843E48u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 101u, 0x08830794u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E48u) goto L_08843E48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E48:
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843E58u);
    aot_gpr_5 = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 44u, 0x08830310u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E58u) goto L_08843E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E58:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08843E68u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 43u, 0x088302F8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E68u) goto L_08843E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E68:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3856));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843E88u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 79u, 0x088305D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E88u) goto L_08843E88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E88:
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08843E98u);
    ctx.gpr[6] = (aot_gpr_2 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 42u, 0x088302E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843E98u) goto L_08843E98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843E98:
    aot_gpr_4 = (16672u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843EA8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843EA8u) goto L_08843EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843EA8:
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17076u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x08843EC0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 61u, 0x08830424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843EC0u) goto L_08843EC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843EC0:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (0u | 44u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08843EF0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843EF0u) goto L_08843EF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08843F90;
      }
      goto L_08843EF8;
    }
L_08843EF8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(1704)));
    aot_fpr_20 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843F10u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F10u) goto L_08843F10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843F10:
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_20 = aot_fpr_20 - aot_fpr_14;
    aot_gpr_31 = (0x08843F28u);
    aot_gpr_4 = (aot_gpr_17 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 136u, 0x08830A20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F28u) goto L_08843F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843F28:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-994));
    { const bool branch_taken = aot_gpr_2 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08843F44;
      }
      goto L_08843F34;
    }
L_08843F34:
    aot_gpr_4 = (16153u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    goto L_08843F44;
L_08843F44:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3872), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3880), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3880));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3884), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08843F6Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3884));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 58u, 0x088303FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F6Cu) goto L_08843F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843F6C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(3876), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(3876));
    aot_gpr_31 = (0x08843F7Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(3872));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 47u, 0x08830368u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F7Cu) goto L_08843F7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843F7C:
    aot_gpr_31 = (0x08843F84u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 69u, 0x088304E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F84u) goto L_08843F84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843F84:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_31 = (0x08843F90u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F90u) goto L_08843F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843F90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_17 + static_cast<std::uint32_t>(352)));
    aot_gpr_31 = (0x08843F9Cu);
    aot_gpr_5 = (0u | 512u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 165u, 0x08830CD4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843F9Cu) goto L_08843F9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843F9C:
    { const bool branch_taken = aot_gpr_2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08843FF8;
      }
      goto L_08843FA4;
    }
L_08843FA4:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843FB0u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843FB0u) goto L_08843FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843FB0:
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843FCCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843FCCu) goto L_08843FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843FCC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08843FDCu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843FDCu) goto L_08843FDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843FDC:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_31 = (0x08843FF0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08843FF0u) goto L_08843FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08843FF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0016_entry, 16u, 2u, 0x08844010u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08843FF8;
    }
L_08843FF8:
    aot_gpr_4 = (ctx.gpr[16] | 0u);
    aot_gpr_31 = (0x08844004u);
    aot_gpr_5 = (0u | 1u);
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0011_entry, 11u, 181u, 0x08830D98u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }());
    AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0015(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0015_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_15(Runtime &runtime) {
    runtime.register_generated_unit(15u, 0x08840000u, 16384u, &recomp_unit_0015, &recomp_unit_0015_entry);
    runtime.register_function(0x08840000u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840008u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884005Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840064u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884007Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840084u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840090u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840098u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088400FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840108u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840120u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884012Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840134u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840140u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840148u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840154u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884015Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884017Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840180u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884019Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088401F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840214u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840218u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884021Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840230u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840238u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840244u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884024Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840258u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840278u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840288u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840294u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088402FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884030Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884031Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840324u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884032Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840338u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840340u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840344u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840350u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840358u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840388u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884038Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884039Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088403F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840400u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884040Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840414u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884042Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840440u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840448u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840460u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884046Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840474u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840480u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884049Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088404FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840508u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840520u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884052Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884053Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840544u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840560u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884056Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840578u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840588u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840590u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884059Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088405F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840640u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840654u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840660u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840668u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840674u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884067Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088406F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840760u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840768u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840774u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884077Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088407F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840860u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840868u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840874u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884087Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840888u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840890u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840918u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840924u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884092Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088409D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840A6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840AFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840B70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840BD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840C9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840CFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840D94u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840DFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840E68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840ED8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840EE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F60u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840F68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08840FFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884101Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841024u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841030u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841038u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088410C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841134u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884113Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841148u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841150u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884119Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088411FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841204u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841210u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841218u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841230u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884123Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841244u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884125Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841268u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841270u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884127Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841288u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841294u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088412F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841304u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884130Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841318u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841324u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841330u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884133Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841348u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841354u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841360u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884136Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841394u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884139Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088413F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884144Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841454u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884145Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841464u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088414E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841548u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841550u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884155Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841564u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088415C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884161Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841628u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841630u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841638u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841640u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884169Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088416B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841718u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841720u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884172Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841734u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841790u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841798u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088417BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841818u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841820u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884182Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841834u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841894u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884189Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088418B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884190Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841914u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884191Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841924u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841930u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841938u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841940u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841948u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841950u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841958u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841960u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841968u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841974u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884197Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841984u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884198Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088419E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A80u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841A90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841ACCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AD4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841ADCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841AFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841B84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BD4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841BFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C80u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841C8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841CF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841D54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841DD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841E94u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841EA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841EACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841ED4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841EE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841EE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841EF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841F8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08841FF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842000u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842008u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842070u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884207Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842084u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842090u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884209Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088420E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884210Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842118u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842120u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884212Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842138u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842144u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842150u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884215Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842168u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842174u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842180u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088421A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088421B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088421BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088421C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088421ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088421F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842200u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842228u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842230u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884223Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842244u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884226Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842278u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842280u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088422F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842304u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842310u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842318u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842338u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842340u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884235Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842374u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842380u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884238Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088423ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842400u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842404u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842414u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884243Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884247Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842494u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424C4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088424E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842500u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842508u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842510u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884251Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842528u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842534u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842540u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842548u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842558u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842564u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842570u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884257Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842588u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842590u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884259Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088425C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088425D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088425D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088425E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088425F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842604u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842614u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842634u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884263Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842648u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842650u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842658u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842664u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884267Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842684u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842690u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088426A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088426B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088426C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088426CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088426E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088426F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842710u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842720u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842730u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842764u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884276Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842774u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842780u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088427ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884280Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884281Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884282Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842844u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842874u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884287Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842894u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088428F4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842904u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884290Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842918u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842924u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884292Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842938u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842954u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842964u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842978u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842980u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884298Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842998u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088429F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842A88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AB4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842ADCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842AF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B1Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842B98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842BF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C40u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842C98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842CECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D14u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842D98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842DF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E80u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842E8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842ECCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842ED4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842EECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F4Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F5Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842F90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FBCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08842FF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843000u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843008u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843014u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843020u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843030u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843038u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843044u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884305Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843064u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843078u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088430ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843104u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884310Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843118u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884312Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843134u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884314Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843164u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843170u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843180u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088431ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843208u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843218u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884322Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843234u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843240u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884324Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884325Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843264u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843270u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843278u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843284u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843294u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884329Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088432DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843300u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843308u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884331Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884332Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843338u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843344u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884334Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843358u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843364u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843374u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843380u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884338Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843398u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433B4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088433FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884341Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843434u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843440u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884344Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843458u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843460u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884347Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884348Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843498u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434C0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434E8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088434F0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843500u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884350Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884351Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843528u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843534u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843554u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843560u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884356Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843578u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843580u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843588u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843598u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435D4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088435F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843600u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843608u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843614u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884361Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843628u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843634u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843644u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843650u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884365Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843668u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843674u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884367Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843688u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843694u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436CCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436D8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088436F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843708u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843714u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843720u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884372Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843738u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843740u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884374Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843758u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843768u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843774u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843780u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843790u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884379Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437A4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437B8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437C8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437DCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088437FCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884380Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843818u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843824u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843834u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843858u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843860u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843874u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884387Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843884u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843890u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438A8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438B0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438BCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438E4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438ECu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088438F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843914u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843924u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884393Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884394Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x0884395Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843990u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843998u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439A0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439ACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439D0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439E0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x088439F8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A08u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A18u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843A70u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AA0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843AF4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B38u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B50u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B80u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843B90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BB8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BC4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843BF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C00u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C0Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C2Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C54u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C78u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843C9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CC8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CD0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CD8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CE4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843CFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D04u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D24u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D3Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D64u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D74u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D8Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843D9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DACu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DE0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DE8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843DFCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E20u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E30u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E48u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E58u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E68u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E88u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843E98u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EA8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EC0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843EF8u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F10u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F28u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F34u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F44u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F6Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F7Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F84u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F90u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843F9Cu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FA4u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FB0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FCCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FDCu, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FF0u, &recomp_unit_0015, "recomp_unit_0015");
    runtime.register_function(0x08843FF8u, &recomp_unit_0015, "recomp_unit_0015");
}
} // namespace psprecomp
