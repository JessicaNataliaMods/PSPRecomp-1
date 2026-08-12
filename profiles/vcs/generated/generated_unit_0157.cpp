#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0157[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0,
    8, 9, 0, 10, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 31, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 65,
    0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 71, 0, 0, 72, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 77, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 84, 0, 0, 85,
    0, 0, 86, 0, 87, 88, 0, 89, 0, 0, 90, 0, 91, 0, 92, 93, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 102, 103, 0, 0,
    104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 108, 0, 0, 109, 0, 110, 111,
    0, 112, 0, 0, 113, 0, 114, 0, 115, 116, 0, 117, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 122, 123, 0, 0, 124, 0, 0, 0,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 0, 130,
    0, 131, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 137, 0, 138, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 142, 0, 143, 144, 0, 0, 145,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150,
    0, 0, 151, 0, 152, 153, 0, 154, 0, 0, 155, 0, 156, 0, 157, 158, 0, 159, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 163, 0, 164, 165,
    0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    169, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 173, 0, 0, 174, 0, 0, 175, 0, 176, 177, 0, 178, 0, 0,
    179, 0, 180, 0, 181, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 189, 0, 0, 190, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 196, 0, 0, 197, 0,
    0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 201, 0, 0, 202, 203, 0, 0, 204, 0, 0, 205, 0, 206, 207, 0, 208, 0, 0, 209, 0, 210, 0, 211, 212, 0, 213, 0, 214,
    0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 219, 0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0,
    0, 0, 225, 0, 0, 226, 227, 0, 0, 228, 0, 0, 229, 0, 230, 231, 0, 232, 0, 0, 233, 0, 234, 0, 235, 236, 0, 237, 0, 238, 0, 239,
    0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0,
    249, 0, 0, 250, 251, 0, 0, 252, 0, 0, 253, 0, 254, 255, 0, 256, 0, 0, 257, 0, 258, 0, 259, 260, 0, 261, 0, 262, 0, 263, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 275, 276, 0, 277, 0,
    0, 278, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 282, 0, 283, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 288, 0, 0, 289, 0, 0,
    0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0,
    0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 295, 296, 0, 0, 297, 0, 0, 298, 0, 299, 300, 0, 301, 0, 0, 302, 0, 303,
    0, 304, 305, 0, 306, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320,
    0, 0, 321, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0, 0, 0,
    329, 0, 330, 0, 331, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 339, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 344, 0, 345, 346, 0, 347, 0, 0, 0, 348, 0, 0, 349,
    0, 0, 350, 0, 351, 0, 0, 0, 0, 352, 353, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0,
    0, 0, 360, 0, 361, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 380,
    0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0,
    387, 388, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 391, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0,
    395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 399, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0,
    0, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 408, 0, 409, 410, 0, 0, 0, 411, 0, 0, 412, 0, 413, 414, 0, 415, 0, 0,
    0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 420, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0,
    0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 441,
    0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0,
    450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0,
    454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 460, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 466, 0, 467,
    0, 0, 468, 0, 469, 0, 0, 0, 470, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 475, 476, 0, 477, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 0, 489,
    0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0,
    0, 503, 504, 505, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 511, 0,
    0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 519, 0,
    520, 0, 521, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    528, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536,
    0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 543,
    0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548, 0, 549, 550, 0, 0, 0,
    0, 0, 0, 551, 0, 0, 0, 0, 0, 552, 553, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0,
    559, 0, 560, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 567, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 0, 575, 0, 576,
    0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0,
    583, 0, 0, 0, 0, 584, 0, 585, 0, 586, 0, 0, 0, 587, 0, 588, 589, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 600, 0, 0, 0,
    601, 0, 0, 0, 0, 602, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 608, 609, 0, 0, 0, 0, 610,
    0, 0, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627,
    0, 628, 629, 0, 0, 630, 0, 631, 0, 0, 0, 632, 0, 633, 0, 634, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0,
    0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 646,
    647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654,
    0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0,
    0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0,
    0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 673, 674, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 678, 0,
    0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 685,
    0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    689, 690, 0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 695, 0, 696, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 705, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 710, 0, 711, 712, 0, 0, 0, 713, 0, 0, 0,
    714, 0, 715, 0, 716, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 724,
    0, 725, 0, 0, 0, 726, 0, 0, 727, 728, 0, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 734, 0,
    735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0,
    740, 0, 741, 0, 742, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 746, 0, 747, 0, 0, 748, 0, 0, 0, 0, 749, 0, 750, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 757,
    758, 0, 0, 0, 759, 0, 0, 0, 760, 0, 761, 0, 762, 0, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 772, 773, 0, 0, 0, 774,
    0, 0, 0, 775, 0, 776, 0, 777, 0, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781,
    0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 787, 788, 0, 0, 0, 789, 0, 0, 0, 790, 0,
    791, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796,
};
void recomp_unit_0157_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A78000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0157[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A78000;
    case 2u: goto L_08A78064;
    case 3u: goto L_08A78068;
    case 4u: goto L_08A78074;
    case 5u: goto L_08A780C8;
    case 6u: goto L_08A780E8;
    case 7u: goto L_08A780F8;
    case 8u: goto L_08A78100;
    case 9u: goto L_08A78104;
    case 10u: goto L_08A7810C;
    case 11u: goto L_08A78110;
    case 12u: goto L_08A78118;
    case 13u: goto L_08A78164;
    case 14u: goto L_08A78180;
    case 15u: goto L_08A781AC;
    case 16u: goto L_08A781B0;
    case 17u: goto L_08A781D4;
    case 18u: goto L_08A781DC;
    case 19u: goto L_08A78268;
    case 20u: goto L_08A782C8;
    case 21u: goto L_08A782D4;
    case 22u: goto L_08A782E4;
    case 23u: goto L_08A78318;
    case 24u: goto L_08A78328;
    case 25u: goto L_08A78354;
    case 26u: goto L_08A78364;
    case 27u: goto L_08A7838C;
    case 28u: goto L_08A78398;
    case 29u: goto L_08A783C4;
    case 30u: goto L_08A783E0;
    case 31u: goto L_08A783E4;
    case 32u: goto L_08A7844C;
    case 33u: goto L_08A78458;
    case 34u: goto L_08A78464;
    case 35u: goto L_08A784AC;
    case 36u: goto L_08A7851C;
    case 37u: goto L_08A7858C;
    case 38u: goto L_08A7859C;
    case 39u: goto L_08A785AC;
    case 40u: goto L_08A785B4;
    case 41u: goto L_08A785BC;
    case 42u: goto L_08A78800;
    case 43u: goto L_08A78810;
    case 44u: goto L_08A78820;
    case 45u: goto L_08A7883C;
    case 46u: goto L_08A7884C;
    case 47u: goto L_08A7885C;
    case 48u: goto L_08A78940;
    case 49u: goto L_08A78948;
    case 50u: goto L_08A7896C;
    case 51u: goto L_08A78988;
    case 52u: goto L_08A789A4;
    case 53u: goto L_08A789AC;
    case 54u: goto L_08A789D0;
    case 55u: goto L_08A789EC;
    case 56u: goto L_08A78A08;
    case 57u: goto L_08A78A44;
    case 58u: goto L_08A78A4C;
    case 59u: goto L_08A78A58;
    case 60u: goto L_08A78AE0;
    case 61u: goto L_08A78B44;
    case 62u: goto L_08A78B64;
    case 63u: goto L_08A78B70;
    case 64u: goto L_08A78B78;
    case 65u: goto L_08A78B7C;
    case 66u: goto L_08A78B84;
    case 67u: goto L_08A78B98;
    case 68u: goto L_08A78BC0;
    case 69u: goto L_08A78BCC;
    case 70u: goto L_08A78BD4;
    case 71u: goto L_08A78BD8;
    case 72u: goto L_08A78BE4;
    case 73u: goto L_08A78BFC;
    case 74u: goto L_08A78C24;
    case 75u: goto L_08A78C30;
    case 76u: goto L_08A78C38;
    case 77u: goto L_08A78C3C;
    case 78u: goto L_08A78C48;
    case 79u: goto L_08A78C60;
    case 80u: goto L_08A78CA8;
    case 81u: goto L_08A78CC8;
    case 82u: goto L_08A78CE0;
    case 83u: goto L_08A78CEC;
    case 84u: goto L_08A78CF0;
    case 85u: goto L_08A78CFC;
    case 86u: goto L_08A78D08;
    case 87u: goto L_08A78D10;
    case 88u: goto L_08A78D14;
    case 89u: goto L_08A78D1C;
    case 90u: goto L_08A78D28;
    case 91u: goto L_08A78D30;
    case 92u: goto L_08A78D38;
    case 93u: goto L_08A78D3C;
    case 94u: goto L_08A78D44;
    case 95u: goto L_08A78D4C;
    case 96u: goto L_08A78D54;
    case 97u: goto L_08A78D70;
    case 98u: goto L_08A78D84;
    case 99u: goto L_08A78DB4;
    case 100u: goto L_08A78DDC;
    case 101u: goto L_08A78DE8;
    case 102u: goto L_08A78DF0;
    case 103u: goto L_08A78DF4;
    case 104u: goto L_08A78E00;
    case 105u: goto L_08A78E18;
    case 106u: goto L_08A78E4C;
    case 107u: goto L_08A78E58;
    case 108u: goto L_08A78E64;
    case 109u: goto L_08A78E70;
    case 110u: goto L_08A78E78;
    case 111u: goto L_08A78E7C;
    case 112u: goto L_08A78E84;
    case 113u: goto L_08A78E90;
    case 114u: goto L_08A78E98;
    case 115u: goto L_08A78EA0;
    case 116u: goto L_08A78EA4;
    case 117u: goto L_08A78EAC;
    case 118u: goto L_08A78EB4;
    case 119u: goto L_08A78EBC;
    case 120u: goto L_08A78ECC;
    case 121u: goto L_08A78ED8;
    case 122u: goto L_08A78EE0;
    case 123u: goto L_08A78EE4;
    case 124u: goto L_08A78EF0;
    case 125u: goto L_08A78F04;
    case 126u: goto L_08A78F24;
    case 127u: goto L_08A78F58;
    case 128u: goto L_08A78F64;
    case 129u: goto L_08A78F70;
    case 130u: goto L_08A78F7C;
    case 131u: goto L_08A78F84;
    case 132u: goto L_08A78F88;
    case 133u: goto L_08A78F90;
    case 134u: goto L_08A78F9C;
    case 135u: goto L_08A78FA4;
    case 136u: goto L_08A78FAC;
    case 137u: goto L_08A78FB0;
    case 138u: goto L_08A78FB8;
    case 139u: goto L_08A78FC0;
    case 140u: goto L_08A78FC8;
    case 141u: goto L_08A78FD8;
    case 142u: goto L_08A78FE4;
    case 143u: goto L_08A78FEC;
    case 144u: goto L_08A78FF0;
    case 145u: goto L_08A78FFC;
    case 146u: goto L_08A79010;
    case 147u: goto L_08A79030;
    case 148u: goto L_08A79064;
    case 149u: goto L_08A79070;
    case 150u: goto L_08A7907C;
    case 151u: goto L_08A79088;
    case 152u: goto L_08A79090;
    case 153u: goto L_08A79094;
    case 154u: goto L_08A7909C;
    case 155u: goto L_08A790A8;
    case 156u: goto L_08A790B0;
    case 157u: goto L_08A790B8;
    case 158u: goto L_08A790BC;
    case 159u: goto L_08A790C4;
    case 160u: goto L_08A790CC;
    case 161u: goto L_08A790D4;
    case 162u: goto L_08A790E4;
    case 163u: goto L_08A790F0;
    case 164u: goto L_08A790F8;
    case 165u: goto L_08A790FC;
    case 166u: goto L_08A79108;
    case 167u: goto L_08A7911C;
    case 168u: goto L_08A7913C;
    case 169u: goto L_08A79180;
    case 170u: goto L_08A791A0;
    case 171u: goto L_08A791B8;
    case 172u: goto L_08A791C4;
    case 173u: goto L_08A791C8;
    case 174u: goto L_08A791D4;
    case 175u: goto L_08A791E0;
    case 176u: goto L_08A791E8;
    case 177u: goto L_08A791EC;
    case 178u: goto L_08A791F4;
    case 179u: goto L_08A79200;
    case 180u: goto L_08A79208;
    case 181u: goto L_08A79210;
    case 182u: goto L_08A79214;
    case 183u: goto L_08A7921C;
    case 184u: goto L_08A79224;
    case 185u: goto L_08A7922C;
    case 186u: goto L_08A79248;
    case 187u: goto L_08A79254;
    case 188u: goto L_08A7925C;
    case 189u: goto L_08A79260;
    case 190u: goto L_08A7926C;
    case 191u: goto L_08A79280;
    case 192u: goto L_08A792AC;
    case 193u: goto L_08A792D4;
    case 194u: goto L_08A792E0;
    case 195u: goto L_08A792E8;
    case 196u: goto L_08A792EC;
    case 197u: goto L_08A792F8;
    case 198u: goto L_08A79310;
    case 199u: goto L_08A79358;
    case 200u: goto L_08A79378;
    case 201u: goto L_08A79390;
    case 202u: goto L_08A7939C;
    case 203u: goto L_08A793A0;
    case 204u: goto L_08A793AC;
    case 205u: goto L_08A793B8;
    case 206u: goto L_08A793C0;
    case 207u: goto L_08A793C4;
    case 208u: goto L_08A793CC;
    case 209u: goto L_08A793D8;
    case 210u: goto L_08A793E0;
    case 211u: goto L_08A793E8;
    case 212u: goto L_08A793EC;
    case 213u: goto L_08A793F4;
    case 214u: goto L_08A793FC;
    case 215u: goto L_08A79404;
    case 216u: goto L_08A79420;
    case 217u: goto L_08A7942C;
    case 218u: goto L_08A79434;
    case 219u: goto L_08A79438;
    case 220u: goto L_08A79444;
    case 221u: goto L_08A79458;
    case 222u: goto L_08A79488;
    case 223u: goto L_08A794D0;
    case 224u: goto L_08A794F0;
    case 225u: goto L_08A79508;
    case 226u: goto L_08A79514;
    case 227u: goto L_08A79518;
    case 228u: goto L_08A79524;
    case 229u: goto L_08A79530;
    case 230u: goto L_08A79538;
    case 231u: goto L_08A7953C;
    case 232u: goto L_08A79544;
    case 233u: goto L_08A79550;
    case 234u: goto L_08A79558;
    case 235u: goto L_08A79560;
    case 236u: goto L_08A79564;
    case 237u: goto L_08A7956C;
    case 238u: goto L_08A79574;
    case 239u: goto L_08A7957C;
    case 240u: goto L_08A79598;
    case 241u: goto L_08A795A4;
    case 242u: goto L_08A795AC;
    case 243u: goto L_08A795B0;
    case 244u: goto L_08A795BC;
    case 245u: goto L_08A795D0;
    case 246u: goto L_08A79600;
    case 247u: goto L_08A79648;
    case 248u: goto L_08A79668;
    case 249u: goto L_08A79680;
    case 250u: goto L_08A7968C;
    case 251u: goto L_08A79690;
    case 252u: goto L_08A7969C;
    case 253u: goto L_08A796A8;
    case 254u: goto L_08A796B0;
    case 255u: goto L_08A796B4;
    case 256u: goto L_08A796BC;
    case 257u: goto L_08A796C8;
    case 258u: goto L_08A796D0;
    case 259u: goto L_08A796D8;
    case 260u: goto L_08A796DC;
    case 261u: goto L_08A796E4;
    case 262u: goto L_08A796EC;
    case 263u: goto L_08A796F4;
    case 264u: goto L_08A79710;
    case 265u: goto L_08A7971C;
    case 266u: goto L_08A79724;
    case 267u: goto L_08A79728;
    case 268u: goto L_08A79734;
    case 269u: goto L_08A79748;
    case 270u: goto L_08A79778;
    case 271u: goto L_08A797B0;
    case 272u: goto L_08A797B8;
    case 273u: goto L_08A797D8;
    case 274u: goto L_08A797E4;
    case 275u: goto L_08A797EC;
    case 276u: goto L_08A797F0;
    case 277u: goto L_08A797F8;
    case 278u: goto L_08A79804;
    case 279u: goto L_08A79810;
    case 280u: goto L_08A79818;
    case 281u: goto L_08A79824;
    case 282u: goto L_08A79830;
    case 283u: goto L_08A79838;
    case 284u: goto L_08A7983C;
    case 285u: goto L_08A79850;
    case 286u: goto L_08A7985C;
    case 287u: goto L_08A79864;
    case 288u: goto L_08A79868;
    case 289u: goto L_08A79874;
    case 290u: goto L_08A79888;
    case 291u: goto L_08A798AC;
    case 292u: goto L_08A798F4;
    case 293u: goto L_08A79914;
    case 294u: goto L_08A7992C;
    case 295u: goto L_08A79938;
    case 296u: goto L_08A7993C;
    case 297u: goto L_08A79948;
    case 298u: goto L_08A79954;
    case 299u: goto L_08A7995C;
    case 300u: goto L_08A79960;
    case 301u: goto L_08A79968;
    case 302u: goto L_08A79974;
    case 303u: goto L_08A7997C;
    case 304u: goto L_08A79984;
    case 305u: goto L_08A79988;
    case 306u: goto L_08A79990;
    case 307u: goto L_08A79998;
    case 308u: goto L_08A799A0;
    case 309u: goto L_08A799BC;
    case 310u: goto L_08A799C8;
    case 311u: goto L_08A799D0;
    case 312u: goto L_08A799D4;
    case 313u: goto L_08A799E0;
    case 314u: goto L_08A799F4;
    case 315u: goto L_08A79A24;
    case 316u: goto L_08A79A38;
    case 317u: goto L_08A79A40;
    case 318u: goto L_08A79A48;
    case 319u: goto L_08A79A58;
    case 320u: goto L_08A79A7C;
    case 321u: goto L_08A79A88;
    case 322u: goto L_08A79A90;
    case 323u: goto L_08A79A9C;
    case 324u: goto L_08A79AB4;
    case 325u: goto L_08A79AD4;
    case 326u: goto L_08A79ADC;
    case 327u: goto L_08A79AE4;
    case 328u: goto L_08A79AF0;
    case 329u: goto L_08A79B00;
    case 330u: goto L_08A79B08;
    case 331u: goto L_08A79B10;
    case 332u: goto L_08A79B14;
    case 333u: goto L_08A79B24;
    case 334u: goto L_08A79B48;
    case 335u: goto L_08A79BAC;
    case 336u: goto L_08A79BC4;
    case 337u: goto L_08A79BCC;
    case 338u: goto L_08A79BD8;
    case 339u: goto L_08A79C04;
    case 340u: goto L_08A79C18;
    case 341u: goto L_08A79C20;
    case 342u: goto L_08A79C30;
    case 343u: goto L_08A79C38;
    case 344u: goto L_08A79C4C;
    case 345u: goto L_08A79C54;
    case 346u: goto L_08A79C58;
    case 347u: goto L_08A79C60;
    case 348u: goto L_08A79C70;
    case 349u: goto L_08A79C7C;
    case 350u: goto L_08A79C88;
    case 351u: goto L_08A79C90;
    case 352u: goto L_08A79CA4;
    case 353u: goto L_08A79CA8;
    case 354u: goto L_08A79CB4;
    case 355u: goto L_08A79CC4;
    case 356u: goto L_08A79CD4;
    case 357u: goto L_08A79CDC;
    case 358u: goto L_08A79CEC;
    case 359u: goto L_08A79CF4;
    case 360u: goto L_08A79D08;
    case 361u: goto L_08A79D10;
    case 362u: goto L_08A79D14;
    case 363u: goto L_08A79D1C;
    case 364u: goto L_08A79D30;
    case 365u: goto L_08A79D40;
    case 366u: goto L_08A79D4C;
    case 367u: goto L_08A79D5C;
    case 368u: goto L_08A79D70;
    case 369u: goto L_08A79D84;
    case 370u: goto L_08A79DA8;
    case 371u: goto L_08A79DB4;
    case 372u: goto L_08A79DC4;
    case 373u: goto L_08A79DEC;
    case 374u: goto L_08A79DF8;
    case 375u: goto L_08A79E30;
    case 376u: goto L_08A79E34;
    case 377u: goto L_08A79E50;
    case 378u: goto L_08A79E64;
    case 379u: goto L_08A79E78;
    case 380u: goto L_08A79E7C;
    case 381u: goto L_08A79E98;
    case 382u: goto L_08A79EAC;
    case 383u: goto L_08A79EC0;
    case 384u: goto L_08A79EC4;
    case 385u: goto L_08A79EE0;
    case 386u: goto L_08A79EF4;
    case 387u: goto L_08A79F00;
    case 388u: goto L_08A79F04;
    case 389u: goto L_08A79F1C;
    case 390u: goto L_08A79F28;
    case 391u: goto L_08A79F30;
    case 392u: goto L_08A79F38;
    case 393u: goto L_08A79F40;
    case 394u: goto L_08A79F5C;
    case 395u: goto L_08A79F80;
    case 396u: goto L_08A79F88;
    case 397u: goto L_08A79F90;
    case 398u: goto L_08A79FB0;
    case 399u: goto L_08A79FB4;
    case 400u: goto L_08A79FC8;
    case 401u: goto L_08A79FD4;
    case 402u: goto L_08A79FF0;
    case 403u: goto L_08A79FF8;
    case 404u: goto L_08A7A00C;
    case 405u: goto L_08A7A014;
    case 406u: goto L_08A7A01C;
    case 407u: goto L_08A7A024;
    case 408u: goto L_08A7A038;
    case 409u: goto L_08A7A040;
    case 410u: goto L_08A7A044;
    case 411u: goto L_08A7A054;
    case 412u: goto L_08A7A060;
    case 413u: goto L_08A7A068;
    case 414u: goto L_08A7A06C;
    case 415u: goto L_08A7A074;
    case 416u: goto L_08A7A094;
    case 417u: goto L_08A7A0B0;
    case 418u: goto L_08A7A0B8;
    case 419u: goto L_08A7A0C0;
    case 420u: goto L_08A7A0D4;
    case 421u: goto L_08A7A0D8;
    case 422u: goto L_08A7A0F8;
    case 423u: goto L_08A7A10C;
    case 424u: goto L_08A7A11C;
    case 425u: goto L_08A7A12C;
    case 426u: goto L_08A7A134;
    case 427u: goto L_08A7A148;
    case 428u: goto L_08A7A15C;
    case 429u: goto L_08A7A190;
    case 430u: goto L_08A7A1A0;
    case 431u: goto L_08A7A1C0;
    case 432u: goto L_08A7A1D4;
    case 433u: goto L_08A7A1E4;
    case 434u: goto L_08A7A1F4;
    case 435u: goto L_08A7A210;
    case 436u: goto L_08A7A228;
    case 437u: goto L_08A7A230;
    case 438u: goto L_08A7A238;
    case 439u: goto L_08A7A268;
    case 440u: goto L_08A7A270;
    case 441u: goto L_08A7A27C;
    case 442u: goto L_08A7A284;
    case 443u: goto L_08A7A290;
    case 444u: goto L_08A7A2A4;
    case 445u: goto L_08A7A2C8;
    case 446u: goto L_08A7A2DC;
    case 447u: goto L_08A7A2E4;
    case 448u: goto L_08A7A2EC;
    case 449u: goto L_08A7A2F4;
    case 450u: goto L_08A7A300;
    case 451u: goto L_08A7A368;
    case 452u: goto L_08A7A370;
    case 453u: goto L_08A7A378;
    case 454u: goto L_08A7A380;
    case 455u: goto L_08A7A394;
    case 456u: goto L_08A7A3B0;
    case 457u: goto L_08A7A3D0;
    case 458u: goto L_08A7A3E0;
    case 459u: goto L_08A7A3F0;
    case 460u: goto L_08A7A3F4;
    case 461u: goto L_08A7A420;
    case 462u: goto L_08A7A450;
    case 463u: goto L_08A7A458;
    case 464u: goto L_08A7A464;
    case 465u: goto L_08A7A46C;
    case 466u: goto L_08A7A474;
    case 467u: goto L_08A7A47C;
    case 468u: goto L_08A7A488;
    case 469u: goto L_08A7A490;
    case 470u: goto L_08A7A4A0;
    case 471u: goto L_08A7A4A4;
    case 472u: goto L_08A7A4AC;
    case 473u: goto L_08A7A4C8;
    case 474u: goto L_08A7A4D0;
    case 475u: goto L_08A7A4D8;
    case 476u: goto L_08A7A4DC;
    case 477u: goto L_08A7A4E4;
    case 478u: goto L_08A7A51C;
    case 479u: goto L_08A7A534;
    case 480u: goto L_08A7A540;
    case 481u: goto L_08A7A54C;
    case 482u: goto L_08A7A558;
    case 483u: goto L_08A7A568;
    case 484u: goto L_08A7A5B8;
    case 485u: goto L_08A7A5CC;
    case 486u: goto L_08A7A5D8;
    case 487u: goto L_08A7A5E4;
    case 488u: goto L_08A7A5F0;
    case 489u: goto L_08A7A5FC;
    case 490u: goto L_08A7A608;
    case 491u: goto L_08A7A614;
    case 492u: goto L_08A7A620;
    case 493u: goto L_08A7A62C;
    case 494u: goto L_08A7A638;
    case 495u: goto L_08A7A658;
    case 496u: goto L_08A7A664;
    case 497u: goto L_08A7A690;
    case 498u: goto L_08A7A6AC;
    case 499u: goto L_08A7A6B8;
    case 500u: goto L_08A7A6C0;
    case 501u: goto L_08A7A6D0;
    case 502u: goto L_08A7A6EC;
    case 503u: goto L_08A7A704;
    case 504u: goto L_08A7A708;
    case 505u: goto L_08A7A70C;
    case 506u: goto L_08A7A714;
    case 507u: goto L_08A7A730;
    case 508u: goto L_08A7A738;
    case 509u: goto L_08A7A75C;
    case 510u: goto L_08A7A774;
    case 511u: goto L_08A7A778;
    case 512u: goto L_08A7A784;
    case 513u: goto L_08A7A79C;
    case 514u: goto L_08A7A7B8;
    case 515u: goto L_08A7A7C0;
    case 516u: goto L_08A7A7C8;
    case 517u: goto L_08A7A7E0;
    case 518u: goto L_08A7A7F0;
    case 519u: goto L_08A7A7F8;
    case 520u: goto L_08A7A800;
    case 521u: goto L_08A7A808;
    case 522u: goto L_08A7A810;
    case 523u: goto L_08A7A818;
    case 524u: goto L_08A7A834;
    case 525u: goto L_08A7A844;
    case 526u: goto L_08A7A854;
    case 527u: goto L_08A7A86C;
    case 528u: goto L_08A7A880;
    case 529u: goto L_08A7A88C;
    case 530u: goto L_08A7A894;
    case 531u: goto L_08A7A89C;
    case 532u: goto L_08A7A8AC;
    case 533u: goto L_08A7A8B8;
    case 534u: goto L_08A7A8D0;
    case 535u: goto L_08A7A8E4;
    case 536u: goto L_08A7A8FC;
    case 537u: goto L_08A7A904;
    case 538u: goto L_08A7A90C;
    case 539u: goto L_08A7A928;
    case 540u: goto L_08A7A94C;
    case 541u: goto L_08A7AA6C;
    case 542u: goto L_08A7AA74;
    case 543u: goto L_08A7AA7C;
    case 544u: goto L_08A7AA90;
    case 545u: goto L_08A7AAB0;
    case 546u: goto L_08A7AAD0;
    case 547u: goto L_08A7AADC;
    case 548u: goto L_08A7AAE4;
    case 549u: goto L_08A7AAEC;
    case 550u: goto L_08A7AAF0;
    case 551u: goto L_08A7AB0C;
    case 552u: goto L_08A7AB24;
    case 553u: goto L_08A7AB28;
    case 554u: goto L_08A7AB30;
    case 555u: goto L_08A7AB38;
    case 556u: goto L_08A7AB54;
    case 557u: goto L_08A7AB6C;
    case 558u: goto L_08A7AB78;
    case 559u: goto L_08A7AB80;
    case 560u: goto L_08A7AB88;
    case 561u: goto L_08A7AB90;
    case 562u: goto L_08A7AB9C;
    case 563u: goto L_08A7ABA4;
    case 564u: goto L_08A7ABC0;
    case 565u: goto L_08A7ABD0;
    case 566u: goto L_08A7ABE0;
    case 567u: goto L_08A7ABE4;
    case 568u: goto L_08A7AC10;
    case 569u: goto L_08A7AC40;
    case 570u: goto L_08A7AC48;
    case 571u: goto L_08A7AC50;
    case 572u: goto L_08A7AC58;
    case 573u: goto L_08A7AC60;
    case 574u: goto L_08A7AC68;
    case 575u: goto L_08A7AC74;
    case 576u: goto L_08A7AC7C;
    case 577u: goto L_08A7AC98;
    case 578u: goto L_08A7ACAC;
    case 579u: goto L_08A7ACB0;
    case 580u: goto L_08A7ACB8;
    case 581u: goto L_08A7ACEC;
    case 582u: goto L_08A7ACF4;
    case 583u: goto L_08A7AD00;
    case 584u: goto L_08A7AD14;
    case 585u: goto L_08A7AD1C;
    case 586u: goto L_08A7AD24;
    case 587u: goto L_08A7AD34;
    case 588u: goto L_08A7AD3C;
    case 589u: goto L_08A7AD40;
    case 590u: goto L_08A7AD48;
    case 591u: goto L_08A7AD54;
    case 592u: goto L_08A7ADA4;
    case 593u: goto L_08A7ADD4;
    case 594u: goto L_08A7AE14;
    case 595u: goto L_08A7AE18;
    case 596u: goto L_08A7AE38;
    case 597u: goto L_08A7AE44;
    case 598u: goto L_08A7AE58;
    case 599u: goto L_08A7AE68;
    case 600u: goto L_08A7AE70;
    case 601u: goto L_08A7AE80;
    case 602u: goto L_08A7AE94;
    case 603u: goto L_08A7AE9C;
    case 604u: goto L_08A7AEA4;
    case 605u: goto L_08A7AEB8;
    case 606u: goto L_08A7AEC4;
    case 607u: goto L_08A7AED4;
    case 608u: goto L_08A7AEE4;
    case 609u: goto L_08A7AEE8;
    case 610u: goto L_08A7AEFC;
    case 611u: goto L_08A7AF0C;
    case 612u: goto L_08A7AF14;
    case 613u: goto L_08A7AF34;
    case 614u: goto L_08A7AF3C;
    case 615u: goto L_08A7AF50;
    case 616u: goto L_08A7AF74;
    case 617u: goto L_08A7AFB8;
    case 618u: goto L_08A7AFC0;
    case 619u: goto L_08A7AFC8;
    case 620u: goto L_08A7AFD0;
    case 621u: goto L_08A7AFE4;
    case 622u: goto L_08A7B018;
    case 623u: goto L_08A7B028;
    case 624u: goto L_08A7B038;
    case 625u: goto L_08A7B054;
    case 626u: goto L_08A7B070;
    case 627u: goto L_08A7B07C;
    case 628u: goto L_08A7B084;
    case 629u: goto L_08A7B088;
    case 630u: goto L_08A7B094;
    case 631u: goto L_08A7B09C;
    case 632u: goto L_08A7B0AC;
    case 633u: goto L_08A7B0B4;
    case 634u: goto L_08A7B0BC;
    case 635u: goto L_08A7B0D0;
    case 636u: goto L_08A7B0D8;
    case 637u: goto L_08A7B0F0;
    case 638u: goto L_08A7B114;
    case 639u: goto L_08A7B11C;
    case 640u: goto L_08A7B124;
    case 641u: goto L_08A7B12C;
    case 642u: goto L_08A7B148;
    case 643u: goto L_08A7B150;
    case 644u: goto L_08A7B158;
    case 645u: goto L_08A7B174;
    case 646u: goto L_08A7B17C;
    case 647u: goto L_08A7B180;
    case 648u: goto L_08A7B19C;
    case 649u: goto L_08A7B214;
    case 650u: goto L_08A7B228;
    case 651u: goto L_08A7B23C;
    case 652u: goto L_08A7B250;
    case 653u: goto L_08A7B26C;
    case 654u: goto L_08A7B27C;
    case 655u: goto L_08A7B294;
    case 656u: goto L_08A7B29C;
    case 657u: goto L_08A7B2AC;
    case 658u: goto L_08A7B2B4;
    case 659u: goto L_08A7B2BC;
    case 660u: goto L_08A7B2C4;
    case 661u: goto L_08A7B2CC;
    case 662u: goto L_08A7B2E8;
    case 663u: goto L_08A7B304;
    case 664u: goto L_08A7B314;
    case 665u: goto L_08A7B324;
    case 666u: goto L_08A7B340;
    case 667u: goto L_08A7B354;
    case 668u: goto L_08A7B360;
    case 669u: goto L_08A7B368;
    case 670u: goto L_08A7B378;
    case 671u: goto L_08A7B394;
    case 672u: goto L_08A7B3AC;
    case 673u: goto L_08A7B3B0;
    case 674u: goto L_08A7B3B4;
    case 675u: goto L_08A7B3BC;
    case 676u: goto L_08A7B3D8;
    case 677u: goto L_08A7B3F0;
    case 678u: goto L_08A7B3F8;
    case 679u: goto L_08A7B414;
    case 680u: goto L_08A7B424;
    case 681u: goto L_08A7B440;
    case 682u: goto L_08A7B450;
    case 683u: goto L_08A7B460;
    case 684u: goto L_08A7B474;
    case 685u: goto L_08A7B47C;
    case 686u: goto L_08A7B484;
    case 687u: goto L_08A7B494;
    case 688u: goto L_08A7B4CC;
    case 689u: goto L_08A7B500;
    case 690u: goto L_08A7B504;
    case 691u: goto L_08A7B514;
    case 692u: goto L_08A7B51C;
    case 693u: goto L_08A7B528;
    case 694u: goto L_08A7B53C;
    case 695u: goto L_08A7B54C;
    case 696u: goto L_08A7B554;
    case 697u: goto L_08A7B560;
    case 698u: goto L_08A7B568;
    case 699u: goto L_08A7B578;
    case 700u: goto L_08A7B5A0;
    case 701u: goto L_08A7B5A8;
    case 702u: goto L_08A7B5B0;
    case 703u: goto L_08A7B5C4;
    case 704u: goto L_08A7B5CC;
    case 705u: goto L_08A7B604;
    case 706u: goto L_08A7B610;
    case 707u: goto L_08A7B61C;
    case 708u: goto L_08A7B630;
    case 709u: goto L_08A7B64C;
    case 710u: goto L_08A7B654;
    case 711u: goto L_08A7B65C;
    case 712u: goto L_08A7B660;
    case 713u: goto L_08A7B670;
    case 714u: goto L_08A7B680;
    case 715u: goto L_08A7B688;
    case 716u: goto L_08A7B690;
    case 717u: goto L_08A7B69C;
    case 718u: goto L_08A7B6BC;
    case 719u: goto L_08A7B6CC;
    case 720u: goto L_08A7B6DC;
    case 721u: goto L_08A7B6E4;
    case 722u: goto L_08A7B6EC;
    case 723u: goto L_08A7B6F4;
    case 724u: goto L_08A7B6FC;
    case 725u: goto L_08A7B704;
    case 726u: goto L_08A7B714;
    case 727u: goto L_08A7B720;
    case 728u: goto L_08A7B724;
    case 729u: goto L_08A7B730;
    case 730u: goto L_08A7B744;
    case 731u: goto L_08A7B74C;
    case 732u: goto L_08A7B754;
    case 733u: goto L_08A7B764;
    case 734u: goto L_08A7B778;
    case 735u: goto L_08A7B780;
    case 736u: goto L_08A7B7B8;
    case 737u: goto L_08A7B7C4;
    case 738u: goto L_08A7B7D0;
    case 739u: goto L_08A7B7E4;
    case 740u: goto L_08A7B800;
    case 741u: goto L_08A7B808;
    case 742u: goto L_08A7B810;
    case 743u: goto L_08A7B814;
    case 744u: goto L_08A7B824;
    case 745u: goto L_08A7B834;
    case 746u: goto L_08A7B83C;
    case 747u: goto L_08A7B844;
    case 748u: goto L_08A7B850;
    case 749u: goto L_08A7B864;
    case 750u: goto L_08A7B86C;
    case 751u: goto L_08A7B8A4;
    case 752u: goto L_08A7B8B0;
    case 753u: goto L_08A7B8BC;
    case 754u: goto L_08A7B8D0;
    case 755u: goto L_08A7B8EC;
    case 756u: goto L_08A7B8F4;
    case 757u: goto L_08A7B8FC;
    case 758u: goto L_08A7B900;
    case 759u: goto L_08A7B910;
    case 760u: goto L_08A7B920;
    case 761u: goto L_08A7B928;
    case 762u: goto L_08A7B930;
    case 763u: goto L_08A7B93C;
    case 764u: goto L_08A7B950;
    case 765u: goto L_08A7B958;
    case 766u: goto L_08A7B990;
    case 767u: goto L_08A7B99C;
    case 768u: goto L_08A7B9A8;
    case 769u: goto L_08A7B9BC;
    case 770u: goto L_08A7B9D8;
    case 771u: goto L_08A7B9E0;
    case 772u: goto L_08A7B9E8;
    case 773u: goto L_08A7B9EC;
    case 774u: goto L_08A7B9FC;
    case 775u: goto L_08A7BA0C;
    case 776u: goto L_08A7BA14;
    case 777u: goto L_08A7BA1C;
    case 778u: goto L_08A7BA28;
    case 779u: goto L_08A7BA3C;
    case 780u: goto L_08A7BA44;
    case 781u: goto L_08A7BA7C;
    case 782u: goto L_08A7BA88;
    case 783u: goto L_08A7BA94;
    case 784u: goto L_08A7BAA8;
    case 785u: goto L_08A7BAC4;
    case 786u: goto L_08A7BACC;
    case 787u: goto L_08A7BAD4;
    case 788u: goto L_08A7BAD8;
    case 789u: goto L_08A7BAE8;
    case 790u: goto L_08A7BAF8;
    case 791u: goto L_08A7BB00;
    case 792u: goto L_08A7BB08;
    case 793u: goto L_08A7BB14;
    case 794u: goto L_08A7BBA8;
    case 795u: goto L_08A7BC0C;
    case 796u: goto L_08A7BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A78000:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(f15));
    f17 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(f17));
    f14 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(f14));
    f13 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(f13));
    f16 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(f16));
    f15 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(f15));
    f17 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f15));
    g4 = (16720u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f17));
    f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(f17));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08A78068;
      }
      goto L_08A78064;
    }
}
}
L_08A78064:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A78068;
L_08A78068:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != g4;
    g4 = (ctx.gpr[22] << 3u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A781DC;
      }
      goto L_08A78074;
    }
}
L_08A78074:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g4 = (ctx.gpr[23] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[30];
    hot_regs.f13 = hot_regs.f13 - ctx.fpr[28];
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A780C8u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A780C8u) goto L_08A780C8;
    return;
