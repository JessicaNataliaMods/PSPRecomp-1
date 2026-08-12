#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0162[4078] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 39, 0, 40, 0, 0, 41, 0, 42, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0,
    0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 68, 0, 0, 0, 0,
    0, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0,
    80, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0,
    0, 94, 0, 0, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 0, 0,
    104, 0, 105, 0, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 0,
    115, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 150,
    0, 0, 151, 0, 152, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0,
    157, 0, 158, 0, 159, 160, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 165,
    166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 174, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0,
    0, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 0,
    0, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 224, 225, 0, 0, 0, 226, 0,
    0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 231, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 236, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0,
    0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 0, 0, 290, 291, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 0, 296, 297, 298, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310,
    0, 0, 311, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 320, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0,
    325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0,
    0, 334, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341,
    0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349,
    0, 0, 350, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 355, 0, 356,
    0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 365,
    0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 373,
    0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 380, 381, 0, 0,
    0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387,
    0, 0, 0, 0, 0, 0, 0, 0, 388, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 401, 0, 0, 0, 0, 0, 402, 403, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 409, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 416, 417, 0, 418, 0, 419, 0, 0,
    420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0,
    0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 436,
    0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442,
    0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 450, 0, 451, 452, 0, 453, 0, 454, 0, 455, 0, 0, 0, 456, 0, 457, 0,
    458, 0, 0, 459, 0, 460, 0, 0, 461, 462, 0, 463, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0,
    0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473,
    0, 0, 474, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485,
    0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 516, 0, 0,
    0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0,
    521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0,
    0, 0, 528, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0,
    0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0,
    0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0,
    547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 559, 0,
    560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0,
    0, 566, 0, 0, 0, 567, 568, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 572, 573, 0, 0, 0, 0, 0,
    0, 0, 0, 574, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0,
    0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0,
    590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0,
    0, 596, 597, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0,
    602, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 605, 606, 0, 0, 0, 607, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0,
    0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 616, 0, 617, 0, 618,
    0, 619, 0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 626, 0, 627, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0,
    0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0,
    651, 0, 0, 0, 0, 652, 0, 653, 0, 654, 655, 0, 656, 657, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 662, 0,
    663, 664, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0,
    0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0,
    0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 681, 0, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0,
    0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0,
    0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0,
    699, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711,
};
void recomp_unit_0162_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A8C000u;
        entry_id = (entry_delta < 16312u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0162[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A8C000;
    case 2u: goto L_08A8C014;
    case 3u: goto L_08A8C01C;
    case 4u: goto L_08A8C028;
    case 5u: goto L_08A8C038;
    case 6u: goto L_08A8C04C;
    case 7u: goto L_08A8C064;
    case 8u: goto L_08A8C078;
    case 9u: goto L_08A8C088;
    case 10u: goto L_08A8C09C;
    case 11u: goto L_08A8C0B4;
    case 12u: goto L_08A8C0C8;
    case 13u: goto L_08A8C0EC;
    case 14u: goto L_08A8C0F8;
    case 15u: goto L_08A8C10C;
    case 16u: goto L_08A8C124;
    case 17u: goto L_08A8C140;
    case 18u: goto L_08A8C148;
    case 19u: goto L_08A8C158;
    case 20u: goto L_08A8C16C;
    case 21u: goto L_08A8C184;
    case 22u: goto L_08A8C198;
    case 23u: goto L_08A8C1BC;
    case 24u: goto L_08A8C1C0;
    case 25u: goto L_08A8C1EC;
    case 26u: goto L_08A8C214;
    case 27u: goto L_08A8C25C;
    case 28u: goto L_08A8C264;
    case 29u: goto L_08A8C278;
    case 30u: goto L_08A8C290;
    case 31u: goto L_08A8C2AC;
    case 32u: goto L_08A8C2B4;
    case 33u: goto L_08A8C2C8;
    case 34u: goto L_08A8C2D0;
    case 35u: goto L_08A8C2D8;
    case 36u: goto L_08A8C2E0;
    case 37u: goto L_08A8C308;
    case 38u: goto L_08A8C384;
    case 39u: goto L_08A8C398;
    case 40u: goto L_08A8C3A0;
    case 41u: goto L_08A8C3AC;
    case 42u: goto L_08A8C3B4;
    case 43u: goto L_08A8C3B8;
    case 44u: goto L_08A8C3C0;
    case 45u: goto L_08A8C3D8;
    case 46u: goto L_08A8C3E4;
    case 47u: goto L_08A8C4A8;
    case 48u: goto L_08A8C4B0;
    case 49u: goto L_08A8C4C0;
    case 50u: goto L_08A8C4E0;
    case 51u: goto L_08A8C4F8;
    case 52u: goto L_08A8C508;
    case 53u: goto L_08A8C53C;
    case 54u: goto L_08A8C54C;
    case 55u: goto L_08A8C554;
    case 56u: goto L_08A8C560;
    case 57u: goto L_08A8C56C;
    case 58u: goto L_08A8C598;
    case 59u: goto L_08A8C5CC;
    case 60u: goto L_08A8C5D4;
    case 61u: goto L_08A8C5D8;
    case 62u: goto L_08A8C5EC;
    case 63u: goto L_08A8C60C;
    case 64u: goto L_08A8C61C;
    case 65u: goto L_08A8C640;
    case 66u: goto L_08A8C660;
    case 67u: goto L_08A8C668;
    case 68u: goto L_08A8C66C;
    case 69u: goto L_08A8C684;
    case 70u: goto L_08A8C694;
    case 71u: goto L_08A8C698;
    case 72u: goto L_08A8C6C8;
    case 73u: goto L_08A8C738;
    case 74u: goto L_08A8C768;
    case 75u: goto L_08A8C7AC;
    case 76u: goto L_08A8C7B8;
    case 77u: goto L_08A8C7C4;
    case 78u: goto L_08A8C7EC;
    case 79u: goto L_08A8C7F4;
    case 80u: goto L_08A8C800;
    case 81u: goto L_08A8C814;
    case 82u: goto L_08A8C828;
    case 83u: goto L_08A8C848;
    case 84u: goto L_08A8C860;
    case 85u: goto L_08A8C870;
    case 86u: goto L_08A8C878;
    case 87u: goto L_08A8C8AC;
    case 88u: goto L_08A8C8BC;
    case 89u: goto L_08A8C8CC;
    case 90u: goto L_08A8C8D4;
    case 91u: goto L_08A8C8E0;
    case 92u: goto L_08A8C8F0;
    case 93u: goto L_08A8C8F8;
    case 94u: goto L_08A8C904;
    case 95u: goto L_08A8C914;
    case 96u: goto L_08A8C91C;
    case 97u: goto L_08A8C928;
    case 98u: goto L_08A8C938;
    case 99u: goto L_08A8C940;
    case 100u: goto L_08A8C94C;
    case 101u: goto L_08A8C95C;
    case 102u: goto L_08A8C964;
    case 103u: goto L_08A8C970;
    case 104u: goto L_08A8C980;
    case 105u: goto L_08A8C988;
    case 106u: goto L_08A8C994;
    case 107u: goto L_08A8C9A4;
    case 108u: goto L_08A8C9AC;
    case 109u: goto L_08A8C9B8;
    case 110u: goto L_08A8C9C8;
    case 111u: goto L_08A8C9D0;
    case 112u: goto L_08A8C9DC;
    case 113u: goto L_08A8C9EC;
    case 114u: goto L_08A8C9F4;
    case 115u: goto L_08A8CA00;
    case 116u: goto L_08A8CA10;
    case 117u: goto L_08A8CA18;
    case 118u: goto L_08A8CA24;
    case 119u: goto L_08A8CA34;
    case 120u: goto L_08A8CA3C;
    case 121u: goto L_08A8CA48;
    case 122u: goto L_08A8CA54;
    case 123u: goto L_08A8CA5C;
    case 124u: goto L_08A8CA64;
    case 125u: goto L_08A8CA94;
    case 126u: goto L_08A8CAB8;
    case 127u: goto L_08A8CAF8;
    case 128u: goto L_08A8CB04;
    case 129u: goto L_08A8CB10;
    case 130u: goto L_08A8CB18;
    case 131u: goto L_08A8CB20;
    case 132u: goto L_08A8CB48;
    case 133u: goto L_08A8CB58;
    case 134u: goto L_08A8CB6C;
    case 135u: goto L_08A8CB94;
    case 136u: goto L_08A8CBB4;
    case 137u: goto L_08A8CBC0;
    case 138u: goto L_08A8CBCC;
    case 139u: goto L_08A8CBD8;
    case 140u: goto L_08A8CBE4;
    case 141u: goto L_08A8CBF8;
    case 142u: goto L_08A8CC1C;
    case 143u: goto L_08A8CC2C;
    case 144u: goto L_08A8CC48;
    case 145u: goto L_08A8CC60;
    case 146u: goto L_08A8CC88;
    case 147u: goto L_08A8CC9C;
    case 148u: goto L_08A8CCB4;
    case 149u: goto L_08A8CCE4;
    case 150u: goto L_08A8CCFC;
    case 151u: goto L_08A8CD08;
    case 152u: goto L_08A8CD10;
    case 153u: goto L_08A8CD14;
    case 154u: goto L_08A8CD24;
    case 155u: goto L_08A8CD40;
    case 156u: goto L_08A8CD70;
    case 157u: goto L_08A8CD80;
    case 158u: goto L_08A8CD88;
    case 159u: goto L_08A8CD90;
    case 160u: goto L_08A8CD94;
    case 161u: goto L_08A8CDB0;
    case 162u: goto L_08A8CDB8;
    case 163u: goto L_08A8CDD8;
    case 164u: goto L_08A8CDE4;
    case 165u: goto L_08A8CDFC;
    case 166u: goto L_08A8CE00;
    case 167u: goto L_08A8CE1C;
    case 168u: goto L_08A8CE44;
    case 169u: goto L_08A8CE60;
    case 170u: goto L_08A8CE78;
    case 171u: goto L_08A8CEA0;
    case 172u: goto L_08A8CEB0;
    case 173u: goto L_08A8CEB8;
    case 174u: goto L_08A8CEC0;
    case 175u: goto L_08A8CEC4;
    case 176u: goto L_08A8CEE0;
    case 177u: goto L_08A8CEE8;
    case 178u: goto L_08A8CF08;
    case 179u: goto L_08A8CF14;
    case 180u: goto L_08A8CF2C;
    case 181u: goto L_08A8CF30;
    case 182u: goto L_08A8CF48;
    case 183u: goto L_08A8CF70;
    case 184u: goto L_08A8CF8C;
    case 185u: goto L_08A8CFA4;
    case 186u: goto L_08A8CFC4;
    case 187u: goto L_08A8CFD4;
    case 188u: goto L_08A8CFE8;
    case 189u: goto L_08A8D008;
    case 190u: goto L_08A8D018;
    case 191u: goto L_08A8D024;
    case 192u: goto L_08A8D02C;
    case 193u: goto L_08A8D040;
    case 194u: goto L_08A8D05C;
    case 195u: goto L_08A8D070;
    case 196u: goto L_08A8D084;
    case 197u: goto L_08A8D09C;
    case 198u: goto L_08A8D0A8;
    case 199u: goto L_08A8D0BC;
    case 200u: goto L_08A8D0C4;
    case 201u: goto L_08A8D0E4;
    case 202u: goto L_08A8D0F8;
    case 203u: goto L_08A8D10C;
    case 204u: goto L_08A8D134;
    case 205u: goto L_08A8D144;
    case 206u: goto L_08A8D168;
    case 207u: goto L_08A8D170;
    case 208u: goto L_08A8D190;
    case 209u: goto L_08A8D19C;
    case 210u: goto L_08A8D1B4;
    case 211u: goto L_08A8D1B8;
    case 212u: goto L_08A8D1D0;
    case 213u: goto L_08A8D1E8;
    case 214u: goto L_08A8D200;
    case 215u: goto L_08A8D214;
    case 216u: goto L_08A8D22C;
    case 217u: goto L_08A8D244;
    case 218u: goto L_08A8D258;
    case 219u: goto L_08A8D278;
    case 220u: goto L_08A8D288;
    case 221u: goto L_08A8D29C;
    case 222u: goto L_08A8D2D0;
    case 223u: goto L_08A8D2DC;
    case 224u: goto L_08A8D2E4;
    case 225u: goto L_08A8D2E8;
    case 226u: goto L_08A8D2F8;
    case 227u: goto L_08A8D304;
    case 228u: goto L_08A8D310;
    case 229u: goto L_08A8D31C;
    case 230u: goto L_08A8D324;
    case 231u: goto L_08A8D328;
    case 232u: goto L_08A8D330;
    case 233u: goto L_08A8D344;
    case 234u: goto L_08A8D350;
    case 235u: goto L_08A8D358;
    case 236u: goto L_08A8D35C;
    case 237u: goto L_08A8D368;
    case 238u: goto L_08A8D388;
    case 239u: goto L_08A8D3A4;
    case 240u: goto L_08A8D3C8;
    case 241u: goto L_08A8D3F0;
    case 242u: goto L_08A8D420;
    case 243u: goto L_08A8D438;
    case 244u: goto L_08A8D460;
    case 245u: goto L_08A8D488;
    case 246u: goto L_08A8D4A0;
    case 247u: goto L_08A8D4D0;
    case 248u: goto L_08A8D4E0;
    case 249u: goto L_08A8D4F4;
    case 250u: goto L_08A8D510;
    case 251u: goto L_08A8D518;
    case 252u: goto L_08A8D538;
    case 253u: goto L_08A8D544;
    case 254u: goto L_08A8D558;
    case 255u: goto L_08A8D578;
    case 256u: goto L_08A8D584;
    case 257u: goto L_08A8D598;
    case 258u: goto L_08A8D5B0;
    case 259u: goto L_08A8D5C8;
    case 260u: goto L_08A8D5DC;
    case 261u: goto L_08A8D604;
    case 262u: goto L_08A8D614;
    case 263u: goto L_08A8D62C;
    case 264u: goto L_08A8D65C;
    case 265u: goto L_08A8D668;
    case 266u: goto L_08A8D67C;
    case 267u: goto L_08A8D698;
    case 268u: goto L_08A8D6B8;
    case 269u: goto L_08A8D6C4;
    case 270u: goto L_08A8D6D8;
    case 271u: goto L_08A8D700;
    case 272u: goto L_08A8D710;
    case 273u: goto L_08A8D728;
    case 274u: goto L_08A8D79C;
    case 275u: goto L_08A8D7B0;
    case 276u: goto L_08A8D7E0;
    case 277u: goto L_08A8D83C;
    case 278u: goto L_08A8D848;
    case 279u: goto L_08A8D860;
    case 280u: goto L_08A8D88C;
    case 281u: goto L_08A8D894;
    case 282u: goto L_08A8D89C;
    case 283u: goto L_08A8D8A4;
    case 284u: goto L_08A8D8AC;
    case 285u: goto L_08A8D8B4;
    case 286u: goto L_08A8D8BC;
    case 287u: goto L_08A8D8C4;
    case 288u: goto L_08A8D8CC;
    case 289u: goto L_08A8D8D4;
    case 290u: goto L_08A8D8E4;
    case 291u: goto L_08A8D8E8;
    case 292u: goto L_08A8D904;
    case 293u: goto L_08A8D924;
    case 294u: goto L_08A8D930;
    case 295u: goto L_08A8D93C;
    case 296u: goto L_08A8D944;
    case 297u: goto L_08A8D948;
    case 298u: goto L_08A8D94C;
    case 299u: goto L_08A8D958;
    case 300u: goto L_08A8D970;
    case 301u: goto L_08A8D9B4;
    case 302u: goto L_08A8D9DC;
    case 303u: goto L_08A8D9E4;
    case 304u: goto L_08A8D9EC;
    case 305u: goto L_08A8DA18;
    case 306u: goto L_08A8DA4C;
    case 307u: goto L_08A8DA58;
    case 308u: goto L_08A8DA68;
    case 309u: goto L_08A8DA74;
    case 310u: goto L_08A8DA7C;
    case 311u: goto L_08A8DA88;
    case 312u: goto L_08A8DA8C;
    case 313u: goto L_08A8DAA0;
    case 314u: goto L_08A8DAB8;
    case 315u: goto L_08A8DACC;
    case 316u: goto L_08A8DAE4;
    case 317u: goto L_08A8DAF8;
    case 318u: goto L_08A8DB10;
    case 319u: goto L_08A8DB24;
    case 320u: goto L_08A8DB2C;
    case 321u: goto L_08A8DB30;
    case 322u: goto L_08A8DB38;
    case 323u: goto L_08A8DB68;
    case 324u: goto L_08A8DB78;
    case 325u: goto L_08A8DB80;
    case 326u: goto L_08A8DB88;
    case 327u: goto L_08A8DB90;
    case 328u: goto L_08A8DB98;
    case 329u: goto L_08A8DBA0;
    case 330u: goto L_08A8DBB8;
    case 331u: goto L_08A8DBC4;
    case 332u: goto L_08A8DBE0;
    case 333u: goto L_08A8DBE8;
    case 334u: goto L_08A8DC04;
    case 335u: goto L_08A8DC0C;
    case 336u: goto L_08A8DC18;
    case 337u: goto L_08A8DC30;
    case 338u: goto L_08A8DC3C;
    case 339u: goto L_08A8DC58;
    case 340u: goto L_08A8DC60;
    case 341u: goto L_08A8DC7C;
    case 342u: goto L_08A8DC84;
    case 343u: goto L_08A8DC90;
    case 344u: goto L_08A8DCA8;
    case 345u: goto L_08A8DCB4;
    case 346u: goto L_08A8DCD0;
    case 347u: goto L_08A8DCD8;
    case 348u: goto L_08A8DCF4;
    case 349u: goto L_08A8DCFC;
    case 350u: goto L_08A8DD08;
    case 351u: goto L_08A8DD0C;
    case 352u: goto L_08A8DD20;
    case 353u: goto L_08A8DD5C;
    case 354u: goto L_08A8DD6C;
    case 355u: goto L_08A8DD74;
    case 356u: goto L_08A8DD7C;
    case 357u: goto L_08A8DD84;
    case 358u: goto L_08A8DD8C;
    case 359u: goto L_08A8DD94;
    case 360u: goto L_08A8DDA8;
    case 361u: goto L_08A8DDB4;
    case 362u: goto L_08A8DDD0;
    case 363u: goto L_08A8DDD8;
    case 364u: goto L_08A8DDF4;
    case 365u: goto L_08A8DDFC;
    case 366u: goto L_08A8DE08;
    case 367u: goto L_08A8DE1C;
    case 368u: goto L_08A8DE28;
    case 369u: goto L_08A8DE44;
    case 370u: goto L_08A8DE4C;
    case 371u: goto L_08A8DE68;
    case 372u: goto L_08A8DE70;
    case 373u: goto L_08A8DE7C;
    case 374u: goto L_08A8DE90;
    case 375u: goto L_08A8DE9C;
    case 376u: goto L_08A8DEB8;
    case 377u: goto L_08A8DEC0;
    case 378u: goto L_08A8DEDC;
    case 379u: goto L_08A8DEE4;
    case 380u: goto L_08A8DEF0;
    case 381u: goto L_08A8DEF4;
    case 382u: goto L_08A8DF08;
    case 383u: goto L_08A8DF44;
    case 384u: goto L_08A8DF4C;
    case 385u: goto L_08A8DF5C;
    case 386u: goto L_08A8DF6C;
    case 387u: goto L_08A8DF7C;
    case 388u: goto L_08A8DFA0;
    case 389u: goto L_08A8DFA4;
    case 390u: goto L_08A8DFC0;
    case 391u: goto L_08A8DFD0;
    case 392u: goto L_08A8DFD8;
    case 393u: goto L_08A8DFE0;
    case 394u: goto L_08A8E000;
    case 395u: goto L_08A8E008;
    case 396u: goto L_08A8E024;
    case 397u: goto L_08A8E02C;
    case 398u: goto L_08A8E034;
    case 399u: goto L_08A8E03C;
    case 400u: goto L_08A8E044;
    case 401u: goto L_08A8E048;
    case 402u: goto L_08A8E060;
    case 403u: goto L_08A8E064;
    case 404u: goto L_08A8E094;
    case 405u: goto L_08A8E0B0;
    case 406u: goto L_08A8E0D4;
    case 407u: goto L_08A8E0DC;
    case 408u: goto L_08A8E0E4;
    case 409u: goto L_08A8E0F0;
    case 410u: goto L_08A8E104;
    case 411u: goto L_08A8E118;
    case 412u: goto L_08A8E130;
    case 413u: goto L_08A8E144;
    case 414u: goto L_08A8E150;
    case 415u: goto L_08A8E158;
    case 416u: goto L_08A8E160;
    case 417u: goto L_08A8E164;
    case 418u: goto L_08A8E16C;
    case 419u: goto L_08A8E174;
    case 420u: goto L_08A8E180;
    case 421u: goto L_08A8E188;
    case 422u: goto L_08A8E1C0;
    case 423u: goto L_08A8E1C8;
    case 424u: goto L_08A8E1D8;
    case 425u: goto L_08A8E1E8;
    case 426u: goto L_08A8E1F8;
    case 427u: goto L_08A8E21C;
    case 428u: goto L_08A8E230;
    case 429u: goto L_08A8E250;
    case 430u: goto L_08A8E258;
    case 431u: goto L_08A8E264;
    case 432u: goto L_08A8E27C;
    case 433u: goto L_08A8E2AC;
    case 434u: goto L_08A8E2E4;
    case 435u: goto L_08A8E2EC;
    case 436u: goto L_08A8E2FC;
    case 437u: goto L_08A8E30C;
    case 438u: goto L_08A8E31C;
    case 439u: goto L_08A8E340;
    case 440u: goto L_08A8E354;
    case 441u: goto L_08A8E374;
    case 442u: goto L_08A8E37C;
    case 443u: goto L_08A8E388;
    case 444u: goto L_08A8E3A0;
    case 445u: goto L_08A8E3D0;
    case 446u: goto L_08A8E410;
    case 447u: goto L_08A8E41C;
    case 448u: goto L_08A8E428;
    case 449u: goto L_08A8E430;
    case 450u: goto L_08A8E43C;
    case 451u: goto L_08A8E444;
    case 452u: goto L_08A8E448;
    case 453u: goto L_08A8E450;
    case 454u: goto L_08A8E458;
    case 455u: goto L_08A8E460;
    case 456u: goto L_08A8E470;
    case 457u: goto L_08A8E478;
    case 458u: goto L_08A8E480;
    case 459u: goto L_08A8E48C;
    case 460u: goto L_08A8E494;
    case 461u: goto L_08A8E4A0;
    case 462u: goto L_08A8E4A4;
    case 463u: goto L_08A8E4AC;
    case 464u: goto L_08A8E4B0;
    case 465u: goto L_08A8E4B8;
    case 466u: goto L_08A8E4E8;
    case 467u: goto L_08A8E504;
    case 468u: goto L_08A8E510;
    case 469u: goto L_08A8E518;
    case 470u: goto L_08A8E530;
    case 471u: goto L_08A8E548;
    case 472u: goto L_08A8E55C;
    case 473u: goto L_08A8E57C;
    case 474u: goto L_08A8E588;
    case 475u: goto L_08A8E594;
    case 476u: goto L_08A8E59C;
    case 477u: goto L_08A8E5B4;
    case 478u: goto L_08A8E5CC;
    case 479u: goto L_08A8E5E0;
    case 480u: goto L_08A8E608;
    case 481u: goto L_08A8E614;
    case 482u: goto L_08A8E62C;
    case 483u: goto L_08A8E640;
    case 484u: goto L_08A8E658;
    case 485u: goto L_08A8E67C;
    case 486u: goto L_08A8E694;
    case 487u: goto L_08A8E6D4;
    case 488u: goto L_08A8E6E0;
    case 489u: goto L_08A8E6F8;
    case 490u: goto L_08A8E70C;
    case 491u: goto L_08A8E72C;
    case 492u: goto L_08A8E750;
    case 493u: goto L_08A8E770;
    case 494u: goto L_08A8E808;
    case 495u: goto L_08A8E81C;
    case 496u: goto L_08A8E834;
    case 497u: goto L_08A8E848;
    case 498u: goto L_08A8E894;
    case 499u: goto L_08A8E8B4;
    case 500u: goto L_08A8E8E4;
    case 501u: goto L_08A8E90C;
    case 502u: goto L_08A8E918;
    case 503u: goto L_08A8E930;
    case 504u: goto L_08A8E944;
    case 505u: goto L_08A8E960;
    case 506u: goto L_08A8E988;
    case 507u: goto L_08A8E994;
    case 508u: goto L_08A8E9AC;
    case 509u: goto L_08A8E9C0;
    case 510u: goto L_08A8E9DC;
    case 511u: goto L_08A8EA04;
    case 512u: goto L_08A8EA10;
    case 513u: goto L_08A8EA28;
    case 514u: goto L_08A8EA3C;
    case 515u: goto L_08A8EA58;
    case 516u: goto L_08A8EA74;
    case 517u: goto L_08A8EA90;
    case 518u: goto L_08A8EAAC;
    case 519u: goto L_08A8EAD8;
    case 520u: goto L_08A8EAF0;
    case 521u: goto L_08A8EB00;
    case 522u: goto L_08A8EB08;
    case 523u: goto L_08A8EB20;
    case 524u: goto L_08A8EB28;
    case 525u: goto L_08A8EB30;
    case 526u: goto L_08A8EB48;
    case 527u: goto L_08A8EB74;
    case 528u: goto L_08A8EB88;
    case 529u: goto L_08A8EB98;
    case 530u: goto L_08A8EBA0;
    case 531u: goto L_08A8EBB4;
    case 532u: goto L_08A8EBD0;
    case 533u: goto L_08A8EBDC;
    case 534u: goto L_08A8EBF8;
    case 535u: goto L_08A8EC1C;
    case 536u: goto L_08A8EC38;
    case 537u: goto L_08A8EC40;
    case 538u: goto L_08A8EC4C;
    case 539u: goto L_08A8EC54;
    case 540u: goto L_08A8EC68;
    case 541u: goto L_08A8EC84;
    case 542u: goto L_08A8EC90;
    case 543u: goto L_08A8ECAC;
    case 544u: goto L_08A8ECD0;
    case 545u: goto L_08A8ECEC;
    case 546u: goto L_08A8ECF4;
    case 547u: goto L_08A8ED00;
    case 548u: goto L_08A8ED30;
    case 549u: goto L_08A8ED68;
    case 550u: goto L_08A8ED9C;
    case 551u: goto L_08A8EDAC;
    case 552u: goto L_08A8EDE4;
    case 553u: goto L_08A8EDF0;
    case 554u: goto L_08A8EE28;
    case 555u: goto L_08A8EEA0;
    case 556u: goto L_08A8EED8;
    case 557u: goto L_08A8EEE4;
    case 558u: goto L_08A8EEEC;
    case 559u: goto L_08A8EEF8;
    case 560u: goto L_08A8EF00;
    case 561u: goto L_08A8EF1C;
    case 562u: goto L_08A8EF30;
    case 563u: goto L_08A8EF4C;
    case 564u: goto L_08A8EF68;
    case 565u: goto L_08A8EF70;
    case 566u: goto L_08A8EF84;
    case 567u: goto L_08A8EF94;
    case 568u: goto L_08A8EF98;
    case 569u: goto L_08A8EFAC;
    case 570u: goto L_08A8EFB4;
    case 571u: goto L_08A8EFC4;
    case 572u: goto L_08A8EFE4;
    case 573u: goto L_08A8EFE8;
    case 574u: goto L_08A8F00C;
    case 575u: goto L_08A8F010;
    case 576u: goto L_08A8F040;
    case 577u: goto L_08A8F06C;
    case 578u: goto L_08A8F074;
    case 579u: goto L_08A8F0AC;
    case 580u: goto L_08A8F0B4;
    case 581u: goto L_08A8F124;
    case 582u: goto L_08A8F144;
    case 583u: goto L_08A8F150;
    case 584u: goto L_08A8F168;
    case 585u: goto L_08A8F188;
    case 586u: goto L_08A8F198;
    case 587u: goto L_08A8F1B0;
    case 588u: goto L_08A8F1D4;
    case 589u: goto L_08A8F1E4;
    case 590u: goto L_08A8F200;
    case 591u: goto L_08A8F21C;
    case 592u: goto L_08A8F240;
    case 593u: goto L_08A8F254;
    case 594u: goto L_08A8F264;
    case 595u: goto L_08A8F270;
    case 596u: goto L_08A8F284;
    case 597u: goto L_08A8F288;
    case 598u: goto L_08A8F298;
    case 599u: goto L_08A8F2A4;
    case 600u: goto L_08A8F2C8;
    case 601u: goto L_08A8F2EC;
    case 602u: goto L_08A8F300;
    case 603u: goto L_08A8F310;
    case 604u: goto L_08A8F31C;
    case 605u: goto L_08A8F330;
    case 606u: goto L_08A8F334;
    case 607u: goto L_08A8F344;
    case 608u: goto L_08A8F350;
    case 609u: goto L_08A8F374;
    case 610u: goto L_08A8F390;
    case 611u: goto L_08A8F3AC;
    case 612u: goto L_08A8F3B8;
    case 613u: goto L_08A8F3CC;
    case 614u: goto L_08A8F3D8;
    case 615u: goto L_08A8F3E0;
    case 616u: goto L_08A8F3EC;
    case 617u: goto L_08A8F3F4;
    case 618u: goto L_08A8F3FC;
    case 619u: goto L_08A8F404;
    case 620u: goto L_08A8F414;
    case 621u: goto L_08A8F41C;
    case 622u: goto L_08A8F428;
    case 623u: goto L_08A8F43C;
    case 624u: goto L_08A8F454;
    case 625u: goto L_08A8F45C;
    case 626u: goto L_08A8F488;
    case 627u: goto L_08A8F490;
    case 628u: goto L_08A8F49C;
    case 629u: goto L_08A8F4B0;
    case 630u: goto L_08A8F4C4;
    case 631u: goto L_08A8F4DC;
    case 632u: goto L_08A8F4E4;
    case 633u: goto L_08A8F518;
    case 634u: goto L_08A8F520;
    case 635u: goto L_08A8F538;
    case 636u: goto L_08A8F548;
    case 637u: goto L_08A8F554;
    case 638u: goto L_08A8F564;
    case 639u: goto L_08A8F588;
    case 640u: goto L_08A8F598;
    case 641u: goto L_08A8F5AC;
    case 642u: goto L_08A8F5B8;
    case 643u: goto L_08A8F5CC;
    case 644u: goto L_08A8F64C;
    case 645u: goto L_08A8F6B0;
    case 646u: goto L_08A8F6B8;
    case 647u: goto L_08A8F6C4;
    case 648u: goto L_08A8F6D4;
    case 649u: goto L_08A8F6DC;
    case 650u: goto L_08A8F6F0;
    case 651u: goto L_08A8F700;
    case 652u: goto L_08A8F714;
    case 653u: goto L_08A8F71C;
    case 654u: goto L_08A8F724;
    case 655u: goto L_08A8F728;
    case 656u: goto L_08A8F730;
    case 657u: goto L_08A8F734;
    case 658u: goto L_08A8F754;
    case 659u: goto L_08A8F764;
    case 660u: goto L_08A8F7D8;
    case 661u: goto L_08A8F7F4;
    case 662u: goto L_08A8F7F8;
    case 663u: goto L_08A8F800;
    case 664u: goto L_08A8F804;
    case 665u: goto L_08A8F80C;
    case 666u: goto L_08A8F888;
    case 667u: goto L_08A8F8B4;
    case 668u: goto L_08A8F8C8;
    case 669u: goto L_08A8F8E0;
    case 670u: goto L_08A8F8EC;
    case 671u: goto L_08A8F908;
    case 672u: goto L_08A8F944;
    case 673u: goto L_08A8F95C;
    case 674u: goto L_08A8F974;
    case 675u: goto L_08A8F994;
    case 676u: goto L_08A8F9A4;
    case 677u: goto L_08A8F9BC;
    case 678u: goto L_08A8F9D8;
    case 679u: goto L_08A8F9F4;
    case 680u: goto L_08A8FA44;
    case 681u: goto L_08A8FA84;
    case 682u: goto L_08A8FA90;
    case 683u: goto L_08A8FA98;
    case 684u: goto L_08A8FAA0;
    case 685u: goto L_08A8FAB4;
    case 686u: goto L_08A8FBA4;
    case 687u: goto L_08A8FBAC;
    case 688u: goto L_08A8FC30;
    case 689u: goto L_08A8FC5C;
    case 690u: goto L_08A8FC70;
    case 691u: goto L_08A8FC78;
    case 692u: goto L_08A8FC90;
    case 693u: goto L_08A8FCA4;
    case 694u: goto L_08A8FCBC;
    case 695u: goto L_08A8FCD8;
    case 696u: goto L_08A8FCE4;
    case 697u: goto L_08A8FD04;
    case 698u: goto L_08A8FD70;
    case 699u: goto L_08A8FD80;
    case 700u: goto L_08A8FD8C;
    case 701u: goto L_08A8FDA4;
    case 702u: goto L_08A8FDF0;
    case 703u: goto L_08A8FE24;
    case 704u: goto L_08A8FE2C;
    case 705u: goto L_08A8FE38;
    case 706u: goto L_08A8FE48;
    case 707u: goto L_08A8FE90;
    case 708u: goto L_08A8FEB4;
    case 709u: goto L_08A8FEF4;
    case 710u: goto L_08A8FF90;
    case 711u: goto L_08A8FFB4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A8C000:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    g5 = (g7 + g5);
    g7 = (g5 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(600), g5);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8C01C;
      }
      goto L_08A8C014;
    }
}
L_08A8C014:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(600), g5);
    hot_regs.g5 = g5;
    goto L_08A8C01C;
}
L_08A8C01C:
    hot_regs.g7 = (hot_regs.g6 < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          goto L_08A8C078;
      }
      goto L_08A8C028;
    }