L_08A780C8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(256)));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(f14) || std::isnan(hot_regs.f22)) && f14 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A78100;
      }
      goto L_08A780E8;
    }
}
}
L_08A780E8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[16]) || std::isnan(hot_regs.f22)) && ctx.fpr[16] == hot_regs.f22));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
        goto L_08A78104;
    }
    goto L_08A780F8;
L_08A780F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = hot_regs.f20 - hot_regs.f22;
      if (branch_taken) {
          goto L_08A78110;
      }
      goto L_08A78100;
    }
L_08A78100:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08A78104;
L_08A78104:
    hot_regs.g31 = (0x08A7810Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7810Cu) goto L_08A7810C;
    return;
L_08A7810C:
    ctx.fpr[16] = hot_regs.f20 - ctx.fpr[0];
    goto L_08A78110;
L_08A78110:
    hot_regs.g31 = (0x08A78118u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78118u) goto L_08A78118;
    return;
L_08A78118:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f0));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    { const float fs = f17; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g4 = (49097u << 16u);
    { const float fs = f19; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = f17; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f0 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 4059u);
    { const float fs = f19; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((ctx.fpr[16] < f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    f0 = f0 - f18;
    hot_regs.g4 = g4;
    ctx.fpr[0] = f0;
    hot_regs.f12 = f12;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08A781AC;
      }
      goto L_08A78164;
    }
}
}
L_08A78164:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((ctx.fpr[16] <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = g4;
        goto L_08A781B0;
    }
    goto L_08A78180;
}
L_08A78180:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    f12 = f12 + ctx.fpr[17];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    f12 = f12 + ctx.fpr[18];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    f12 = f12 - ctx.fpr[17];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A781D4;
      }
      goto L_08A781AC;
    }
}
}
L_08A781AC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A781B0;
L_08A781B0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    f12 = f12 + ctx.fpr[17];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    f12 = f12 + ctx.fpr[18];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    f12 = f12 - ctx.fpr[17];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A781D4;
}
}
L_08A781D4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] << 3u);
      if (branch_taken) {
          goto L_08A78268;
      }
      goto L_08A781DC;
    }
L_08A781DC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    g4 = (g30 << 3u);
    g4 = (g23 + g4);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (g4 + static_cast<std::uint32_t>(4));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f14 = f14 - f12;
    g4 = (g30 << 3u);
    g4 = (g23 + g4);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (g30 << 3u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g23 + g5);
    f14 = f14 + f13;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (g30 << 3u);
    g5 = (g23 + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f14));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    f12 = f14 + f12;
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    g4 = (g5 + static_cast<std::uint32_t>(4));
    { const float fs = f19; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    f12 = f12 - f13;
    { const float fs = f19; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    g4 = (ctx.gpr[22] << 3u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[19] = f19;
    goto L_08A78268;
}
}
L_08A78268:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g23 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g22 << 3u);
    f12 = f12 + ctx.fpr[4];
    g4 = (g23 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (g22 << 3u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g23 + g5);
    f12 = f12 - ctx.fpr[3];
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (g22 << 3u);
    g5 = (g23 + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g5 + static_cast<std::uint32_t>(4));
    f12 = f12 - ctx.fpr[4];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = f12 + ctx.fpr[3];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A78398;
      }
      goto L_08A782C8;
    }
}
}
L_08A782C8:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A78364;
      }
      goto L_08A782D4;
    }
L_08A782D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    g4 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16544u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A78364;
      }
      goto L_08A782E4;
    }
}
L_08A782E4:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5572)));
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f13;
    g4 = (ctx.gpr[22] << 2u);
    g4 = (ctx.gpr[23] + g4);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(260)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    f14 = f14 / f12;
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < f14));
    // nop
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
        goto L_08A78318;
    }
    goto L_08A78318;
}
}
L_08A78318:
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
        goto L_08A78328;
    }
    goto L_08A78328;
L_08A78328:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(40));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(56));
    ctx.gpr[10] = (g29 + static_cast<std::uint32_t>(180));
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A78354u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08A784AC;
}
L_08A78354:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08A78398;
      }
      goto L_08A78364;
    }
}
L_08A78364:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(40));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(56));
    ctx.gpr[10] = (g29 + static_cast<std::uint32_t>(72));
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A7838Cu);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_08A784AC;
}
L_08A7838C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    goto L_08A78398;
}
L_08A78398:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[22] = (hot_regs.g4 << 16u);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 764u, 0x08A77DECu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A783C4;
    }
L_08A783C4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(312))))));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(312), static_cast<std::uint16_t>(hot_regs.g4));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 757u, 0x08A77D0Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A783E0;
    }
L_08A783E0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(320)));
    goto L_08A783E4;
L_08A783E4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(316)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x08A7844Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 223u, 0x08AF9350u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7844Cu) goto L_08A7844C;
    return;
L_08A7844C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08A78458u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78458u) goto L_08A78458;
    return;
L_08A78458:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08A78464u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78464u) goto L_08A78464;
    return;
L_08A78464:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(372)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(376)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(384)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A784AC:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-192));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(f20));
    f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[11]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g18);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f20)) && f12 == f20));
    g18 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[10]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), hot_regs.g31);
    if (ctx.fpu_condition()) {
    g18 = (0u | 1u);
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_08A7851C;
    }
    goto L_08A7851C;
}
}
L_08A7851C:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f20));
    g4 = (ctx.gpr[18] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f20));
    g4 = (2238u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f20));
    g4 = (g4 + static_cast<std::uint32_t>(12016));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), g4);
    g4 = (16575u << 16u);
    g4 = (g4 | 2621u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g17 = (2238u << 16u);
    g4 = (16448u << 16u);
    f20 = std::bit_cast<float>(g4);
    g17 = (g17 + static_cast<std::uint32_t>(-272));
    g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[18] = (0u | 0u);
    g4 = (16000u << 16u);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (g29 | 0u);
    ctx.gpr[20] = (g17 + static_cast<std::uint32_t>(24));
    ctx.gpr[23] = (g17 + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (g17 + static_cast<std::uint32_t>(72));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.f20 = f20;
    goto L_08A7858C;
}
}
L_08A7858C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    g4 = (static_cast<std::int32_t>(g4) < 1018 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[30] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A785AC;
      }
      goto L_08A7859C;
    }
}
L_08A7859C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 508 ? 1u : 0u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g5 = g5;
        goto L_08A785BC;
    }
    goto L_08A785AC;
}
L_08A785AC:
    hot_regs.g31 = (0x08A785B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 223u, 0x08AF9350u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A785B4u) goto L_08A785B4;
    return;
L_08A785B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    goto L_08A785BC;
L_08A785BC:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f3 = ctx.fpr[3];
    float f4 = ctx.fpr[4];
    float f5 = ctx.fpr[5];
    float f6 = ctx.fpr[6];
    float f7 = ctx.fpr[7];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(-5600)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 3u);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + ctx.gpr[17]);
    g6 = (0u | 255u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g6));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 & 255u);
    g7 = (g7 & 255u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g7));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(-5596)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (g4 + ctx.gpr[20]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g6));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 & 255u);
    g5 = (g5 & 255u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(-5596)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 << 3u);
    g7 = (g5 + g5);
    g5 = (g5 + g7);
    f13 = std::bit_cast<float>(ctx.gpr[18]);
    g5 = (g5 + ctx.gpr[23]);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    f13 = f13 / hot_regs.f20;
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g6));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 & 255u);
    f12 = std::bit_cast<float>(ctx.gpr[30]);
    g7 = (g7 & 255u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g7));
    f12 = f12 / hot_regs.f20;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(-5600)));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g6));
    { const float fs = f14; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f16 = hot_regs.f22 - f13;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    g5 = (g5 & 255u);
    g5 = (g5 & 255u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f15 = hot_regs.f22 - f12;
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f16; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f16; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f1 = std::bit_cast<float>(0x7FC00000u); else f1 = fs * ft; }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    { const float fs = f13; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    f4 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f15; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f18 = f18 + f0;
    f5 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f1 = f1 + f3;
    { const float fs = f15; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f18));
    { const float fs = f12; const float ft = f2; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f4; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f6 = std::bit_cast<float>(0x7FC00000u); else f6 = fs * ft; }
    { const float fs = f12; const float ft = f5; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f7 = std::bit_cast<float>(0x7FC00000u); else f7 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f1));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f14 = f17 + f14;
    f19 = f19 + f2;
    { const float fs = f15; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f12; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f16; const float ft = f4; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f4 = std::bit_cast<float>(0x7FC00000u); else f4 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f14));
    { const float fs = f13; const float ft = f5; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f19));
    f6 = f6 + f7;
    f15 = f15 + f12;
    { const float fs = f16; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f17 = f4 + f17;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f6));
    { const float fs = f13; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f18; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f2 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5584)));
    { const float fs = f15; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f15));
    { const float fs = f17; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    { const float fs = f19; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f4 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5580)));
    f5 = f16 + f13;
    { const float fs = f14; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f15 = f18 + f4;
    { const float fs = f6; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    { const float fs = f1; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f5; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f18 = f17 + f2;
    g4 = (g4 << 3u);
    f16 = f16 + f2;
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    f12 = f12 + f2;
    f13 = f13 + f4;
    g4 = (g4 + ctx.gpr[17]);
    f17 = f0 + f4;
    f14 = f14 + f2;
    f19 = f19 + f4;
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f18));
    ctx.set_fpu_condition((f16 < f0));
    // nop
    if (ctx.fpu_condition()) {
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[3] = f3;
    ctx.fpr[4] = f4;
    ctx.fpr[5] = f5;
    ctx.fpr[6] = f6;
    ctx.fpr[7] = f7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
        goto L_08A78800;
    }
    goto L_08A78800;
}
}
L_08A78800:
    ctx.set_fpu_condition((ctx.fpr[0] <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
        goto L_08A78810;
    }
    goto L_08A78810;
L_08A78810:
    ctx.set_fpu_condition((ctx.fpr[0] <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08A78820;
    }
    goto L_08A78820;
L_08A78820:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
    f0 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(f0));
    f0 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f0)));
    f2 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_fpu_condition((ctx.fpr[17] < f2));
    // nop
    if (ctx.fpu_condition()) {
    f2 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[0] = f0;
    ctx.fpr[2] = f2;
        goto L_08A7883C;
    }
    goto L_08A7883C;
}
L_08A7883C:
    ctx.set_fpu_condition((ctx.fpr[2] <= hot_regs.f15));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
        goto L_08A7884C;
    }
    goto L_08A7884C;
L_08A7884C:
    ctx.set_fpu_condition((ctx.fpr[2] <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_08A7885C;
    }
    goto L_08A7885C;
L_08A7885C:
{
    float f0 = ctx.fpr[0];
    float f2 = ctx.fpr[2];
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
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    f2 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(f2));
    f2 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f2)));
    f12 = f12 - f0;
    f13 = f13 - f2;
    f14 = f14 - f0;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f15 = f15 - f2;
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[20]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f16 = f16 - f0;
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[20]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f17 = f17 - f2;
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[23]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f16));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f18 = f18 - f0;
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[23]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f17));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f19 = f19 - f2;
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f18));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f19));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = g4 == 0u;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.fpr[2] = f2;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08A7896C;
      }
      goto L_08A78940;
    }
}
}
L_08A78940:
    hot_regs.g31 = (0x08A78948u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x08818130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78948u) goto L_08A78948;
    return;