L_08A8C028:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g5 = (hot_regs.g6 + g5);
    g7 = (g5 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g7 = (0u + static_cast<std::uint32_t>(1404));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8C04C;
      }
      goto L_08A8C038;
    }
}
L_08A8C038:
{
    std::uint32_t g5 = hot_regs.g5;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g5 = (ctx.lo);
    g5 = (ctx.gpr[19] + g5);
    { const bool branch_taken = 0u == 0u;
    g5 = (g5 + static_cast<std::uint32_t>(608));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8C064;
      }
      goto L_08A8C04C;
    }
}
L_08A8C04C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-32));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g5 = (ctx.lo);
    g5 = (ctx.gpr[19] + g5);
    g5 = (g5 + static_cast<std::uint32_t>(608));
    hot_regs.g5 = g5;
    goto L_08A8C064;
}
L_08A8C064:
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), 0u);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (g6 < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A8C028;
      }
      goto L_08A8C078;
    }
}
L_08A8C078:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + g5);
    g5 = (g4 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u + static_cast<std::uint32_t>(1404));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8C09C;
      }
      goto L_08A8C088;
    }
}
L_08A8C088:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g19 = (g19 + g4);
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 + static_cast<std::uint32_t>(608));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A8C0B4;
      }
      goto L_08A8C09C;
    }
}
L_08A8C09C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (g4 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g19 = (g19 + g4);
    g19 = (g19 + static_cast<std::uint32_t>(608));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    goto L_08A8C0B4;
}
L_08A8C0B4:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 175u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_08A8C0C8;
L_08A8C0C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), g6);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g6 = (ctx.gpr[17] + g4);
    hot_regs.g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 != 0u;
    g8 = (ctx.gpr[19] + g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A8C0C8;
      }
      goto L_08A8C0EC;
    }
}
L_08A8C0EC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), hot_regs.g7);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C1C0;
      }
      goto L_08A8C0F8;
    }