L_08A78948:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.f14 = ctx.fpr[0] + ctx.fpr[26];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 3u);
    hot_regs.g5 = (g4 + g4);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A78988;
      }
      goto L_08A7896C;
    }
}
L_08A7896C:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 3u);
    hot_regs.g5 = (g4 + g4);
    f14 = f14 + ctx.fpr[26];
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 + ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    goto L_08A78988;
}
}
L_08A78988:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = g4 == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A789D0;
      }
      goto L_08A789A4;
    }
}
L_08A789A4:
    hot_regs.g31 = (0x08A789ACu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x08818130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A789ACu) goto L_08A789AC;
    return;
L_08A789AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.f14 = ctx.fpr[0] + ctx.fpr[26];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g4 = (g4 << 3u);
    hot_regs.g5 = (g4 + g4);
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A789EC;
      }
      goto L_08A789D0;
    }
}
L_08A789D0:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g4 = (g4 << 3u);
    hot_regs.g5 = (g4 + g4);
    f14 = f14 + ctx.fpr[26];
    g4 = (g4 + hot_regs.g5);
    g4 = (g4 + ctx.gpr[20]);
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    goto L_08A789EC;
}
}
L_08A789EC:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A78A08u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x08818130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78A08u) goto L_08A78A08;
    return;
L_08A78A08:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    f12 = ctx.fpr[0] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (g4 << 3u);
    hot_regs.g5 = (g4 + g4);
    g4 = (g4 + hot_regs.g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g4 = (g4 + ctx.gpr[23]);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A78A58;
      }
      goto L_08A78A44;
    }
}
}
L_08A78A44:
    hot_regs.g31 = (0x08A78A4Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 10u, 0x08818130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78A4Cu) goto L_08A78A4C;
    return;
L_08A78A4C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    goto L_08A78A58;
L_08A78A58:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(32)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    f14 = f14 + ctx.fpr[26];
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[22]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8452)));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    g7 = (g5 + g5);
    g6 = (g7 + g6);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g7 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    g8 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g4));
    g8 = (g4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g7));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), g4);
    g4 = (g5 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8452), g4);
    ctx.gpr[18] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g19 = (g19 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[19] = g19;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A7858C;
      }
      goto L_08A78AE0;
    }
}
}
L_08A78AE0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A78B44:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A78B64u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78B64u) goto L_08A78B64;
    return;
L_08A78B64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_08A78B7C;
    }
    goto L_08A78B70;
}
L_08A78B70:
    hot_regs.g31 = (0x08A78B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78B78u) goto L_08A78B78;
    return;
L_08A78B78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78B7C;
L_08A78B7C:
    hot_regs.g31 = (0x08A78B84u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 412u, 0x0880DC1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78B84u) goto L_08A78B84;
    return;
L_08A78B84:
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
L_08A78B98:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A78BC0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78BC0u) goto L_08A78BC0;
    return;
L_08A78BC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_08A78BD8;
    }
    goto L_08A78BCC;
}
L_08A78BCC:
    hot_regs.g31 = (0x08A78BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78BD4u) goto L_08A78BD4;
    return;
L_08A78BD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78BD8;
L_08A78BD8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08A78BE4u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 471u, 0x0880E29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78BE4u) goto L_08A78BE4;
    return;
L_08A78BE4:
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
L_08A78BFC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A78C24u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78C24u) goto L_08A78C24;
    return;
L_08A78C24:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_08A78C3C;
    }
    goto L_08A78C30;
}
L_08A78C30:
    hot_regs.g31 = (0x08A78C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78C38u) goto L_08A78C38;
    return;
L_08A78C38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78C3C;
L_08A78C3C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08A78C48u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 476u, 0x0880E2F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78C48u) goto L_08A78C48;
    return;
L_08A78C48:
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
L_08A78C60:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 5u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x08A78CA8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78CA8u) goto L_08A78CA8;
    return;
L_08A78CA8:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (49864u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f20) || std::isnan(f12)) && f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A78CE0;
      }
      goto L_08A78CC8;
    }
}
L_08A78CC8:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78CF0;
      }
      goto L_08A78CE0;
    }
L_08A78CE0:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08A78CECu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78CECu) goto L_08A78CEC;
    return;
L_08A78CEC:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A78CF0;
L_08A78CF0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A78CFCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78CFCu) goto L_08A78CFC;
    return;
L_08A78CFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A78D14;
      }
      goto L_08A78D08;
    }
L_08A78D08:
    hot_regs.g31 = (0x08A78D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78D10u) goto L_08A78D10;
    return;
L_08A78D10:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78D14;
L_08A78D14:
    hot_regs.g31 = (0x08A78D1Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78D1Cu) goto L_08A78D1C;
    return;
L_08A78D1C:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A78D3C;
      }
      goto L_08A78D28;
    }
L_08A78D28:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78D3C;
      }
      goto L_08A78D30;
    }
L_08A78D30:
    hot_regs.g31 = (0x08A78D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78D38u) goto L_08A78D38;
    return;
L_08A78D38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78D3C;
L_08A78D3C:
    if (hot_regs.g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A78D54;
    }
    goto L_08A78D44;
L_08A78D44:
    hot_regs.g31 = (0x08A78D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78D4Cu) goto L_08A78D4C;
    return;
L_08A78D4C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A78D54;
L_08A78D54:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 4u);
    hot_regs.g31 = (0x08A78D70u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78D70u) goto L_08A78D70;
    return;
L_08A78D70:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A78D84u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78D84u) goto L_08A78D84;
    return;
L_08A78D84:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
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
L_08A78DB4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A78DDCu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78DDCu) goto L_08A78DDC;
    return;
L_08A78DDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_08A78DF4;
    }
    goto L_08A78DE8;
}
L_08A78DE8:
    hot_regs.g31 = (0x08A78DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78DF0u) goto L_08A78DF0;
    return;
L_08A78DF0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78DF4;
L_08A78DF4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08A78E00u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78E00u) goto L_08A78E00;
    return;
L_08A78E00:
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
L_08A78E18:
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
    hot_regs.g31 = (0x08A78E4Cu);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78E4Cu) goto L_08A78E4C;
    return;
L_08A78E4C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08A78E58u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78E58u) goto L_08A78E58;
    return;
L_08A78E58:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A78E64u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78E64u) goto L_08A78E64;
    return;
L_08A78E64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A78E7C;
      }
      goto L_08A78E70;
    }
L_08A78E70:
    hot_regs.g31 = (0x08A78E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78E78u) goto L_08A78E78;
    return;
L_08A78E78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78E7C;
L_08A78E7C:
    hot_regs.g31 = (0x08A78E84u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78E84u) goto L_08A78E84;
    return;
L_08A78E84:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A78EA4;
      }
      goto L_08A78E90;
    }
L_08A78E90:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78EA4;
      }
      goto L_08A78E98;
    }
L_08A78E98:
    hot_regs.g31 = (0x08A78EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78EA0u) goto L_08A78EA0;
    return;
L_08A78EA0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78EA4;
L_08A78EA4:
    if (hot_regs.g4 != 0u) {
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
        goto L_08A78EBC;
    }
    goto L_08A78EAC;
L_08A78EAC:
    hot_regs.g31 = (0x08A78EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78EB4u) goto L_08A78EB4;
    return;
L_08A78EB4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    goto L_08A78EBC;
L_08A78EBC:
    hot_regs.g5 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A78ECCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 438u, 0x0880DF30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78ECCu) goto L_08A78ECC;
    return;
L_08A78ECC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A78EE4;
      }
      goto L_08A78ED8;
    }
L_08A78ED8:
    hot_regs.g31 = (0x08A78EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78EE0u) goto L_08A78EE0;
    return;
L_08A78EE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78EE4;
L_08A78EE4:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A78EF0u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78EF0u) goto L_08A78EF0;
    return;
L_08A78EF0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A78F04u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78F04u) goto L_08A78F04;
    return;
L_08A78F04:
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
L_08A78F24:
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
    hot_regs.g31 = (0x08A78F58u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78F58u) goto L_08A78F58;
    return;
L_08A78F58:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    hot_regs.g31 = (0x08A78F64u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 431u, 0x08B65C68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78F64u) goto L_08A78F64;
    return;
L_08A78F64:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A78F70u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78F70u) goto L_08A78F70;
    return;
L_08A78F70:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A78F88;
      }
      goto L_08A78F7C;
    }
L_08A78F7C:
    hot_regs.g31 = (0x08A78F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78F84u) goto L_08A78F84;
    return;
L_08A78F84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78F88;
L_08A78F88:
    hot_regs.g31 = (0x08A78F90u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78F90u) goto L_08A78F90;
    return;
L_08A78F90:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A78FB0;
      }
      goto L_08A78F9C;
    }
L_08A78F9C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A78FB0;
      }
      goto L_08A78FA4;
    }
L_08A78FA4:
    hot_regs.g31 = (0x08A78FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78FACu) goto L_08A78FAC;
    return;
L_08A78FAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78FB0;
L_08A78FB0:
    if (hot_regs.g4 != 0u) {
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
        goto L_08A78FC8;
    }
    goto L_08A78FB8;
L_08A78FB8:
    hot_regs.g31 = (0x08A78FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78FC0u) goto L_08A78FC0;
    return;
L_08A78FC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    goto L_08A78FC8;
L_08A78FC8:
    hot_regs.g5 = (0u | 2u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A78FD8u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 438u, 0x0880DF30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78FD8u) goto L_08A78FD8;
    return;
L_08A78FD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A78FF0;
      }
      goto L_08A78FE4;
    }
L_08A78FE4:
    hot_regs.g31 = (0x08A78FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78FECu) goto L_08A78FEC;
    return;
L_08A78FEC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A78FF0;
L_08A78FF0:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A78FFCu);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A78FFCu) goto L_08A78FFC;
    return;
L_08A78FFC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A79010u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79010u) goto L_08A79010;
    return;
L_08A79010:
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
L_08A79030:
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
    hot_regs.g31 = (0x08A79064u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79064u) goto L_08A79064;
    return;
L_08A79064:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    hot_regs.g31 = (0x08A79070u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 445u, 0x08B65D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79070u) goto L_08A79070;
    return;
L_08A79070:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A7907Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7907Cu) goto L_08A7907C;
    return;
L_08A7907C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A79094;
      }
      goto L_08A79088;
    }
L_08A79088:
    hot_regs.g31 = (0x08A79090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79090u) goto L_08A79090;
    return;
L_08A79090:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79094;
L_08A79094:
    hot_regs.g31 = (0x08A7909Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7909Cu) goto L_08A7909C;
    return;
L_08A7909C:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A790BC;
      }
      goto L_08A790A8;
    }
L_08A790A8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A790BC;
      }
      goto L_08A790B0;
    }
L_08A790B0:
    hot_regs.g31 = (0x08A790B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A790B8u) goto L_08A790B8;
    return;
L_08A790B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A790BC;
L_08A790BC:
    if (hot_regs.g4 != 0u) {
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
        goto L_08A790D4;
    }
    goto L_08A790C4;
L_08A790C4:
    hot_regs.g31 = (0x08A790CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A790CCu) goto L_08A790CC;
    return;
L_08A790CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    goto L_08A790D4;
L_08A790D4:
    hot_regs.g5 = (0u | 3u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08A790E4u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 438u, 0x0880DF30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A790E4u) goto L_08A790E4;
    return;
L_08A790E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A790FC;
      }
      goto L_08A790F0;
    }
L_08A790F0:
    hot_regs.g31 = (0x08A790F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A790F8u) goto L_08A790F8;
    return;
L_08A790F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A790FC;
L_08A790FC:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A79108u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79108u) goto L_08A79108;
    return;
L_08A79108:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A7911Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7911Cu) goto L_08A7911C;
    return;
L_08A7911C:
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
L_08A7913C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g31 = (0x08A79180u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79180u) goto L_08A79180;
    return;
L_08A79180:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (49864u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f20) || std::isnan(f12)) && f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A791B8;
      }
      goto L_08A791A0;
    }
}
L_08A791A0:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A791C8;
      }
      goto L_08A791B8;
    }
L_08A791B8:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08A791C4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A791C4u) goto L_08A791C4;
    return;
L_08A791C4:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A791C8;
L_08A791C8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A791D4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A791D4u) goto L_08A791D4;
    return;
L_08A791D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A791EC;
      }
      goto L_08A791E0;
    }
L_08A791E0:
    hot_regs.g31 = (0x08A791E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A791E8u) goto L_08A791E8;
    return;
L_08A791E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A791EC;
L_08A791EC:
    hot_regs.g31 = (0x08A791F4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A791F4u) goto L_08A791F4;
    return;
L_08A791F4:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A79214;
      }
      goto L_08A79200;
    }
L_08A79200:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79214;
      }
      goto L_08A79208;
    }
L_08A79208:
    hot_regs.g31 = (0x08A79210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79210u) goto L_08A79210;
    return;
L_08A79210:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79214;
L_08A79214:
    if (hot_regs.g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A7922C;
    }
    goto L_08A7921C;
L_08A7921C:
    hot_regs.g31 = (0x08A79224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79224u) goto L_08A79224;
    return;
L_08A79224:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A7922C;
L_08A7922C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 5u);
    hot_regs.g31 = (0x08A79248u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79248u) goto L_08A79248;
    return;
L_08A79248:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A79260;
      }
      goto L_08A79254;
    }
L_08A79254:
    hot_regs.g31 = (0x08A7925Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7925Cu) goto L_08A7925C;
    return;
L_08A7925C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79260;
L_08A79260:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A7926Cu);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7926Cu) goto L_08A7926C;
    return;
L_08A7926C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A79280u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79280u) goto L_08A79280;
    return;
L_08A79280:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
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
L_08A792AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A792D4u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A792D4u) goto L_08A792D4;
    return;
L_08A792D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g4 = g4;
        goto L_08A792EC;
    }
    goto L_08A792E0;
}
L_08A792E0:
    hot_regs.g31 = (0x08A792E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A792E8u) goto L_08A792E8;
    return;
L_08A792E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A792EC;
L_08A792EC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08A792F8u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 490u, 0x0880E3DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A792F8u) goto L_08A792F8;
    return;
L_08A792F8:
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
L_08A79310:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x08A79358u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79358u) goto L_08A79358;
    return;
L_08A79358:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (49864u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f20) || std::isnan(f12)) && f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A79390;
      }
      goto L_08A79378;
    }
}
L_08A79378:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A793A0;
      }
      goto L_08A79390;
    }
L_08A79390:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08A7939Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7939Cu) goto L_08A7939C;
    return;
L_08A7939C:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A793A0;
L_08A793A0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A793ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A793ACu) goto L_08A793AC;
    return;
L_08A793AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A793C4;
      }
      goto L_08A793B8;
    }
L_08A793B8:
    hot_regs.g31 = (0x08A793C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A793C0u) goto L_08A793C0;
    return;
L_08A793C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A793C4;
L_08A793C4:
    hot_regs.g31 = (0x08A793CCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A793CCu) goto L_08A793CC;
    return;
L_08A793CC:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A793EC;
      }
      goto L_08A793D8;
    }
L_08A793D8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A793EC;
      }
      goto L_08A793E0;
    }
L_08A793E0:
    hot_regs.g31 = (0x08A793E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A793E8u) goto L_08A793E8;
    return;
L_08A793E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A793EC;
L_08A793EC:
    if (hot_regs.g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A79404;
    }
    goto L_08A793F4;
L_08A793F4:
    hot_regs.g31 = (0x08A793FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A793FCu) goto L_08A793FC;
    return;
L_08A793FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A79404;
L_08A79404:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 5u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 2u);
    hot_regs.g31 = (0x08A79420u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79420u) goto L_08A79420;
    return;
L_08A79420:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A79438;
      }
      goto L_08A7942C;
    }
L_08A7942C:
    hot_regs.g31 = (0x08A79434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79434u) goto L_08A79434;
    return;
L_08A79434:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79438;
L_08A79438:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A79444u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79444u) goto L_08A79444;
    return;
L_08A79444:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A79458u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79458u) goto L_08A79458;
    return;
L_08A79458:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
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
L_08A79488:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x08A794D0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A794D0u) goto L_08A794D0;
    return;
L_08A794D0:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (49864u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f20) || std::isnan(f12)) && f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A79508;
      }
      goto L_08A794F0;
    }
}
L_08A794F0:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A79518;
      }
      goto L_08A79508;
    }
L_08A79508:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08A79514u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79514u) goto L_08A79514;
    return;
L_08A79514:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A79518;
L_08A79518:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A79524u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79524u) goto L_08A79524;
    return;
L_08A79524:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A7953C;
      }
      goto L_08A79530;
    }
L_08A79530:
    hot_regs.g31 = (0x08A79538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79538u) goto L_08A79538;
    return;
L_08A79538:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A7953C;
L_08A7953C:
    hot_regs.g31 = (0x08A79544u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79544u) goto L_08A79544;
    return;
L_08A79544:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A79564;
      }
      goto L_08A79550;
    }
L_08A79550:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79564;
      }
      goto L_08A79558;
    }
L_08A79558:
    hot_regs.g31 = (0x08A79560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79560u) goto L_08A79560;
    return;
L_08A79560:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79564;
L_08A79564:
    if (hot_regs.g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A7957C;
    }
    goto L_08A7956C;
L_08A7956C:
    hot_regs.g31 = (0x08A79574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79574u) goto L_08A79574;
    return;
L_08A79574:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A7957C;
L_08A7957C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 5u);
    hot_regs.g31 = (0x08A79598u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 447u, 0x0880E03Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79598u) goto L_08A79598;
    return;
L_08A79598:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A795B0;
      }
      goto L_08A795A4;
    }
L_08A795A4:
    hot_regs.g31 = (0x08A795ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A795ACu) goto L_08A795AC;
    return;
L_08A795AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A795B0;
L_08A795B0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A795BCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A795BCu) goto L_08A795BC;
    return;
L_08A795BC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A795D0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A795D0u) goto L_08A795D0;
    return;
L_08A795D0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
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
L_08A79600:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x08A79648u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79648u) goto L_08A79648;
    return;
L_08A79648:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (49864u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f20) || std::isnan(f12)) && f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A79680;
      }
      goto L_08A79668;
    }
}
L_08A79668:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A79690;
      }
      goto L_08A79680;
    }
L_08A79680:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08A7968Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7968Cu) goto L_08A7968C;
    return;
L_08A7968C:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A79690;
L_08A79690:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A7969Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7969Cu) goto L_08A7969C;
    return;
L_08A7969C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A796B4;
      }
      goto L_08A796A8;
    }
L_08A796A8:
    hot_regs.g31 = (0x08A796B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A796B0u) goto L_08A796B0;
    return;
L_08A796B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A796B4;
L_08A796B4:
    hot_regs.g31 = (0x08A796BCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A796BCu) goto L_08A796BC;
    return;
L_08A796BC:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A796DC;
      }
      goto L_08A796C8;
    }
L_08A796C8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A796DC;
      }
      goto L_08A796D0;
    }
L_08A796D0:
    hot_regs.g31 = (0x08A796D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A796D8u) goto L_08A796D8;
    return;
L_08A796D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A796DC;
L_08A796DC:
    if (hot_regs.g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A796F4;
    }
    goto L_08A796E4;
L_08A796E4:
    hot_regs.g31 = (0x08A796ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A796ECu) goto L_08A796EC;
    return;
L_08A796EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A796F4;
L_08A796F4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 5u);
    hot_regs.g31 = (0x08A79710u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 456u, 0x0880E158u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79710u) goto L_08A79710;
    return;
L_08A79710:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A79728;
      }
      goto L_08A7971C;
    }
L_08A7971C:
    hot_regs.g31 = (0x08A79724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79724u) goto L_08A79724;
    return;
L_08A79724:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79728;
L_08A79728:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A79734u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79734u) goto L_08A79734;
    return;
L_08A79734:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A79748u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79748u) goto L_08A79748;
    return;
L_08A79748:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
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
L_08A79778:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A797B0u);
    hot_regs.g7 = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A797B0u) goto L_08A797B0;
    return;
L_08A797B0:
    hot_regs.g31 = (0x08A797B8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 659u, 0x088F352Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A797B8u) goto L_08A797B8;
    return;
L_08A797B8:
    hot_regs.g5 = (2246u << 16u);
    hot_regs.g4 = (hot_regs.g2 << 6u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(31024));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A797D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A797D8u) goto L_08A797D8;
    return;
L_08A797D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A797F0;
      }
      goto L_08A797E4;
    }
L_08A797E4:
    hot_regs.g31 = (0x08A797ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A797ECu) goto L_08A797EC;
    return;
L_08A797EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A797F0;
L_08A797F0:
    hot_regs.g31 = (0x08A797F8u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A797F8u) goto L_08A797F8;
    return;
L_08A797F8:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A79818;
      }
      goto L_08A79804;
    }
L_08A79804:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79818;
      }
      goto L_08A79810;
    }
L_08A79810:
    hot_regs.g31 = (0x08A79818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79818u) goto L_08A79818;
    return;
L_08A79818:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    hot_regs.g31 = (0x08A79824u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 636u, 0x08B66A10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79824u) goto L_08A79824;
    return;
L_08A79824:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A7983C;
      }
      goto L_08A79830;
    }
L_08A79830:
    hot_regs.g31 = (0x08A79838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79838u) goto L_08A79838;
    return;
L_08A79838:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A7983C;
L_08A7983C:
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08A79850u);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 438u, 0x0880DF30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79850u) goto L_08A79850;
    return;
L_08A79850:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A79868;
      }
      goto L_08A7985C;
    }
L_08A7985C:
    hot_regs.g31 = (0x08A79864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79864u) goto L_08A79864;
    return;
L_08A79864:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79868;
L_08A79868:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A79874u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 483u, 0x0880E374u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79874u) goto L_08A79874;
    return;
L_08A79874:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A79888u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79888u) goto L_08A79888;
    return;
L_08A79888:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A798AC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x08A798F4u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A798F4u) goto L_08A798F4;
    return;
L_08A798F4:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (49864u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f20) || std::isnan(f12)) && f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A7992C;
      }
      goto L_08A79914;
    }
}
L_08A79914:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7993C;
      }
      goto L_08A7992C;
    }
L_08A7992C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08A79938u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79938u) goto L_08A79938;
    return;
L_08A79938:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A7993C;
L_08A7993C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08A79948u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 418u, 0x0886271Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79948u) goto L_08A79948;
    return;
L_08A79948:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A79960;
      }
      goto L_08A79954;
    }
L_08A79954:
    hot_regs.g31 = (0x08A7995Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7995Cu) goto L_08A7995C;
    return;
L_08A7995C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79960;
L_08A79960:
    hot_regs.g31 = (0x08A79968u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 495u, 0x0880E450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79968u) goto L_08A79968;
    return;
L_08A79968:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g2 == hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
      if (branch_taken) {
          goto L_08A79988;
      }
      goto L_08A79974;
    }
L_08A79974:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79988;
      }
      goto L_08A7997C;
    }
L_08A7997C:
    hot_regs.g31 = (0x08A79984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79984u) goto L_08A79984;
    return;
L_08A79984:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A79988;
L_08A79988:
    if (hot_regs.g4 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A799A0;
    }
    goto L_08A79990;
L_08A79990:
    hot_regs.g31 = (0x08A79998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79998u) goto L_08A79998;
    return;
L_08A79998:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08A799A0;
L_08A799A0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 5u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (0u | 2u);
    hot_regs.g31 = (0x08A799BCu);
    ctx.gpr[8] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 456u, 0x0880E158u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A799BCu) goto L_08A799BC;
    return;
L_08A799BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A799D4;
      }
      goto L_08A799C8;
    }
L_08A799C8:
    hot_regs.g31 = (0x08A799D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A799D0u) goto L_08A799D0;
    return;
L_08A799D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    goto L_08A799D4;
L_08A799D4:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A799E0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 466u, 0x0880E240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A799E0u) goto L_08A799E0;
    return;
L_08A799E0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29704), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A799F4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A799F4u) goto L_08A799F4;
    return;
L_08A799F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
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
L_08A79A24:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A79A40;
      }
      goto L_08A79A38;
    }
}
L_08A79A38:
    hot_regs.g31 = (0x08A79A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79A40u) goto L_08A79A40;
    return;
L_08A79A40:
    hot_regs.g31 = (0x08A79A48u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 418u, 0x0880DCB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79A48u) goto L_08A79A48;
    return;
L_08A79A48:
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
L_08A79A58:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A79A7Cu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79A7Cu) goto L_08A79A7C;
    return;
L_08A79A7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
      if (branch_taken) {
          goto L_08A79A90;
      }
      goto L_08A79A88;
    }
L_08A79A88:
    hot_regs.g31 = (0x08A79A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79A90u) goto L_08A79A90;
    return;
L_08A79A90:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    hot_regs.g31 = (0x08A79A9Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 576u, 0x0880EB5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79A9Cu) goto L_08A79A9C;
    return;
L_08A79A9C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_08A79AB4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(472)));
    hot_regs.g6 = (32768u << 16u);
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A79B08;
      }
      goto L_08A79AD4;
    }
}
L_08A79AD4:
    hot_regs.g31 = (0x08A79ADCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79ADCu) goto L_08A79ADC;
    return;
L_08A79ADC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79B00;
      }
      goto L_08A79AE4;
    }
L_08A79AE4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = g16 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A79B00;
      }
      goto L_08A79AF0;
    }
}
L_08A79AF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(619))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A79B10;
      }
      goto L_08A79B00;
    }
}
L_08A79B00:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A79B14;
      }
      goto L_08A79B08;
    }
L_08A79B08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A79B14;
      }
      goto L_08A79B10;
    }
L_08A79B10:
    hot_regs.g2 = (0u | 1u);
    goto L_08A79B14;
L_08A79B14:
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
L_08A79B24:
{
    float f0 = ctx.fpr[0];
    float f14 = hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f0 = hot_regs.f12 - hot_regs.f13;
    f14 = f14 - hot_regs.f15;
    f0 = f0 / f14;
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    ctx.fpr[0] = f0;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A79B48:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = hot_regs.f14 - hot_regs.f13;
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79BAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g5 = (0u | 40u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A79BC4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(7840));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 497u, 0x08B6E538u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79BC4u) goto L_08A79BC4;
    return;
L_08A79BC4:
    hot_regs.g31 = (0x08A79BCCu);
    // nop
    goto L_08A79BD8;
L_08A79BCC:
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
L_08A79BD8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15968)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5496), 0u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[10] = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[11] = (ctx.gpr[10] | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A79CA8;
      }
      goto L_08A79C04;
    }
}
L_08A79C04:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (ctx.gpr[10] << 5u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g5 = (g9 + g9);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g9 = (g9 + hot_regs.g5);
    ctx.gpr[9] = g9;
    goto L_08A79C18;
}
L_08A79C18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A79C30;
      }
      goto L_08A79C20;
    }
L_08A79C20:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
        goto L_08A79C38;
    }
    goto L_08A79C30;
}
L_08A79C30:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A79C58;
      }
      goto L_08A79C38;
    }
L_08A79C38:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + ctx.gpr[10]);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 & 128u);
    if (g5 == 0u) {
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
        goto L_08A79C54;
    }
    goto L_08A79C4C;
}
L_08A79C4C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A79C58;
      }
      goto L_08A79C54;
    }
L_08A79C54:
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[9]);
    goto L_08A79C58;
L_08A79C58:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79C90;
      }
      goto L_08A79C60;
    }
L_08A79C60:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(86))))));
    hot_regs.g2 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g7) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A79C7C;
      }
      goto L_08A79C70;
    }
}
L_08A79C70:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 << 2u);
    g5 = (ctx.gpr[8] + g5);
    hot_regs.g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
    goto L_08A79C7C;
}
L_08A79C7C:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79C90;
      }
      goto L_08A79C88;
    }
L_08A79C88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5496), g4);
    hot_regs.g4 = g4;
    goto L_08A79C90;
}
L_08A79C90:
{
    std::uint32_t g10 = ctx.gpr[10];
    hot_regs.g5 = (g10 | 0u);
    g10 = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (g10 | 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-96));
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08A79C18;
      }
      goto L_08A79CA4;
    }
}
L_08A79CA4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A79CA8;
L_08A79CA8:
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08A79CB4u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79CB4u) goto L_08A79CB4;
    return;
L_08A79CB4:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5500), hot_regs.g2);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_08A79D70;
      }
      goto L_08A79CC4;
    }
L_08A79CC4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g5 << 5u);
    hot_regs.g7 = (g6 + g6);
    g6 = (g6 + hot_regs.g7);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g6 = g6;
    goto L_08A79CD4;
}
L_08A79CD4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_08A79CEC;
      }
      goto L_08A79CDC;
    }
L_08A79CDC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    if (g7 != 0u) {
    g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = g7;
        goto L_08A79CF4;
    }
    goto L_08A79CEC;
}
L_08A79CEC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (0u | 0u);
      if (branch_taken) {
          goto L_08A79D14;
      }
      goto L_08A79CF4;
    }
L_08A79CF4:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + hot_regs.g5);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 & 128u);
    if (g7 == 0u) {
    g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = g7;
        goto L_08A79D10;
    }
    goto L_08A79D08;
}
L_08A79D08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (0u | 0u);
      if (branch_taken) {
          goto L_08A79D14;
      }
      goto L_08A79D10;
    }
L_08A79D10:
    hot_regs.g7 = (hot_regs.g7 + hot_regs.g6);
    goto L_08A79D14;
L_08A79D14:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79D5C;
      }
      goto L_08A79D1C;
    }
L_08A79D1C:
{
    std::uint32_t g11 = ctx.gpr[11];
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(86))))));
    g11 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g11 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(g11) ? 1u : 0u);
    { const bool branch_taken = g11 == 0u;
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_08A79D40;
      }
      goto L_08A79D30;
    }
}
L_08A79D30:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g8 = (g8 << 2u);
    g8 = (g9 + g8);
    g9 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A79D40;
}
L_08A79D40:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79D5C;
      }
      goto L_08A79D4C;
    }
L_08A79D4C:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5500)));
    g8 = (g8 + g10);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g10 = (g10 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
    goto L_08A79D5C;
}
L_08A79D5C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (g5 | 0u);
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (g5 | 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-96));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A79CD4;
      }
      goto L_08A79D70;
    }
}
L_08A79D70:
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
L_08A79D84:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10064), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10072), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10076), 0u);
    hot_regs.g4 = (2234u << 16u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10068), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A79DA8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(7840));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 503u, 0x08B6E5D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79DA8u) goto L_08A79DA8;
    return;
L_08A79DA8:
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
L_08A79DB4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A79DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 435u, 0x08B11F0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79DC4u) goto L_08A79DC4;
    return;
L_08A79DC4:
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
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10042), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10040), static_cast<std::uint16_t>(0u));
    hot_regs.g31 = (0x08A79DECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 402u, 0x08A7E278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79DECu) goto L_08A79DEC;
    return;
L_08A79DEC:
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
L_08A79DF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (2238u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(17440));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g17 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    g19 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (2279u << 16u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A79E64;
      }
      goto L_08A79E30;
    }
}
L_08A79E30:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(27328));
    goto L_08A79E34;
L_08A79E34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(120));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A79E50u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79E50u) goto L_08A79E50;
    return;
L_08A79E50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A79E34;
      }
      goto L_08A79E64;
    }
}
L_08A79E64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    ctx.gpr[19] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (2280u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A79EAC;
      }
      goto L_08A79E78;
    }
}
L_08A79E78:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-29568));
    goto L_08A79E7C;
L_08A79E7C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(120));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A79E98u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79E98u) goto L_08A79E98;
    return;
L_08A79E98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A79E7C;
      }
      goto L_08A79EAC;
    }
}
L_08A79EAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10068)));
    ctx.gpr[19] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (2280u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A79EF4;
      }
      goto L_08A79EC0;
    }
}
L_08A79EC0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-30208));
    goto L_08A79EC4;
L_08A79EC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(120));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A79EE0u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79EE0u) goto L_08A79EE0;
    return;
L_08A79EE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10068)));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A79EC4;
      }
      goto L_08A79EF4;
    }
}
L_08A79EF4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = g17 == ctx.gpr[16];
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A79F28;
      }
      goto L_08A79F00;
    }
}
L_08A79F00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A79F04;
L_08A79F04:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(120));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A79F1Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79F1Cu) goto L_08A79F1C;
    return;
L_08A79F1C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    if (g17 != ctx.gpr[16]) {
    hot_regs.g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = g17;
        goto L_08A79F04;
    }
    goto L_08A79F28;
}
L_08A79F28:
    hot_regs.g31 = (0x08A79F30u);
    // nop
    goto L_08A79F5C;
L_08A79F30:
    hot_regs.g31 = (0x08A79F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 318u, 0x089EE290u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79F38u) goto L_08A79F38;
    return;
L_08A79F38:
    hot_regs.g31 = (0x08A79F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 259u, 0x08A9A194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79F40u) goto L_08A79F40;
    return;
L_08A79F40:
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
L_08A79F5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A79F80u);
    ctx.gpr[19] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79F80u) goto L_08A79F80;
    return;
L_08A79F80:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79FB4;
      }
      goto L_08A79F88;
    }