L_08A8C0F8:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g5);
    g7 = (hot_regs.g6 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g7 = (0u + static_cast<std::uint32_t>(1404));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8C124;
      }
      goto L_08A8C10C;
    }
}
L_08A8C10C:
{
    std::uint32_t g6 = hot_regs.g6;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g6 = (ctx.lo);
    g6 = (ctx.gpr[19] + g6);
    g6 = (g6 + static_cast<std::uint32_t>(608));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A8C140;
      }
      goto L_08A8C124;
    }
}
L_08A8C124:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-32));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g7)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g6 = (ctx.lo);
    g6 = (ctx.gpr[19] + g6);
    g6 = (g6 + static_cast<std::uint32_t>(608));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
    goto L_08A8C140;
}
L_08A8C140:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C1C0;
      }
      goto L_08A8C148;
    }
L_08A8C148:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + g5);
    g5 = (g4 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u + static_cast<std::uint32_t>(1404));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8C16C;
      }
      goto L_08A8C158;
    }
}
L_08A8C158:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g19 = (g19 + g4);
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 + static_cast<std::uint32_t>(608));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A8C184;
      }
      goto L_08A8C16C;
    }
}
L_08A8C16C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (g4 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(1404));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g19 = (g19 + g4);
    g19 = (g19 + static_cast<std::uint32_t>(608));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    goto L_08A8C184;
}
L_08A8C184:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 175u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_08A8C198;
L_08A8C198:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), hot_regs.g7);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), g6);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g6 = (ctx.gpr[17] + g4);
    hot_regs.g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 != 0u;
    g8 = (ctx.gpr[19] + g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A8C198;
      }
      goto L_08A8C1BC;
    }
}
L_08A8C1BC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), hot_regs.g7);
    goto L_08A8C1C0;
L_08A8C1C0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10084)));
    hot_regs.g5 = (0u | 5u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 8u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[1]));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A8C1ECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 151u, 0x08A88CA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C1ECu) goto L_08A8C1EC;
    return;
L_08A8C1EC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8C214:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), g21);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), hot_regs.g31);
    g21 = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (0u | 47u);
    hot_regs.g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(140)));
    g6 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g6 = (g6 & 255u);
    hot_regs.g7 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(112)));
    hot_regs.g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(108)));
    hot_regs.g6 = g6;
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
    goto L_08A8C25C;
}
L_08A8C25C:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C2E0;
      }
      goto L_08A8C264;
    }
L_08A8C264:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    g6 = (hot_regs.g5 + g6);
    g9 = (g6 < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = g9 == 0u;
    g9 = (0u + static_cast<std::uint32_t>(1412));
    hot_regs.g6 = g6;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A8C290;
      }
      goto L_08A8C278;
    }
}
L_08A8C278:
{
    std::uint32_t g6 = hot_regs.g6;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g6 = (ctx.lo);
    g6 = (ctx.gpr[21] + g6);
    g6 = (g6 + static_cast<std::uint32_t>(144));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A8C2AC;
      }
      goto L_08A8C290;
    }
}
L_08A8C290:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(1412));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g6 = (ctx.lo);
    g6 = (ctx.gpr[21] + g6);
    g6 = (g6 + static_cast<std::uint32_t>(144));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
    goto L_08A8C2AC;
}
L_08A8C2AC:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C2E0;
      }
      goto L_08A8C2B4;
    }
L_08A8C2B4:
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(140), hot_regs.g5);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    g6 = (hot_regs.g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    g6 = (g6 & 255u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A8C2D0;
      }
      goto L_08A8C2C8;
    }
}
L_08A8C2C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A8C2D8;
      }
      goto L_08A8C2D0;
    }
L_08A8C2D0:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(136), g9);
    ctx.gpr[9] = g9;
    goto L_08A8C2D8;
}
L_08A8C2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C25C;
      }
      goto L_08A8C2E0;
    }
L_08A8C2E0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[22] = (0u | 0u);
    g5 = (hot_regs.g7 - hot_regs.g4);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g6 = (g6 >> 30u);
    g5 = (g5 + g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g5 = (ctx.gpr[22] < g5 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[18] = (ctx.gpr[21] + static_cast<std::uint32_t>(100));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A8C738;
      }
      goto L_08A8C308;
    }
}
L_08A8C308:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (0u | 46u);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), g8);
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), g5);
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), g6);
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), g8);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), g6);
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g8);
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    g8 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), g8);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    goto L_08A8C384;
}
L_08A8C384:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(188)));
    g16 = (hot_regs.g4 + hot_regs.g5);
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g16 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A8C3A0;
      }
      goto L_08A8C398;
    }
}
L_08A8C398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C698;
      }
      goto L_08A8C3A0;
    }
L_08A8C3A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    hot_regs.g4 = g4;
        goto L_08A8C3B8;
    }
    goto L_08A8C3AC;
}
L_08A8C3AC:
    hot_regs.g31 = (0x08A8C3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C3B4u) goto L_08A8C3B4;
    return;
L_08A8C3B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08A8C3B8;
L_08A8C3B8:
    hot_regs.g31 = (0x08A8C3C0u);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 553u, 0x08A52FF8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C3C0u) goto L_08A8C3C0;
    return;
L_08A8C3C0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), hot_regs.g7);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8C66C;
      }
      goto L_08A8C3D8;
    }
}
L_08A8C3D8:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C66C;
      }
      goto L_08A8C3E4;
    }
L_08A8C3E4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 << 2u);
    g4 = (g16 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g4);
    g4 = (g16 + static_cast<std::uint32_t>(592));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g4);
    g5 = (g16 + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g5);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g8);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    g7 = (g6 + g6);
    g6 = (g6 + g7);
    g6 = (g6 << 2u);
    g6 = (g16 + g6);
    g6 = (g6 + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g6);
    g2 = (1u << 16u);
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g2 = (g16 + g2);
    ctx.gpr[11] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[9] ^ g8);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A8C4A8;
}
L_08A8C4A8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (ctx.gpr[8] ^ ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A8C53C;
      }
      goto L_08A8C4B0;
    }
L_08A8C4B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g5 != 0u) {
    g4 = (ctx.gpr[8] ^ ctx.gpr[9]);
    hot_regs.g4 = g4;
        goto L_08A8C53C;
    }
    goto L_08A8C4C0;
}
L_08A8C4C0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (ctx.gpr[20] - ctx.gpr[19]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(-19848)));
    g4 = (hot_regs.g5 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8C4F8;
      }
      goto L_08A8C4E0;
    }
}
L_08A8C4E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    g4 = (ctx.gpr[8] ^ g9);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g9 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g9 = (g9 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A8C54C;
      }
      goto L_08A8C4F8;
    }
}
L_08A8C4F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    if (g4 == ctx.gpr[11]) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    hot_regs.g4 = g4;
        goto L_08A8C508;
    }
    goto L_08A8C508;
}
L_08A8C508:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), g4);
    ctx.gpr[9] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), hot_regs.g5);
    g4 = (ctx.gpr[9] ^ ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), hot_regs.g6);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8C4A8;
      }
      goto L_08A8C53C;
    }
}
L_08A8C53C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g9 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g9 = (g9 & 255u);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    goto L_08A8C54C;
}
L_08A8C54C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C668;
      }
      goto L_08A8C554;
    }
L_08A8C554:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] != g4;
    g4 = (ctx.gpr[8] + static_cast<std::uint32_t>(-12));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8C56C;
      }
      goto L_08A8C560;
    }
}
L_08A8C560:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), g8);
    hot_regs.g4 = (g8 + static_cast<std::uint32_t>(-12));
    ctx.gpr[8] = g8;
    goto L_08A8C56C;
}
L_08A8C56C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    g5 = (g29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = g5 != 0u;
    g8 = (g8 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A8C60C;
      }
      goto L_08A8C598;
    }
}
L_08A8C598:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g5 = (g8 | 0u);
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g8 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), g6);
    g6 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), g6);
    g8 = (g8 + static_cast<std::uint32_t>(4096));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), hot_regs.g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = g4 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A8C5D4;
      }
      goto L_08A8C5CC;
    }
}
L_08A8C5CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A8C5D8;
      }
      goto L_08A8C5D4;
    }
L_08A8C5D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), hot_regs.g4);
    goto L_08A8C5D8;
L_08A8C5D8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08A8C5ECu);
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 455u, 0x08A8A1E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C5ECu) goto L_08A8C5EC;
    return;
L_08A8C5EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    g4 = (ctx.gpr[8] ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8C660;
      }
      goto L_08A8C60C;
    }
}
L_08A8C60C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = g4 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8C640;
      }
      goto L_08A8C61C;
    }
}
L_08A8C61C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    g4 = (ctx.gpr[8] ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8C660;
      }
      goto L_08A8C640;
    }
}
L_08A8C640:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    g4 = (ctx.gpr[8] ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A8C660;
}
L_08A8C660:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8C554;
      }
      goto L_08A8C668;
    }
L_08A8C668:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_08A8C66C;
L_08A8C66C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 ^ 46u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g5 = (g4 & 255u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8C698;
      }
      goto L_08A8C684;
    }
}
L_08A8C684:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = g5 != 0u;
    g5 = (0u | 1u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8C698;
      }
      goto L_08A8C694;
    }
}
L_08A8C694:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A8C698;
L_08A8C698:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g22 = ctx.gpr[22];
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(188)));
    g22 = (g22 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (hot_regs.g7 - hot_regs.g4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 2u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), g5);
    g5 = (ctx.gpr[8] >> 30u);
    g5 = (g6 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g5 = (g22 < g5 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08A8C384;
      }
      goto L_08A8C6C8;
    }
}
L_08A8C6C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g6);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A8C738;
}
L_08A8C738:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8C768:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (0u | 1u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(10084), static_cast<std::uint8_t>(g4));
    g4 = (g28 + static_cast<std::uint32_t>(-5360));
    g5 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(10084)));
    g5 = (g5 << 2u);
    g6 = (2237u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-30144));
    g5 = (g5 + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (0u | 2u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(10085), static_cast<std::uint8_t>(g4));
    g4 = (g28 + static_cast<std::uint32_t>(-5356));
    g5 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(10085)));
    g5 = (g5 << 2u);
    g5 = (g5 + g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8C7AC:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C7EC;
      }
      goto L_08A8C7B8;
    }
L_08A8C7B8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2234u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(8016));
    hot_regs.g6 = (hot_regs.g6 ^ hot_regs.g2);
    hot_regs.g5 = g5;
    goto L_08A8C7C4;
}
L_08A8C7C4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 & 255u);
    g6 = (g6 << 2u);
    g6 = (g6 + hot_regs.g5);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g2 = (g2 >> 8u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g2 = (g2 ^ g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = g6 != 0u;
    g6 = (g6 ^ g2);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A8C7C4;
      }
      goto L_08A8C7EC;
    }
}
L_08A8C7EC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C7F4:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8C870;
      }
      goto L_08A8C800;
    }
L_08A8C800:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g5 = (2234u << 16u);
    g7 = (hot_regs.g5 + static_cast<std::uint32_t>(14520));
    g6 = (2234u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g6 = (g6 + static_cast<std::uint32_t>(8016));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08A8C814;
}
L_08A8C814:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    g5 = (hot_regs.g7 + ctx.gpr[8]);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    g9 = (g9 & 2u);
    { const bool branch_taken = g9 == 0u;
    g5 = (hot_regs.g2 >> 8u);
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A8C848;
      }
      goto L_08A8C828;
    }
}
L_08A8C828:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(-32));
    g8 = (g8 ^ hot_regs.g2);
    g8 = (g8 & 255u);
    g8 = (g8 << 2u);
    g8 = (g8 + hot_regs.g6);
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g5 ^ g8);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A8C860;
      }
      goto L_08A8C848;
    }
}
L_08A8C848:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 ^ hot_regs.g2);
    g8 = (g8 & 255u);
    g8 = (g8 << 2u);
    g8 = (g8 + hot_regs.g6);
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 ^ g8);
    ctx.gpr[8] = g8;
    goto L_08A8C860;
}
L_08A8C860:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g2 = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8C814;
      }
      goto L_08A8C870;
    }
}
L_08A8C870:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8C878:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A8C8ACu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C8ACu) goto L_08A8C8AC;
    return;
L_08A8C8AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08A8C8D4;
      }
      goto L_08A8C8BC;
    }
L_08A8C8BC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 169u);
    hot_regs.g31 = (0x08A8C8CCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C8CCu) goto L_08A8C8CC;
    return;
L_08A8C8CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C8D4;
    }
L_08A8C8D4:
    hot_regs.g5 = (0u | 7u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8C8F8;
      }
      goto L_08A8C8E0;
    }
L_08A8C8E0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 160u);
    hot_regs.g31 = (0x08A8C8F0u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C8F0u) goto L_08A8C8F0;
    return;
L_08A8C8F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C8F8;
    }
L_08A8C8F8:
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8C91C;
      }
      goto L_08A8C904;
    }
L_08A8C904:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 161u);
    hot_regs.g31 = (0x08A8C914u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C914u) goto L_08A8C914;
    return;
L_08A8C914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C91C;
    }
L_08A8C91C:
    hot_regs.g5 = (0u | 9u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8C940;
      }
      goto L_08A8C928;
    }
L_08A8C928:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 162u);
    hot_regs.g31 = (0x08A8C938u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C938u) goto L_08A8C938;
    return;
L_08A8C938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C940;
    }
L_08A8C940:
    hot_regs.g5 = (0u | 10u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8C964;
      }
      goto L_08A8C94C;
    }
L_08A8C94C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 163u);
    hot_regs.g31 = (0x08A8C95Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C95Cu) goto L_08A8C95C;
    return;
L_08A8C95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C964;
    }
L_08A8C964:
    hot_regs.g5 = (0u | 13u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8C988;
      }
      goto L_08A8C970;
    }
L_08A8C970:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 77u);
    hot_regs.g31 = (0x08A8C980u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C980u) goto L_08A8C980;
    return;
L_08A8C980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C988;
    }
L_08A8C988:
    hot_regs.g5 = (0u | 14u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8C9AC;
      }
      goto L_08A8C994;
    }
L_08A8C994:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 63u);
    hot_regs.g31 = (0x08A8C9A4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C9A4u) goto L_08A8C9A4;
    return;
L_08A8C9A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C9AC;
    }
L_08A8C9AC:
    hot_regs.g5 = (0u | 16u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8C9D0;
      }
      goto L_08A8C9B8;
    }
L_08A8C9B8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 194u);
    hot_regs.g31 = (0x08A8C9C8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C9C8u) goto L_08A8C9C8;
    return;
L_08A8C9C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C9D0;
    }
L_08A8C9D0:
    hot_regs.g5 = (0u | 70u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8C9F4;
      }
      goto L_08A8C9DC;
    }
L_08A8C9DC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 197u);
    hot_regs.g31 = (0x08A8C9ECu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8C9ECu) goto L_08A8C9EC;
    return;
L_08A8C9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8C9F4;
    }
L_08A8C9F4:
    hot_regs.g5 = (0u | 71u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8CA18;
      }
      goto L_08A8CA00;
    }
L_08A8CA00:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 206u);
    hot_regs.g31 = (0x08A8CA10u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CA10u) goto L_08A8CA10;
    return;
L_08A8CA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8CA18;
    }
L_08A8CA18:
    hot_regs.g5 = (0u | 34u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8CA3C;
      }
      goto L_08A8CA24;
    }
L_08A8CA24:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 101u);
    hot_regs.g31 = (0x08A8CA34u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 553u, 0x08A062F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CA34u) goto L_08A8CA34;
    return;
L_08A8CA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CA94;
      }
      goto L_08A8CA3C;
    }
L_08A8CA3C:
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g31 = (0x08A8CA48u);
    hot_regs.g4 = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 70u, 0x0884C700u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CA48u) goto L_08A8CA48;
    return;
L_08A8CA48:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    if (ctx.gpr[19] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
        goto L_08A8CA64;
    }
    goto L_08A8CA54;
L_08A8CA54:
    hot_regs.g31 = (0x08A8CA5Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C68Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CA5Cu) goto L_08A8CA5C;
    return;
L_08A8CA5C:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    goto L_08A8CA64;
L_08A8CA64:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), hot_regs.g4);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8CA94u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 544u, 0x08A06228u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CA94u) goto L_08A8CA94;
    return;
L_08A8CA94:
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
L_08A8CAB8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x08A8CAF8u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CAF8u) goto L_08A8CAF8;
    return;
L_08A8CAF8:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x08A8CB04u);
    hot_regs.g4 = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 70u, 0x0884C700u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CB04u) goto L_08A8CB04;
    return;
L_08A8CB04:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (ctx.gpr[17] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
        goto L_08A8CB20;
    }
    goto L_08A8CB10;
L_08A8CB10:
    hot_regs.g31 = (0x08A8CB18u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 63u, 0x0884C68Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CB18u) goto L_08A8CB18;
    return;
L_08A8CB18:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29704)));
    goto L_08A8CB20;
L_08A8CB20:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A8CB48u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g6));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 538u, 0x08A061ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CB48u) goto L_08A8CB48;
    return;
L_08A8CB48:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15948)));
    hot_regs.g31 = (0x08A8CB58u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 679u, 0x08B66D74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CB58u) goto L_08A8CB58;
    return;
L_08A8CB58:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A8CB6Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CB6Cu) goto L_08A8CB6C;
    return;
L_08A8CB6C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A8CB94:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8CBB4u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CBB4u) goto L_08A8CBB4;
    return;
L_08A8CBB4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15948)));
    hot_regs.g31 = (0x08A8CBC0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 655u, 0x08B6EEC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CBC0u) goto L_08A8CBC0;
    return;
L_08A8CBC0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CBE4;
      }
      goto L_08A8CBCC;
    }
L_08A8CBCC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x08A8CBD8u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 542u, 0x08A06208u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CBD8u) goto L_08A8CBD8;
    return;
L_08A8CBD8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8CBE4u);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 65u, 0x0884C6B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CBE4u) goto L_08A8CBE4;
    return;
L_08A8CBE4:
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
L_08A8CBF8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8CC1Cu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CC1Cu) goto L_08A8CC1C;
    return;
L_08A8CC1C:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8CC2Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CC2Cu) goto L_08A8CC2C;
    return;
L_08A8CC2C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(109));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A8CC48u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CC48u) goto L_08A8CC48;
    return;
L_08A8CC48:
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
L_08A8CC60:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8CC88u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CC88u) goto L_08A8CC88;
    return;
L_08A8CC88:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08A8CC9Cu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 549u, 0x08A062A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CC9Cu) goto L_08A8CC9C;
    return;
L_08A8CC9C:
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
L_08A8CCB4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08A8CCE4u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CCE4u) goto L_08A8CCE4;
    return;
L_08A8CCE4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08A8CCFCu);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CCFCu) goto L_08A8CCFC;
    return;
L_08A8CCFC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08A8CD10;
    }
    goto L_08A8CD08;
L_08A8CD08:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8CD14;
      }
      goto L_08A8CD10;
    }
L_08A8CD10:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_08A8CD14;
L_08A8CD14:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A8CD24u);
    hot_regs.g5 = (ctx.gpr[16] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 579u, 0x08A064B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CD24u) goto L_08A8CD24;
    return;
L_08A8CD24:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8CD40:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8CD70u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CD70u) goto L_08A8CD70;
    return;
L_08A8CD70:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A8CD80u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 598u, 0x08A065D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CD80u) goto L_08A8CD80;
    return;
L_08A8CD80:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A8CD90;
      }
      goto L_08A8CD88;
    }
L_08A8CD88:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A8CD94;
      }
      goto L_08A8CD90;
    }
L_08A8CD90:
    hot_regs.g4 = (0u | 0u);
    goto L_08A8CD94;
L_08A8CD94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8CDB8;
      }
      goto L_08A8CDB0;
    }
}
L_08A8CDB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A8CE00;
      }
      goto L_08A8CDB8;
    }
L_08A8CDB8:
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
          goto L_08A8CDE4;
      }
      goto L_08A8CDD8;
    }
}
L_08A8CDD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8CE00;
      }
      goto L_08A8CDE4;
    }
}
L_08A8CDE4:
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
          goto L_08A8CE00;
      }
      goto L_08A8CDFC;
    }
}
L_08A8CDFC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A8CE00;
L_08A8CE00:
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
L_08A8CE1C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8CE44u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CE44u) goto L_08A8CE44;
    return;
L_08A8CE44:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g6 = (0u < hot_regs.g6 ? 1u : 0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g31 = (0x08A8CE60u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 611u, 0x08A066A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CE60u) goto L_08A8CE60;
    return;
L_08A8CE60:
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
L_08A8CE78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8CEA0u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CEA0u) goto L_08A8CEA0;
    return;
L_08A8CEA0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A8CEB0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 617u, 0x08A06704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CEB0u) goto L_08A8CEB0;
    return;
L_08A8CEB0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8CEC0;
      }
      goto L_08A8CEB8;
    }
L_08A8CEB8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A8CEC4;
      }
      goto L_08A8CEC0;
    }
L_08A8CEC0:
    hot_regs.g4 = (0u | 0u);
    goto L_08A8CEC4;
L_08A8CEC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8CEE8;
      }
      goto L_08A8CEE0;
    }
}
L_08A8CEE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A8CF30;
      }
      goto L_08A8CEE8;
    }
L_08A8CEE8:
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
          goto L_08A8CF14;
      }
      goto L_08A8CF08;
    }
}
L_08A8CF08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8CF30;
      }
      goto L_08A8CF14;
    }
}
L_08A8CF14:
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
          goto L_08A8CF30;
      }
      goto L_08A8CF2C;
    }
}
L_08A8CF2C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A8CF30;
L_08A8CF30:
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
L_08A8CF48:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8CF70u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CF70u) goto L_08A8CF70;
    return;
L_08A8CF70:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A8CF8Cu);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 603u, 0x08A06618u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CF8Cu) goto L_08A8CF8C;
    return;
L_08A8CF8C:
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
L_08A8CFA4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8CFC4u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CFC4u) goto L_08A8CFC4;
    return;
L_08A8CFC4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A8CFD4u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 622u, 0x08A06744u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8CFD4u) goto L_08A8CFD4;
    return;
L_08A8CFD4:
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
L_08A8CFE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D008u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D008u) goto L_08A8D008;
    return;
L_08A8D008:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    g4 = (2236u << 16u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8D024;
      }
      goto L_08A8D018;
    }
}
L_08A8D018:
    hot_regs.g5 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2063), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08A8D02C;
      }
      goto L_08A8D024;
    }
L_08A8D024:
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2063), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08A8D02C;
L_08A8D02C:
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
L_08A8D040:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D05Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D05Cu) goto L_08A8D05C;
    return;
L_08A8D05C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 109u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08A8D070u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 559u, 0x08A06360u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D070u) goto L_08A8D070;
    return;
L_08A8D070:
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
L_08A8D084:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D09Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 571u, 0x08A06434u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D09Cu) goto L_08A8D09C;
    return;
L_08A8D09C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8D0A8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D0A8u) goto L_08A8D0A8;
    return;
L_08A8D0A8:
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
L_08A8D0BC:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D0C4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D0E4u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D0E4u) goto L_08A8D0E4;
    return;
L_08A8D0E4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(33));
    hot_regs.g31 = (0x08A8D0F8u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 557u, 0x08A0633Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D0F8u) goto L_08A8D0F8;
    return;
L_08A8D0F8:
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
L_08A8D10C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8D134u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D134u) goto L_08A8D134;
    return;
L_08A8D134:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A8D144u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 577u, 0x08A06494u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D144u) goto L_08A8D144;
    return;
L_08A8D144:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < hot_regs.g2 ? 1u : 0u);
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
          goto L_08A8D170;
      }
      goto L_08A8D168;
    }
}
L_08A8D168:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A8D1B8;
      }
      goto L_08A8D170;
    }
L_08A8D170:
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
          goto L_08A8D19C;
      }
      goto L_08A8D190;
    }
}
L_08A8D190:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8D1B8;
      }
      goto L_08A8D19C;
    }
}
L_08A8D19C:
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
          goto L_08A8D1B8;
      }
      goto L_08A8D1B4;
    }
}
L_08A8D1B4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A8D1B8;
L_08A8D1B8:
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
L_08A8D1D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D1E8u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 585u, 0x08A06534u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D1E8u) goto L_08A8D1E8;
    return;
L_08A8D1E8:
    hot_regs.g4 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8D200u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D200u) goto L_08A8D200;
    return;
L_08A8D200:
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
L_08A8D214:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D22Cu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 590u, 0x08A0656Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D22Cu) goto L_08A8D22C;
    return;
L_08A8D22C:
    hot_regs.g4 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8D244u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D244u) goto L_08A8D244;
    return;
L_08A8D244:
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
L_08A8D258:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D278u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D278u) goto L_08A8D278;
    return;
L_08A8D278:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A8D288u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 595u, 0x08A065A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D288u) goto L_08A8D288;
    return;
L_08A8D288:
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
L_08A8D29C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(52));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    hot_regs.g31 = (0x08A8D2D0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D2D0u) goto L_08A8D2D0;
    return;
L_08A8D2D0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08A8D2E4;
    }
    goto L_08A8D2DC;
L_08A8D2DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8D2E8;
      }
      goto L_08A8D2E4;
    }
L_08A8D2E4:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_08A8D2E8;
L_08A8D2E8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A8D2F8u);
    hot_regs.g6 = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D2F8u) goto L_08A8D2F8;
    return;