L_08A79F88:
    hot_regs.g31 = (0x08A79F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A79F90u) goto L_08A79F90;
    return;
L_08A79F90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (49736u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A79FB4;
      }
      goto L_08A79FB0;
    }
}
L_08A79FB0:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A79FB4;
L_08A79FB4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5496)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (49736u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A054;
      }
      goto L_08A79FC8;
    }
}
L_08A79FC8:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[16] = (8u << 16u);
    goto L_08A79FD4;
L_08A79FD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5500)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g6 = (g6 & ctx.gpr[16]);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7A044;
      }
      goto L_08A79FF0;
    }
}
L_08A79FF0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A7A01C;
      }
      goto L_08A79FF8;
    }
L_08A79FF8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7A01C;
      }
      goto L_08A7A00C;
    }
L_08A7A00C:
    hot_regs.g31 = (0x08A7A014u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 167u, 0x08A3CC80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A014u) goto L_08A7A014;
    return;
L_08A7A014:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5496)));
      if (branch_taken) {
          goto L_08A7A044;
      }
      goto L_08A7A01C;
    }
L_08A7A01C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A7A044;
      }
      goto L_08A7A024;
    }
L_08A7A024:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7A044;
      }
      goto L_08A7A038;
    }
L_08A7A038:
    hot_regs.g31 = (0x08A7A040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 167u, 0x08A3CC80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A040u) goto L_08A7A040;
    return;
L_08A7A040:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5496)));
    goto L_08A7A044;
L_08A7A044:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A79FD4;
      }
      goto L_08A7A054;
    }
}
L_08A7A054:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A06C;
      }
      goto L_08A7A060;
    }
L_08A7A060:
    hot_regs.g31 = (0x08A7A068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A068u) goto L_08A7A068;
    return;
L_08A7A068:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08A7A06C;
L_08A7A06C:
    hot_regs.g31 = (0x08A7A074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 221u, 0x08954F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A074u) goto L_08A7A074;
    return;
L_08A7A074:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08A7A094:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A7A0B0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A0B0u) goto L_08A7A0B0;
    return;
L_08A7A0B0:
    hot_regs.g31 = (0x08A7A0B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A0B8u) goto L_08A7A0B8;
    return;
L_08A7A0B8:
    hot_regs.g31 = (0x08A7A0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A0C0u) goto L_08A7A0C0;
    return;
L_08A7A0C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (2279u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A148;
      }
      goto L_08A7A0D4;
    }
}
L_08A7A0D4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(27328));
    goto L_08A7A0D8;
L_08A7A0D8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 2u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A134;
      }
      goto L_08A7A0F8;
    }
}
L_08A7A0F8:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(86))))));
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A7A11C;
      }
      goto L_08A7A10C;
    }
}
L_08A7A10C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7A11C;
}
L_08A7A11C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(58)));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A134;
      }
      goto L_08A7A12C;
    }
}
L_08A7A12C:
    hot_regs.g31 = (0x08A7A134u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    goto L_08A7A638;
L_08A7A134:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A7A0D8;
      }
      goto L_08A7A148;
    }
}
L_08A7A148:
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
L_08A7A15C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g21);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), hot_regs.g31);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    g21 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g21) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (2279u << 16u);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7A2A4;
      }
      goto L_08A7A190;
    }
}
L_08A7A190:
    ctx.gpr[17] = (0u | 255u);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(27328));
    ctx.gpr[18] = (2u << 16u);
    goto L_08A7A1A0;
L_08A7A1A0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 2u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A1F4;
      }
      goto L_08A7A1C0;
    }
}
L_08A7A1C0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7A1E4;
      }
      goto L_08A7A1D4;
    }
}
L_08A7A1D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7A1E4;
}
L_08A7A1E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(58)));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A290;
      }
      goto L_08A7A1F4;
    }
}
L_08A7A1F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A228;
      }
      goto L_08A7A210;
    }
}
L_08A7A210:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & ctx.gpr[18]);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A284;
      }
      goto L_08A7A228;
    }
}
L_08A7A228:
    hot_regs.g31 = (0x08A7A230u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A230u) goto L_08A7A230;
    return;
L_08A7A230:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A7A284;
      }
      goto L_08A7A238;
    }
L_08A7A238:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A7A268u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 165u, 0x089451D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A268u) goto L_08A7A268;
    return;
L_08A7A268:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A27C;
      }
      goto L_08A7A270;
    }
L_08A7A270:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A7A27Cu);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7A27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A290;
      }
      goto L_08A7A284;
    }
L_08A7A284:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A7A290u);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7A290:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    g21 = (g21 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g21) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08A7A1A0;
      }
      goto L_08A7A2A4;
    }
}
L_08A7A2A4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7A2C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 11u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A7A2DCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A2DCu) goto L_08A7A2DC;
    return;
L_08A7A2DC:
    hot_regs.g31 = (0x08A7A2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A2E4u) goto L_08A7A2E4;
    return;
L_08A7A2E4:
    hot_regs.g31 = (0x08A7A2ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A2ECu) goto L_08A7A2EC;
    return;
L_08A7A2EC:
    hot_regs.g31 = (0x08A7A2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 142u, 0x08945050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A2F4u) goto L_08A7A2F4;
    return;
L_08A7A2F4:
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
L_08A7A300:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[21] = (2234u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(7840));
    hot_regs.g4 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (5888u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24632), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29552), hot_regs.g5);
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A7A368u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A368u) goto L_08A7A368;
    return;
L_08A7A368:
    hot_regs.g31 = (0x08A7A370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 318u, 0x089EE290u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A370u) goto L_08A7A370;
    return;
L_08A7A370:
    hot_regs.g31 = (0x08A7A378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 127u, 0x08944F4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A378u) goto L_08A7A378;
    return;
L_08A7A378:
    hot_regs.g31 = (0x08A7A380u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 503u, 0x08B6E5D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A380u) goto L_08A7A380;
    return;
L_08A7A380:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[19] = (2280u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A534;
      }
      goto L_08A7A394;
    }
}
L_08A7A394:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (2236u << 16u);
    hot_regs.g5 = (0u | 1u);
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-29568));
    g17 = (g17 + static_cast<std::uint32_t>(32304));
    ctx.gpr[30] = (1024u << 16u);
    ctx.gpr[17] = g17;
    goto L_08A7A3B0;
}
L_08A7A3B0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A4AC;
      }
      goto L_08A7A3D0;
    }
}
L_08A7A3D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(852)));
    if (hot_regs.g6 == hot_regs.g5) {
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = g4;
        goto L_08A7A3F4;
    }
    goto L_08A7A3E0;
}
L_08A7A3E0:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    hot_regs.g7 = (0u | 2u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A7A490;
      }
      goto L_08A7A3F0;
    }
L_08A7A3F0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_08A7A3F4;
L_08A7A3F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[17]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 14u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7A4A4;
      }
      goto L_08A7A420;
    }
}
L_08A7A420:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[17]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 16u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7A474;
      }
      goto L_08A7A450;
    }
}
L_08A7A450:
    hot_regs.g31 = (0x08A7A458u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A458u) goto L_08A7A458;
    return;
L_08A7A458:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7A474;
      }
      goto L_08A7A464;
    }
L_08A7A464:
    hot_regs.g31 = (0x08A7A46Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A46Cu) goto L_08A7A46C;
    return;
L_08A7A46C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A4A4;
      }
      goto L_08A7A474;
    }
L_08A7A474:
    hot_regs.g31 = (0x08A7A47Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A47Cu) goto L_08A7A47C;
    return;
L_08A7A47C:
    hot_regs.g4 = (0u | 255u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7A4A4;
      }
      goto L_08A7A488;
    }
L_08A7A488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7A4A4;
      }
      goto L_08A7A490;
    }
L_08A7A490:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    g4 = (g4 & ctx.gpr[30]);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A4A4;
      }
      goto L_08A7A4A0;
    }
}
L_08A7A4A0:
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    goto L_08A7A4A4;
L_08A7A4A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A4DC;
      }
      goto L_08A7A4AC;
    }
L_08A7A4AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A4DC;
      }
      goto L_08A7A4C8;
    }
}
L_08A7A4C8:
    hot_regs.g31 = (0x08A7A4D0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A79AB4;
L_08A7A4D0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A4DC;
      }
      goto L_08A7A4D8;
    }
L_08A7A4D8:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A7A4DC;
L_08A7A4DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A51C;
      }
      goto L_08A7A4E4;
    }
L_08A7A4E4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A7A51Cu);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 507u, 0x08B6E628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A51Cu) goto L_08A7A51C;
    return;
L_08A7A51C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A7A3B0;
      }
      goto L_08A7A534;
    }
}
L_08A7A534:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A7A558;
      }
      goto L_08A7A540;
    }
L_08A7A540:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A7A54Cu);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7A54C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g16 != ctx.gpr[21];
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A7A540;
      }
      goto L_08A7A558;
    }
}
L_08A7A558:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08A7A568u);
    ctx.gpr[16] = (2236u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A568u) goto L_08A7A568;
    return;
L_08A7A568:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(29552)));
    g5 = (5888u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24632), static_cast<std::uint8_t>(g4));
    g4 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(29552), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7A5B8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7A62C;
      }
      goto L_08A7A5CC;
    }
}
L_08A7A5CC:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A7A5D8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A5D8u) goto L_08A7A5D8;
    return;
L_08A7A5D8:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08A7A5E4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A5E4u) goto L_08A7A5E4;
    return;
L_08A7A5E4:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08A7A5F0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A5F0u) goto L_08A7A5F0;
    return;
L_08A7A5F0:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08A7A5FCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A5FCu) goto L_08A7A5FC;
    return;
L_08A7A5FC:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08A7A608u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A608u) goto L_08A7A608;
    return;
L_08A7A608:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08A7A614u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A614u) goto L_08A7A614;
    return;
L_08A7A614:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10080)));
    hot_regs.g31 = (0x08A7A620u);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7A620:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A7A62Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A62Cu) goto L_08A7A62C;
    return;
L_08A7A62C:
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
L_08A7A638:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(128));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A7A658u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A658u) goto L_08A7A658;
    return;
L_08A7A658:
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
L_08A7A664:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7A714;
      }
      goto L_08A7A690;
    }
}
L_08A7A690:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 10u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A6D0;
      }
      goto L_08A7A6AC;
    }
}
L_08A7A6AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_08A7A6C0;
      }
      goto L_08A7A6B8;
    }
L_08A7A6B8:
    hot_regs.g31 = (0x08A7A6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A6C0u) goto L_08A7A6C0;
    return;
L_08A7A6C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(276)));
    if (ctx.gpr[18] != g4) {
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g4 = g4;
        goto L_08A7A708;
    }
    goto L_08A7A6D0;
}
L_08A7A6D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A70C;
      }
      goto L_08A7A6EC;
    }
}
L_08A7A6EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(483))))));
    g4 = (g4 & 16u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A70C;
      }
      goto L_08A7A704;
    }
}
L_08A7A704:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A7A708;
L_08A7A708:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_08A7A70C;
L_08A7A70C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A738;
      }
      goto L_08A7A714;
    }
L_08A7A714:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g4 = g4;
        goto L_08A7A778;
    }
    goto L_08A7A730;
}
L_08A7A730:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
      if (branch_taken) {
          goto L_08A7A75C;
      }
      goto L_08A7A738;
    }
L_08A7A738:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10076)));
    g5 = (2280u << 16u);
    hot_regs.g6 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(-21568));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10076), g4);
    g4 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7A928;
      }
      goto L_08A7A75C;
    }
}
L_08A7A75C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (2u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A784;
      }
      goto L_08A7A774;
    }
}
L_08A7A774:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_08A7A778;
L_08A7A778:
    hot_regs.g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7A7C0;
      }
      goto L_08A7A784;
    }
L_08A7A784:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(144));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A7A79Cu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A79Cu) goto L_08A7A79C;
    return;
L_08A7A79C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g19 = (g19 & 14u);
    g4 = (g19 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A7A7C8;
      }
      goto L_08A7A7B8;
    }
}
L_08A7A7B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A7F8;
      }
      goto L_08A7A7C0;
    }
L_08A7A7C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A928;
      }
      goto L_08A7A7C8;
    }
L_08A7A7C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08A7A7E0u);
    ctx.gpr[19] = (hot_regs.g4 + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A7E0u) goto L_08A7A7E0;
    return;
L_08A7A7E0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A7A7F0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A7F0u) goto L_08A7A7F0;
    return;
L_08A7A7F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A7A800;
      }
      goto L_08A7A7F8;
    }
L_08A7A7F8:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 ^ 4u);
    g19 = (g19 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[19] = g19;
    goto L_08A7A800;
}
L_08A7A800:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A818;
      }
      goto L_08A7A808;
    }
L_08A7A808:
    hot_regs.g31 = (0x08A7A810u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 192u, 0x08945314u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A810u) goto L_08A7A810;
    return;
L_08A7A810:
    hot_regs.g31 = (0x08A7A818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 125u, 0x08944F2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A818u) goto L_08A7A818;
    return;
L_08A7A818:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A8E4;
      }
      goto L_08A7A834;
    }
}
L_08A7A834:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(2228));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A86C;
      }
      goto L_08A7A844;
    }
}
L_08A7A844:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (0u | 55u);
    { const bool branch_taken = g5 != hot_regs.g6;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7A86C;
      }
      goto L_08A7A854;
    }
}
L_08A7A854:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(128));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A7A86Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A86Cu) goto L_08A7A86C;
    return;
L_08A7A86C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    ctx.gpr[21] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 55u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A8E4;
      }
      goto L_08A7A880;
    }
}
L_08A7A880:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A7A88Cu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A88Cu) goto L_08A7A88C;
    return;
L_08A7A88C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A7A8D0;
      }
      goto L_08A7A894;
    }
L_08A7A894:
    hot_regs.g31 = (0x08A7A89Cu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A89Cu) goto L_08A7A89C;
    return;
L_08A7A89C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7A8D0;
      }
      goto L_08A7A8AC;
    }
}
L_08A7A8AC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A7A8B8u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A8B8u) goto L_08A7A8B8;
    return;
L_08A7A8B8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(128));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A7A8D0u);
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A8D0u) goto L_08A7A8D0;
    return;
L_08A7A8D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(565)));
    g21 = (g21 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g21) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08A7A880;
      }
      goto L_08A7A8E4;
    }
}
L_08A7A8E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(128));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A7A8FCu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A8FCu) goto L_08A7A8FC;
    return;
L_08A7A8FC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A90C;
      }
      goto L_08A7A904;
    }
L_08A7A904:
    hot_regs.g31 = (0x08A7A90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 132u, 0x08944F98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A90Cu) goto L_08A7A90C;
    return;
L_08A7A90C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(152));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A7A928u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7A928u) goto L_08A7A928;
    return;
L_08A7A928:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7A94C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    hot_regs.g4 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[20] = (hot_regs.g4 + static_cast<std::uint32_t>(29552));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (8448u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (59136u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (8704u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (8960u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (51200u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (57088u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (57344u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (57600u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (5888u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24632), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29552), hot_regs.g5);
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A7AA6Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AA6Cu) goto L_08A7AA6C;
    return;
L_08A7AA6C:
    hot_regs.g31 = (0x08A7AA74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 129u, 0x08944F6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AA74u) goto L_08A7AA74;
    return;
L_08A7AA74:
    hot_regs.g31 = (0x08A7AA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 127u, 0x08944F4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AA7Cu) goto L_08A7AA7C;
    return;
L_08A7AA7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7AD14;
      }
      goto L_08A7AA90;
    }
}
L_08A7AA90:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (2280u << 16u);
    g18 = (2236u << 16u);
    ctx.gpr[30] = (0u | 55u);
    ctx.gpr[23] = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g4);
    g22 = (g22 + static_cast<std::uint32_t>(-29568));
    g18 = (g18 + static_cast<std::uint32_t>(32304));
    ctx.gpr[21] = (2u << 16u);
    ctx.gpr[18] = g18;
    ctx.gpr[22] = g22;
    goto L_08A7AAB0;
}
L_08A7AAB0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & ctx.gpr[21]);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7AAF0;
      }
      goto L_08A7AAD0;
    }
}
L_08A7AAD0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A7AAF0;
      }
      goto L_08A7AADC;
    }
L_08A7AADC:
    hot_regs.g31 = (0x08A7AAE4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AAE4u) goto L_08A7AAE4;
    return;
L_08A7AAE4:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A7AAF0;
      }
      goto L_08A7AAEC;
    }
L_08A7AAEC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A7AAF0;
L_08A7AAF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g4 = g4;
        goto L_08A7AB28;
    }
    goto L_08A7AB0C;
}
L_08A7AB0C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & ctx.gpr[21]);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7ABA4;
      }
      goto L_08A7AB24;
    }
}
L_08A7AB24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    goto L_08A7AB28;
L_08A7AB28:
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A7ABA4;
      }
      goto L_08A7AB30;
    }