L_08A8D2F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    if (hot_regs.g4 != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
        goto L_08A8D330;
    }
    goto L_08A8D304;
L_08A8D304:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x08A8D310u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D310u) goto L_08A8D310;
    return;
L_08A8D310:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D328;
      }
      goto L_08A8D31C;
    }
L_08A8D31C:
    hot_regs.g31 = (0x08A8D324u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D324u) goto L_08A8D324;
    return;
L_08A8D324:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08A8D328;
L_08A8D328:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08A8D330;
L_08A8D330:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8D344u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D344u) goto L_08A8D344;
    return;
L_08A8D344:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08A8D358;
    }
    goto L_08A8D350;
L_08A8D350:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8D35C;
      }
      goto L_08A8D358;
    }
L_08A8D358:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_08A8D35C;
L_08A8D35C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A8D368u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D368u) goto L_08A8D368;
    return;
L_08A8D368:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08A8D388u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D388u) goto L_08A8D388;
    return;
L_08A8D388:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A8D3A4u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 582u, 0x08A064ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D3A4u) goto L_08A8D3A4;
    return;
L_08A8D3A4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8D3C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 5u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x08A8D3F0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D3F0u) goto L_08A8D3F0;
    return;
L_08A8D3F0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A8D420u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 281u, 0x08888D84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D420u) goto L_08A8D420;
    return;
L_08A8D420:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8D438:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.g31 = (0x08A8D460u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D460u) goto L_08A8D460;
    return;
L_08A8D460:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (2237u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A8D488u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 289u, 0x08888E4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D488u) goto L_08A8D488;
    return;
L_08A8D488:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8D4A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8D4D0u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D4D0u) goto L_08A8D4D0;
    return;
L_08A8D4D0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A8D4E0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 606u, 0x08A06660u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D4E0u) goto L_08A8D4E0;
    return;
L_08A8D4E0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8D4F4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D4F4u) goto L_08A8D4F4;
    return;
L_08A8D4F4:
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
L_08A8D510:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8D518:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D538u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D538u) goto L_08A8D538;
    return;
L_08A8D538:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08A8D544u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 636u, 0x08A06838u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D544u) goto L_08A8D544;
    return;
L_08A8D544:
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
L_08A8D558:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D578u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D578u) goto L_08A8D578;
    return;
L_08A8D578:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08A8D584u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 638u, 0x08A06858u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D584u) goto L_08A8D584;
    return;
L_08A8D584:
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
L_08A8D598:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D5B0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 640u, 0x08A06878u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D5B0u) goto L_08A8D5B0;
    return;
L_08A8D5B0:
    hot_regs.g4 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8D5C8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D5C8u) goto L_08A8D5C8;
    return;
L_08A8D5C8:
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
L_08A8D5DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8D604u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D604u) goto L_08A8D604;
    return;
L_08A8D604:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A8D614u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 642u, 0x08A06898u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D614u) goto L_08A8D614;
    return;
L_08A8D614:
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
L_08A8D62C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8D65Cu);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D65Cu) goto L_08A8D65C;
    return;
L_08A8D65C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08A8D668u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 644u, 0x08A068B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D668u) goto L_08A8D668;
    return;
L_08A8D668:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8D67Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D67Cu) goto L_08A8D67C;
    return;
L_08A8D67C:
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
L_08A8D698:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D6B8u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D6B8u) goto L_08A8D6B8;
    return;
L_08A8D6B8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08A8D6C4u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A068D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D6C4u) goto L_08A8D6C4;
    return;
L_08A8D6C4:
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
L_08A8D6D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8D700u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D700u) goto L_08A8D700;
    return;
L_08A8D700:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A8D710u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 648u, 0x08A068F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D710u) goto L_08A8D710;
    return;
L_08A8D710:
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
L_08A8D728:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28612));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8D79Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D79Cu) goto L_08A8D79C;
    return;
L_08A8D79C:
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
L_08A8D7B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g31 = (0x08A8D7E0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D7E0u) goto L_08A8D7E0;
    return;
L_08A8D7E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (8u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8D848;
      }
      goto L_08A8D83C;
    }
}
L_08A8D83C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    g4 = (g4 | 32u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A8D848;
}
L_08A8D848:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_08A8D860:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8D88Cu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 927u, 0x0885FDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D88Cu) goto L_08A8D88C;
    return;
L_08A8D88C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A8D8E8;
      }
      goto L_08A8D894;
    }
L_08A8D894:
    hot_regs.g31 = (0x08A8D89Cu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D89Cu) goto L_08A8D89C;
    return;
L_08A8D89C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_08A8D8E8;
      }
      goto L_08A8D8A4;
    }
L_08A8D8A4:
    hot_regs.g31 = (0x08A8D8ACu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D8ACu) goto L_08A8D8AC;
    return;
L_08A8D8AC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_08A8D8E8;
      }
      goto L_08A8D8B4;
    }
L_08A8D8B4:
    hot_regs.g31 = (0x08A8D8BCu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D8BCu) goto L_08A8D8BC;
    return;
L_08A8D8BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08A8D8E8;
      }
      goto L_08A8D8C4;
    }
L_08A8D8C4:
    hot_regs.g31 = (0x08A8D8CCu);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 456u, 0x08A93144u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D8CCu) goto L_08A8D8CC;
    return;
L_08A8D8CC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D8E8;
      }
      goto L_08A8D8D4;
    }
L_08A8D8D4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8D8E8;
      }
      goto L_08A8D8E4;
    }
L_08A8D8E4:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A8D8E8;
L_08A8D8E8:
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
L_08A8D904:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A8D94C;
      }
      goto L_08A8D924;
    }
}
L_08A8D924:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x08A8D930u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D930u) goto L_08A8D930;
    return;
L_08A8D930:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8D948;
      }
      goto L_08A8D93C;
    }
L_08A8D93C:
    hot_regs.g31 = (0x08A8D944u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D944u) goto L_08A8D944;
    return;
L_08A8D944:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08A8D948;
L_08A8D948:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[18]);
    goto L_08A8D94C;
L_08A8D94C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g31 = (0x08A8D958u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8D958u) goto L_08A8D958;
    return;
L_08A8D958:
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
L_08A8D970:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (g5 + g5);
    g4 = (g5 + g4);
    hot_regs.g6 = (g5 << 8u);
    g4 = (g4 << 5u);
    g5 = (hot_regs.g6 + g4);
    g4 = (2238u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-6992));
    g5 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A8D9E4;
      }
      goto L_08A8D9B4;
    }
}
L_08A8D9B4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g6 = (g5 + g5);
    hot_regs.g7 = (g5 << 8u);
    g5 = (g5 + hot_regs.g6);
    g5 = (g5 << 5u);
    g5 = (hot_regs.g7 + g5);
    g5 = (g5 + hot_regs.g4);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = g5;
        goto L_08A8D9EC;
    }
    goto L_08A8D9DC;
}
L_08A8D9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DA68;
      }
      goto L_08A8D9E4;
    }
L_08A8D9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DA8C;
      }
      goto L_08A8D9EC;
    }
L_08A8D9EC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (g5 + g5);
    hot_regs.g7 = (g5 << 8u);
    g5 = (g5 + hot_regs.g6);
    g5 = (g5 << 5u);
    g5 = (hot_regs.g7 + g5);
    g5 = (g5 + hot_regs.g4);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(613))))));
    g5 = (g5 & 8u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DA4C;
      }
      goto L_08A8DA18;
    }
}
L_08A8DA18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g6 = (g5 << 8u);
    hot_regs.g7 = (g5 + g5);
    g5 = (g5 + hot_regs.g7);
    g5 = (g5 << 5u);
    g5 = (hot_regs.g6 + g5);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DA7C;
      }
      goto L_08A8DA4C;
    }
}
L_08A8DA4C:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A8DA58u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8DA58u) goto L_08A8DA58;
    return;
L_08A8DA58:
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DA7C;
      }
      goto L_08A8DA68;
    }
L_08A8DA68:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08A8DA74u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8DA74u) goto L_08A8DA74;
    return;
L_08A8DA74:
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
    goto L_08A8DA7C;
L_08A8DA7C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8DA88u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    goto L_08A8DF08;
L_08A8DA88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g2);
    goto L_08A8DA8C;
L_08A8DA8C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8DAA0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8DB2C;
      }
      goto L_08A8DAB8;
    }
L_08A8DAB8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8DB2C;
      }
      goto L_08A8DACC;
    }
L_08A8DACC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8DB2C;
      }
      goto L_08A8DAE4;
    }
L_08A8DAE4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8DB2C;
      }
      goto L_08A8DAF8;
    }
L_08A8DAF8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8DB2C;
      }
      goto L_08A8DB10;
    }
L_08A8DB10:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8DB2C;
      }
      goto L_08A8DB24;
    }
L_08A8DB24:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A8DB30;
      }
      goto L_08A8DB2C;
    }
L_08A8DB2C:
    hot_regs.g2 = (0u | 0u);
    goto L_08A8DB30;
L_08A8DB30:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8DB38:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5324)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5328)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g7);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08A8DB68u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8DB68u) goto L_08A8DB68;
    return;
L_08A8DB68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[17] | 0u);
    g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DB88;
      }
      goto L_08A8DB78;
    }
}
L_08A8DB78:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8DD08;
      }
      goto L_08A8DB80;
    }
L_08A8DB80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DBA0;
      }
      goto L_08A8DB88;
    }
L_08A8DB88:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8DC18;
      }
      goto L_08A8DB90;
    }
L_08A8DB90:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DC90;
      }
      goto L_08A8DB98;
    }
L_08A8DB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD08;
      }
      goto L_08A8DBA0;
    }
L_08A8DBA0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(24)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DC04;
      }
      goto L_08A8DBB8;
    }
}
L_08A8DBB8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A8DBC4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A8EA74;
L_08A8DBC4:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8DBE8;
      }
      goto L_08A8DBE0;
    }
L_08A8DBE0:
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8DC0C;
      }
      goto L_08A8DBE8;
    }
L_08A8DBE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(24)));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DBB8;
      }
      goto L_08A8DC04;
    }
}
L_08A8DC04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD08;
      }
      goto L_08A8DC0C;
    }
L_08A8DC0C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08A8DD0C;
      }
      goto L_08A8DC18;
    }
}
L_08A8DC18:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(26)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DC7C;
      }
      goto L_08A8DC30;
    }
}
L_08A8DC30:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A8DC3Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A8EA58;
L_08A8DC3C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8DC60;
      }
      goto L_08A8DC58;
    }
L_08A8DC58:
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8DC84;
      }
      goto L_08A8DC60;
    }
L_08A8DC60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(26)));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DC30;
      }
      goto L_08A8DC7C;
    }
}
L_08A8DC7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD08;
      }
      goto L_08A8DC84;
    }
L_08A8DC84:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08A8DD0C;
      }
      goto L_08A8DC90;
    }
}
L_08A8DC90:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(108)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DD08;
      }
      goto L_08A8DCA8;
    }
}
L_08A8DCA8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A8DCB4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A8EA90;
L_08A8DCB4:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8DCD8;
      }
      goto L_08A8DCD0;
    }
L_08A8DCD0:
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8DCFC;
      }
      goto L_08A8DCD8;
    }
L_08A8DCD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(108)));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DCA8;
      }
      goto L_08A8DCF4;
    }
}
L_08A8DCF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD08;
      }
      goto L_08A8DCFC;
    }
L_08A8DCFC:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08A8DD0C;
      }
      goto L_08A8DD08;
    }
}
L_08A8DD08:
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A8DD0C;
L_08A8DD0C:
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
L_08A8DD20:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5324)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5328)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08A8DD5Cu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8DD5Cu) goto L_08A8DD5C;
    return;
L_08A8DD5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[17] | 0u);
    g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DD7C;
      }
      goto L_08A8DD6C;
    }
}
L_08A8DD6C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8DEF0;
      }
      goto L_08A8DD74;
    }
L_08A8DD74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DD94;
      }
      goto L_08A8DD7C;
    }
L_08A8DD7C:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8DE08;
      }
      goto L_08A8DD84;
    }
L_08A8DD84:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DE7C;
      }
      goto L_08A8DD8C;
    }
L_08A8DD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DEF0;
      }
      goto L_08A8DD94;
    }
L_08A8DD94:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DDF4;
      }
      goto L_08A8DDA8;
    }
}
L_08A8DDA8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A8DDB4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A8EA74;
L_08A8DDB4:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8DDD8;
      }
      goto L_08A8DDD0;
    }
L_08A8DDD0:
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8DDFC;
      }
      goto L_08A8DDD8;
    }
L_08A8DDD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(24)));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DDA8;
      }
      goto L_08A8DDF4;
    }
}
L_08A8DDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DEF0;
      }
      goto L_08A8DDFC;
    }
L_08A8DDFC:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08A8DEF4;
      }
      goto L_08A8DE08;
    }
}
L_08A8DE08:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(26)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DE68;
      }
      goto L_08A8DE1C;
    }
}
L_08A8DE1C:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A8DE28u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A8EA58;
L_08A8DE28:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8DE4C;
      }
      goto L_08A8DE44;
    }
L_08A8DE44:
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8DE70;
      }
      goto L_08A8DE4C;
    }
L_08A8DE4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(26)));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DE1C;
      }
      goto L_08A8DE68;
    }
}
L_08A8DE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DEF0;
      }
      goto L_08A8DE70;
    }
L_08A8DE70:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08A8DEF4;
      }
      goto L_08A8DE7C;
    }
}
L_08A8DE7C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DEF0;
      }
      goto L_08A8DE90;
    }
}
L_08A8DE90:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A8DE9Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A8EA90;
L_08A8DE9C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8DEC0;
      }
      goto L_08A8DEB8;
    }
L_08A8DEB8:
    { const bool branch_taken = hot_regs.g7 == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8DEE4;
      }
      goto L_08A8DEC0;
    }
L_08A8DEC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(108)));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8DE90;
      }
      goto L_08A8DEDC;
    }
}
L_08A8DEDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8DEF0;
      }
      goto L_08A8DEE4;
    }
L_08A8DEE4:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_08A8DEF4;
      }
      goto L_08A8DEF0;
    }
}
L_08A8DEF0:
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A8DEF4;
L_08A8DEF4:
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
L_08A8DF08:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g17);
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), hot_regs.g31);
    hot_regs.g31 = (0x08A8DF44u);
    hot_regs.g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08A8DAA0;
}
L_08A8DF44:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A8DFA4;
      }
      goto L_08A8DF4C;
    }
L_08A8DF4C:
    hot_regs.g4 = (2232u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A8DF5Cu);
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(8996));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8DF5Cu) goto L_08A8DF5C;
    return;
L_08A8DF5C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A8DF6Cu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8DF6Cu) goto L_08A8DF6C;
    return;
L_08A8DF6C:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A8DF7Cu);
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8DF7Cu) goto L_08A8DF7C;
    return;
L_08A8DF7C:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08A8DFA0u);
    ctx.gpr[10] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8DFA0u) goto L_08A8DFA0;
    return;
L_08A8DFA0:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A8DFA4;
L_08A8DFA4:
    hot_regs.g4 = (49864u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[20] = (0u | 1u);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A8DFD8;
      }
      goto L_08A8DFC0;
    }
L_08A8DFC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8DFE0;
      }
      goto L_08A8DFD0;
    }
}
L_08A8DFD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E060;
      }
      goto L_08A8DFD8;
    }
L_08A8DFD8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 3u);
      if (branch_taken) {
          goto L_08A8E064;
      }
      goto L_08A8DFE0;
    }
L_08A8DFE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    g18 = (ctx.gpr[20] << 6u);
    g4 = (ctx.gpr[20] << 3u);
    g18 = (g18 - g4);
    g6 = (g6 + g18);
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8E000u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
    goto L_08A8DAA0;
}
L_08A8E000:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E048;
      }
      goto L_08A8E008;
    }
L_08A8E008:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    g4 = (g4 + ctx.gpr[18]);
    hot_regs.g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    { const bool branch_taken = g4 == hot_regs.g2;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8E034;
      }
      goto L_08A8E024;
    }
}
L_08A8E024:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) > 0;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g2) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8E03C;
      }
      goto L_08A8E02C;
    }
L_08A8E02C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E048;
      }
      goto L_08A8E034;
    }
L_08A8E034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E064;
      }
      goto L_08A8E03C;
    }
L_08A8E03C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E048;
      }
      goto L_08A8E044;
    }
L_08A8E044:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    goto L_08A8E048;
L_08A8E048:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    g20 = (g20 & 65535u);
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A8DFE0;
      }
      goto L_08A8E060;
    }
}
L_08A8E060:
    hot_regs.g2 = (ctx.gpr[19] | 0u);
    goto L_08A8E064;
L_08A8E064:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8E094:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (49864u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8E0DC;
      }
      goto L_08A8E0B0;
    }
L_08A8E0B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g6 = (g7 + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (ctx.gpr[8] - g4);
    g4 = (g7 + g4);
    if (hot_regs.g6 != g4) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
        goto L_08A8E0E4;
    }
    goto L_08A8E0D4;
}
L_08A8E0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E180;
      }
      goto L_08A8E0DC;
    }
L_08A8E0DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 3u);
      if (branch_taken) {
          goto L_08A8E180;
      }
      goto L_08A8E0E4;
    }
L_08A8E0E4:
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[8] = (0u | 5u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7652)));
    goto L_08A8E0F0;
L_08A8E0F0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8E174;
      }
      goto L_08A8E104;
    }
L_08A8E104:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8E174;
      }
      goto L_08A8E118;
    }
L_08A8E118:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8E174;
      }
      goto L_08A8E130;
    }
L_08A8E130:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8E174;
      }
      goto L_08A8E144;
    }
L_08A8E144:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A8E158;
      }
      goto L_08A8E150;
    }
L_08A8E150:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A8E164;
      }
      goto L_08A8E158;
    }
L_08A8E158:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A8E164;
      }
      goto L_08A8E160;
    }
L_08A8E160:
    hot_regs.g2 = (0u | 2u);
    goto L_08A8E164;
L_08A8E164:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A8E174;
      }
      goto L_08A8E16C;
    }
L_08A8E16C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E180;
      }
      goto L_08A8E174;
    }
L_08A8E174:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(56));
    { const bool branch_taken = g6 != hot_regs.g4;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A8E0F0;
      }
      goto L_08A8E180;
    }
}
L_08A8E180:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8E188:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g17);
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    hot_regs.g31 = (0x08A8E1C0u);
    hot_regs.g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08A8DAA0;
}
L_08A8E1C0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E21C;
      }
      goto L_08A8E1C8;
    }
L_08A8E1C8:
    hot_regs.g4 = (2232u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A8E1D8u);
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(8996));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8E1D8u) goto L_08A8E1D8;
    return;
L_08A8E1D8:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A8E1E8u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8E1E8u) goto L_08A8E1E8;
    return;
L_08A8E1E8:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A8E1F8u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8E1F8u) goto L_08A8E1F8;
    return;
L_08A8E1F8:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08A8E21Cu);
    ctx.gpr[10] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8E21Cu) goto L_08A8E21C;
    return;
L_08A8E21C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (0u | 1u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8E27C;
      }
      goto L_08A8E230;
    }
}
L_08A8E230:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    g18 = (ctx.gpr[19] << 6u);
    g4 = (ctx.gpr[19] << 3u);
    g18 = (g18 - g4);
    g6 = (g6 + g18);
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8E250u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
    goto L_08A8DAA0;
}
L_08A8E250:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E264;
      }
      goto L_08A8E258;
    }
L_08A8E258:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    g20 = (g20 + ctx.gpr[18]);
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A8E27C;
      }
      goto L_08A8E264;
    }
}
L_08A8E264:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    g19 = (g19 & 65535u);
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A8E230;
      }
      goto L_08A8E27C;
    }
}
L_08A8E27C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8E2AC:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g17);
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    hot_regs.g31 = (0x08A8E2E4u);
    hot_regs.g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08A8DAA0;
}
L_08A8E2E4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E340;
      }
      goto L_08A8E2EC;
    }
L_08A8E2EC:
    hot_regs.g4 = (2232u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A8E2FCu);
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(8996));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8E2FCu) goto L_08A8E2FC;
    return;
L_08A8E2FC:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A8E30Cu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8E30Cu) goto L_08A8E30C;
    return;
L_08A8E30C:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A8E31Cu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8E31Cu) goto L_08A8E31C;
    return;
L_08A8E31C:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08A8E340u);
    ctx.gpr[10] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8E340u) goto L_08A8E340;
    return;
L_08A8E340:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    ctx.gpr[19] = (0u | 1u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8E3A0;
      }
      goto L_08A8E354;
    }
}
L_08A8E354:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    g18 = (ctx.gpr[19] << 6u);
    g4 = (ctx.gpr[19] << 3u);
    g18 = (g18 - g4);
    g6 = (g6 + g18);
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8E374u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
    goto L_08A8DAA0;
}
L_08A8E374:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E388;
      }
      goto L_08A8E37C;
    }
L_08A8E37C:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    g20 = (g20 + ctx.gpr[18]);
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A8E3A0;
      }
      goto L_08A8E388;
    }
}
L_08A8E388:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(26)));
    g19 = (g19 & 65535u);
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A8E354;
      }
      goto L_08A8E3A0;
    }
}
L_08A8E3A0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8E3D0:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[23] = (hot_regs.g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x08A8E410u);
    ctx.gpr[22] = (hot_regs.g7 & 255u);
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_08A8DAA0;
}
L_08A8E410:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08A8E428;
      }
      goto L_08A8E41C;
    }
L_08A8E41C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E43C;
      }
      goto L_08A8E428;
    }
L_08A8E428:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E444;
      }
      goto L_08A8E430;
    }
L_08A8E430:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A8E444;
      }
      goto L_08A8E43C;
    }
L_08A8E43C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A8E448;
      }
      goto L_08A8E444;
    }
L_08A8E444:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A8E448;
L_08A8E448:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (0u | 0u);
    goto L_08A8E450;
L_08A8E450:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E460;
      }
      goto L_08A8E458;
    }
L_08A8E458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A8E4B0;
      }
      goto L_08A8E460;
    }
L_08A8E460:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8E470u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_08A8DAA0;
L_08A8E470:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E4AC;
      }
      goto L_08A8E478;
    }
L_08A8E478:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E48C;
      }
      goto L_08A8E480;
    }
L_08A8E480:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E4A0;
      }
      goto L_08A8E48C;
    }
L_08A8E48C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E4A4;
      }
      goto L_08A8E494;
    }
L_08A8E494:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A8E4A4;
      }
      goto L_08A8E4A0;
    }
L_08A8E4A0:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_08A8E4A4;
L_08A8E4A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A8E4B0;
      }
      goto L_08A8E4AC;
    }
L_08A8E4AC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    goto L_08A8E4B0;
L_08A8E4B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E450;
      }
      goto L_08A8E4B8;
    }
L_08A8E4B8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8E4E8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8E504u);
    ctx.gpr[16] = (hot_regs.g6 & 255u);
    hot_regs.g29 = g29;
    goto L_08A8E2AC;
}
L_08A8E504:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A8E548;
      }
      goto L_08A8E510;
    }
L_08A8E510:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E530;
      }
      goto L_08A8E518;
    }
L_08A8E518:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g5 + g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8E548;
      }
      goto L_08A8E530;
    }
}
L_08A8E530:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(42)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g5 + g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8E548;
      }
      goto L_08A8E548;
    }
}
L_08A8E548:
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
L_08A8E55C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g6 & 255u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8E57Cu);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g29 = g29;
    goto L_08A8DB38;
}
L_08A8E57C:
    hot_regs.g5 = (hot_regs.g2 & 65535u);
    hot_regs.g31 = (0x08A8E588u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_08A8EA58;
L_08A8E588:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A8E5CC;
      }
      goto L_08A8E594;
    }
L_08A8E594:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8E5B4;
      }
      goto L_08A8E59C;
    }
L_08A8E59C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g5 + g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8E5CC;
      }
      goto L_08A8E5B4;
    }
}
L_08A8E5B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(42)));
    hot_regs.g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g5 + g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g2 + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8E5CC;
      }
      goto L_08A8E5CC;
    }
}
L_08A8E5CC:
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
L_08A8E5E0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8E608u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g29 = g29;
    goto L_08A8EA58;
}
L_08A8E608:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A8E62C;
      }
      goto L_08A8E614;
    }
L_08A8E614:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8E640;
      }
      goto L_08A8E62C;
    }
}
L_08A8E62C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(42)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
    goto L_08A8E640;
}
L_08A8E640:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(0))))));
    g6 = (hot_regs.g5 | 0u);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g4));
    g4 = (g16 + static_cast<std::uint32_t>(2));
    hot_regs.g5 = (0u | 1u);
    g16 = (g6 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    goto L_08A8E658;
}
L_08A8E658:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (g6 + hot_regs.g7);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g6));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    g6 = (static_cast<std::int32_t>(g5) < 13 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A8E658;
      }
      goto L_08A8E67C;
    }
}
L_08A8E67C:
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
L_08A8E694:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (hot_regs.g7 << 16u);
    g17 = (ctx.gpr[8] << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
    ctx.gpr[20] = (hot_regs.g6 & 255u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A8E6D4u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    goto L_08A8EA58;
}
L_08A8E6D4:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A8E6F8;
      }
      goto L_08A8E6E0;
    }
L_08A8E6E0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8E70C;
      }
      goto L_08A8E6F8;
    }
}
L_08A8E6F8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(42)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
    goto L_08A8E70C;
}
L_08A8E70C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(ctx.gpr[17]));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[18] = (0u | 1u);
    g4 = (ctx.gpr[17] + g4);
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(g4));
    g4 = (g16 + static_cast<std::uint32_t>(2));
    g16 = (g5 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    goto L_08A8E72C;
}
L_08A8E72C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(26)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g5 = (g5 + hot_regs.g6);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(g5));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    g5 = (static_cast<std::int32_t>(g18) < 9 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A8E72C;
      }
      goto L_08A8E750;
    }
}
L_08A8E750:
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
L_08A8E770:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g16);
    g4 = (hot_regs.g7 << 16u);
    g16 = (g6 & 255u);
    g6 = (ctx.gpr[8] << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g22);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g23);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g30);
    g30 = (ctx.gpr[9] << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g16);
    g23 = (ctx.gpr[10] << 16u);
    g22 = (ctx.gpr[11] << 16u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g30 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g30) >> 16u));
    g23 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g23) >> 16u));
    g22 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g22) >> 16u));
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    hot_regs.g31 = (0x08A8E808u);
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    ctx.gpr[30] = g30;
    goto L_08A8EA58;
}
L_08A8E808:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A8E834;
      }
      goto L_08A8E81C;
    }
L_08A8E81C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g6 + g4);
    { const bool branch_taken = 0u == 0u;
    g4 = (hot_regs.g5 + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8E848;
      }
      goto L_08A8E834;
    }
}
L_08A8E834:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(42)));
    hot_regs.g6 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (hot_regs.g6 + g4);
    g4 = (hot_regs.g5 + g4);
    hot_regs.g4 = g4;
    goto L_08A8E848;
}
L_08A8E848:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(0))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[23]));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[20]));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[19]));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[18]));
    g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[17]));
    g5 = (g5 + g6);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(g5));
    ctx.gpr[30] = (0u | 1u);
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A8E894;
}
L_08A8E894:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(50)));
    hot_regs.g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(48)));
    g30 = (g30 + static_cast<std::uint32_t>(1));
    g5 = (g5 + hot_regs.g6);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::int32_t>(g30) < 9 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_08A8E894;
      }
      goto L_08A8E8B4;
    }
}
L_08A8E8B4:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08A8E8E4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    ctx.gpr[18] = (hot_regs.g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8E90Cu);
    ctx.gpr[16] = (hot_regs.g7 & 65535u);
    hot_regs.g29 = g29;
    goto L_08A8EA58;
}
L_08A8E90C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A8E930;
      }
      goto L_08A8E918;
    }
L_08A8E918:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8E944;
      }
      goto L_08A8E930;
    }
}
L_08A8E930:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(42)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
    goto L_08A8E944;
}
L_08A8E944:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
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
L_08A8E960:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    ctx.gpr[18] = (hot_regs.g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8E988u);
    ctx.gpr[16] = (hot_regs.g7 & 65535u);
    hot_regs.g29 = g29;
    goto L_08A8EA58;
}
L_08A8E988:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A8E9AC;
      }
      goto L_08A8E994;
    }
L_08A8E994:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8E9C0;
      }
      goto L_08A8E9AC;
    }
}
L_08A8E9AC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(42)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
    goto L_08A8E9C0;
}
L_08A8E9C0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[16]));
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
L_08A8E9DC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    ctx.gpr[18] = (hot_regs.g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8EA04u);
    ctx.gpr[16] = (hot_regs.g7 & 65535u);
    hot_regs.g29 = g29;
    goto L_08A8EA58;
}
L_08A8EA04:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A8EA28;
      }
      goto L_08A8EA10;
    }
L_08A8EA10:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A8EA3C;
      }
      goto L_08A8EA28;
    }
}
L_08A8EA28:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(42)));
    hot_regs.g6 = (g5 << 6u);
    g5 = (g5 << 3u);
    g5 = (hot_regs.g6 + g5);
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
    goto L_08A8EA3C;
}
L_08A8EA3C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[16]));
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
L_08A8EA58:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 65535u);
    g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g4 = (g5 << 6u);
    g5 = (g5 << 3u);
    g4 = (g4 - g5);
    jump_target = hot_regs.g31;
    g2 = (g2 + g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8EA74:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 65535u);
    g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (g5 << 6u);
    g5 = (g5 << 3u);
    g4 = (g4 - g5);
    jump_target = hot_regs.g31;
    g2 = (g2 + g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8EA90:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & 65535u);
    g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (g5 << 6u);
    g5 = (g5 << 3u);
    g4 = (g4 - g5);
    jump_target = hot_regs.g31;
    g2 = (g2 + g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8EAAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(110)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (0u | 0u);
    ctx.gpr[17] = (g4 | 0u);
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A8EB20;
      }
      goto L_08A8EAD8;
    }
}
L_08A8EAD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[18] + ctx.gpr[18]);
    g4 = (ctx.gpr[17] + g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(36))))));
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8EAF0u);
    g5 = (g5 & 65535u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A8EA74;
}
L_08A8EAF0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8EB00u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    goto L_08A8DAA0;
L_08A8EB00:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EB28;
      }
      goto L_08A8EB08;
    }
L_08A8EB08:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(110)));
    g18 = (g18 & 65535u);
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A8EAD8;
      }
      goto L_08A8EB20;
    }
}
L_08A8EB20:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A8EB30;
      }
      goto L_08A8EB28;
    }