L_08A7AB30:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ABA4;
      }
      goto L_08A7AB38;
    }
L_08A7AB38:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(76)));
    g5 = (g5 & ctx.gpr[21]);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7AB80;
      }
      goto L_08A7AB54;
    }
}
L_08A7AB54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7AB9C;
      }
      goto L_08A7AB6C;
    }
}
L_08A7AB6C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7AB78u);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7AB78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AB9C;
      }
      goto L_08A7AB80;
    }
L_08A7AB80:
    hot_regs.g31 = (0x08A7AB88u);
    // nop
    goto L_08A79AB4;
L_08A7AB88:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AB9C;
      }
      goto L_08A7AB90;
    }
L_08A7AB90:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7AB9Cu);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7AB9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AD00;
      }
      goto L_08A7ABA4;
    }
L_08A7ABA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7ACB0;
      }
      goto L_08A7ABC0;
    }
}
L_08A7ABC0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    g4 = (0u | 1u);
    if (hot_regs.g5 == g4) {
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = g4;
        goto L_08A7ABE4;
    }
    goto L_08A7ABD0;
}
L_08A7ABD0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g6 = (0u | 2u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A7AC7C;
      }
      goto L_08A7ABE0;
    }
L_08A7ABE0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    goto L_08A7ABE4;
L_08A7ABE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[18]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 14u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7ACB0;
      }
      goto L_08A7AC10;
    }
}
L_08A7AC10:
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
    g5 = (0u | 16u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7AC60;
      }
      goto L_08A7AC40;
    }
}
L_08A7AC40:
    hot_regs.g31 = (0x08A7AC48u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AC48u) goto L_08A7AC48;
    return;
L_08A7AC48:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A7AC60;
      }
      goto L_08A7AC50;
    }
L_08A7AC50:
    hot_regs.g31 = (0x08A7AC58u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AC58u) goto L_08A7AC58;
    return;
L_08A7AC58:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7ACB0;
      }
      goto L_08A7AC60;
    }
L_08A7AC60:
    hot_regs.g31 = (0x08A7AC68u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AC68u) goto L_08A7AC68;
    return;
L_08A7AC68:
    hot_regs.g4 = (0u | 255u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A7ACB0;
      }
      goto L_08A7AC74;
    }
L_08A7AC74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7ACB0;
      }
      goto L_08A7AC7C;
    }
L_08A7AC7C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 4u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7ACB0;
      }
      goto L_08A7AC98;
    }
}
L_08A7AC98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g6 = (1024u << 16u);
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7ACB0;
      }
      goto L_08A7ACAC;
    }
}
L_08A7ACAC:
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    goto L_08A7ACB0;
L_08A7ACB0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AD00;
      }
      goto L_08A7ACB8;
    }
L_08A7ACB8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A7ACECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 165u, 0x089451D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7ACECu) goto L_08A7ACEC;
    return;
L_08A7ACEC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AD00;
      }
      goto L_08A7ACF4;
    }
L_08A7ACF4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A7AD00u);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7AD00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A7AAB0;
      }
      goto L_08A7AD14;
    }
}
L_08A7AD14:
    hot_regs.g31 = (0x08A7AD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 142u, 0x08945050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AD1Cu) goto L_08A7AD1C;
    return;
L_08A7AD1C:
    hot_regs.g31 = (0x08A7AD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 361u, 0x089FD7E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AD24u) goto L_08A7AD24;
    return;
L_08A7AD24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-17680), 0u);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5856)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5856)));
    hot_regs.g4 = g4;
        goto L_08A7AD40;
    }
    goto L_08A7AD34;
}
L_08A7AD34:
    hot_regs.g31 = (0x08A7AD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 399u, 0x08B65A54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AD3Cu) goto L_08A7AD3C;
    return;
L_08A7AD3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5856)));
    goto L_08A7AD40;
L_08A7AD40:
    hot_regs.g31 = (0x08A7AD48u);
    ctx.gpr[16] = (2236u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 199u, 0x08805630u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AD48u) goto L_08A7AD48;
    return;
L_08A7AD48:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A7AD54u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AD54u) goto L_08A7AD54;
    return;
L_08A7AD54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(29552)));
    g5 = (5888u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24632), static_cast<std::uint8_t>(g4));
    g4 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(29552), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7ADA4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A7ADD4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7ADD4u) goto L_08A7ADD4;
    return;
L_08A7ADD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (2236u << 16u);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    g7 = (5888u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g4 = (0u | 1u);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(-24632), static_cast<std::uint8_t>(g4));
    g4 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(29552), g4);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(-24631), static_cast<std::uint8_t>(ctx.gpr[16]));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(10076)));
    ctx.gpr[17] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[18] = (2280u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A7AEFC;
      }
      goto L_08A7AE14;
    }
}
L_08A7AE14:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21568));
    goto L_08A7AE18;
L_08A7AE18:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 10u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7AEE8;
      }
      goto L_08A7AE38;
    }
}
L_08A7AE38:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A7AE44u);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7AE44:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7AE68;
      }
      goto L_08A7AE58;
    }
}
L_08A7AE58:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[20] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A7AE68;
}
L_08A7AE68:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AEE8;
      }
      goto L_08A7AE70;
    }
L_08A7AE70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7AEE8;
      }
      goto L_08A7AE80;
    }
}
L_08A7AE80:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (0u | 0u);
    if (g5 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
        goto L_08A7AE94;
    }
    goto L_08A7AE94;
}
L_08A7AE94:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AEE8;
      }
      goto L_08A7AE9C;
    }
L_08A7AE9C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AEE8;
      }
      goto L_08A7AEA4;
    }
L_08A7AEA4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17673), static_cast<std::uint8_t>(ctx.gpr[16]));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A7AEB8u);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 455u, 0x0895B470u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AEB8u) goto L_08A7AEB8;
    return;
L_08A7AEB8:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A7AEC4u);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7AEC4:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (0u | 0u);
    if (g19 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = g19;
        goto L_08A7AED4;
    }
    goto L_08A7AED4;
}
L_08A7AED4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A7AEE4u);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 455u, 0x0895B470u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AEE4u) goto L_08A7AEE4;
    return;
L_08A7AEE4:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17673), static_cast<std::uint8_t>(0u));
    goto L_08A7AEE8;
L_08A7AEE8:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10076)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A7AE18;
      }
      goto L_08A7AEFC;
    }
}
L_08A7AEFC:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24631), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7AF50;
      }
      goto L_08A7AF0C;
    }
}
L_08A7AF0C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (2280u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(-21568));
    ctx.gpr[17] = g17;
    goto L_08A7AF14;
}
L_08A7AF14:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 8u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7AF3C;
      }
      goto L_08A7AF34;
    }
}
L_08A7AF34:
    hot_regs.g31 = (0x08A7AF3Cu);
    hot_regs.g5 = (0u | 0u);
    goto L_08A7A664;
L_08A7AF3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10076)));
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A7AF14;
      }
      goto L_08A7AF50;
    }
}
L_08A7AF50:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7AF74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g6 = (2236u << 16u);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(29552)));
    g8 = (51456u << 16u);
    g8 = (g8 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (g5 & 255u);
    g5 = (g7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(29552), g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g5 = (32u << 16u);
    g4 = (g4 & g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7AFD0;
      }
      goto L_08A7AFB8;
    }
}
L_08A7AFB8:
    hot_regs.g31 = (0x08A7AFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 432u, 0x08B26030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AFC0u) goto L_08A7AFC0;
    return;
L_08A7AFC0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AFD0;
      }
      goto L_08A7AFC8;
    }
L_08A7AFC8:
    hot_regs.g31 = (0x08A7AFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 663u, 0x088B7A4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7AFD0u) goto L_08A7AFD0;
    return;
L_08A7AFD0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(0u));
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
L_08A7AFE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g17);
    g17 = (g4 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7B028;
      }
      goto L_08A7B018;
    }
}
L_08A7B018:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A7B028;
}
L_08A7B028:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7B09C;
      }
      goto L_08A7B038;
    }
L_08A7B038:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 12u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B070;
      }
      goto L_08A7B054;
    }
}
L_08A7B054:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B09C;
      }
      goto L_08A7B070;
    }
}
L_08A7B070:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
        goto L_08A7B088;
    }
    goto L_08A7B07C;
}
L_08A7B07C:
    hot_regs.g31 = (0x08A7B084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B084u) goto L_08A7B084;
    return;
L_08A7B084:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_08A7B088;
L_08A7B088:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x08A7B094u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 174u, 0x08954B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B094u) goto L_08A7B094;
    return;
L_08A7B094:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0B4;
      }
      goto L_08A7B09C;
    }
L_08A7B09C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A7B0BC;
      }
      goto L_08A7B0AC;
    }
L_08A7B0AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0D8;
      }
      goto L_08A7B0B4;
    }
L_08A7B0B4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7B180;
      }
      goto L_08A7B0BC;
    }
L_08A7B0BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g31 = (0x08A7B0D0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B0D0u) goto L_08A7B0D0;
    return;
L_08A7B0D0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B11C;
      }
      goto L_08A7B0D8;
    }
L_08A7B0D8:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A7B0F0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B0F0u) goto L_08A7B0F0;
    return;
L_08A7B0F0:
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
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(58)));
    hot_regs.g4 = (hot_regs.g4 & 32u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B124;
      }
      goto L_08A7B114;
    }
L_08A7B114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B150;
      }
      goto L_08A7B11C;
    }
L_08A7B11C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A7B180;
      }
      goto L_08A7B124;
    }
L_08A7B124:
    hot_regs.g31 = (0x08A7B12Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 396u, 0x08AAE0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B12Cu) goto L_08A7B12C;
    return;
L_08A7B12C:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16880u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f20 - f12;
    ctx.set_fpu_condition((ctx.fpr[0] <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7B17C;
      }
      goto L_08A7B148;
    }
}
L_08A7B148:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B180;
      }
      goto L_08A7B150;
    }
L_08A7B150:
    hot_regs.g31 = (0x08A7B158u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 396u, 0x08AAE0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B158u) goto L_08A7B158;
    return;
L_08A7B158:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16968u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f20 - f12;
    ctx.set_fpu_condition((ctx.fpr[0] <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7B17C;
      }
      goto L_08A7B174;
    }
}
L_08A7B174:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B180;
      }
      goto L_08A7B17C;
    }
L_08A7B17C:
    hot_regs.g2 = (0u | 0u);
    goto L_08A7B180;
L_08A7B180:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7B19C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    hot_regs.g5 = (0u | 11u);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (49794u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g21);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g22);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g23);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g30);
    g30 = (2280u << 16u);
    g23 = (2280u << 16u);
    g22 = (2279u << 16u);
    g4 = (17026u << 16u);
    g21 = (2280u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g30 = (g30 + static_cast<std::uint32_t>(-29568));
    g23 = (g23 + static_cast<std::uint32_t>(-21568));
    g22 = (g22 + static_cast<std::uint32_t>(27328));
    g21 = (g21 + static_cast<std::uint32_t>(-30208));
    ctx.gpr[20] = (2u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    ctx.gpr[30] = g30;
    goto L_08A7B214;
}
L_08A7B214:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B484;
      }
      goto L_08A7B228;
    }
}
L_08A7B228:
{
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[17] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A7B47C;
      }
      goto L_08A7B23C;
    }
}
L_08A7B23C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g4));
    g4 = (hot_regs.g5 & 8u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B294;
      }
      goto L_08A7B250;
    }
}
L_08A7B250:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g5 = (g4 ^ 4u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    g4 = (g4 ^ 6u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7B294;
      }
      goto L_08A7B26C;
    }
}
L_08A7B26C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B294;
      }
      goto L_08A7B27C;
    }
}
L_08A7B27C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & ctx.gpr[20]);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B47C;
      }
      goto L_08A7B294;
    }
}
L_08A7B294:
    hot_regs.g31 = (0x08A7B29Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 83u, 0x08A7CEC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B29Cu) goto L_08A7B29C;
    return;
L_08A7B29C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
        goto L_08A7B2BC;
    }
    goto L_08A7B2AC;
}
L_08A7B2AC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7B47C;
      }
      goto L_08A7B2B4;
    }
L_08A7B2B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B2CC;
      }
      goto L_08A7B2BC;
    }
L_08A7B2BC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A7B3F8;
      }
      goto L_08A7B2C4;
    }
L_08A7B2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B47C;
      }
      goto L_08A7B2CC;
    }
L_08A7B2CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g5 = (g4 ^ 4u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7B324;
      }
      goto L_08A7B2E8;
    }
}
L_08A7B2E8:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g6 = (1u << 16u);
    g6 = (hot_regs.g5 & g6);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    g6 = (hot_regs.g4 ^ 6u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7B324;
      }
      goto L_08A7B304;
    }
}
L_08A7B304:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 & ctx.gpr[20]);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7B324;
      }
      goto L_08A7B314;
    }
}
L_08A7B314:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7B340;
      }
      goto L_08A7B324;
    }
}
L_08A7B324:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10072)));
    g5 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10072), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7B3F0;
      }
      goto L_08A7B340;
    }
}
L_08A7B340:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 ^ 10u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B378;
      }
      goto L_08A7B354;
    }
}
L_08A7B354:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
      if (branch_taken) {
          goto L_08A7B368;
      }
      goto L_08A7B360;
    }
L_08A7B360:
    hot_regs.g31 = (0x08A7B368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 339u, 0x08B6572Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B368u) goto L_08A7B368;
    return;
L_08A7B368:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5844)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(276)));
    if (ctx.gpr[16] != g4) {
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g4 = g4;
        goto L_08A7B3B0;
    }
    goto L_08A7B378;
}
L_08A7B378:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B3B4;
      }
      goto L_08A7B394;
    }
}
L_08A7B394:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(483))))));
    g4 = (g4 & 16u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B3B4;
      }
      goto L_08A7B3AC;
    }
}
L_08A7B3AC:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A7B3B0;
L_08A7B3B0:
    hot_regs.g4 = (ctx.gpr[18] & 255u);
    goto L_08A7B3B4;
L_08A7B3B4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B3D8;
      }
      goto L_08A7B3BC;
    }
L_08A7B3BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10076)));
    g5 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10076), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7B3F0;
      }
      goto L_08A7B3D8;
    }
}
L_08A7B3D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10064)));
    g5 = (g4 << 2u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10064), g4);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7B3F0;
}
L_08A7B3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B47C;
      }
      goto L_08A7B3F8;
    }
L_08A7B3F8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10048)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7B474;
      }
      goto L_08A7B414;
    }
}
L_08A7B414:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B474;
      }
      goto L_08A7B424;
    }
L_08A7B424:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10052)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A7B474;
      }
      goto L_08A7B440;
    }
}
L_08A7B440:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B474;
      }
      goto L_08A7B450;
    }
L_08A7B450:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(10068)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 149 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B474;
      }
      goto L_08A7B460;
    }
L_08A7B460:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 2u);
    g5 = (g5 + ctx.gpr[21]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10068), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A7B474;
}
L_08A7B474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B47C;
      }
      goto L_08A7B47C;
    }
L_08A7B47C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B228;
      }
      goto L_08A7B484;
    }
L_08A7B484:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B214;
      }
      goto L_08A7B494;
    }
}
L_08A7B494:
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
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7B4CC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[22] = (0u | 12u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7B504;
      }
      goto L_08A7B500;
    }
}
L_08A7B500:
    ctx.gpr[22] = (0u | 3u);
    goto L_08A7B504;
L_08A7B504:
{
    std::uint32_t g22 = ctx.gpr[22];
    hot_regs.g4 = (g22 | 0u);
    ctx.gpr[21] = (g22 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 == 0u;
    g22 = (ctx.gpr[21] | 0u);
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08A7B578;
      }
      goto L_08A7B514;
    }
}
L_08A7B514:
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(10048));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-5492));
    goto L_08A7B51C;
L_08A7B51C:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[20] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    g16 = (g16 + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A7B568;
      }
      goto L_08A7B528;
    }
}
L_08A7B528:
{
    std::uint32_t g20 = ctx.gpr[20];
    ctx.gpr[19] = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    g20 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A7B560;
      }
      goto L_08A7B53C;
    }
}
L_08A7B53C:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A7B54Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_08A7AFE4;
L_08A7B54C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B560;
      }
      goto L_08A7B554;
    }
L_08A7B554:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x08A7B560u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 548u, 0x08AD3280u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B560u) goto L_08A7B560;
    return;
L_08A7B560:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B528;
      }
      goto L_08A7B568;
    }
L_08A7B568:
{
    std::uint32_t g21 = ctx.gpr[21];
    hot_regs.g4 = (g21 | 0u);
    g21 = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[22] = (g21 | 0u);
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08A7B51C;
      }
      goto L_08A7B578;
    }
}
L_08A7B578:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7B5A0:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B5A8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B5B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A7B5C4u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 666u, 0x088B7AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B5C4u) goto L_08A7B5C4;
    return;