L_08A8EB28:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (ctx.gpr[18] << 16u);
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 16u));
    hot_regs.g2 = g2;
    goto L_08A8EB30;
}
L_08A8EB30:
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
L_08A8EB48:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08A8EB74u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g29 = g29;
    goto L_08A8E4E8;
}
L_08A8EB74:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8EB88u);
    hot_regs.g6 = (0u | 0u);
    goto L_08A8E4E8;
L_08A8EB88:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08A8EB98u);
    hot_regs.g5 = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8EB98u) goto L_08A8EB98;
    return;
L_08A8EB98:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EC40;
      }
      goto L_08A8EBA0;
    }
L_08A8EBA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
    goto L_08A8EBB4;
}
L_08A8EBB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(2)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    g6 = (g6 + static_cast<std::uint32_t>(2));
    g7 = (static_cast<std::int32_t>(g5) < 13 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8EBB4;
      }
      goto L_08A8EBD0;
    }
}
L_08A8EBD0:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A8EBDC;
L_08A8EBDC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(28)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(g7));
    g6 = (g6 + static_cast<std::uint32_t>(2));
    g7 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8EBDC;
      }
      goto L_08A8EBF8;
    }
}
L_08A8EBF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(68)));
    hot_regs.g6 = (g18 | 0u);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(g4));
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    goto L_08A8EC1C;
}
L_08A8EC1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(50)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(g7));
    g6 = (g6 + static_cast<std::uint32_t>(2));
    g7 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8EC1C;
      }
      goto L_08A8EC38;
    }
}
L_08A8EC38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EED8;
      }
      goto L_08A8EC40;
    }
L_08A8EC40:
    hot_regs.g4 = (0u | 22u);
    hot_regs.g31 = (0x08A8EC4Cu);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8EC4Cu) goto L_08A8EC4C;
    return;
L_08A8EC4C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8ECF4;
      }
      goto L_08A8EC54;
    }
L_08A8EC54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    goto L_08A8EC68;
}
L_08A8EC68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(2)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    g7 = (static_cast<std::int32_t>(g5) < 13 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8EC68;
      }
      goto L_08A8EC84;
    }
}
L_08A8EC84:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_08A8EC90;
L_08A8EC90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(28)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(g7));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    g7 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8EC90;
      }
      goto L_08A8ECAC;
    }
}
L_08A8ECAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(46)));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(48)));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(g4));
    g6 = (aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(68)));
    g4 = (g16 | 0u);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(g6));
    g6 = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08A8ECD0;
}
L_08A8ECD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(50)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(g7));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    g7 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A8ECD0;
      }
      goto L_08A8ECEC;
    }
}
L_08A8ECEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EED8;
      }
      goto L_08A8ECF4;
    }
L_08A8ECF4:
    hot_regs.g4 = (0u | 19u);
    hot_regs.g31 = (0x08A8ED00u);
    hot_regs.g5 = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8ED00u) goto L_08A8ED00;
    return;
L_08A8ED00:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(g5);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g5 = (16448u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f15 = std::bit_cast<float>(g5);
    g5 = (16256u << 16u);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = hot_regs.g2 == 0u;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A8ED68;
      }
      goto L_08A8ED30;
    }
}
}
L_08A8ED30:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-19));
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    g4 = (g4 & 255u);
    ctx.fpr[17] = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    f13 = f13 / hot_regs.f15;
    f18 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = hot_regs.f14 - f13;
    { const float fs = f16; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f18; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f16 = f16 + f18;
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    { const bool branch_taken = 0u == 0u;
    g4 = (std::bit_cast<std::uint32_t>(f16));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_08A8ED9C;
      }
      goto L_08A8ED68;
    }
}
}
L_08A8ED68:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-5));
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & 255u);
    ctx.fpr[17] = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    f12 = f12 / hot_regs.f15;
    f18 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    f13 = hot_regs.f14 - f12;
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f16 = f18 + f16;
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    g4 = (std::bit_cast<std::uint32_t>(f16));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
    ctx.fpr[18] = f18;
    goto L_08A8ED9C;
}
}
L_08A8ED9C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_08A8EDAC;
L_08A8EDAC:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(2)));
    f14 = std::bit_cast<float>(g7);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (g6 + static_cast<std::uint32_t>(2));
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g7 = (static_cast<std::int32_t>(g5) < 13 ? 1u : 0u);
    { const float fs = f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f15 + f14;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A8EDAC;
      }
      goto L_08A8EDE4;
    }
}
}
L_08A8EDE4:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_08A8EDF0;
L_08A8EDF0:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(28)));
    f14 = std::bit_cast<float>(g7);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (g6 + static_cast<std::uint32_t>(2));
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g7 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const float fs = f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f15 + f14;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A8EDF0;
      }
      goto L_08A8EE28;
    }
}
}
L_08A8EE28:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(46)));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f15 + f14;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(48)));
    f16 = std::bit_cast<float>(g4);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    { const float fs = f16; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = f17 + f15;
    hot_regs.g5 = (0u | 0u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    hot_regs.g6 = (g17 | 0u);
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load16(g17 + static_cast<std::uint32_t>(68)));
    f18 = std::bit_cast<float>(g4);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    g4 = (g16 | 0u);
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f18; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f15 + f14;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(hot_regs.g7));
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    goto L_08A8EEA0;
}
}
L_08A8EEA0:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(50)));
    f14 = std::bit_cast<float>(g7);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (g6 + static_cast<std::uint32_t>(2));
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    g7 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const float fs = f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f15 + f14;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[8]));
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A8EEA0;
      }
      goto L_08A8EED8;
    }
}
}
L_08A8EED8:
    hot_regs.g4 = (0u | 5u);
    hot_regs.g31 = (0x08A8EEE4u);
    hot_regs.g5 = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8EEE4u) goto L_08A8EEE4;
    return;
L_08A8EEE4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8EEF8;
      }
      goto L_08A8EEEC;
    }
L_08A8EEEC:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(70)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A8EF00;
      }
      goto L_08A8EEF8;
    }
L_08A8EEF8:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(70)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08A8EF00;
L_08A8EF00:
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
L_08A8EF1C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A8EF30u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8EF30u) goto L_08A8EF30;
    return;
L_08A8EF30:
{
    float f0 = ctx.fpr[0];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16997u << 16u);
    g4 = (g4 | 12000u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const float fs = f0; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    ctx.fpr[0] = f0;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A8EF4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17204u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    g4 = (49972u << 16u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8EF84;
      }
      goto L_08A8EF68;
    }
}
L_08A8EF68:
    hot_regs.g4 = (17332u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    goto L_08A8EF70;
L_08A8EF70:
{
    float f12 = hot_regs.f12;
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A8EF70;
      }
      goto L_08A8EF84;
    }
}
L_08A8EF84:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (17332u << 16u);
      if (branch_taken) {
          goto L_08A8EFAC;
      }
      goto L_08A8EF94;
    }
L_08A8EF94:
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    goto L_08A8EF98;
L_08A8EF98:
{
    float f12 = hot_regs.f12;
    f12 = f12 + hot_regs.f14;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A8EF98;
      }
      goto L_08A8EFAC;
    }
}
L_08A8EFAC:
    jump_target = hot_regs.g31;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8EFB4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A8EFC4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8EFC4u) goto L_08A8EFC4;
    return;
L_08A8EFC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f14 = std::bit_cast<float>(0u);
    g4 = (g4 | 4059u);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8EFE8;
      }
      goto L_08A8EFE4;
    }
}
L_08A8EFE4:
    hot_regs.f13 = hot_regs.f13 + hot_regs.f12;
    goto L_08A8EFE8;
L_08A8EFE8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = hot_regs.f12 - f13;
    g4 = (16073u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f13 = f13 + hot_regs.f14;
    ctx.set_fpu_condition((f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A8F010;
      }
      goto L_08A8F00C;
    }
}
}
L_08A8F00C:
    hot_regs.f13 = hot_regs.f13 - hot_regs.f12;
    goto L_08A8F010;
L_08A8F010:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    f12 = hot_regs.f13 / f12;
    hot_regs.g4 = (16640u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(f12));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g2 = (std::bit_cast<std::uint32_t>(f12));
    g2 = (g2 & 65535u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A8F040:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    hot_regs.g6 = (16512u << 16u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(hot_regs.g6);
    { const float fs = hot_regs.f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(0u);
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f15 - f14;
    ctx.set_fpu_condition((f14 < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A8F074;
      }
      goto L_08A8F06C;
    }
}
L_08A8F06C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A8F0AC;
      }
      goto L_08A8F074;
    }
L_08A8F074:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    f14 = std::sqrt(f14);
    f15 = f14 - f13;
    hot_regs.g6 = (16128u << 16u);
    f16 = std::bit_cast<float>(hot_regs.g6);
    { const float fs = f15; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = f15 / f12;
    hot_regs.g2 = (0u | 1u);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    f13 = f13 - f14;
    { const float fs = f13; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f13 / f12;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A8F0AC;
      }
      goto L_08A8F0AC;
    }
}
L_08A8F0AC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F0B4:
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    { const std::uint16_t vfpu_half = 14336u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_value); }
    { const float vfpu_constant = std::bit_cast<float>(0x3EA2F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<33u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<33u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint16_t vfpu_half = 20032u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 52800u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<34u, 1u>(vfpu_value); }
    { const float vfpu_constant = std::bit_cast<float>(0x40490FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<65u, 1u>(vfpu_value); }
    { const float vfpu_constant = std::bit_cast<float>(0x40C90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<97u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vminmax(0u, 0u, 2u, 1u, false);
    ctx.execute_vfpu_vminmax(0u, 0u, 34u, 1u, true);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}; std::int32_t vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        if (std::isnan(vfpu_s[vfpu_i])) { vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max(); continue; }
        const double vfpu_scaled = static_cast<double>(vfpu_s[vfpu_i] * vfpu_scale);
        if (vfpu_scaled > static_cast<double>(std::numeric_limits<std::int32_t>::max())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::max();
        else if (vfpu_scaled <= static_cast<double>(std::numeric_limits<std::int32_t>::min())) vfpu_d[vfpu_i] = std::numeric_limits<std::int32_t>::min();
        else { double vfpu_rounded = 0.0;
          switch (17u) {
          case 16u: vfpu_rounded = psprecomp::AllegrexContext::round_ties_to_even(vfpu_scaled); break;
          case 17u: vfpu_rounded = std::trunc(vfpu_scaled); break;
          case 18u: vfpu_rounded = std::ceil(vfpu_scaled); break;
          default: vfpu_rounded = std::floor(vfpu_scaled); break;
          }
          vfpu_d[vfpu_i] = static_cast<std::int32_t>(vfpu_rounded);
        }
      }
      const std::uint32_t vfpu_destination_prefix = ctx.vfpu_ctrl[2];
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        if (((vfpu_destination_prefix >> (8u + vfpu_i)) & 1u) == 0u)
          ctx.vfpu[psprecomp::AllegrexContext::vfpu_vector_lane_index(32u, 1u, vfpu_i)] = std::bit_cast<float>(static_cast<std::uint32_t>(vfpu_d[vfpu_i]));
      }
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<97u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 65u, 1u, 6u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<65u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<33u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<2u, 97u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmp_ct<0u, 33u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<34u, 97u, 1u, 0u, false>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<34u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F124:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8F144u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F144u) goto L_08A8F144;
    return;
L_08A8F144:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    hot_regs.g31 = (0x08A8F150u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F150u) goto L_08A8F150;
    return;
L_08A8F150:
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
L_08A8F168:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A8F188u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F188u) goto L_08A8F188;
    return;
L_08A8F188:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[0]));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x08A8F198u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F198u) goto L_08A8F198;
    return;
L_08A8F198:
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
L_08A8F1B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08A8F1D4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F1D4u) goto L_08A8F1D4;
    return;
L_08A8F1D4:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F1E4u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F1E4u) goto L_08A8F1E4;
    return;
L_08A8F1E4:
    hot_regs.f12 = hot_regs.f20 / ctx.fpr[0];
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 - hot_regs.f12;
    hot_regs.g31 = (0x08A8F200u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F200u) goto L_08A8F200;
    return;
L_08A8F200:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_08A8F21C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A8F240u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F240u) goto L_08A8F240;
    return;
L_08A8F240:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F254u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F254u) goto L_08A8F254;
    return;
L_08A8F254:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08A8F298;
      }
      goto L_08A8F264;
    }
L_08A8F264:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F270u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F270u) goto L_08A8F270;
    return;
L_08A8F270:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F288;
      }
      goto L_08A8F284;
    }
L_08A8F284:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A8F288;
L_08A8F288:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A8F264;
      }
      goto L_08A8F298;
    }
}
L_08A8F298:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F2A4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F2A4u) goto L_08A8F2A4;
    return;
L_08A8F2A4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
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
L_08A8F2C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A8F2ECu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F2ECu) goto L_08A8F2EC;
    return;
L_08A8F2EC:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F300u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F300u) goto L_08A8F300;
    return;
L_08A8F300:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_08A8F344;
      }
      goto L_08A8F310;
    }
L_08A8F310:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F31Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F31Cu) goto L_08A8F31C;
    return;
L_08A8F31C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F334;
      }
      goto L_08A8F330;
    }
L_08A8F330:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A8F334;
L_08A8F334:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A8F310;
      }
      goto L_08A8F344;
    }
}
L_08A8F344:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F350u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F350u) goto L_08A8F350;
    return;
L_08A8F350:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
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
L_08A8F374:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08A8F390u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F390u) goto L_08A8F390;
    return;
L_08A8F390:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (32768u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const std::uint32_t dividend = hot_regs.g2; const std::uint32_t divisor = g4; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.hi);
    f20 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f20)));
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A8F3B8;
      }
      goto L_08A8F3AC;
    }
}
}
L_08A8F3AC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    goto L_08A8F3B8;
L_08A8F3B8:
    hot_regs.g4 = (12288u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F3CCu);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 302u, 0x08806634u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F3CCu) goto L_08A8F3CC;
    return;
L_08A8F3CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8F3F4;
      }
      goto L_08A8F3D8;
    }
}
L_08A8F3D8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8F404;
      }
      goto L_08A8F3E0;
    }
L_08A8F3E0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F3ECu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F3ECu) goto L_08A8F3EC;
    return;
L_08A8F3EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A8F520;
      }
      goto L_08A8F3F4;
    }
L_08A8F3F4:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A8F41C;
      }
      goto L_08A8F3FC;
    }
L_08A8F3FC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F490;
      }
      goto L_08A8F404;
    }
L_08A8F404:
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F414u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(9108));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 229u, 0x0889D1FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F414u) goto L_08A8F414;
    return;
L_08A8F414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F520;
      }
      goto L_08A8F41C;
    }
L_08A8F41C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F428u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F428u) goto L_08A8F428;
    return;
L_08A8F428:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 1 ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08A8F45C;
    }
    goto L_08A8F43C;
}
}
L_08A8F43C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g6 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x08A8F454u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(9088));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F454u) goto L_08A8F454;
    return;
L_08A8F454:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    goto L_08A8F45C;
L_08A8F45C:
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(hot_regs.f12));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x08A8F488u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F488u) goto L_08A8F488;
    return;
L_08A8F488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3EC;
      }
      goto L_08A8F490;
    }
L_08A8F490:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F49Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F49Cu) goto L_08A8F49C;
    return;
L_08A8F49C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g31 = (0x08A8F4B0u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F4B0u) goto L_08A8F4B0;
    return;
L_08A8F4B0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (hot_regs.g5 == 0u) {
    g4 = (g4 - ctx.gpr[17]);
    hot_regs.g4 = g4;
        goto L_08A8F4E4;
    }
    goto L_08A8F4C4;
}
L_08A8F4C4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g6 = (2232u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g31 = (0x08A8F4DCu);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(9088));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 201u, 0x0889CFFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F4DCu) goto L_08A8F4DC;
    return;
L_08A8F4DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g4 = (g4 - ctx.gpr[17]);
    hot_regs.g4 = g4;
    goto L_08A8F4E4;
}
L_08A8F4E4:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(hot_regs.f12));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[17]);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x08A8F518u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F518u) goto L_08A8F518;
    return;
L_08A8F518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F3EC;
      }
      goto L_08A8F520;
    }
L_08A8F520:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8F538:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A8F548u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 294u, 0x0889D610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F548u) goto L_08A8F548;
    return;
L_08A8F548:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g31 = (0x08A8F554u);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 1036u, 0x08B57ECCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F554u) goto L_08A8F554;
    return;
L_08A8F554:
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
L_08A8F564:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g6 = (2232u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5268));
    hot_regs.g7 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A8F588u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(9024));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 328u, 0x0889D80Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F588u) goto L_08A8F588;
    return;
L_08A8F588:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5260));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F598u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 426u, 0x08806DE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F598u) goto L_08A8F598;
    return;
L_08A8F598:
    hot_regs.g5 = (16457u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 4059u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F5ACu);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F5ACu) goto L_08A8F5AC;
    return;
L_08A8F5AC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F5B8u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 483u, 0x088073CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F5B8u) goto L_08A8F5B8;
    return;
L_08A8F5B8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
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
L_08A8F5CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(144));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(320));
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
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(128));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F64C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    hot_regs.g6 = (1024u << 16u);
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g5 = (0u < hot_regs.g5 ? 1u : 0u);
    hot_regs.g31 = (0x08A8F6B0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F6B0u) goto L_08A8F6B0;
    return;
L_08A8F6B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F730;
      }
      goto L_08A8F6B8;
    }
L_08A8F6B8:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08A8F6C4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F6C4u) goto L_08A8F6C4;
    return;
L_08A8F6C4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A8F6D4u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 24u, 0x08A9033Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F6D4u) goto L_08A8F6D4;
    return;
L_08A8F6D4:
    hot_regs.g31 = (0x08A8F6DCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    goto L_08A8F908;
L_08A8F6DC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A8F6F0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    goto L_08A8F754;
L_08A8F6F0:
{
    float f20 = hot_regs.f20;
    f20 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f20)));
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A8F71C;
      }
      goto L_08A8F700;
    }
}
L_08A8F700:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f20) || std::isnan(f12)) && hot_regs.f20 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A8F724;
      }
      goto L_08A8F714;
    }
}
L_08A8F714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F728;
      }
      goto L_08A8F71C;
    }
L_08A8F71C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A8F734;
      }
      goto L_08A8F724;
    }
L_08A8F724:
    hot_regs.g4 = (0u | 1u);
    goto L_08A8F728;
L_08A8F728:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08A8F734;
      }
      goto L_08A8F730;
    }
L_08A8F730:
    hot_regs.g2 = (0u | 0u);
    goto L_08A8F734;
L_08A8F734:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
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
L_08A8F754:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F800;
      }
      goto L_08A8F764;
    }
L_08A8F764:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    g8 = (g4 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(148)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f14));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(328)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(208)));
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16512u << 16u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A8F7F8;
      }
      goto L_08A8F7D8;
    }
}
}
L_08A8F7D8:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(0u);
    f12 = hot_regs.f13 - f12;
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(0u);
    hot_regs.f12 = f12;
        goto L_08A8F7F4;
    }
    goto L_08A8F7F4;
}
L_08A8F7F4:
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A8F7F8;
L_08A8F7F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A8F804;
      }
      goto L_08A8F800;
    }
L_08A8F800:
    hot_regs.g2 = (0u | 0u);
    goto L_08A8F804;
L_08A8F804:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8F80C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x08A8F888u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8F888u) goto L_08A8F888;
    return;
L_08A8F888:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    f13 = f13 + hot_regs.f14;
    f12 = f12 - f13;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    ctx.set_fpu_condition((f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A8F8C8;
      }
      goto L_08A8F8B4;
    }
}
L_08A8F8B4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(168)));
    hot_regs.g4 = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_08A8F8EC;
      }
      goto L_08A8F8C8;
    }
L_08A8F8C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F8EC;
      }
      goto L_08A8F8E0;
    }
L_08A8F8E0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A8F8EC;
L_08A8F8EC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8F908:
{
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f26));
    f26 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(176)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_fpu_condition((f26 <= hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g29 = g29;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08A8F9F4;
      }
      goto L_08A8F944;
    }
}
}
L_08A8F944:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    goto L_08A8F95C;
L_08A8F95C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8F9D8;
      }
      goto L_08A8F974;
    }
L_08A8F974:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A8F994u);
    hot_regs.g7 = (g29 | 0u);
    goto L_08A8F80C;
}
L_08A8F994:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5256), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8F9BC;
      }
      goto L_08A8F9A4;
    }
L_08A8F9A4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8F9BCu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08A8FA44;
L_08A8F9BC:
{
    float f24 = ctx.fpr[24];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(204)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    f24 = f24 + hot_regs.f12;
    ctx.set_fpu_condition((f24 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08A8F974;
      }
      goto L_08A8F9D8;
    }
}
L_08A8F9D8:
{
    float f26 = ctx.fpr[26];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    f26 = f26 + hot_regs.f12;
    ctx.set_fpu_condition((f26 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08A8F95C;
      }
      goto L_08A8F9F4;
    }
}
L_08A8F9F4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(168)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = (16656u << 16u);
    f12 = f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 / f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A8FA44:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-128));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(184)));
    f12 = f12 - hot_regs.f13;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7288), std::bit_cast<std::uint32_t>(f14));
    hot_regs.g6 = (16256u << 16u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5256)));
    f12 = std::bit_cast<float>(hot_regs.g6);
    f15 = f12 - f15;
    ctx.fpr[0] = std::bit_cast<float>(0u);
    f14 = f14 - f15;
    ctx.set_fpu_condition((f14 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7288), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A8FA98;
      }
      goto L_08A8FA84;
    }
}
}
L_08A8FA84:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(224)));
    if (hot_regs.g6 != 0u) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7288)));
        goto L_08A8FAA0;
    }
    goto L_08A8FA90;
L_08A8FA90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FAB4;
      }
      goto L_08A8FA98;
    }
L_08A8FA98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FBA4;
      }
      goto L_08A8FAA0;
    }
L_08A8FAA0:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5256)));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7288), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7288), std::bit_cast<std::uint32_t>(f15));
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    goto L_08A8FAB4;
}
}
L_08A8FAB4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7288)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(184)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    hot_regs.g6 = (16128u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g6);
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(220)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7304), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7296), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(216)));
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7300), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(192)));
    hot_regs.f13 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7280), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7284), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7280)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    hot_regs.g7 = (ctx.gpr[28] + static_cast<std::uint32_t>(7296));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7288)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(192)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(hot_regs.g5));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7288)));
    goto L_08A8FBA4;
L_08A8FBA4:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8FBAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x08A8FC30u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8FC30u) goto L_08A8FC30;
    return;
L_08A8FC30:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    f13 = f13 + hot_regs.f14;
    f12 = f12 - f13;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((f12 < hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A8FC78;
      }
      goto L_08A8FC5C;
    }
}
L_08A8FC5C:
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A8FC70u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 144u, 0x08AF89B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8FC70u) goto L_08A8FC70;
    return;
L_08A8FC70:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A8FC78;
L_08A8FC78:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8FCA4;
      }
      goto L_08A8FC90;
    }
L_08A8FC90:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    hot_regs.g4 = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_08A8FCE4;
      }
      goto L_08A8FCA4;
    }
L_08A8FCA4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A8FCE4;
      }
      goto L_08A8FCBC;
    }
L_08A8FCBC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A8FCD8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 144u, 0x08AF89B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8FCD8u) goto L_08A8FCD8;
    return;
L_08A8FCD8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A8FCE4;
L_08A8FCE4:
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
L_08A8FD04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-624));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(576), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(592), ctx.gpr[20]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[20] = (g8 & 255u);
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(580), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(584), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(596), ctx.gpr[21]);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[21] = (0u | 0u);
    g8 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(556), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(588), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(600), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(604), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(608), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(612), hot_regs.g31);
    { const bool branch_taken = g8 == 0u;
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A8FD80;
      }
      goto L_08A8FD70;
    }
}
L_08A8FD70:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[21] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A8FD80;
}
L_08A8FD80:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8FDF0;
      }
      goto L_08A8FD8C;
    }
L_08A8FD8C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1100)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A8FDF0;
      }
      goto L_08A8FDA4;
    }
}
L_08A8FDA4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1100)));
    f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    g5 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    g5 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(1100), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A8FDF0;
}
}
L_08A8FDF0:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    hot_regs.g6 = (1024u << 16u);
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g5 = (0u < hot_regs.g5 ? 1u : 0u);
    hot_regs.g31 = (0x08A8FE24u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8FE24u) goto L_08A8FE24;
    return;
L_08A8FE24:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 22u, 0x08A902F4u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A8FE2C;
    }
L_08A8FE2C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08A8FE38u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8FE38u) goto L_08A8FE38;
    return;
L_08A8FE38:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A8FE48u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 24u, 0x08A9033Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8FE48u) goto L_08A8FE48;
    return;
L_08A8FE48:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = (16656u << 16u);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    ctx.gpr[22] = (0u | 0u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[22]);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    hot_regs.g4 = (16384u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = hot_regs.f22 / hot_regs.f12;
    ctx.set_fpu_condition((hot_regs.f13 <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 9u, 0x08A90150u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A8FE90;
    }
L_08A8FE90:
    ctx.gpr[23] = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[23]);
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 8u, 0x08A90120u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A8FEB4;
    }
L_08A8FEB4:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f20));
    g4 = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(96));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(112));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8FEF4u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
    goto L_08A8FBAC;
}
}
L_08A8FEF4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5244)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5244)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[28];
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    hot_regs.g5 = (ctx.gpr[23] + ctx.gpr[23]);
    hot_regs.g5 = (ctx.gpr[23] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[22] << 2u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 7u, 0x08A900F4u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A8FF90;
    }
L_08A8FF90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(552), static_cast<std::uint16_t>(ctx.gpr[23]));
    g4 = (g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g30 = (g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g30 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8FFB4u);
    hot_regs.g5 = (g30 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
    goto L_08A8FA44;
}
L_08A8FFB4:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    { const float fs = hot_regs.f22; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    g23 = (g29 + static_cast<std::uint32_t>(224));
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (g17 | 0u);
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    ctx.pc = 0x08A90000u; return;}
}

}

void recomp_unit_0162(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0162_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_162(Runtime &runtime) {
    runtime.register_generated_unit(162u, 0x08A8C000u, 16384u, &recomp_unit_0162, &recomp_unit_0162_entry);
    runtime.register_function(0x08A8C000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C014u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C01Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C028u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C038u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C04Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C064u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C078u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C088u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C09Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C0F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C10Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C124u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C140u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C148u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C16Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C184u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C198u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C1ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C214u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C25Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C264u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C278u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C290u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C2E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C308u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C384u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C398u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C3E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C4F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C508u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C53Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C54Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C554u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C560u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C56Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C598u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C5ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C60Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C61Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C640u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C660u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C668u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C66Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C684u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C694u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C698u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C6C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C738u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C768u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C7F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C800u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C814u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C828u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C848u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C860u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C870u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C878u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C8F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C904u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C914u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C91Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C928u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C938u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C940u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C94Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C95Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C964u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C970u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C980u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C988u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C994u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8C9F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA34u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA64u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CA94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CAF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CB94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBCCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CBF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CC9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CCFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CD94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CDFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CE78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEB0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CEE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF14u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CF8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFD4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8CFE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D008u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D018u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D024u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D02Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D040u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D05Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D070u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D084u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D09Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0A8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D0F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D10Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D134u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D144u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D168u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D170u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D190u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D19Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D1E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D200u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D214u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D22Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D244u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D258u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D278u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D288u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D29Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D2F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D304u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D310u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D31Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D324u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D328u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D330u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D344u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D350u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D358u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D35Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D368u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D388u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D3F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D420u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D438u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D460u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D488u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D4F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D510u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D538u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D544u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D558u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D578u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D584u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D598u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D5DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D604u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D614u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D62Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D65Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D668u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D67Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D698u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D6D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D700u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D710u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D728u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D79Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D7E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D83Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D848u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D860u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D88Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D894u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D89Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D8E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D904u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D924u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D930u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D93Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D944u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D948u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D94Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D958u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D970u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8D9ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DA8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DACCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DAF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DB98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DBE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC18u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC60u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DC90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DCFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD0Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DD94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDA8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DDFCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DE9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEB8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DEF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF6Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DF7Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFC0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8DFE0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E000u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E008u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E024u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E02Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E034u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E03Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E044u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E048u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E060u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E064u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E094u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E0F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E104u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E118u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E130u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E144u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E150u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E158u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E160u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E164u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E16Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E174u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E180u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E188u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E1F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E21Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E230u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E250u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E258u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E264u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E27Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E2FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E30Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E31Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E340u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E354u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E374u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E37Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E388u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E3D0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E410u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E41Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E428u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E430u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E43Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E444u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E448u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E450u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E458u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E460u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E470u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E478u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E480u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E48Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E494u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4A0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E4E8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E504u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E510u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E530u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E55Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E57Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E588u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E594u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E59Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E5E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E608u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E614u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E62Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E640u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E658u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E67Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E694u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E6F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E70Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E72Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E750u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E770u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E808u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E81Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E834u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E848u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E894u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E8E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E90Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E918u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E930u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E944u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E960u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E988u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E994u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9C0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8E9DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA10u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA3Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA58u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EA90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EAF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB08u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB20u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB74u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB88u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EB98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBDCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EBF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC40u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC54u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EC90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECD0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ECF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8ED9Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EDF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EE28u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EED8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EEF8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF00u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF1Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF4Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF68u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF94u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EF98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFC4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8EFE8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F00Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F010u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F040u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F06Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F074u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F0B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F124u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F144u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F150u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F168u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F188u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F198u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F1E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F200u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F21Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F240u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F254u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F264u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F270u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F284u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F288u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F298u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F2ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F300u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F310u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F31Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F330u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F334u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F344u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F350u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F374u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F390u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F3FCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F404u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F414u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F41Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F428u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F43Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F454u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F45Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F488u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F490u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F49Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F4E4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F518u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F520u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F538u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F548u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F554u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F564u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F588u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F598u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5ACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F5CCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F64Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6B0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6B8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6C4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6D4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6DCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F6F0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F700u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F714u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F71Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F724u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F728u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F730u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F734u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F754u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F764u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F7F8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F800u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F804u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F80Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F888u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8B4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8C8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8E0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F8ECu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F908u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F944u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F95Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F974u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F994u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9A4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9BCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9D8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8F9F4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA44u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA84u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FA98u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAA0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FAB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FBACu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC30u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC5Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC78u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FC90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCBCu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCD8u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FCE4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD04u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD70u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD80u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FD8Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDA4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FDF0u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE24u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE2Cu, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE38u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE48u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FE90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEB4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FEF4u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FF90u, &recomp_unit_0162, "recomp_unit_0162");
    runtime.register_function(0x08A8FFB4u, &recomp_unit_0162, "recomp_unit_0162");
}
} // namespace psprecomp