L_08A7B5C4:
    hot_regs.g31 = (0x08A7B5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 670u, 0x088B7B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B5CCu) goto L_08A7B5CC;
    return;
L_08A7B5CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(0u));
    g4 = (2236u << 16u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (51457u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g6 = (32u << 16u);
    g4 = (g4 & g6);
    { const bool branch_taken = g4 == 0u;
    g4 = (15820u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7B61C;
      }
      goto L_08A7B604;
    }
}
L_08A7B604:
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A7B610u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 644u, 0x088B76E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B610u) goto L_08A7B610;
    return;
L_08A7B610:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A7B65C;
      }
      goto L_08A7B61C;
    }
L_08A7B61C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A7B630u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 414u, 0x08B25E10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B630u) goto L_08A7B630;
    return;
L_08A7B630:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A7B65C;
      }
      goto L_08A7B64C;
    }
}
L_08A7B64C:
    hot_regs.g31 = (0x08A7B654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 661u, 0x088B78CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B654u) goto L_08A7B654;
    return;
L_08A7B654:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B660;
      }
      goto L_08A7B65C;
    }
L_08A7B65C:
    hot_regs.g2 = (0u | 0u);
    goto L_08A7B660;
L_08A7B660:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7B670:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A7B680u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g29 = g29;
    goto L_08A7AF74;
}
L_08A7B680:
    hot_regs.g31 = (0x08A7B688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B688u) goto L_08A7B688;
    return;
L_08A7B688:
    hot_regs.g31 = (0x08A7B690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B690u) goto L_08A7B690;
    return;
L_08A7B690:
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
L_08A7B69C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(0u));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (32u << 16u);
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7B704;
      }
      goto L_08A7B6BC;
    }
}
L_08A7B6BC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(482))))));
    g5 = (g5 & 1u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A7B6F4;
      }
      goto L_08A7B6CC;
    }
}
L_08A7B6CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(483))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A7B720;
      }
      goto L_08A7B6DC;
    }
}
L_08A7B6DC:
    hot_regs.g31 = (0x08A7B6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 666u, 0x088B7AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B6E4u) goto L_08A7B6E4;
    return;
L_08A7B6E4:
    hot_regs.g31 = (0x08A7B6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 670u, 0x088B7B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B6ECu) goto L_08A7B6EC;
    return;
L_08A7B6EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B724;
      }
      goto L_08A7B6F4;
    }
L_08A7B6F4:
    hot_regs.g31 = (0x08A7B6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 667u, 0x088B7AF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B6FCu) goto L_08A7B6FC;
    return;
L_08A7B6FC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B724;
      }
      goto L_08A7B704;
    }
L_08A7B704:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A7B714u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 644u, 0x088B76E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B714u) goto L_08A7B714;
    return;
L_08A7B714:
    hot_regs.g2 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(hot_regs.g2));
      if (branch_taken) {
          goto L_08A7B724;
      }
      goto L_08A7B720;
    }
L_08A7B720:
    hot_regs.g2 = (0u | 0u);
    goto L_08A7B724;
L_08A7B724:
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
L_08A7B730:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (hot_regs.g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7B754;
      }
      goto L_08A7B744;
    }
}
L_08A7B744:
    hot_regs.g31 = (0x08A7B74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B74Cu) goto L_08A7B74C;
    return;
L_08A7B74C:
    hot_regs.g31 = (0x08A7B754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B754u) goto L_08A7B754;
    return;
L_08A7B754:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7B764:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A7B778u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 666u, 0x088B7AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B778u) goto L_08A7B778;
    return;
L_08A7B778:
    hot_regs.g31 = (0x08A7B780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 670u, 0x088B7B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B780u) goto L_08A7B780;
    return;
L_08A7B780:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(0u));
    g4 = (2236u << 16u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (51457u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g6 = (32u << 16u);
    g4 = (g4 & g6);
    { const bool branch_taken = g4 == 0u;
    g4 = (15820u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7B7D0;
      }
      goto L_08A7B7B8;
    }
}
L_08A7B7B8:
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A7B7C4u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 644u, 0x088B76E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B7C4u) goto L_08A7B7C4;
    return;
L_08A7B7C4:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A7B810;
      }
      goto L_08A7B7D0;
    }
L_08A7B7D0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A7B7E4u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 414u, 0x08B25E10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B7E4u) goto L_08A7B7E4;
    return;
L_08A7B7E4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A7B810;
      }
      goto L_08A7B800;
    }
}
L_08A7B800:
    hot_regs.g31 = (0x08A7B808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 661u, 0x088B78CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B808u) goto L_08A7B808;
    return;
L_08A7B808:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B814;
      }
      goto L_08A7B810;
    }
L_08A7B810:
    hot_regs.g2 = (0u | 0u);
    goto L_08A7B814;
L_08A7B814:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7B824:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A7B834u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g29 = g29;
    goto L_08A7AF74;
}
L_08A7B834:
    hot_regs.g31 = (0x08A7B83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B83Cu) goto L_08A7B83C;
    return;
L_08A7B83C:
    hot_regs.g31 = (0x08A7B844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B844u) goto L_08A7B844;
    return;
L_08A7B844:
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
L_08A7B850:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A7B864u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 666u, 0x088B7AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B864u) goto L_08A7B864;
    return;
L_08A7B864:
    hot_regs.g31 = (0x08A7B86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 670u, 0x088B7B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B86Cu) goto L_08A7B86C;
    return;
L_08A7B86C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(0u));
    g4 = (2236u << 16u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (51457u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g6 = (32u << 16u);
    g4 = (g4 & g6);
    { const bool branch_taken = g4 == 0u;
    g4 = (15820u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7B8BC;
      }
      goto L_08A7B8A4;
    }
}
L_08A7B8A4:
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A7B8B0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 644u, 0x088B76E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B8B0u) goto L_08A7B8B0;
    return;
L_08A7B8B0:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A7B8FC;
      }
      goto L_08A7B8BC;
    }
L_08A7B8BC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A7B8D0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 414u, 0x08B25E10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B8D0u) goto L_08A7B8D0;
    return;
L_08A7B8D0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A7B8FC;
      }
      goto L_08A7B8EC;
    }
}
L_08A7B8EC:
    hot_regs.g31 = (0x08A7B8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 661u, 0x088B78CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B8F4u) goto L_08A7B8F4;
    return;
L_08A7B8F4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B900;
      }
      goto L_08A7B8FC;
    }
L_08A7B8FC:
    hot_regs.g2 = (0u | 0u);
    goto L_08A7B900;
L_08A7B900:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7B910:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A7B920u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g29 = g29;
    goto L_08A7AF74;
}
L_08A7B920:
    hot_regs.g31 = (0x08A7B928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B928u) goto L_08A7B928;
    return;
L_08A7B928:
    hot_regs.g31 = (0x08A7B930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B930u) goto L_08A7B930;
    return;
L_08A7B930:
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
L_08A7B93C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A7B950u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 666u, 0x088B7AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B950u) goto L_08A7B950;
    return;
L_08A7B950:
    hot_regs.g31 = (0x08A7B958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 670u, 0x088B7B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B958u) goto L_08A7B958;
    return;
L_08A7B958:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(0u));
    g4 = (2236u << 16u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (51457u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g6 = (32u << 16u);
    g4 = (g4 & g6);
    { const bool branch_taken = g4 == 0u;
    g4 = (15820u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7B9A8;
      }
      goto L_08A7B990;
    }
}
L_08A7B990:
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A7B99Cu);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 644u, 0x088B76E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B99Cu) goto L_08A7B99C;
    return;
L_08A7B99C:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A7B9E8;
      }
      goto L_08A7B9A8;
    }
L_08A7B9A8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A7B9BCu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 414u, 0x08B25E10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B9BCu) goto L_08A7B9BC;
    return;
L_08A7B9BC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A7B9E8;
      }
      goto L_08A7B9D8;
    }
}
L_08A7B9D8:
    hot_regs.g31 = (0x08A7B9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 661u, 0x088B78CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7B9E0u) goto L_08A7B9E0;
    return;
L_08A7B9E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7B9EC;
      }
      goto L_08A7B9E8;
    }
L_08A7B9E8:
    hot_regs.g2 = (0u | 0u);
    goto L_08A7B9EC;
L_08A7B9EC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7B9FC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A7BA0Cu);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g29 = g29;
    goto L_08A7AF74;
}
L_08A7BA0C:
    hot_regs.g31 = (0x08A7BA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BA14u) goto L_08A7BA14;
    return;
L_08A7BA14:
    hot_regs.g31 = (0x08A7BA1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BA1Cu) goto L_08A7BA1C;
    return;
L_08A7BA1C:
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
L_08A7BA28:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A7BA3Cu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 666u, 0x088B7AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BA3Cu) goto L_08A7BA3C;
    return;
L_08A7BA3C:
    hot_regs.g31 = (0x08A7BA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 670u, 0x088B7B84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BA44u) goto L_08A7BA44;
    return;
L_08A7BA44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(0u));
    g4 = (2236u << 16u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (51457u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g6 = (32u << 16u);
    g4 = (g4 & g6);
    { const bool branch_taken = g4 == 0u;
    g4 = (15820u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A7BA94;
      }
      goto L_08A7BA7C;
    }
}
L_08A7BA7C:
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A7BA88u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 644u, 0x088B76E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BA88u) goto L_08A7BA88;
    return;
L_08A7BA88:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A7BAD4;
      }
      goto L_08A7BA94;
    }
L_08A7BA94:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A7BAA8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 414u, 0x08B25E10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BAA8u) goto L_08A7BAA8;
    return;
L_08A7BAA8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A7BAD4;
      }
      goto L_08A7BAC4;
    }
}
L_08A7BAC4:
    hot_regs.g31 = (0x08A7BACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 661u, 0x088B78CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BACCu) goto L_08A7BACC;
    return;
L_08A7BACC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A7BAD8;
      }
      goto L_08A7BAD4;
    }
L_08A7BAD4:
    hot_regs.g2 = (0u | 0u);
    goto L_08A7BAD8;
L_08A7BAD8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A7BAE8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A7BAF8u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g29 = g29;
    goto L_08A7AF74;
}
L_08A7BAF8:
    hot_regs.g31 = (0x08A7BB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BB00u) goto L_08A7BB00;
    return;
L_08A7BB00:
    hot_regs.g31 = (0x08A7BB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BB08u) goto L_08A7BB08;
    return;
L_08A7BB08:
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
L_08A7BB14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g18);
    g18 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g16);
    g16 = (g18 + static_cast<std::uint32_t>(29552));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17680), g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(8192));
    g4 = (g4 - g5);
    g5 = (17664u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g5 = (17024u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g19);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g19 = (256u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    hot_regs.f22 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g19 = (g19 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (52224u << 16u);
    g5 = (39936u << 16u);
    ctx.gpr[20] = (255u << 16u);
    ctx.gpr[30] = (16896u << 16u);
    ctx.gpr[23] = (17152u << 16u);
    ctx.gpr[22] = (17664u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    ctx.gpr[21] = (17920u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A7BC0C;
      }
      goto L_08A7BBA8;
    }
}
L_08A7BBA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g7 = (g4 + static_cast<std::uint32_t>(3));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 2u));
    g7 = (g7 >> 30u);
    g4 = (g4 + g7);
    g4 = (g4 + static_cast<std::uint32_t>(3));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g4 = (g4 << 2u);
    g17 = (g17 + g4);
    g17 = (g17 + static_cast<std::uint32_t>(8));
    g4 = (g17 >> 8u);
    g7 = (15u << 16u);
    g4 = (g4 & g7);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g4);
    g7 = (4096u << 16u);
    g8 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 | g7);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g7 = (g17 & ctx.gpr[19]);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g8 = (2048u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g17);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[17] = g17;
    goto L_08A7BC0C;
}
L_08A7BC0C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (53760u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17680)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g4 & ctx.gpr[19]);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g7 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (40192u << 16u);
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[20]);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (16896u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (49664u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (19456u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32256));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (19712u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32256));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (54272u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (54529u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (5376u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (5633u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-961));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (59136u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (8448u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (8704u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (8960u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (22016u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (22528u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (22272u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (22528u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (7680u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (49664u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (49920u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (51968u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8780)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8760)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (ctx.gpr[28] + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(-8788)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 & ctx.gpr[19]);
    ctx.gpr[8] = (40960u << 16u);
    hot_regs.g6 = (hot_regs.g6 | ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g6 = (43008u << 16u);
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[20]);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(512));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (47104u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(2313));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    hot_regs.g4 = (0u | 480u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    hot_regs.g5 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[9] = (0u | 64u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[11] = (ctx.lo);
    hot_regs.g2 = (hot_regs.g7 - ctx.gpr[11]);
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g2) >> 1u));
    ctx.gpr[3] = (ctx.gpr[3] >> 31u);
    ctx.gpr[11] = (hot_regs.g7 + ctx.gpr[11]);
    hot_regs.g7 = (hot_regs.g2 + ctx.gpr[3]);
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    hot_regs.g2 = (hot_regs.g2 >> 31u);
    ctx.gpr[11] = (ctx.gpr[11] + hot_regs.g2);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 1u));
    hot_regs.g31 = (0x08A7BFE8u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 1u));
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 499u, 0x088DFA08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A7BFE8u) goto L_08A7BFE8;
    return;
L_08A7BFE8:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4264)));
    hot_regs.g5 = (16256u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g31 = (0x08A7C004u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem, &hot_regs);
    return;
}

void recomp_unit_0157(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0157_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_157(Runtime &runtime) {
    runtime.register_generated_unit(157u, 0x08A78000u, 16384u, &recomp_unit_0157, &recomp_unit_0157_entry);
    runtime.register_function(0x08A78000u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78064u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78068u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78074u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78100u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78104u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7810Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78110u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78118u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78164u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78180u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78268u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78318u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78328u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78354u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78364u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7838Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78398u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7844Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78458u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78464u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7851Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7858Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7859Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78800u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78810u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78820u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7883Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7884Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7885Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78940u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78948u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7896Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78988u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ECCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ED8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79010u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79030u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79064u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79070u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7907Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79088u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79090u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79094u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7909Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79108u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7911Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7913Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79180u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79200u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79208u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79210u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79214u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7921Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79224u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7922Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79248u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79254u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7925Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79260u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7926Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79280u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79310u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79358u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79378u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79390u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7939Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79404u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79420u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7942Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79434u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79438u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79444u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79458u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79488u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79508u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79514u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79518u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79524u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79530u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79538u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7953Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79544u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79550u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79558u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79560u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79564u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7956Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79574u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7957Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79598u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79600u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79648u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79668u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79680u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7968Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79690u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7969Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79710u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7971Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79724u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79728u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79734u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79748u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79778u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79804u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79810u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79818u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79824u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79830u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79838u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7983Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79850u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7985Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79864u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79868u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79874u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79888u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79914u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7992Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79938u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7993Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79948u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79954u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7995Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79960u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79968u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79974u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7997Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79984u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79988u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79990u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79998u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79ADCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C20u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79EF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A00Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A014u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A01Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A024u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A038u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A040u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A044u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A054u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A060u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A068u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A06Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A074u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A094u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A10Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A11Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A12Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A134u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A148u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A15Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A190u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A210u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A228u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A230u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A238u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A268u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A270u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A27Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A284u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A290u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A300u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A368u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A370u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A378u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A380u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A394u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A420u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A450u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A458u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A464u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A46Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A474u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A47Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A488u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A490u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A51Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A534u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A540u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A54Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A558u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A568u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A608u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A614u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A620u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A62Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A638u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A658u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A664u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A690u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A708u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A70Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A714u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A730u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A738u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A75Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A774u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A778u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A784u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A79Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A800u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A808u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A810u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A818u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A834u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A844u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A854u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A86Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A880u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A88Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A894u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A89Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A904u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A90Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A928u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A94Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AADCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AED4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B018u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B028u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B038u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B054u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B070u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B07Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B084u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B088u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B094u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B09Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B114u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B11Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B124u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B12Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B148u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B150u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B158u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B174u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B17Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B180u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B19Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B214u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B228u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B23Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B250u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B26Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B27Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B294u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B29Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B304u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B314u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B324u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B340u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B354u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B360u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B368u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B378u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B394u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B414u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B424u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B440u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B450u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B460u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B474u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B47Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B484u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B494u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B500u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B504u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B514u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B51Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B528u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B53Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B54Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B554u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B560u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B568u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B578u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B604u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B610u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B61Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B630u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B64Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B654u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B65Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B660u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B670u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B680u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B688u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B690u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B69Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B714u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B720u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B724u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B730u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B744u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B74Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B754u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B764u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B778u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B780u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B800u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B808u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B810u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B814u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B824u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B834u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B83Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B844u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B850u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B864u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B86Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B900u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B910u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B920u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B928u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B930u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B93Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B950u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B958u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B990u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B99Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BACCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB08u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFE8u, &recomp_unit_0157, "recomp_unit_0157");
}
} // namespace psprecomp
