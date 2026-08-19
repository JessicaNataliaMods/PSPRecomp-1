#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0208[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 5, 0,
    6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 32, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 66,
    0, 67, 0, 0, 0, 0, 68, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0,
    0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103,
    0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 116, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    128, 0, 0, 129, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0,
    0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0,
    145, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0,
    0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172,
    0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184,
    185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 192, 0, 0,
    0, 0, 0, 0, 0, 193, 0, 194, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 200, 0,
    201, 202, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 224, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 242, 0,
    243, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0,
    0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 0, 0,
    0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0,
    274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281,
    0, 0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 289, 0, 0, 0, 0, 0, 0, 0, 290, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0,
    0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 302, 0, 303, 0, 304,
    0, 305, 0, 306, 0, 0, 0, 307, 0, 308, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0,
    324, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330,
    0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 0, 338, 0, 0, 339, 340, 0,
    0, 341, 0, 342, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 346, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0,
    0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 356, 357, 0, 0, 0, 0, 358, 0, 0, 0, 359,
    360, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 367, 368, 0, 0, 0, 0, 0, 369, 0, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0,
    0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385,
    0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0,
    393, 0, 0, 394, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 0, 404, 0,
    0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 409, 410, 0, 411, 0, 412, 0, 413, 0, 414, 0, 415, 0, 0, 416, 0, 417,
    0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0,
    0, 427, 0, 428, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 433, 0, 434, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 440,
    0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 454,
    0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 462,
    0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0,
    0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 487,
    0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0,
    0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0,
    515, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 523,
    0, 0, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540,
    0, 0, 0, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 550,
    0, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 554, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 559, 0,
    0, 560, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0,
    570, 0, 571, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 575, 0, 576, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 581,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0,
    0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 588, 0, 589, 0, 590, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    601, 0, 0, 602, 0, 603, 0, 604, 0, 605, 0, 0, 606, 607, 0, 608, 0, 609, 0, 610, 0, 611, 612, 0, 613, 0, 614, 0, 0, 0, 615, 0,
    0, 616, 0, 0, 617, 618, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 627, 0, 628, 0, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 0, 633, 634, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 645, 0, 0, 0,
    0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0,
    0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0,
    0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0,
    671, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 678, 0, 0, 679, 0, 680, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0,
    0, 0, 687, 0, 688, 0, 689, 0, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 693, 0, 694, 0, 0, 0, 0, 695, 0, 696, 697, 0, 698, 0,
    0, 699, 0, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 0, 0, 708, 0, 709, 0, 0, 0, 710, 0, 711,
    0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 0, 715, 716, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 722, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 729, 0, 0,
    730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 734, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0,
    0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 745, 0, 0, 746, 0, 0, 747, 0, 0, 748, 749, 0, 0, 750, 0, 0, 751, 0, 752, 0, 0, 0,
    753, 0, 0, 0, 754, 0, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 0, 761, 762, 0, 763, 0, 0, 0, 764,
    0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 767, 0, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 772, 773, 0, 774, 0, 0, 0, 775, 0,
    0, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 781, 0, 782, 0, 0, 783, 784, 0, 785, 0, 0, 0, 786, 0, 0,
    0, 787, 0, 0, 0, 788, 0, 0, 789, 0, 0, 790, 0, 0, 791, 0, 792, 0, 793, 0, 0, 794, 795, 0, 796, 0, 0, 797, 0, 0, 798, 0,
    0, 0, 799, 800, 0, 0, 801, 0, 0, 802, 803, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 806, 807, 0, 808, 0, 809, 0, 810, 811,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0,
    0, 819, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0,
    822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0, 0, 825, 0, 0, 826, 0,
    0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0, 0,
    0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 0, 834,
};
void recomp_unit_0208_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,29,6,31,16 fprs=12,13,20,22 gpr_occ=3889 fpr_occ=758 gpr_total=5034 fpr_total=1078
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_20 = ctx.fpr[20];
    float aot_fpr_22 = ctx.fpr[22];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[29] = aot_gpr_29; ctx.gpr[6] = aot_gpr_6; ctx.gpr[31] = aot_gpr_31; ctx.gpr[16] = aot_gpr_16; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[20] = aot_fpr_20; ctx.fpr[22] = aot_fpr_22; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_6 = ctx.gpr[6]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_16 = ctx.gpr[16]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_20 = ctx.fpr[20]; aot_fpr_22 = ctx.fpr[22]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B44000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0208[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B44000;
    case 2u: goto L_08B44024;
    case 3u: goto L_08B4405C;
    case 4u: goto L_08B4406C;
    case 5u: goto L_08B44078;
    case 6u: goto L_08B44080;
    case 7u: goto L_08B44098;
    case 8u: goto L_08B44108;
    case 9u: goto L_08B44114;
    case 10u: goto L_08B44120;
    case 11u: goto L_08B4412C;
    case 12u: goto L_08B44138;
    case 13u: goto L_08B44168;
    case 14u: goto L_08B44190;
    case 15u: goto L_08B441A0;
    case 16u: goto L_08B441A8;
    case 17u: goto L_08B441BC;
    case 18u: goto L_08B441C4;
    case 19u: goto L_08B441CC;
    case 20u: goto L_08B441D4;
    case 21u: goto L_08B44208;
    case 22u: goto L_08B4423C;
    case 23u: goto L_08B44240;
    case 24u: goto L_08B44248;
    case 25u: goto L_08B44250;
    case 26u: goto L_08B44258;
    case 27u: goto L_08B44260;
    case 28u: goto L_08B44268;
    case 29u: goto L_08B44270;
    case 30u: goto L_08B442A4;
    case 31u: goto L_08B442B4;
    case 32u: goto L_08B442B8;
    case 33u: goto L_08B442C4;
    case 34u: goto L_08B442D4;
    case 35u: goto L_08B442DC;
    case 36u: goto L_08B442EC;
    case 37u: goto L_08B44304;
    case 38u: goto L_08B4435C;
    case 39u: goto L_08B44370;
    case 40u: goto L_08B443A0;
    case 41u: goto L_08B44414;
    case 42u: goto L_08B44460;
    case 43u: goto L_08B44470;
    case 44u: goto L_08B44484;
    case 45u: goto L_08B44490;
    case 46u: goto L_08B4449C;
    case 47u: goto L_08B44510;
    case 48u: goto L_08B4452C;
    case 49u: goto L_08B44538;
    case 50u: goto L_08B44548;
    case 51u: goto L_08B44570;
    case 52u: goto L_08B4458C;
    case 53u: goto L_08B44594;
    case 54u: goto L_08B4459C;
    case 55u: goto L_08B445B8;
    case 56u: goto L_08B445C0;
    case 57u: goto L_08B445F8;
    case 58u: goto L_08B44680;
    case 59u: goto L_08B44690;
    case 60u: goto L_08B44698;
    case 61u: goto L_08B446B0;
    case 62u: goto L_08B446C4;
    case 63u: goto L_08B446D0;
    case 64u: goto L_08B446DC;
    case 65u: goto L_08B446F0;
    case 66u: goto L_08B446FC;
    case 67u: goto L_08B44704;
    case 68u: goto L_08B44718;
    case 69u: goto L_08B4471C;
    case 70u: goto L_08B4472C;
    case 71u: goto L_08B44730;
    case 72u: goto L_08B44780;
    case 73u: goto L_08B447A8;
    case 74u: goto L_08B447B8;
    case 75u: goto L_08B447C0;
    case 76u: goto L_08B447E8;
    case 77u: goto L_08B447F0;
    case 78u: goto L_08B44808;
    case 79u: goto L_08B44844;
    case 80u: goto L_08B448A0;
    case 81u: goto L_08B448F8;
    case 82u: goto L_08B44924;
    case 83u: goto L_08B44934;
    case 84u: goto L_08B4493C;
    case 85u: goto L_08B4494C;
    case 86u: goto L_08B44954;
    case 87u: goto L_08B4496C;
    case 88u: goto L_08B44974;
    case 89u: goto L_08B44998;
    case 90u: goto L_08B449B0;
    case 91u: goto L_08B449C0;
    case 92u: goto L_08B449CC;
    case 93u: goto L_08B449E0;
    case 94u: goto L_08B449EC;
    case 95u: goto L_08B449F4;
    case 96u: goto L_08B44A44;
    case 97u: goto L_08B44A6C;
    case 98u: goto L_08B44A80;
    case 99u: goto L_08B44AA8;
    case 100u: goto L_08B44AB0;
    case 101u: goto L_08B44AC8;
    case 102u: goto L_08B44AE4;
    case 103u: goto L_08B44AFC;
    case 104u: goto L_08B44B14;
    case 105u: goto L_08B44B1C;
    case 106u: goto L_08B44B5C;
    case 107u: goto L_08B44B9C;
    case 108u: goto L_08B44BA4;
    case 109u: goto L_08B44BB0;
    case 110u: goto L_08B44BB8;
    case 111u: goto L_08B44BC0;
    case 112u: goto L_08B44C0C;
    case 113u: goto L_08B44C20;
    case 114u: goto L_08B44C68;
    case 115u: goto L_08B44C74;
    case 116u: goto L_08B44C78;
    case 117u: goto L_08B44CA4;
    case 118u: goto L_08B44CDC;
    case 119u: goto L_08B44D18;
    case 120u: goto L_08B44D28;
    case 121u: goto L_08B44D70;
    case 122u: goto L_08B44E2C;
    case 123u: goto L_08B44E40;
    case 124u: goto L_08B44E48;
    case 125u: goto L_08B44E4C;
    case 126u: goto L_08B44E7C;
    case 127u: goto L_08B44EB0;
    case 128u: goto L_08B44F00;
    case 129u: goto L_08B44F0C;
    case 130u: goto L_08B44F10;
    case 131u: goto L_08B44F3C;
    case 132u: goto L_08B44F64;
    case 133u: goto L_08B44F70;
    case 134u: goto L_08B44F88;
    case 135u: goto L_08B44F90;
    case 136u: goto L_08B44F98;
    case 137u: goto L_08B44FB8;
    case 138u: goto L_08B44FC4;
    case 139u: goto L_08B44FCC;
    case 140u: goto L_08B44FD8;
    case 141u: goto L_08B44FE0;
    case 142u: goto L_08B44FE8;
    case 143u: goto L_08B44FF0;
    case 144u: goto L_08B44FF8;
    case 145u: goto L_08B45000;
    case 146u: goto L_08B45008;
    case 147u: goto L_08B45010;
    case 148u: goto L_08B45018;
    case 149u: goto L_08B45020;
    case 150u: goto L_08B45028;
    case 151u: goto L_08B45030;
    case 152u: goto L_08B45038;
    case 153u: goto L_08B45040;
    case 154u: goto L_08B45048;
    case 155u: goto L_08B45050;
    case 156u: goto L_08B45064;
    case 157u: goto L_08B45084;
    case 158u: goto L_08B4508C;
    case 159u: goto L_08B45094;
    case 160u: goto L_08B4509C;
    case 161u: goto L_08B450A4;
    case 162u: goto L_08B450AC;
    case 163u: goto L_08B450B4;
    case 164u: goto L_08B450BC;
    case 165u: goto L_08B450C4;
    case 166u: goto L_08B450CC;
    case 167u: goto L_08B450D4;
    case 168u: goto L_08B450DC;
    case 169u: goto L_08B450E4;
    case 170u: goto L_08B450EC;
    case 171u: goto L_08B450F4;
    case 172u: goto L_08B450FC;
    case 173u: goto L_08B45104;
    case 174u: goto L_08B4510C;
    case 175u: goto L_08B45114;
    case 176u: goto L_08B4511C;
    case 177u: goto L_08B45124;
    case 178u: goto L_08B4512C;
    case 179u: goto L_08B45140;
    case 180u: goto L_08B4515C;
    case 181u: goto L_08B45164;
    case 182u: goto L_08B4516C;
    case 183u: goto L_08B45174;
    case 184u: goto L_08B4517C;
    case 185u: goto L_08B45180;
    case 186u: goto L_08B451B4;
    case 187u: goto L_08B451C0;
    case 188u: goto L_08B451C8;
    case 189u: goto L_08B451D0;
    case 190u: goto L_08B451D8;
    case 191u: goto L_08B451E0;
    case 192u: goto L_08B451F4;
    case 193u: goto L_08B45214;
    case 194u: goto L_08B4521C;
    case 195u: goto L_08B45220;
    case 196u: goto L_08B45234;
    case 197u: goto L_08B45260;
    case 198u: goto L_08B45268;
    case 199u: goto L_08B45270;
    case 200u: goto L_08B45278;
    case 201u: goto L_08B45280;
    case 202u: goto L_08B45284;
    case 203u: goto L_08B45294;
    case 204u: goto L_08B452C0;
    case 205u: goto L_08B452D4;
    case 206u: goto L_08B45304;
    case 207u: goto L_08B45314;
    case 208u: goto L_08B45324;
    case 209u: goto L_08B4532C;
    case 210u: goto L_08B45348;
    case 211u: goto L_08B45368;
    case 212u: goto L_08B45380;
    case 213u: goto L_08B45394;
    case 214u: goto L_08B453AC;
    case 215u: goto L_08B453C0;
    case 216u: goto L_08B453E0;
    case 217u: goto L_08B453F8;
    case 218u: goto L_08B45414;
    case 219u: goto L_08B4541C;
    case 220u: goto L_08B4542C;
    case 221u: goto L_08B45438;
    case 222u: goto L_08B4544C;
    case 223u: goto L_08B45488;
    case 224u: goto L_08B45494;
    case 225u: goto L_08B4549C;
    case 226u: goto L_08B454A4;
    case 227u: goto L_08B454AC;
    case 228u: goto L_08B454B4;
    case 229u: goto L_08B454BC;
    case 230u: goto L_08B454C4;
    case 231u: goto L_08B454CC;
    case 232u: goto L_08B454DC;
    case 233u: goto L_08B454E8;
    case 234u: goto L_08B45500;
    case 235u: goto L_08B45510;
    case 236u: goto L_08B4551C;
    case 237u: goto L_08B45524;
    case 238u: goto L_08B45530;
    case 239u: goto L_08B45548;
    case 240u: goto L_08B45560;
    case 241u: goto L_08B45570;
    case 242u: goto L_08B45578;
    case 243u: goto L_08B45580;
    case 244u: goto L_08B45588;
    case 245u: goto L_08B45590;
    case 246u: goto L_08B455AC;
    case 247u: goto L_08B455B4;
    case 248u: goto L_08B455BC;
    case 249u: goto L_08B455C4;
    case 250u: goto L_08B455CC;
    case 251u: goto L_08B455D4;
    case 252u: goto L_08B455DC;
    case 253u: goto L_08B455E8;
    case 254u: goto L_08B455F4;
    case 255u: goto L_08B45608;
    case 256u: goto L_08B45624;
    case 257u: goto L_08B45634;
    case 258u: goto L_08B45640;
    case 259u: goto L_08B4565C;
    case 260u: goto L_08B45664;
    case 261u: goto L_08B45670;
    case 262u: goto L_08B45688;
    case 263u: goto L_08B45698;
    case 264u: goto L_08B456A0;
    case 265u: goto L_08B456A8;
    case 266u: goto L_08B456B0;
    case 267u: goto L_08B456B8;
    case 268u: goto L_08B456D0;
    case 269u: goto L_08B456D8;
    case 270u: goto L_08B456E0;
    case 271u: goto L_08B456E8;
    case 272u: goto L_08B456F0;
    case 273u: goto L_08B456F8;
    case 274u: goto L_08B45700;
    case 275u: goto L_08B45714;
    case 276u: goto L_08B4571C;
    case 277u: goto L_08B45744;
    case 278u: goto L_08B4574C;
    case 279u: goto L_08B45768;
    case 280u: goto L_08B45770;
    case 281u: goto L_08B4577C;
    case 282u: goto L_08B4578C;
    case 283u: goto L_08B45798;
    case 284u: goto L_08B457A4;
    case 285u: goto L_08B457BC;
    case 286u: goto L_08B457C4;
    case 287u: goto L_08B457CC;
    case 288u: goto L_08B457D4;
    case 289u: goto L_08B457D8;
    case 290u: goto L_08B457F8;
    case 291u: goto L_08B4582C;
    case 292u: goto L_08B45838;
    case 293u: goto L_08B45840;
    case 294u: goto L_08B4585C;
    case 295u: goto L_08B45864;
    case 296u: goto L_08B45870;
    case 297u: goto L_08B45878;
    case 298u: goto L_08B45894;
    case 299u: goto L_08B458A8;
    case 300u: goto L_08B458D4;
    case 301u: goto L_08B458DC;
    case 302u: goto L_08B458EC;
    case 303u: goto L_08B458F4;
    case 304u: goto L_08B458FC;
    case 305u: goto L_08B45904;
    case 306u: goto L_08B4590C;
    case 307u: goto L_08B4591C;
    case 308u: goto L_08B45924;
    case 309u: goto L_08B4592C;
    case 310u: goto L_08B45938;
    case 311u: goto L_08B45940;
    case 312u: goto L_08B4595C;
    case 313u: goto L_08B45964;
    case 314u: goto L_08B4596C;
    case 315u: goto L_08B459A8;
    case 316u: goto L_08B459B0;
    case 317u: goto L_08B459E0;
    case 318u: goto L_08B45A10;
    case 319u: goto L_08B45A40;
    case 320u: goto L_08B45A48;
    case 321u: goto L_08B45A50;
    case 322u: goto L_08B45A60;
    case 323u: goto L_08B45A70;
    case 324u: goto L_08B45A80;
    case 325u: goto L_08B45A90;
    case 326u: goto L_08B45AA4;
    case 327u: goto L_08B45AC0;
    case 328u: goto L_08B45AC8;
    case 329u: goto L_08B45AF4;
    case 330u: goto L_08B45AFC;
    case 331u: goto L_08B45B0C;
    case 332u: goto L_08B45B18;
    case 333u: goto L_08B45B28;
    case 334u: goto L_08B45B40;
    case 335u: goto L_08B45B48;
    case 336u: goto L_08B45B50;
    case 337u: goto L_08B45B58;
    case 338u: goto L_08B45B68;
    case 339u: goto L_08B45B74;
    case 340u: goto L_08B45B78;
    case 341u: goto L_08B45B84;
    case 342u: goto L_08B45B8C;
    case 343u: goto L_08B45B90;
    case 344u: goto L_08B45BBC;
    case 345u: goto L_08B45BC8;
    case 346u: goto L_08B45BD0;
    case 347u: goto L_08B45BD4;
    case 348u: goto L_08B45BDC;
    case 349u: goto L_08B45BF4;
    case 350u: goto L_08B45C04;
    case 351u: goto L_08B45C0C;
    case 352u: goto L_08B45C14;
    case 353u: goto L_08B45C1C;
    case 354u: goto L_08B45C30;
    case 355u: goto L_08B45C38;
    case 356u: goto L_08B45C54;
    case 357u: goto L_08B45C58;
    case 358u: goto L_08B45C6C;
    case 359u: goto L_08B45C7C;
    case 360u: goto L_08B45C80;
    case 361u: goto L_08B45C88;
    case 362u: goto L_08B45C9C;
    case 363u: goto L_08B45CB4;
    case 364u: goto L_08B45CB8;
    case 365u: goto L_08B45CC4;
    case 366u: goto L_08B45D00;
    case 367u: goto L_08B45D08;
    case 368u: goto L_08B45D0C;
    case 369u: goto L_08B45D24;
    case 370u: goto L_08B45D2C;
    case 371u: goto L_08B45D34;
    case 372u: goto L_08B45D3C;
    case 373u: goto L_08B45D44;
    case 374u: goto L_08B45D4C;
    case 375u: goto L_08B45D54;
    case 376u: goto L_08B45D60;
    case 377u: goto L_08B45D68;
    case 378u: goto L_08B45D84;
    case 379u: goto L_08B45D8C;
    case 380u: goto L_08B45DA0;
    case 381u: goto L_08B45DB4;
    case 382u: goto L_08B45DC0;
    case 383u: goto L_08B45DD0;
    case 384u: goto L_08B45DE8;
    case 385u: goto L_08B45DFC;
    case 386u: goto L_08B45E04;
    case 387u: goto L_08B45E0C;
    case 388u: goto L_08B45E50;
    case 389u: goto L_08B45E58;
    case 390u: goto L_08B45E60;
    case 391u: goto L_08B45E70;
    case 392u: goto L_08B45E78;
    case 393u: goto L_08B45E80;
    case 394u: goto L_08B45E8C;
    case 395u: goto L_08B45E94;
    case 396u: goto L_08B45E9C;
    case 397u: goto L_08B45EA4;
    case 398u: goto L_08B45EBC;
    case 399u: goto L_08B45EC4;
    case 400u: goto L_08B45ED0;
    case 401u: goto L_08B45ED8;
    case 402u: goto L_08B45EE4;
    case 403u: goto L_08B45EF0;
    case 404u: goto L_08B45EF8;
    case 405u: goto L_08B45F0C;
    case 406u: goto L_08B45F1C;
    case 407u: goto L_08B45F28;
    case 408u: goto L_08B45F34;
    case 409u: goto L_08B45F3C;
    case 410u: goto L_08B45F40;
    case 411u: goto L_08B45F48;
    case 412u: goto L_08B45F50;
    case 413u: goto L_08B45F58;
    case 414u: goto L_08B45F60;
    case 415u: goto L_08B45F68;
    case 416u: goto L_08B45F74;
    case 417u: goto L_08B45F7C;
    case 418u: goto L_08B45F98;
    case 419u: goto L_08B45FA0;
    case 420u: goto L_08B45FAC;
    case 421u: goto L_08B45FD0;
    case 422u: goto L_08B45FE4;
    case 423u: goto L_08B46024;
    case 424u: goto L_08B46054;
    case 425u: goto L_08B46060;
    case 426u: goto L_08B46068;
    case 427u: goto L_08B46084;
    case 428u: goto L_08B4608C;
    case 429u: goto L_08B460A0;
    case 430u: goto L_08B460AC;
    case 431u: goto L_08B460C8;
    case 432u: goto L_08B460DC;
    case 433u: goto L_08B460E4;
    case 434u: goto L_08B460EC;
    case 435u: goto L_08B4612C;
    case 436u: goto L_08B46144;
    case 437u: goto L_08B4614C;
    case 438u: goto L_08B46158;
    case 439u: goto L_08B46160;
    case 440u: goto L_08B4617C;
    case 441u: goto L_08B46184;
    case 442u: goto L_08B461AC;
    case 443u: goto L_08B461E0;
    case 444u: goto L_08B461F8;
    case 445u: goto L_08B46224;
    case 446u: goto L_08B46238;
    case 447u: goto L_08B46240;
    case 448u: goto L_08B46258;
    case 449u: goto L_08B462A0;
    case 450u: goto L_08B462B4;
    case 451u: goto L_08B462C4;
    case 452u: goto L_08B462D8;
    case 453u: goto L_08B462F0;
    case 454u: goto L_08B462FC;
    case 455u: goto L_08B46304;
    case 456u: goto L_08B4630C;
    case 457u: goto L_08B46334;
    case 458u: goto L_08B4633C;
    case 459u: goto L_08B46344;
    case 460u: goto L_08B4636C;
    case 461u: goto L_08B46374;
    case 462u: goto L_08B4637C;
    case 463u: goto L_08B46398;
    case 464u: goto L_08B463A0;
    case 465u: goto L_08B463A8;
    case 466u: goto L_08B463D0;
    case 467u: goto L_08B463D8;
    case 468u: goto L_08B463E0;
    case 469u: goto L_08B46410;
    case 470u: goto L_08B46418;
    case 471u: goto L_08B46420;
    case 472u: goto L_08B46444;
    case 473u: goto L_08B4644C;
    case 474u: goto L_08B46454;
    case 475u: goto L_08B46474;
    case 476u: goto L_08B46484;
    case 477u: goto L_08B464AC;
    case 478u: goto L_08B464B8;
    case 479u: goto L_08B464CC;
    case 480u: goto L_08B464D4;
    case 481u: goto L_08B464DC;
    case 482u: goto L_08B464F4;
    case 483u: goto L_08B46508;
    case 484u: goto L_08B4652C;
    case 485u: goto L_08B465DC;
    case 486u: goto L_08B465E8;
    case 487u: goto L_08B465FC;
    case 488u: goto L_08B4661C;
    case 489u: goto L_08B46628;
    case 490u: goto L_08B4663C;
    case 491u: goto L_08B4665C;
    case 492u: goto L_08B46668;
    case 493u: goto L_08B46678;
    case 494u: goto L_08B46698;
    case 495u: goto L_08B466A4;
    case 496u: goto L_08B466B4;
    case 497u: goto L_08B466C4;
    case 498u: goto L_08B466D8;
    case 499u: goto L_08B466E0;
    case 500u: goto L_08B466F4;
    case 501u: goto L_08B46704;
    case 502u: goto L_08B46718;
    case 503u: goto L_08B46728;
    case 504u: goto L_08B46734;
    case 505u: goto L_08B4676C;
    case 506u: goto L_08B46798;
    case 507u: goto L_08B467AC;
    case 508u: goto L_08B467BC;
    case 509u: goto L_08B46834;
    case 510u: goto L_08B468B4;
    case 511u: goto L_08B468C4;
    case 512u: goto L_08B468CC;
    case 513u: goto L_08B468E0;
    case 514u: goto L_08B468F8;
    case 515u: goto L_08B46900;
    case 516u: goto L_08B4690C;
    case 517u: goto L_08B46924;
    case 518u: goto L_08B4692C;
    case 519u: goto L_08B46938;
    case 520u: goto L_08B4695C;
    case 521u: goto L_08B46964;
    case 522u: goto L_08B46974;
    case 523u: goto L_08B4697C;
    case 524u: goto L_08B4698C;
    case 525u: goto L_08B46994;
    case 526u: goto L_08B4699C;
    case 527u: goto L_08B469B0;
    case 528u: goto L_08B469B8;
    case 529u: goto L_08B469C0;
    case 530u: goto L_08B469C8;
    case 531u: goto L_08B469EC;
    case 532u: goto L_08B46A14;
    case 533u: goto L_08B46A20;
    case 534u: goto L_08B46A44;
    case 535u: goto L_08B46A6C;
    case 536u: goto L_08B46A94;
    case 537u: goto L_08B46B20;
    case 538u: goto L_08B46B34;
    case 539u: goto L_08B46B50;
    case 540u: goto L_08B46B7C;
    case 541u: goto L_08B46B8C;
    case 542u: goto L_08B46B98;
    case 543u: goto L_08B46BA4;
    case 544u: goto L_08B46BB0;
    case 545u: goto L_08B46BB8;
    case 546u: goto L_08B46BC0;
    case 547u: goto L_08B46BC8;
    case 548u: goto L_08B46BD8;
    case 549u: goto L_08B46BE4;
    case 550u: goto L_08B46BFC;
    case 551u: goto L_08B46C10;
    case 552u: goto L_08B46C18;
    case 553u: goto L_08B46C20;
    case 554u: goto L_08B46C2C;
    case 555u: goto L_08B46C3C;
    case 556u: goto L_08B46C44;
    case 557u: goto L_08B46C68;
    case 558u: goto L_08B46C70;
    case 559u: goto L_08B46C78;
    case 560u: goto L_08B46C84;
    case 561u: goto L_08B46C9C;
    case 562u: goto L_08B46CA4;
    case 563u: goto L_08B46CAC;
    case 564u: goto L_08B46CB4;
    case 565u: goto L_08B46CC0;
    case 566u: goto L_08B46CCC;
    case 567u: goto L_08B46CE0;
    case 568u: goto L_08B46CF0;
    case 569u: goto L_08B46CF8;
    case 570u: goto L_08B46D00;
    case 571u: goto L_08B46D08;
    case 572u: goto L_08B46D18;
    case 573u: goto L_08B46D20;
    case 574u: goto L_08B46D5C;
    case 575u: goto L_08B46D60;
    case 576u: goto L_08B46D68;
    case 577u: goto L_08B46DA8;
    case 578u: goto L_08B46DE4;
    case 579u: goto L_08B46DEC;
    case 580u: goto L_08B46DF4;
    case 581u: goto L_08B46DFC;
    case 582u: goto L_08B46E30;
    case 583u: goto L_08B46E6C;
    case 584u: goto L_08B46E78;
    case 585u: goto L_08B46E8C;
    case 586u: goto L_08B46E98;
    case 587u: goto L_08B46EA0;
    case 588u: goto L_08B46EA8;
    case 589u: goto L_08B46EB0;
    case 590u: goto L_08B46EB8;
    case 591u: goto L_08B46EC4;
    case 592u: goto L_08B46ED4;
    case 593u: goto L_08B46EDC;
    case 594u: goto L_08B46EE4;
    case 595u: goto L_08B46EEC;
    case 596u: goto L_08B46F24;
    case 597u: goto L_08B46F60;
    case 598u: goto L_08B46F9C;
    case 599u: goto L_08B46FA8;
    case 600u: goto L_08B46FB0;
    case 601u: goto L_08B47000;
    case 602u: goto L_08B4700C;
    case 603u: goto L_08B47014;
    case 604u: goto L_08B4701C;
    case 605u: goto L_08B47024;
    case 606u: goto L_08B47030;
    case 607u: goto L_08B47034;
    case 608u: goto L_08B4703C;
    case 609u: goto L_08B47044;
    case 610u: goto L_08B4704C;
    case 611u: goto L_08B47054;
    case 612u: goto L_08B47058;
    case 613u: goto L_08B47060;
    case 614u: goto L_08B47068;
    case 615u: goto L_08B47078;
    case 616u: goto L_08B47084;
    case 617u: goto L_08B47090;
    case 618u: goto L_08B47094;
    case 619u: goto L_08B470A0;
    case 620u: goto L_08B470B0;
    case 621u: goto L_08B470C0;
    case 622u: goto L_08B470C8;
    case 623u: goto L_08B470D0;
    case 624u: goto L_08B470DC;
    case 625u: goto L_08B47114;
    case 626u: goto L_08B4711C;
    case 627u: goto L_08B4712C;
    case 628u: goto L_08B47134;
    case 629u: goto L_08B47140;
    case 630u: goto L_08B4714C;
    case 631u: goto L_08B47154;
    case 632u: goto L_08B4715C;
    case 633u: goto L_08B47168;
    case 634u: goto L_08B4716C;
    case 635u: goto L_08B47194;
    case 636u: goto L_08B471C0;
    case 637u: goto L_08B471C8;
    case 638u: goto L_08B471D0;
    case 639u: goto L_08B471DC;
    case 640u: goto L_08B47210;
    case 641u: goto L_08B4722C;
    case 642u: goto L_08B47234;
    case 643u: goto L_08B4725C;
    case 644u: goto L_08B47268;
    case 645u: goto L_08B47270;
    case 646u: goto L_08B4728C;
    case 647u: goto L_08B472B8;
    case 648u: goto L_08B472D4;
    case 649u: goto L_08B472EC;
    case 650u: goto L_08B472F4;
    case 651u: goto L_08B4731C;
    case 652u: goto L_08B47328;
    case 653u: goto L_08B47330;
    case 654u: goto L_08B4734C;
    case 655u: goto L_08B47378;
    case 656u: goto L_08B47398;
    case 657u: goto L_08B473A0;
    case 658u: goto L_08B473C8;
    case 659u: goto L_08B473D4;
    case 660u: goto L_08B473EC;
    case 661u: goto L_08B473F4;
    case 662u: goto L_08B47414;
    case 663u: goto L_08B4741C;
    case 664u: goto L_08B47444;
    case 665u: goto L_08B47450;
    case 666u: goto L_08B47468;
    case 667u: goto L_08B47478;
    case 668u: goto L_08B474B4;
    case 669u: goto L_08B474C4;
    case 670u: goto L_08B474F8;
    case 671u: goto L_08B47500;
    case 672u: goto L_08B47508;
    case 673u: goto L_08B47514;
    case 674u: goto L_08B4754C;
    case 675u: goto L_08B47550;
    case 676u: goto L_08B4758C;
    case 677u: goto L_08B47594;
    case 678u: goto L_08B47604;
    case 679u: goto L_08B47610;
    case 680u: goto L_08B47618;
    case 681u: goto L_08B47620;
    case 682u: goto L_08B47634;
    case 683u: goto L_08B4763C;
    case 684u: goto L_08B47644;
    case 685u: goto L_08B4766C;
    case 686u: goto L_08B47678;
    case 687u: goto L_08B47688;
    case 688u: goto L_08B47690;
    case 689u: goto L_08B47698;
    case 690u: goto L_08B476A4;
    case 691u: goto L_08B476B8;
    case 692u: goto L_08B476C0;
    case 693u: goto L_08B476C8;
    case 694u: goto L_08B476D0;
    case 695u: goto L_08B476E4;
    case 696u: goto L_08B476EC;
    case 697u: goto L_08B476F0;
    case 698u: goto L_08B476F8;
    case 699u: goto L_08B47704;
    case 700u: goto L_08B47714;
    case 701u: goto L_08B4771C;
    case 702u: goto L_08B47724;
    case 703u: goto L_08B4772C;
    case 704u: goto L_08B47734;
    case 705u: goto L_08B4773C;
    case 706u: goto L_08B47744;
    case 707u: goto L_08B4774C;
    case 708u: goto L_08B4775C;
    case 709u: goto L_08B47764;
    case 710u: goto L_08B47774;
    case 711u: goto L_08B4777C;
    case 712u: goto L_08B47784;
    case 713u: goto L_08B47794;
    case 714u: goto L_08B477A0;
    case 715u: goto L_08B477AC;
    case 716u: goto L_08B477B0;
    case 717u: goto L_08B477BC;
    case 718u: goto L_08B477CC;
    case 719u: goto L_08B477DC;
    case 720u: goto L_08B477E4;
    case 721u: goto L_08B477EC;
    case 722u: goto L_08B477F8;
    case 723u: goto L_08B47830;
    case 724u: goto L_08B47838;
    case 725u: goto L_08B47848;
    case 726u: goto L_08B47850;
    case 727u: goto L_08B4785C;
    case 728u: goto L_08B47868;
    case 729u: goto L_08B47874;
    case 730u: goto L_08B47880;
    case 731u: goto L_08B47888;
    case 732u: goto L_08B478B0;
    case 733u: goto L_08B478BC;
    case 734u: goto L_08B478CC;
    case 735u: goto L_08B478D0;
    case 736u: goto L_08B47900;
    case 737u: goto L_08B4794C;
    case 738u: goto L_08B4795C;
    case 739u: goto L_08B479B4;
    case 740u: goto L_08B479D0;
    case 741u: goto L_08B479F0;
    case 742u: goto L_08B479F8;
    case 743u: goto L_08B47A08;
    case 744u: goto L_08B47A18;
    case 745u: goto L_08B47A28;
    case 746u: goto L_08B47A34;
    case 747u: goto L_08B47A40;
    case 748u: goto L_08B47A4C;
    case 749u: goto L_08B47A50;
    case 750u: goto L_08B47A5C;
    case 751u: goto L_08B47A68;
    case 752u: goto L_08B47A70;
    case 753u: goto L_08B47A80;
    case 754u: goto L_08B47A90;
    case 755u: goto L_08B47AA0;
    case 756u: goto L_08B47AAC;
    case 757u: goto L_08B47AB8;
    case 758u: goto L_08B47AC4;
    case 759u: goto L_08B47ACC;
    case 760u: goto L_08B47AD4;
    case 761u: goto L_08B47AE0;
    case 762u: goto L_08B47AE4;
    case 763u: goto L_08B47AEC;
    case 764u: goto L_08B47AFC;
    case 765u: goto L_08B47B0C;
    case 766u: goto L_08B47B1C;
    case 767u: goto L_08B47B28;
    case 768u: goto L_08B47B34;
    case 769u: goto L_08B47B40;
    case 770u: goto L_08B47B48;
    case 771u: goto L_08B47B50;
    case 772u: goto L_08B47B5C;
    case 773u: goto L_08B47B60;
    case 774u: goto L_08B47B68;
    case 775u: goto L_08B47B78;
    case 776u: goto L_08B47B88;
    case 777u: goto L_08B47B98;
    case 778u: goto L_08B47BA4;
    case 779u: goto L_08B47BB0;
    case 780u: goto L_08B47BBC;
    case 781u: goto L_08B47BC4;
    case 782u: goto L_08B47BCC;
    case 783u: goto L_08B47BD8;
    case 784u: goto L_08B47BDC;
    case 785u: goto L_08B47BE4;
    case 786u: goto L_08B47BF4;
    case 787u: goto L_08B47C04;
    case 788u: goto L_08B47C14;
    case 789u: goto L_08B47C20;
    case 790u: goto L_08B47C2C;
    case 791u: goto L_08B47C38;
    case 792u: goto L_08B47C40;
    case 793u: goto L_08B47C48;
    case 794u: goto L_08B47C54;
    case 795u: goto L_08B47C58;
    case 796u: goto L_08B47C60;
    case 797u: goto L_08B47C6C;
    case 798u: goto L_08B47C78;
    case 799u: goto L_08B47C88;
    case 800u: goto L_08B47C8C;
    case 801u: goto L_08B47C98;
    case 802u: goto L_08B47CA4;
    case 803u: goto L_08B47CA8;
    case 804u: goto L_08B47CC8;
    case 805u: goto L_08B47CD4;
    case 806u: goto L_08B47CDC;
    case 807u: goto L_08B47CE0;
    case 808u: goto L_08B47CE8;
    case 809u: goto L_08B47CF0;
    case 810u: goto L_08B47CF8;
    case 811u: goto L_08B47CFC;
    case 812u: goto L_08B47D54;
    case 813u: goto L_08B47D68;
    case 814u: goto L_08B47DAC;
    case 815u: goto L_08B47DB4;
    case 816u: goto L_08B47DD4;
    case 817u: goto L_08B47DE0;
    case 818u: goto L_08B47DEC;
    case 819u: goto L_08B47E04;
    case 820u: goto L_08B47E14;
    case 821u: goto L_08B47E6C;
    case 822u: goto L_08B47E80;
    case 823u: goto L_08B47EC4;
    case 824u: goto L_08B47ECC;
    case 825u: goto L_08B47EEC;
    case 826u: goto L_08B47EF8;
    case 827u: goto L_08B47F08;
    case 828u: goto L_08B47F24;
    case 829u: goto L_08B47F60;
    case 830u: goto L_08B47F74;
    case 831u: goto L_08B47F88;
    case 832u: goto L_08B47FB8;
    case 833u: goto L_08B47FCC;
    case 834u: goto L_08B47FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08B44000:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_22 = ctx.fpr[14] + aot_fpr_12;
    ctx.gpr[8] = (ctx.gpr[9] | 0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x08B44024u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 783u, 0x08B43C48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44024u) goto L_08B44024;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44024:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5416)));
    aot_fpr_13 = aot_fpr_22 - aot_fpr_13;
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[14])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B44080;
      }
      goto L_08B4405C;
    }
L_08B4405C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (0u | 18u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B44078;
      }
      goto L_08B4406C;
    }
L_08B4406C:
    aot_gpr_4 = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B44080;
      }
      goto L_08B44078;
    }
L_08B44078:
    aot_gpr_4 = (0u | 6u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B44080;
L_08B44080:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44098:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_12;
    aot_fpr_13 = ctx.fpr[17] - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(aot_fpr_22));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_22 = aot_fpr_22 + aot_fpr_13;
    aot_gpr_4 = (17096u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_31);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 19u);
      if (branch_taken) {
          goto L_08B4412C;
      }
      goto L_08B44108;
    }
L_08B44108:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B44120;
      }
      goto L_08B44114;
    }
L_08B44114:
    aot_gpr_4 = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B44120;
    }
L_08B44120:
    aot_gpr_4 = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B4412C;
    }
L_08B4412C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(533))))));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B441BC;
      }
      goto L_08B44138;
    }
L_08B44138:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(320)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(324)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (14545u << 16u);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B44168;
    }
L_08B44168:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (14801u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[16])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B44190;
    }
L_08B44190:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B441A0;
    }
L_08B441A0:
    aot_gpr_31 = (0x08B441A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 502u, 0x08B0E0ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B441A8u) goto L_08B441A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B441A8:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B441BC;
    }
L_08B441BC:
    aot_gpr_31 = (0x08B441C4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B441C4u) goto L_08B441C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B441C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4423C;
      }
      goto L_08B441CC;
    }
L_08B441CC:
    aot_gpr_31 = (0x08B441D4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B441D4u) goto L_08B441D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B441D4:
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
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B4423C;
      }
      goto L_08B44208;
    }
L_08B44208:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(664)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16773u << 16u);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_gpr_4 | 21845u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B44240;
      }
      goto L_08B4423C;
    }
L_08B4423C:
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(0u));
    goto L_08B44240;
L_08B44240:
    aot_gpr_31 = (0x08B44248u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44248u) goto L_08B44248;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44248:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
        goto L_08B442B8;
    }
    goto L_08B44250;
L_08B44250:
    aot_gpr_31 = (0x08B44258u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44258u) goto L_08B44258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44258:
    aot_gpr_31 = (0x08B44260u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 229u, 0x08B00D78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44260u) goto L_08B44260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44260:
    if (ctx.gpr[2] != 0u) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
        goto L_08B442B8;
    }
    goto L_08B44268;
L_08B44268:
    aot_gpr_31 = (0x08B44270u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44270u) goto L_08B44270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44270:
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
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15692u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B442A4;
    }
L_08B442A4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(664)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2501 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B442B4;
    }
L_08B442B4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    goto L_08B442B8;
L_08B442B8:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B442C4;
    }
L_08B442C4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_22 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B442EC;
      }
      goto L_08B442D4;
    }
L_08B442D4:
    aot_gpr_31 = (0x08B442DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 502u, 0x08B0E0ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B442DCu) goto L_08B442DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B442DC:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B442EC;
L_08B442EC:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44304:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-256));
    { const std::uint32_t aot_run_words[12]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_run_words); }
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (aot_gpr_6 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08B4435Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4435Cu) goto L_08B4435C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4435C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B44370u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 34u, 0x08960350u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44370u) goto L_08B44370;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44370:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B443A0u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B443A0u) goto L_08B443A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B443A0:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B44414u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44414u) goto L_08B44414;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44414:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
        goto L_08B44470;
    }
    goto L_08B44460;
L_08B44460:
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    goto L_08B44470;
L_08B44470:
    ctx.fpr[24] = ctx.fpr[24] / aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B44490;
      }
      goto L_08B44484;
    }
L_08B44484:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08B445C0;
      }
      goto L_08B44490;
    }
L_08B44490:
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_31 = (0x08B4449Cu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4449Cu) goto L_08B4449C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4449C:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[14];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = aot_fpr_13 - ctx.fpr[24];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B44538;
      }
      goto L_08B44510;
    }
L_08B44510:
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_22 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_22 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_22)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B4452C;
    }
    goto L_08B4452C;
L_08B4452C:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_22));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08B445C0;
      }
      goto L_08B44538;
    }
L_08B44538:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (48588u << 16u);
      if (branch_taken) {
          goto L_08B4459C;
      }
      goto L_08B44548;
    }
L_08B44548:
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
        goto L_08B44570;
    }
    goto L_08B44570;
L_08B44570:
    aot_gpr_4 = (16243u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B44594;
      }
      goto L_08B4458C;
    }
L_08B4458C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B44594;
L_08B44594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B445C0;
      }
      goto L_08B4459C;
    }
L_08B4459C:
    { const float fs = ctx.fpr[24]; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B445B8;
    }
    goto L_08B445B8;
L_08B445B8:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08B445C0;
L_08B445C0:
    { std::uint32_t aot_run_words[12]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(196), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      aot_gpr_31 = aot_run_words[11];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B445F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-64));
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = aot_fpr_22; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = ctx.fpr[15] + ctx.fpr[16];
    { const std::uint32_t aot_run_words[9]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_run_words); }
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    ctx.gpr[8] = (48896u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(ctx.fpr[24])) && aot_fpr_13 == ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08B44690;
      }
      goto L_08B44680;
    }
L_08B44680:
    aot_fpr_20 = aot_fpr_20 / aot_fpr_13;
    aot_fpr_22 = aot_fpr_22 / aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B44698;
      }
      goto L_08B44690;
    }
L_08B44690:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B44698;
L_08B44698:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = ctx.fpr[26] - aot_fpr_13;
    aot_gpr_31 = (0x08B446B0u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[14];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B446B0u) goto L_08B446B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B446B0:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[26] < ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B446D0;
      }
      goto L_08B446C4;
    }
L_08B446C4:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = ctx.fpr[26] + aot_fpr_12;
    goto L_08B446D0;
L_08B446D0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x08B446DCu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B446DCu) goto L_08B446DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B446DC:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B446FC;
      }
      goto L_08B446F0;
    }
L_08B446F0:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_08B446FC;
L_08B446FC:
    aot_gpr_31 = (0x08B44704u);
    aot_fpr_12 = ctx.fpr[26] - aot_fpr_20;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44704u) goto L_08B44704;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44704:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[28])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B4471C;
      }
      goto L_08B44718;
    }
L_08B44718:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08B4471C;
L_08B4471C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B44730;
      }
      goto L_08B4472C;
    }
L_08B4472C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08B44730;
L_08B44730:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17008u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(535))))));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_fpr_13 = ctx.fpr[15] - aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(535))))));
        goto L_08B447C0;
    }
    goto L_08B44780;
L_08B44780:
    aot_gpr_4 = (48588u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49312u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[14])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B447B8;
      }
      goto L_08B447A8;
    }
L_08B447A8:
    aot_gpr_4 = (48716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08B447B8;
L_08B447B8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08B44808;
      }
      goto L_08B447C0;
    }
L_08B447C0:
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[14] = aot_fpr_13 / ctx.fpr[14];
    aot_gpr_4 = (16000u << 16u);
    aot_gpr_5 = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[14] <= ctx.fpr[15])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08B447F0;
      }
      goto L_08B447E8;
    }
L_08B447E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B44808;
      }
      goto L_08B447F0;
    }
L_08B447F0:
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[14];
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08B44808;
L_08B44808:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      aot_gpr_31 = aot_run_words[10];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44844:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words); }
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B448A0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B448A0u) goto L_08B448A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B448A0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16800u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[30] / aot_fpr_12;
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_gpr_4 = (17008u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_08B448F8;
    }
    goto L_08B448F8;
L_08B448F8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_22; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(ctx.fpr[26])) && aot_fpr_12 == ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B44934;
      }
      goto L_08B44924;
    }
L_08B44924:
    ctx.fpr[24] = ctx.fpr[24] / aot_fpr_12;
    aot_fpr_22 = aot_fpr_22 / aot_fpr_12;
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4493C;
      }
      goto L_08B44934;
    }
L_08B44934:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    goto L_08B4493C;
L_08B4493C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x08B4494Cu);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4494Cu) goto L_08B4494C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4494C:
    aot_gpr_31 = (0x08B44954u);
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44954u) goto L_08B44954;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44954:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08B4496Cu);
    aot_fpr_22 = aot_fpr_22 + aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4496Cu) goto L_08B4496C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4496C:
    aot_gpr_31 = (0x08B44974u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44974u) goto L_08B44974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44974:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_fpr_13 = aot_fpr_22 - aot_fpr_13;
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[14];
    aot_gpr_31 = (0x08B44998u);
    aot_fpr_12 = ctx.fpr[14] - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44998u) goto L_08B44998;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44998:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08B449C0;
      }
      goto L_08B449B0;
    }
L_08B449B0:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_08B449C0;
L_08B449C0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x08B449CCu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B449CCu) goto L_08B449CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B449CC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[24] < ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B449EC;
      }
      goto L_08B449E0;
    }
L_08B449E0:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_12;
    goto L_08B449EC;
L_08B449EC:
    aot_gpr_31 = (0x08B449F4u);
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[24];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B449F4u) goto L_08B449F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B449F4:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(535))))));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fpr[28] = aot_fpr_13 - ctx.fpr[28];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] <= ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(535))))));
        goto L_08B44A80;
    }
    goto L_08B44A44;
L_08B44A44:
    aot_gpr_4 = (48588u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (49312u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[28] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B44AC8;
      }
      goto L_08B44A6C;
    }
L_08B44A6C:
    aot_gpr_4 = (48716u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B44AC8;
      }
      goto L_08B44A80;
    }
L_08B44A80:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_12 = ctx.fpr[28] / aot_fpr_12;
    aot_gpr_4 = (16000u << 16u);
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08B44AB0;
      }
      goto L_08B44AA8;
    }
L_08B44AA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
      if (branch_taken) {
          goto L_08B44AC8;
      }
      goto L_08B44AB0;
    }
L_08B44AB0:
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_12;
    aot_mem.aot_direct_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B44AC8;
L_08B44AC8:
    aot_mem.aot_direct_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 219u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B44B1C;
      }
      goto L_08B44AE4;
    }
L_08B44AE4:
    aot_gpr_4 = (16928u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[30] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (15897u << 16u);
      if (branch_taken) {
          goto L_08B44B1C;
      }
      goto L_08B44AFC;
    }
L_08B44AFC:
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B44B1C;
      }
      goto L_08B44B14;
    }
L_08B44B14:
    aot_gpr_31 = (0x08B44B1Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 241u, 0x08A51A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44B1Cu) goto L_08B44B1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44B1C:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[19] = aot_run_words[9];
      ctx.gpr[20] = aot_run_words[10];
      ctx.gpr[21] = aot_run_words[11];
      ctx.gpr[22] = aot_run_words[12];
      aot_gpr_31 = aot_run_words[13];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44B5C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(560)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B44BB0;
      }
      goto L_08B44B9C;
    }
L_08B44B9C:
    aot_gpr_31 = (0x08B44BA4u);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(560)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 107u, 0x08B2090Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44BA4u) goto L_08B44BA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(560)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(560), static_cast<std::uint16_t>(aot_gpr_4));
    goto L_08B44BB0;
L_08B44BB0:
    aot_gpr_4 = (0u | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    goto L_08B44BB8;
L_08B44BB8:
    if (aot_gpr_5 == 0u) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B44C20;
    }
    goto L_08B44BC0;
L_08B44BC0:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_6 << 3u);
    ctx.gpr[8] = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(30040)));
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_5 & 16383u);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B44C20;
    }
    goto L_08B44C0C;
L_08B44C0C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B44BB8;
      }
      goto L_08B44C20;
    }
L_08B44C20:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_6 << 3u);
    ctx.gpr[8] = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_direct_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B44C74;
      }
      goto L_08B44C68;
    }
L_08B44C68:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B44C78;
      }
      goto L_08B44C74;
    }
L_08B44C74:
    aot_mem.aot_direct_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08B44C78;
L_08B44C78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 15u);
    if (aot_gpr_4 != ctx.gpr[19]) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B44CDC;
    }
    goto L_08B44CA4;
L_08B44CA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08B44EB0;
      }
      goto L_08B44CDC;
    }
L_08B44CDC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (18804u << 16u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 | 9214u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B44E7C;
      }
      goto L_08B44D18;
    }
L_08B44D18:
    ctx.gpr[22] = (aot_gpr_16 | 0u);
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B44D28;
L_08B44D28:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[21]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B44E4C;
    }
    goto L_08B44D70;
L_08B44D70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_gpr_6 << 3u);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    ctx.gpr[10] = (aot_gpr_5 + aot_gpr_6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
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
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[10] = (aot_gpr_5 + aot_gpr_4);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
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
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vi2f_ct<2u, 1u, 2u, 3u>();
    ctx.execute_vfpu_vi2f_ct<66u, 32u, 1u, 0u>();
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    ctx.execute_vfpu_vec3_ct<98u, 66u, 64u, 1u, 1u>();
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B44E2Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0043_entry, 43u, 186u, 0x088B1424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44E2Cu) goto L_08B44E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44E2C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B44E48;
      }
      goto L_08B44E40;
    }
L_08B44E40:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08B44E48;
L_08B44E48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B44E4C;
L_08B44E4C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B44D28;
    }
    goto L_08B44E7C;
L_08B44E7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    goto L_08B44EB0;
L_08B44EB0:
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[20]);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B44F0C;
      }
      goto L_08B44F00;
    }
L_08B44F00:
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B44F10;
      }
      goto L_08B44F0C;
    }
L_08B44F0C:
    aot_mem.aot_direct_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_08B44F10;
L_08B44F10:
    { std::uint32_t aot_run_words[9]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      ctx.gpr[22] = aot_run_words[7];
      aot_gpr_31 = aot_run_words[8];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44F3C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_6 = (2280u << 16u);
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(11952));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_31);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_31 = (0x08B44F64u);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), aot_gpr_6);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 511u, 0x08B42280u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44F64u) goto L_08B44F64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44F64:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44F70:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08B44F88u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44F88u) goto L_08B44F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44F88:
    aot_gpr_31 = (0x08B44F90u);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 1009u, 0x08AB3F00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44F90u) goto L_08B44F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45010;
      }
      goto L_08B44F98;
    }
L_08B44F98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5476)));
    aot_gpr_5 = (2u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-11072));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45010;
      }
      goto L_08B44FB8;
    }
L_08B44FB8:
    aot_gpr_16 = (0u | 204u);
    aot_gpr_31 = (0x08B44FC4u);
    aot_gpr_4 = (0u | 204u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44FC4u) goto L_08B44FC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45010;
      }
      goto L_08B44FCC;
    }
L_08B44FCC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5472)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B45010;
      }
      goto L_08B44FD8;
    }
L_08B44FD8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45010;
      }
      goto L_08B44FE0;
    }
L_08B44FE0:
    aot_gpr_31 = (0x08B44FE8u);
    aot_gpr_4 = (0u | 117u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44FE8u) goto L_08B44FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44FE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45000;
      }
      goto L_08B44FF0;
    }
L_08B44FF0:
    aot_gpr_31 = (0x08B44FF8u);
    aot_gpr_4 = (0u | 118u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B44FF8u) goto L_08B44FF8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B44FF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45008;
      }
      goto L_08B45000;
    }
L_08B45000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45010;
      }
      goto L_08B45008;
    }
L_08B45008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B45220;
      }
      goto L_08B45010;
    }
L_08B45010:
    aot_gpr_31 = (0x08B45018u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45018u) goto L_08B45018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45018:
    aot_gpr_31 = (0x08B45020u);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 1013u, 0x08AB3F28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45020u) goto L_08B45020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45020:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_16 = (0u | 234u);
      if (branch_taken) {
          goto L_08B45094;
      }
      goto L_08B45028;
    }
L_08B45028:
    aot_gpr_31 = (0x08B45030u);
    aot_gpr_4 = (0u | 234u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45030u) goto L_08B45030;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45030:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45094;
      }
      goto L_08B45038;
    }
L_08B45038:
    aot_gpr_31 = (0x08B45040u);
    aot_gpr_4 = (0u | 9u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45040u) goto L_08B45040;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45040:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45094;
      }
      goto L_08B45048;
    }
L_08B45048:
    aot_gpr_31 = (0x08B45050u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45050u) goto L_08B45050;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45050:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5532)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5528)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B45064u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45064u) goto L_08B45064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45064:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B4508C;
      }
      goto L_08B45084;
    }
L_08B45084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B45220;
      }
      goto L_08B4508C;
    }
L_08B4508C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 207u);
      if (branch_taken) {
          goto L_08B45220;
      }
      goto L_08B45094;
    }
L_08B45094:
    aot_gpr_31 = (0x08B4509Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4509Cu) goto L_08B4509C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4509C:
    aot_gpr_31 = (0x08B450A4u);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 1021u, 0x08AB3F70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B450A4u) goto L_08B450A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B450A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_16 = (0u | 193u);
      if (branch_taken) {
          goto L_08B450CC;
      }
      goto L_08B450AC;
    }
L_08B450AC:
    aot_gpr_31 = (0x08B450B4u);
    aot_gpr_4 = (0u | 193u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B450B4u) goto L_08B450B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B450B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B450CC;
      }
      goto L_08B450BC;
    }
L_08B450BC:
    aot_gpr_31 = (0x08B450C4u);
    aot_gpr_4 = (0u | 10u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B450C4u) goto L_08B450C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B450C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B450EC;
      }
      goto L_08B450CC;
    }
L_08B450CC:
    aot_gpr_31 = (0x08B450D4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B450D4u) goto L_08B450D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B450D4:
    aot_gpr_31 = (0x08B450DCu);
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2288));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0171_entry, 171u, 1029u, 0x08AB3FB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B450DCu) goto L_08B450DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B450DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u | 246u);
      if (branch_taken) {
          goto L_08B450F4;
      }
      goto L_08B450E4;
    }
L_08B450E4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
      if (branch_taken) {
          goto L_08B45180;
      }
      goto L_08B450EC;
    }
L_08B450EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B45220;
      }
      goto L_08B450F4;
    }
L_08B450F4:
    aot_gpr_31 = (0x08B450FCu);
    aot_gpr_4 = (0u | 246u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B450FCu) goto L_08B450FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B450FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_16 = (0u | 218u);
      if (branch_taken) {
          goto L_08B4517C;
      }
      goto L_08B45104;
    }
L_08B45104:
    aot_gpr_31 = (0x08B4510Cu);
    aot_gpr_4 = (0u | 218u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4510Cu) goto L_08B4510C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4510C:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B45180;
    }
    goto L_08B45114;
L_08B45114:
    aot_gpr_31 = (0x08B4511Cu);
    aot_gpr_4 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4511Cu) goto L_08B4511C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4511C:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
        goto L_08B45180;
    }
    goto L_08B45124;
L_08B45124:
    aot_gpr_31 = (0x08B4512Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4512Cu) goto L_08B4512C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4512C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5516)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5512)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B45140u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45140u) goto L_08B45140;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45140:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B45164;
      }
      goto L_08B4515C;
    }
L_08B4515C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B45164;
      }
      goto L_08B45164;
    }
L_08B45164:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45174;
      }
      goto L_08B4516C;
    }
L_08B4516C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B45220;
      }
      goto L_08B45174;
    }
L_08B45174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08B45220;
      }
      goto L_08B4517C;
    }
L_08B4517C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    goto L_08B45180;
L_08B45180:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4521C;
      }
      goto L_08B451B4;
    }
L_08B451B4:
    aot_gpr_16 = (0u | 191u);
    aot_gpr_31 = (0x08B451C0u);
    aot_gpr_4 = (0u | 191u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B451C0u) goto L_08B451C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B451C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4521C;
      }
      goto L_08B451C8;
    }
L_08B451C8:
    aot_gpr_31 = (0x08B451D0u);
    aot_gpr_4 = (0u | 119u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B451D0u) goto L_08B451D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B451D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4521C;
      }
      goto L_08B451D8;
    }
L_08B451D8:
    aot_gpr_31 = (0x08B451E0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B451E0u) goto L_08B451E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B451E0:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5532)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5528)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B451F4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B451F4u) goto L_08B451F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B451F4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B4521C;
      }
      goto L_08B45214;
    }
L_08B45214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B45220;
      }
      goto L_08B4521C;
    }
L_08B4521C:
    ctx.gpr[2] = (0u | 207u);
    goto L_08B45220;
L_08B45220:
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
L_08B45234:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (2246u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30712));
    aot_gpr_16 = (aot_gpr_16 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_gpr_31 = (0x08B45260u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45260u) goto L_08B45260;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45260:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45278;
      }
      goto L_08B45268;
    }
L_08B45268:
    aot_gpr_31 = (0x08B45270u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45270u) goto L_08B45270;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45270:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45280;
      }
      goto L_08B45278;
    }
L_08B45278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B45284;
      }
      goto L_08B45280;
    }
L_08B45280:
    ctx.gpr[2] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    goto L_08B45284;
L_08B45284:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45294:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(18)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(26)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    aot_gpr_31 = (0x08B452C0u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B452C0u) goto L_08B452C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B452C0:
    aot_gpr_6 = (ctx.gpr[18] - ctx.gpr[20]);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_31 = (0x08B452D4u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B452D4u) goto L_08B452D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B452D4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (ctx.gpr[20] + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_6 < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[21]);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_5 = (aot_gpr_4 | 0u);
    ctx.gpr[2] = (0u | 9u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(18));
    goto L_08B45304;
L_08B45304:
    aot_gpr_6 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(2)));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4532C;
      }
      goto L_08B45314;
    }
L_08B45314:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[2]) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B45304;
      }
      goto L_08B45324;
    }
L_08B45324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4532C;
      }
      goto L_08B4532C;
    }
L_08B4532C:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[18] = aot_run_words[1];
      ctx.gpr[20] = aot_run_words[2];
      ctx.gpr[21] = aot_run_words[3];
      aot_gpr_31 = aot_run_words[4];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45348:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_31);
    aot_gpr_31 = (0x08B45368u);
    aot_gpr_4 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45368u) goto L_08B45368;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45368:
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_31 = (0x08B45380u);
    aot_fpr_20 = aot_fpr_12 - aot_fpr_13;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45380u) goto L_08B45380;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45380:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x08B45394u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[14];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45394u) goto L_08B45394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45394:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[15])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16457u << 16u);
      if (branch_taken) {
          goto L_08B453C0;
      }
      goto L_08B453AC;
    }
L_08B453AC:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (16457u << 16u);
    goto L_08B453C0;
L_08B453C0:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (17530u << 16u);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_31 = (0x08B453E0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 418u, 0x08B4ECC4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B453E0u) goto L_08B453E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B453E0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B453F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B454BC;
      }
      goto L_08B45414;
    }
L_08B45414:
    aot_gpr_31 = (0x08B4541Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4541Cu) goto L_08B4541C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4541C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2320)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B454B4;
      }
      goto L_08B4542C;
    }
L_08B4542C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B454AC;
      }
      goto L_08B45438;
    }
L_08B45438:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B454A4;
      }
      goto L_08B4544C;
    }
L_08B4544C:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[28] + static_cast<std::uint32_t>(5436), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5468)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4549C;
      }
      goto L_08B45488;
    }
L_08B45488:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4181)));
        goto L_08B454C4;
    }
    goto L_08B45494;
L_08B45494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455DC;
      }
      goto L_08B4549C;
    }
L_08B4549C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B454A4;
    }
L_08B454A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B454AC;
    }
L_08B454AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B454B4;
    }
L_08B454B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B454BC;
    }
L_08B454BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B454C4;
    }
L_08B454C4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455DC;
      }
      goto L_08B454CC;
    }
L_08B454CC:
    aot_gpr_16 = (2280u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(2352));
    aot_gpr_31 = (0x08B454DCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 191u, 0x08B210FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B454DCu) goto L_08B454DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B454DC:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B455C4;
      }
      goto L_08B454E8;
    }
L_08B454E8:
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B45500u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45500u) goto L_08B45500;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45500:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B45510u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 175u, 0x08B20EB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45510u) goto L_08B45510;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45510:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455BC;
      }
      goto L_08B4551C;
    }
L_08B4551C:
    aot_gpr_31 = (0x08B45524u);
    aot_gpr_4 = (0u | 227u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 573u, 0x08B42634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45524u) goto L_08B45524;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45524:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455BC;
      }
      goto L_08B45530;
    }
L_08B45530:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5488)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(30000));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455BC;
      }
      goto L_08B45548;
    }
L_08B45548:
    aot_gpr_4 = (2233u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-30864));
    aot_gpr_4 = (0u | 227u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x08B45560u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45560u) goto L_08B45560;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45560:
    aot_gpr_4 = (0u | 12u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B45570u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45570u) goto L_08B45570;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45570:
    aot_gpr_31 = (0x08B45578u);
    aot_gpr_4 = (0u | 227u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45578u) goto L_08B45578;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455BC;
      }
      goto L_08B45580;
    }
L_08B45580:
    aot_gpr_31 = (0x08B45588u);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45588u) goto L_08B45588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455BC;
      }
      goto L_08B45590;
    }
L_08B45590:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
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
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B455ACu);
    aot_gpr_4 = (0u | 227u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 508u, 0x08B4F89Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B455ACu) goto L_08B455AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B455AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455BC;
      }
      goto L_08B455B4;
    }
L_08B455B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5488), aot_gpr_4);
    goto L_08B455BC;
L_08B455BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B455DC;
      }
      goto L_08B455C4;
    }
L_08B455C4:
    aot_gpr_31 = (0x08B455CCu);
    aot_gpr_4 = (0u | 227u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B455CCu) goto L_08B455CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B455CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B455DC;
      }
      goto L_08B455D4;
    }
L_08B455D4:
    aot_gpr_31 = (0x08B455DCu);
    aot_gpr_4 = (0u | 12u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B455DCu) goto L_08B455DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B455DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B455E8;
    }
L_08B455E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4181)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B455F4;
    }
L_08B455F4:
    aot_gpr_16 = (2238u << 16u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(14864)));
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B456E8;
      }
      goto L_08B45608;
    }
L_08B45608:
    aot_gpr_4 = (16880u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(14864));
    aot_gpr_31 = (0x08B45624u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45624u) goto L_08B45624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45624:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B45634u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0114_entry, 114u, 688u, 0x089CFB70u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45634u) goto L_08B45634;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45634:
    aot_gpr_16 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B456E0;
      }
      goto L_08B45640;
    }
L_08B45640:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5492)));
    aot_gpr_5 = (0u | 35000u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B456E0;
      }
      goto L_08B4565C;
    }
L_08B4565C:
    aot_gpr_31 = (0x08B45664u);
    aot_gpr_4 = (0u | 194u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 573u, 0x08B42634u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45664u) goto L_08B45664;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45664:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B456E0;
      }
      goto L_08B45670;
    }
L_08B45670:
    aot_gpr_4 = (2233u << 16u);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(-30864));
    aot_gpr_4 = (0u | 194u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x08B45688u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45688u) goto L_08B45688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45688:
    aot_gpr_4 = (0u | 13u);
    aot_gpr_5 = (0u | 1u);
    aot_gpr_31 = (0x08B45698u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45698u) goto L_08B45698;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45698:
    aot_gpr_31 = (0x08B456A0u);
    aot_gpr_4 = (0u | 194u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B456A0u) goto L_08B456A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B456A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B456E0;
      }
      goto L_08B456A8;
    }
L_08B456A8:
    aot_gpr_31 = (0x08B456B0u);
    aot_gpr_4 = (0u | 13u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B456B0u) goto L_08B456B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B456B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B456E0;
      }
      goto L_08B456B8;
    }
L_08B456B8:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_31 = (0x08B456D0u);
    aot_gpr_4 = (0u | 194u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 508u, 0x08B4F89Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B456D0u) goto L_08B456D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B456D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B456E0;
      }
      goto L_08B456D8;
    }
L_08B456D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5492), aot_gpr_4);
    goto L_08B456E0;
L_08B456E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B456E8;
    }
L_08B456E8:
    aot_gpr_31 = (0x08B456F0u);
    aot_gpr_4 = (0u | 194u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B456F0u) goto L_08B456F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B456F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45700;
      }
      goto L_08B456F8;
    }
L_08B456F8:
    aot_gpr_31 = (0x08B45700u);
    aot_gpr_4 = (0u | 13u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 621u, 0x08AD3780u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45700u) goto L_08B45700;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45700:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45714:
    jump_target = aot_gpr_31;
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4571C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08B4574C;
      }
      goto L_08B45744;
    }
L_08B45744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08B457D8;
      }
      goto L_08B4574C;
    }
L_08B4574C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (2237u << 16u);
    aot_gpr_4 = (17036u << 16u);
    ctx.gpr[18] = (0u | 0u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    goto L_08B45768;
L_08B45768:
    aot_gpr_31 = (0x08B45770u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45770u) goto L_08B45770;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45770:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B457D4;
      }
      goto L_08B4577C;
    }
L_08B4577C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B457CC;
      }
      goto L_08B4578C;
    }
L_08B4578C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B45798u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45798u) goto L_08B45798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45798:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B457CC;
      }
      goto L_08B457A4;
    }
L_08B457A4:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x08B457BCu);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 38u, 0x08824354u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B457BCu) goto L_08B457BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B457BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B457CC;
      }
      goto L_08B457C4;
    }
L_08B457C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08B457D8;
      }
      goto L_08B457CC;
    }
L_08B457CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B45768;
      }
      goto L_08B457D4;
    }
L_08B457D4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08B457D8;
L_08B457D8:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B457F8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(900)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-497));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 | 64u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(72), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    aot_gpr_31 = (0x08B4582Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 550u, 0x08B02100u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4582Cu) goto L_08B4582C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4582C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B45838u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45838u) goto L_08B45838;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45838:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4585C;
      }
      goto L_08B45840;
    }
L_08B45840:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B4585Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4585Cu) goto L_08B4585C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4585C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45894;
      }
      goto L_08B45864;
    }
L_08B45864:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B45870u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45870u) goto L_08B45870;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45870:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45894;
      }
      goto L_08B45878;
    }
L_08B45878:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B45894u);
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45894u) goto L_08B45894;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45894:
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
L_08B458A8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-208));
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words); }
    aot_gpr_31 = (0x08B458D4u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 505u, 0x08B4223Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B458D4u) goto L_08B458D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B458D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D8C;
      }
      goto L_08B458DC;
    }
L_08B458DC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D8C;
      }
      goto L_08B458EC;
    }
L_08B458EC:
    aot_gpr_31 = (0x08B458F4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B458F4u) goto L_08B458F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B458F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D8C;
      }
      goto L_08B458FC;
    }
L_08B458FC:
    aot_gpr_31 = (0x08B45904u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 93u, 0x089704DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45904u) goto L_08B45904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45904:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D8C;
      }
      goto L_08B4590C;
    }
L_08B4590C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(615))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45964;
      }
      goto L_08B4591C;
    }
L_08B4591C:
    aot_gpr_31 = (0x08B45924u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0080_entry, 80u, 191u, 0x0894530Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45924u) goto L_08B45924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45924:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45964;
      }
      goto L_08B4592C;
    }
L_08B4592C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B45938u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45938u) goto L_08B45938;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45938:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4595C;
      }
      goto L_08B45940;
    }
L_08B45940:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B4595Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4595Cu) goto L_08B4595C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4595C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B45964;
    }
L_08B45964:
    aot_gpr_31 = (0x08B4596Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 48u, 0x08960450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4596Cu) goto L_08B4596C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4596C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_fpr_20 = aot_fpr_12 + ctx.fpr[14];
    aot_fpr_20 = std::sqrt(aot_fpr_20);
    aot_gpr_31 = (0x08B459A8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B459A8u) goto L_08B459A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B459A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B459B0;
    }
L_08B459B0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(245)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B459E0;
    }
L_08B459E0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(246)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B45A10;
    }
L_08B45A10:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B45A40;
    }
L_08B45A40:
    aot_gpr_31 = (0x08B45A48u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45A48u) goto L_08B45A48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45A48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B45A50;
    }
L_08B45A50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B45A60;
    }
L_08B45A60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 227u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B45A70;
    }
L_08B45A70:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (0u | 194u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B45A80;
    }
L_08B45A80:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(616))))));
    aot_gpr_4 = (aot_gpr_4 & 32u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45AA4;
      }
      goto L_08B45A90;
    }
L_08B45A90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(652)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45AC0;
      }
      goto L_08B45AA4;
    }
L_08B45AA4:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17184u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08B45AC8;
      }
      goto L_08B45AC0;
    }
L_08B45AC0:
    if (vcs::g_draw_distance_runtime_scales.vehicles > 1.0f) {
        aot_fpr_12 = 60.0f * vcs::g_draw_distance_runtime_scales.vehicles;
        goto L_08B45AC8;
    }
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B45AC8;
L_08B45AC8:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (48998u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[14])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B45AFC;
      }
      goto L_08B45AF4;
    }
L_08B45AF4:
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    goto L_08B45AFC;
L_08B45AFC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (aot_gpr_4 & 128u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45B18;
      }
      goto L_08B45B0C;
    }
L_08B45B0C:
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08B45B18;
L_08B45B18:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B45D8C;
      }
      goto L_08B45B28;
    }
L_08B45B28:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B45B40u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 454u, 0x0896DBC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45B40u) goto L_08B45B40;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45B40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D8C;
      }
      goto L_08B45B48;
    }
L_08B45B48:
    aot_gpr_31 = (0x08B45B50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45B50u) goto L_08B45B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45B50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45B68;
      }
      goto L_08B45B58;
    }
L_08B45B58:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(615))))));
    aot_gpr_4 = (aot_gpr_4 | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_08B45D84;
      }
      goto L_08B45B68;
    }
L_08B45B68:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B45D54;
      }
      goto L_08B45B74;
    }
L_08B45B74:
    ctx.gpr[18] = (0u | 0u);
    goto L_08B45B78;
L_08B45B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08B45B90;
    }
    goto L_08B45B84;
L_08B45B84:
    aot_gpr_31 = (0x08B45B8Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45B8Cu) goto L_08B45B8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45B8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08B45B90;
L_08B45B90:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_5 = (aot_gpr_5 >> 30u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 2u));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D3C;
      }
      goto L_08B45BBC;
    }
L_08B45BBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
        goto L_08B45BD4;
    }
    goto L_08B45BC8;
L_08B45BC8:
    aot_gpr_31 = (0x08B45BD0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 459u, 0x08B65DE8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45BD0u) goto L_08B45BD0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45BD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5872)));
    goto L_08B45BD4;
L_08B45BD4:
    aot_gpr_31 = (0x08B45BDCu);
    aot_gpr_5 = (ctx.gpr[18] & 255u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0147_entry, 147u, 561u, 0x08A53098u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45BDCu) goto L_08B45BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45BDC:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (0x08B45BF4u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45BF4u) goto L_08B45BF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45BF4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_31 = (0x08B45C04u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45C04u) goto L_08B45C04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45C04:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B45C14;
      }
      goto L_08B45C0C;
    }
L_08B45C0C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45C1C;
      }
      goto L_08B45C14;
    }
L_08B45C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D34;
      }
      goto L_08B45C1C;
    }
L_08B45C1C:
    aot_gpr_6 = (17096u << 16u);
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_31 = (0x08B45C30u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 59u, 0x08824560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45C30u) goto L_08B45C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45C30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D34;
      }
      goto L_08B45C38;
    }
L_08B45C38:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_4 = (aot_gpr_16 | 0u);
      if (branch_taken) {
          goto L_08B45C88;
      }
      goto L_08B45C54;
    }
L_08B45C54:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    goto L_08B45C58;
L_08B45C58:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(12));
        goto L_08B45C7C;
    }
    goto L_08B45C6C;
L_08B45C6C:
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08B45C80;
      }
      goto L_08B45C7C;
    }
L_08B45C7C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    goto L_08B45C80;
L_08B45C80:
    if (aot_gpr_6 != 0u) {
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
        goto L_08B45C58;
    }
    goto L_08B45C88;
L_08B45C88:
    aot_gpr_6 = (2237u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-28736));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(104)));
    if (aot_gpr_5 == aot_gpr_6) {
    aot_gpr_4 = (2237u << 16u);
        goto L_08B45CB8;
    }
    goto L_08B45C9C;
L_08B45C9C:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_5);
        goto L_08B45CC4;
    }
    goto L_08B45CB4;
L_08B45CB4:
    aot_gpr_4 = (2237u << 16u);
    goto L_08B45CB8;
L_08B45CB8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), aot_gpr_5);
    goto L_08B45CC4;
L_08B45CC4:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(104)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(152)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_gpr_4 = (aot_gpr_6 ^ aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
        goto L_08B45D08;
    }
    goto L_08B45D00;
L_08B45D00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B45D0C;
      }
      goto L_08B45D08;
    }
L_08B45D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    goto L_08B45D0C;
L_08B45D0C:
    aot_gpr_6 = (aot_gpr_4 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_31 = (0x08B45D24u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 282u, 0x08ADCFF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45D24u) goto L_08B45D24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45D24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D34;
      }
      goto L_08B45D2C;
    }
L_08B45D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B45D3C;
      }
      goto L_08B45D34;
    }
L_08B45D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B45B78;
      }
      goto L_08B45D3C;
    }
L_08B45D3C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D84;
      }
      goto L_08B45D44;
    }
L_08B45D44:
    aot_gpr_31 = (0x08B45D4Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B457F8;
L_08B45D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D84;
      }
      goto L_08B45D54;
    }
L_08B45D54:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B45D60u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45D60u) goto L_08B45D60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45D60:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45D84;
      }
      goto L_08B45D68;
    }
L_08B45D68:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B45D84u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45D84u) goto L_08B45D84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B45D8C;
    }
L_08B45D8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 32u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B45DD0;
      }
      goto L_08B45DA0;
    }
L_08B45DA0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 48u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45DB4;
    }
L_08B45DB4:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(532))))));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45DD0;
      }
      goto L_08B45DC0;
    }
L_08B45DC0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(532))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45DD0;
    }
L_08B45DD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(508)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(5001) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45DE8;
    }
L_08B45DE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(652)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45DFC;
    }
L_08B45DFC:
    aot_gpr_31 = (0x08B45E04u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45E04u) goto L_08B45E04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45E04:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45E0C;
    }
L_08B45E0C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (16816u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45E50;
    }
L_08B45E50:
    aot_gpr_31 = (0x08B45E58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 505u, 0x08B4223Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45E58u) goto L_08B45E58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45E58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45E60;
    }
L_08B45E60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(613))))));
    aot_gpr_4 = (aot_gpr_4 & 8u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45E70;
    }
L_08B45E70:
    aot_gpr_31 = (0x08B45E78u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45E78u) goto L_08B45E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45E78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45E80;
    }
L_08B45E80:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B45E8Cu);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 573u, 0x08A0F448u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45E8Cu) goto L_08B45E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45E8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45E94;
    }
L_08B45E94:
    aot_gpr_31 = (0x08B45E9Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0130_entry, 130u, 561u, 0x08A0F37Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45E9Cu) goto L_08B45E9C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45E9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45EA4;
    }
L_08B45EA4:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B45EBCu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 454u, 0x0896DBC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45EBCu) goto L_08B45EBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45EBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45EC4;
    }
L_08B45EC4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45F68;
      }
      goto L_08B45ED0;
    }
L_08B45ED0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08B45ED8;
L_08B45ED8:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08B45EE4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45EE4u) goto L_08B45EE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45EE4:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45F48;
      }
      goto L_08B45EF0;
    }
L_08B45EF0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_gpr_4 = (2237u << 16u);
      if (branch_taken) {
          goto L_08B45F40;
      }
      goto L_08B45EF8;
    }
L_08B45EF8:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(100)));
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B45F40;
      }
      goto L_08B45F0C;
    }
L_08B45F0C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B45F1Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45F1Cu) goto L_08B45F1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45F1C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45F40;
      }
      goto L_08B45F28;
    }
L_08B45F28:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_31 = (0x08B45F34u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 59u, 0x08824560u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45F34u) goto L_08B45F34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45F40;
      }
      goto L_08B45F3C;
    }
L_08B45F3C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B45F40;
L_08B45F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B45ED8;
      }
      goto L_08B45F48;
    }
L_08B45F48:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B45F60;
      }
      goto L_08B45F50;
    }
L_08B45F50:
    aot_gpr_31 = (0x08B45F58u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_08B457F8;
L_08B45F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B45F60;
    }
L_08B45F60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45FA0;
      }
      goto L_08B45F68;
    }
L_08B45F68:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B45F74u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45F74u) goto L_08B45F74;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45F74:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B45F98;
      }
      goto L_08B45F7C;
    }
L_08B45F7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B45F98u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B45F98u) goto L_08B45F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B45F98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B45FA0;
    }
L_08B45FA0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4608C;
      }
      goto L_08B45FAC;
    }
L_08B45FAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(76)));
    aot_gpr_6 = (16320u << 16u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 >> 22u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B45FD0;
    }
L_08B45FD0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B45FE4;
    }
L_08B45FE4:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
    aot_gpr_4 = (16937u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B46084;
      }
      goto L_08B46024;
    }
L_08B46024:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
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
    aot_gpr_4 = (14545u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 46871u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B46084;
      }
      goto L_08B46054;
    }
L_08B46054:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B46060u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46060u) goto L_08B46060;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46060:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46084;
      }
      goto L_08B46068;
    }
L_08B46068:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B46084u);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46084u) goto L_08B46084;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B4608C;
    }
L_08B4608C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (0u | 80u);
    aot_gpr_4 = (aot_gpr_4 & 496u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B460A0;
    }
L_08B460A0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B460AC;
    }
L_08B460AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(660)));
    aot_gpr_5 = (0u | 60000u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B460C8;
    }
L_08B460C8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(652)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B460DC;
    }
L_08B460DC:
    aot_gpr_31 = (0x08B460E4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B460E4u) goto L_08B460E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B460E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B460EC;
    }
L_08B460EC:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
    aot_gpr_4 = (16937u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B4612C;
    }
L_08B4612C:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B46144u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0090_entry, 90u, 454u, 0x0896DBC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46144u) goto L_08B46144;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46144:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B4614C;
    }
L_08B4614C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B46158u);
    aot_gpr_5 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46158u) goto L_08B46158;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46158:
    { const bool branch_taken = aot_gpr_16 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4617C;
      }
      goto L_08B46160;
    }
L_08B46160:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(92)));
    aot_gpr_5 = (0u | 3u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    aot_gpr_31 = (0x08B4617Cu);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_6);
    ctx.pc = jump_target;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_call(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4617Cu) goto L_08B4617C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4617C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46184;
      }
      goto L_08B46184;
    }
L_08B46184:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      ctx.gpr[21] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B461AC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(534))))));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (aot_gpr_4 < static_cast<std::uint32_t>(10) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08B464DC;
      }
      goto L_08B461E0;
    }
L_08B461E0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B461F8:
    aot_gpr_4 = (15948u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46238;
      }
      goto L_08B46224;
    }
L_08B46224:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(504), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(508), aot_gpr_4);
    goto L_08B46238;
L_08B46238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B46240;
    }
L_08B46240:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B46258u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 120u, 0x08B4CD78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46258u) goto L_08B46258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46258:
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B462B4;
      }
      goto L_08B462A0;
    }
L_08B462A0:
    aot_gpr_4 = (16128u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B462C4;
      }
      goto L_08B462B4;
    }
L_08B462B4:
    aot_gpr_4 = (48896u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B462C4;
L_08B462C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46304;
      }
      goto L_08B462D8;
    }
L_08B462D8:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(612)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B46304;
      }
      goto L_08B462F0;
    }
L_08B462F0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(532))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B46304;
      }
      goto L_08B462FC;
    }
L_08B462FC:
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B46304;
L_08B46304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B4630C;
    }
L_08B4630C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4633C;
      }
      goto L_08B46334;
    }
L_08B46334:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B4633C;
L_08B4633C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B46344;
    }
L_08B46344:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46374;
      }
      goto L_08B4636C;
    }
L_08B4636C:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B46374;
L_08B46374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B4637C;
    }
L_08B4637C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B463A0;
      }
      goto L_08B46398;
    }
L_08B46398:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B463A0;
L_08B463A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B463A8;
    }
L_08B463A8:
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B463D8;
      }
      goto L_08B463D0;
    }
L_08B463D0:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B463D8;
L_08B463D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B463E0;
    }
L_08B463E0:
    aot_gpr_4 = (49024u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46418;
      }
      goto L_08B46410;
    }
L_08B46410:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B46418;
L_08B46418:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B46420;
    }
L_08B46420:
    aot_gpr_4 = (16128u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4644C;
      }
      goto L_08B46444;
    }
L_08B46444:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B4644C;
L_08B4644C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B46454;
    }
L_08B46454:
    aot_gpr_4 = (48665u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(534))))));
    aot_gpr_5 = (0u | 10u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B46484;
      }
      goto L_08B46474;
    }
L_08B46474:
    aot_gpr_4 = (15897u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B46484;
L_08B46484:
    aot_gpr_4 = (14979u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1000));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464B8;
      }
      goto L_08B464AC;
    }
L_08B464AC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08B464B8;
L_08B464B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(512)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464D4;
      }
      goto L_08B464CC;
    }
L_08B464CC:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B464D4;
L_08B464D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B464F4;
      }
      goto L_08B464DC;
    }
L_08B464DC:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x08B464F4u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 120u, 0x08B4CD78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B464F4u) goto L_08B464F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B464F4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08B46508u);
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(12)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46508u) goto L_08B46508;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46508:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4652C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (16688u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (17056u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_20 = aot_fpr_22 - ctx.fpr[26];
    ctx.fpr[15] = aot_fpr_20 / aot_fpr_12;
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(538))))));
    aot_gpr_5 = (aot_gpr_5 & 2u);
    aot_gpr_5 = (0u < aot_gpr_5 ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(28), aot_gpr_5);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_6 = (16880u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_22 = aot_fpr_22 + ctx.fpr[26];
    ctx.fpr[24] = ctx.fpr[14] - ctx.fpr[26];
    ctx.fpr[15] = ctx.fpr[15] + aot_fpr_13;
    ctx.fpr[26] = ctx.fpr[14] + ctx.fpr[26];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    aot_gpr_5 = (16840u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[7] = (0u | 49u);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_gpr_6 = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const std::uint32_t aot_run_words[3]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_run_words); }
    { const std::uint32_t aot_run_words[6]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08B465DC;
    }
    goto L_08B465DC;
L_08B465DC:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B465E8;
    }
    goto L_08B465E8;
L_08B465E8:
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[30] = (aot_gpr_5 | 0u);
        goto L_08B465FC;
    }
    goto L_08B465FC;
L_08B465FC:
    ctx.fpr[15] = ctx.fpr[24] / aot_fpr_12;
    aot_gpr_6 = (0u | 49u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08B4661C;
    }
    goto L_08B4661C;
L_08B4661C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B46628;
    }
    goto L_08B46628;
L_08B46628:
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[21] = (aot_gpr_5 | 0u);
        goto L_08B4663C;
    }
    goto L_08B4663C;
L_08B4663C:
    ctx.fpr[15] = aot_fpr_22 / aot_fpr_12;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_13 = ctx.fpr[15] + aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08B4665C;
    }
    goto L_08B4665C;
L_08B4665C:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B46668;
    }
    goto L_08B46668;
L_08B46668:
    ctx.gpr[20] = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 49 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[20] = (aot_gpr_5 | 0u);
        goto L_08B46678;
    }
    goto L_08B46678;
L_08B46678:
    aot_fpr_12 = ctx.fpr[26] / aot_fpr_12;
    aot_gpr_6 = (0u | 49u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[14];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 49u);
        goto L_08B46698;
    }
    goto L_08B46698;
L_08B46698:
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    aot_gpr_5 = (0u | 0u);
        goto L_08B466A4;
    }
    goto L_08B466A4;
L_08B466A4:
    ctx.gpr[23] = (0u | 49u);
    aot_gpr_6 = (static_cast<std::int32_t>(aot_gpr_5) < 49 ? 1u : 0u);
    if (aot_gpr_6 != 0u) {
    ctx.gpr[23] = (aot_gpr_5 | 0u);
        goto L_08B466B4;
    }
    goto L_08B466B4;
L_08B466B4:
    aot_gpr_5 = (0u | 65535u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B466D8;
      }
      goto L_08B466C4;
    }
L_08B466C4:
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08B466F4;
      }
      goto L_08B466D8;
    }
L_08B466D8:
    aot_gpr_31 = (0x08B466E0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B466E0u) goto L_08B466E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B466E0:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    goto L_08B466F4;
L_08B466F4:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08B467BC;
      }
      goto L_08B46704;
    }
L_08B46704:
    aot_gpr_4 = (ctx.gpr[21] << 4u);
    ctx.gpr[21] = (ctx.gpr[21] + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + ctx.gpr[21]);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(24));
    ctx.gpr[21] = (aot_gpr_4 + ctx.gpr[21]);
    goto L_08B46718;
L_08B46718:
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (ctx.gpr[30] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B467AC;
      }
      goto L_08B46728;
    }
L_08B46728:
    aot_gpr_16 = (aot_gpr_4 << 6u);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_16 = (aot_gpr_16 - aot_gpr_4);
    goto L_08B46734;
L_08B46734:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(535))))));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.gpr[21] = (aot_gpr_6 + aot_gpr_16);
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B4676Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 285u, 0x08B49B24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4676Cu) goto L_08B4676C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4676C:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_31 = (0x08B46798u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 285u, 0x08B49B24u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46798u) goto L_08B46798;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46798:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(56));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B46734;
      }
      goto L_08B467AC;
    }
L_08B467AC:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(50));
      if (branch_taken) {
          goto L_08B46718;
      }
      goto L_08B467BC;
    }
L_08B467BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(28)));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(614))))));
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_gpr_5 = (aot_gpr_5 | 32u);
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[19] + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-3));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_5 = (aot_gpr_6 & aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 1u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[19] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(36), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_fpr_22 = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46834:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_gpr_4 + static_cast<std::uint32_t>(416));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[8] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[10] = (ctx.gpr[8] << 3u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[7] = (ctx.gpr[7] & 3072u);
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    ctx.gpr[20] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_08B468CC;
      }
      goto L_08B468B4;
    }
L_08B468B4:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B468C4u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 28u, 0x08B4C254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B468C4u) goto L_08B468C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B468C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B4698C;
      }
      goto L_08B468CC;
    }
L_08B468CC:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[17] + static_cast<std::uint32_t>(533))))));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08B4697C;
      }
      goto L_08B468E0;
    }
L_08B468E0:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2233u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-30768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B468F8:
    aot_gpr_31 = (0x08B46900u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46900u) goto L_08B46900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46900:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x08B4690Cu);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4690Cu) goto L_08B4690C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4690C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B46924u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 616u, 0x08B4BAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46924u) goto L_08B46924;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4698C;
      }
      goto L_08B4692C;
    }
L_08B4692C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4695C;
      }
      goto L_08B46938;
    }
L_08B46938:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(440)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B4695Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 616u, 0x08B4BAF4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4695Cu) goto L_08B4695C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4695C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4698C;
      }
      goto L_08B46964;
    }
L_08B46964:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B46974u);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0210_entry, 210u, 28u, 0x08B4C254u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46974u) goto L_08B46974;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08B4698C;
      }
      goto L_08B4697C;
    }
L_08B4697C:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    aot_gpr_31 = (0x08B4698Cu);
    aot_gpr_6 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 512u, 0x08B4B0E0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4698Cu) goto L_08B4698C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4698C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) > 0;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B469B8;
      }
      goto L_08B46994;
    }
L_08B46994:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_16) < 0;
    // nop
      if (branch_taken) {
          goto L_08B46A6C;
      }
      goto L_08B4699C;
    }
L_08B4699C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr_5 = (aot_gpr_29 | 0u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B469B0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 135u, 0x089DCBE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B469B0u) goto L_08B469B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B469B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46A6C;
      }
      goto L_08B469B8;
    }
L_08B469B8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B46A14;
      }
      goto L_08B469C0;
    }
L_08B469C0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46A6C;
      }
      goto L_08B469C8;
    }
L_08B469C8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(434));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_31 = (0x08B469ECu);
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(384));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 188u, 0x089DD2B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B469ECu) goto L_08B469EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B469EC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(500), aot_gpr_4);
      if (branch_taken) {
          goto L_08B46A6C;
      }
      goto L_08B46A14;
    }
L_08B46A14:
    aot_gpr_16 = (ctx.gpr[17] + static_cast<std::uint32_t>(384));
    aot_gpr_31 = (0x08B46A20u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 134u, 0x089DCB78u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46A20u) goto L_08B46A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46A20:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(0))))));
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2))))));
    aot_gpr_5 = (ctx.gpr[17] + static_cast<std::uint32_t>(434));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_4));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(aot_gpr_6));
    aot_mem.aot_direct_store16(aot_gpr_5 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_gpr_31 = (0x08B46A44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0118_entry, 118u, 188u, 0x089DD2B0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46A44u) goto L_08B46A44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46A44:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(500), aot_gpr_4);
      if (branch_taken) {
          goto L_08B46A6C;
      }
      goto L_08B46A6C;
    }
L_08B46A6C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      ctx.gpr[20] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46A94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1152));
    { const std::uint32_t aot_run_words[13]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_22), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1088), aot_run_words); }
    aot_gpr_16 = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(336), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(344), static_cast<std::uint16_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(347), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 5u);
    ctx.gpr[17] = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    ctx.gpr[17] = (ctx.gpr[17] + aot_gpr_5);
    aot_gpr_31 = (0x08B46B20u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 48u, 0x08960450u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46B20u) goto L_08B46B20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46B20:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08B46B34u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 22u, 0x08960240u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46B34u) goto L_08B46B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46B34:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(228));
    aot_gpr_31 = (0x08B46B50u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46B50u) goto L_08B46B50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46B50:
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(228)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store16(ctx.gpr[17] + static_cast<std::uint32_t>(300), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
        goto L_08B46DFC;
    }
    goto L_08B46B7C;
L_08B46B7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4210)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B46BC0;
      }
      goto L_08B46B8C;
    }
L_08B46B8C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08B46B98u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 352u, 0x08ADD4B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46B98u) goto L_08B46B98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46B98:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46BB8;
      }
      goto L_08B46BA4;
    }
L_08B46BA4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5508)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46BC8;
      }
      goto L_08B46BB0;
    }
L_08B46BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46C20;
      }
      goto L_08B46BB8;
    }
L_08B46BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46BC0;
    }
L_08B46BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46BC8;
    }
L_08B46BC8:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_31 = (0x08B46BD8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 413u, 0x08ADD854u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46BD8u) goto L_08B46BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46BD8:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08B46BE4u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46BE4u) goto L_08B46BE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46BE4:
    aot_gpr_4 = (0u | 20u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (ctx.lo);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46C18;
      }
      goto L_08B46BFC;
    }
L_08B46BFC:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B46C44;
      }
      goto L_08B46C10;
    }
L_08B46C10:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08B46C70;
      }
      goto L_08B46C18;
    }
L_08B46C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46C20;
    }
L_08B46C20:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08B46C2Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 413u, 0x08ADD854u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46C2Cu) goto L_08B46C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46C2C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5504)));
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B46BFC;
      }
      goto L_08B46C3C;
    }
L_08B46C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46C44;
    }
L_08B46C44:
    aot_gpr_5 = (2237u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-28736));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_5) < 0 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 ^ 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 & 255u);
      if (branch_taken) {
          goto L_08B46C70;
      }
      goto L_08B46C68;
    }
L_08B46C68:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    goto L_08B46C70;
L_08B46C70:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46CA4;
      }
      goto L_08B46C78;
    }
L_08B46C78:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08B46C84u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 381u, 0x08ADD6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46C84u) goto L_08B46C84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46C84:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5500)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5460)));
    aot_gpr_4 = (ctx.gpr[2] - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46CAC;
      }
      goto L_08B46C9C;
    }
L_08B46C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46CA4;
    }
L_08B46CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46CAC;
    }
L_08B46CAC:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08B46CB4;
L_08B46CB4:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08B46CC0u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 348u, 0x08ADD468u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46CC0u) goto L_08B46CC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46CC0:
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load16(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
        goto L_08B46D68;
    }
    goto L_08B46CCC;
L_08B46CCC:
    aot_gpr_4 = (2237u << 16u);
    ctx.gpr[22] = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B46CE0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46CE0u) goto L_08B46CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46CE0:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_31 = (0x08B46CF0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 12u, 0x08ADC0F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46CF0u) goto L_08B46CF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46CF0:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B46D00;
      }
      goto L_08B46CF8;
    }
L_08B46CF8:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B46D08;
      }
      goto L_08B46D00;
    }
L_08B46D00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46D60;
      }
      goto L_08B46D08;
    }
L_08B46D08:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B46D18u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 111u, 0x089609B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46D18u) goto L_08B46D18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46D18:
    aot_gpr_31 = (0x08B46D20u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0008_entry, 8u, 19u, 0x08824204u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46D20u) goto L_08B46D20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46D20:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5288)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B46D60;
      }
      goto L_08B46D5C;
    }
L_08B46D5C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08B46D60;
L_08B46D60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B46CB4;
      }
      goto L_08B46D68;
    }
L_08B46D68:
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[18]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5432)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4260)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B46DEC;
      }
      goto L_08B46DA8;
    }
L_08B46DA8:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[28] + static_cast<std::uint32_t>(5436), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5468)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B46DF4;
      }
      goto L_08B46DE4;
    }
L_08B46DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46DEC;
    }
L_08B46DEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46DF4;
    }
L_08B46DF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46E6C;
      }
      goto L_08B46DFC;
    }
L_08B46DFC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5432)));
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(4260)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B46EB0;
      }
      goto L_08B46E30;
    }
L_08B46E30:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(ctx.gpr[28] + static_cast<std::uint32_t>(5436), aot_run_words);
      aot_gpr_4 = aot_run_words[0];
      aot_gpr_5 = aot_run_words[1];
      aot_gpr_6 = aot_run_words[2];
    }
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5448)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5468)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_6) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46EA8;
      }
      goto L_08B46E6C;
    }
L_08B46E6C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_31 = (0x08B46E78u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25856));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 685u, 0x08ABF2D8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46E78u) goto L_08B46E78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46E78:
    aot_gpr_4 = (3u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8192));
    aot_gpr_4 = (ctx.gpr[2] < aot_gpr_4 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B46EA0;
      }
      goto L_08B46E8C;
    }
L_08B46E8C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B46EB8;
      }
      goto L_08B46E98;
    }
L_08B46E98:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
      if (branch_taken) {
          goto L_08B46EEC;
      }
      goto L_08B46EA0;
    }
L_08B46EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46EA8;
    }
L_08B46EA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46EB0;
    }
L_08B46EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46EB8;
    }
L_08B46EB8:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(228));
    aot_gpr_31 = (0x08B46EC4u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 520u, 0x08B4237Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46EC4u) goto L_08B46EC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46EC4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B46EE4;
      }
      goto L_08B46ED4;
    }
L_08B46ED4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B47154;
      }
      goto L_08B46EDC;
    }
L_08B46EDC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B4716C;
      }
      goto L_08B46EE4;
    }
L_08B46EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B46EEC;
    }
L_08B46EEC:
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B46F24;
    }
L_08B46F24:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5440)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2314)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B46F60;
    }
L_08B46F60:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2312)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2313)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B46F9C;
    }
L_08B46F9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B46FA8;
    }
L_08B46FA8:
    aot_gpr_31 = (0x08B46FB0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B46FB0u) goto L_08B46FB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B46FB0:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_5 = (0u | 31u);
    { const std::int32_t dividend = static_cast<std::int32_t>(aot_gpr_4); const std::int32_t divisor = static_cast<std::int32_t>(aot_gpr_5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
    aot_gpr_6 = (aot_gpr_4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    aot_gpr_4 = (ctx.hi);
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B47000;
    }
L_08B47000:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08B4703C;
      }
      goto L_08B4700C;
    }
L_08B4700C:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08B47044;
      }
      goto L_08B47014;
    }
L_08B47014:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08B4704C;
      }
      goto L_08B4701C;
    }
L_08B4701C:
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08B47054;
      }
      goto L_08B47024;
    }
L_08B47024:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 16 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47034;
      }
      goto L_08B47030;
    }
L_08B47030:
    ctx.gpr[20] = (0u | 1u);
    goto L_08B47034;
L_08B47034:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B4703C;
    }
L_08B4703C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B47044;
    }
L_08B47044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B4704C;
    }
L_08B4704C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08B47058;
      }
      goto L_08B47054;
    }
L_08B47054:
    ctx.gpr[20] = (0u | 1u);
    goto L_08B47058;
L_08B47058:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47090;
      }
      goto L_08B47060;
    }
L_08B47060:
    aot_gpr_31 = (0x08B47068u);
    // nop
    goto L_08B44F70;
L_08B47068:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 191u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B47084;
      }
      goto L_08B47078;
    }
L_08B47078:
    aot_gpr_4 = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
      if (branch_taken) {
          goto L_08B46ED4;
      }
      goto L_08B47084;
    }
L_08B47084:
    aot_gpr_4 = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
      if (branch_taken) {
          goto L_08B46ED4;
      }
      goto L_08B47090;
    }
L_08B47090:
    ctx.gpr[18] = (0u | 0u);
    goto L_08B47094;
L_08B47094:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(228));
    aot_gpr_31 = (0x08B470A0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 520u, 0x08B4237Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B470A0u) goto L_08B470A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B470A0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B470C8;
      }
      goto L_08B470B0;
    }
L_08B470B0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B470DC;
      }
      goto L_08B470C0;
    }
L_08B470C0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B470D0;
      }
      goto L_08B470C8;
    }
L_08B470C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B470D0;
    }
L_08B470D0:
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B4711C;
      }
      goto L_08B470DC;
    }
L_08B470DC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4711C;
      }
      goto L_08B47114;
    }
L_08B47114:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47094;
      }
      goto L_08B4711C;
    }
L_08B4711C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B4714C;
      }
      goto L_08B4712C;
    }
L_08B4712C:
    aot_gpr_31 = (0x08B47134u);
    // nop
    goto L_08B44F70;
L_08B47134:
    aot_gpr_4 = (0u | 191u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B4714C;
      }
      goto L_08B47140;
    }
L_08B47140:
    aot_gpr_4 = (0u | 24u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    ctx.gpr[17] = (0u | 191u);
    goto L_08B4714C;
L_08B4714C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B46ED4;
      }
      goto L_08B47154;
    }
L_08B47154:
    aot_gpr_31 = (0x08B4715Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 614u, 0x08AD3708u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4715Cu) goto L_08B4715C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4715C:
    aot_gpr_4 = (ctx.gpr[2] & 2u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B471C0;
      }
      goto L_08B47168;
    }
L_08B47168:
    aot_gpr_4 = (2236u << 16u);
    goto L_08B4716C;
L_08B4716C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (48998u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B471C8;
      }
      goto L_08B47194;
    }
L_08B47194:
    aot_gpr_4 = (16180u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_16 = (0u | 1u);
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    aot_gpr_5 = (16988u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_16 | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08B47468;
      }
      goto L_08B471C0;
    }
L_08B471C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B471C8;
    }
L_08B471C8:
    aot_gpr_31 = (0x08B471D0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B471D0u) goto L_08B471D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B471D0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B473F4;
      }
      goto L_08B471DC;
    }
L_08B471DC:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(320)));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(324)));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_22; const float ft = aot_fpr_22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_4 = (16076u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[14])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B472B8;
      }
      goto L_08B47210;
    }
L_08B47210:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_fpr_20 = aot_fpr_20 / aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    aot_fpr_22 = aot_fpr_22 / aot_fpr_12;
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4725C;
      }
      goto L_08B4722C;
    }
L_08B4722C:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B47234;
    }
L_08B47234:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17116u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (16217u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B4725C;
    }
L_08B4725C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 3 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4728C;
      }
      goto L_08B47268;
    }
L_08B47268:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B47270;
    }
L_08B47270:
    aot_gpr_4 = (16180u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B4728C;
    }
L_08B4728C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17116u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (16180u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B472B8;
    }
L_08B472B8:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08B47378;
      }
      goto L_08B472D4;
    }
L_08B472D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_fpr_20 = aot_fpr_20 / aot_fpr_12;
    aot_gpr_4 = (aot_gpr_4 & 3u);
    aot_fpr_22 = aot_fpr_22 / aot_fpr_12;
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4731C;
      }
      goto L_08B472EC;
    }
L_08B472EC:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B472F4;
    }
L_08B472F4:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17116u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (16217u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B4731C;
    }
L_08B4731C:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4734C;
      }
      goto L_08B47328;
    }
L_08B47328:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B47330;
    }
L_08B47330:
    aot_gpr_4 = (16180u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B4734C;
    }
L_08B4734C:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17116u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (16180u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B47378;
    }
L_08B47378:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08B473C8;
      }
      goto L_08B47398;
    }
L_08B47398:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B473A0;
    }
L_08B473A0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17116u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (16180u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B473C8;
    }
L_08B473C8:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B473EC;
      }
      goto L_08B473D4;
    }
L_08B473D4:
    aot_gpr_4 = (16180u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (16928u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    goto L_08B473EC;
L_08B473EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47468;
      }
      goto L_08B473F4;
    }
L_08B473F4:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(92)));
    aot_fpr_22 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(96)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) > 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08B47444;
      }
      goto L_08B47414;
    }
L_08B47414:
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) < 0;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08B47468;
      }
      goto L_08B4741C;
    }
L_08B4741C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1952)));
    aot_gpr_4 = (17116u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 1u);
    aot_gpr_4 = (16180u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08B47468;
      }
      goto L_08B47444;
    }
L_08B47444:
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47468;
      }
      goto L_08B47450;
    }
L_08B47450:
    aot_gpr_4 = (16180u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 65012u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (16928u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    goto L_08B47468;
L_08B47468:
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_31 = (0x08B47478u);
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47478u) goto L_08B47478;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47478:
    ctx.gpr[7] = (2236u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[7] = (17116u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 2u);
    aot_gpr_31 = (0x08B474B4u);
    ctx.gpr[11] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 650u, 0x08976FBCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B474B4u) goto L_08B474B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B474B4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B47500;
      }
      goto L_08B474C4;
    }
L_08B474C4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_6 = (aot_gpr_4 << 3u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    aot_gpr_4 = (0u < aot_gpr_4 ? 1u : 0u);
    ctx.gpr[7] = (0u | 13u);
    { const bool branch_taken = aot_gpr_6 == ctx.gpr[7];
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_08B47514;
      }
      goto L_08B474F8;
    }
L_08B474F8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B47508;
      }
      goto L_08B47500;
    }
L_08B47500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47508;
    }
L_08B47508:
    ctx.gpr[7] = (0u | 24u);
    { const bool branch_taken = aot_gpr_6 != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08B47550;
      }
      goto L_08B47514;
    }
L_08B47514:
    aot_gpr_6 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    ctx.gpr[7] = (2238u << 16u);
    ctx.gpr[8] = (aot_gpr_6 + aot_gpr_6);
    ctx.gpr[9] = (aot_gpr_6 << 8u);
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 << 5u);
    aot_gpr_6 = (ctx.gpr[9] + aot_gpr_6);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-6992));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2288));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B47550;
      }
      goto L_08B4754C;
    }
L_08B4754C:
    aot_gpr_5 = (0u | 1u);
    goto L_08B47550;
L_08B47550:
    ctx.gpr[11] = (aot_gpr_4 | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_22));
    ctx.gpr[10] = (aot_gpr_5 & 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(304)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(308)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(40));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_31 = (0x08B4758Cu);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0093_entry, 93u, 327u, 0x0897A644u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4758Cu) goto L_08B4758C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4758C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47594;
    }
L_08B47594:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_6 << 3u);
    ctx.gpr[7] = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8))))));
    aot_gpr_6 = (aot_gpr_6 + ctx.gpr[7]);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 & 12288u);
    ctx.gpr[8] = (2235u << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_5 = (aot_gpr_5 >> 12u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9404));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_4 & 12288u);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_6 >> 12u);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    ctx.gpr[21] = (aot_mem.aot_direct_load8(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (aot_gpr_5 != 0u) {
    ctx.gpr[21] = (aot_gpr_4 | 0u);
        goto L_08B47604;
    }
    goto L_08B47604;
L_08B47604:
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    aot_gpr_31 = (0x08B47610u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    goto L_08B4571C;
L_08B47610:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4763C;
      }
      goto L_08B47618;
    }
L_08B47618:
    aot_gpr_31 = (0x08B47620u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47620u) goto L_08B47620;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47620:
    aot_gpr_4 = (ctx.gpr[2] & 65535u);
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_gpr_4 = (ctx.gpr[21] < aot_gpr_4 ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B47644;
    }
    goto L_08B47634;
L_08B47634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B4763C;
    }
L_08B4763C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47644;
    }
L_08B47644:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 256u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B476C0;
      }
      goto L_08B4766C;
    }
L_08B4766C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5481)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47690;
      }
      goto L_08B47678;
    }
L_08B47678:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08B476A4;
      }
      goto L_08B47688;
    }
L_08B47688:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B47698;
      }
      goto L_08B47690;
    }
L_08B47690:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47698;
    }
L_08B47698:
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B476EC;
      }
      goto L_08B476A4;
    }
L_08B476A4:
    aot_gpr_4 = (0u | 23u);
    ctx.gpr[17] = (0u | 219u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    aot_gpr_31 = (0x08B476B8u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B476B8u) goto L_08B476B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B476B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B476D0;
      }
      goto L_08B476C0;
    }
L_08B476C0:
    if (ctx.gpr[19] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
        goto L_08B47744;
    }
    goto L_08B476C8;
L_08B476C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47868;
      }
      goto L_08B476D0;
    }
L_08B476D0:
    aot_gpr_6 = (2233u << 16u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (0u | 4u);
    aot_gpr_31 = (0x08B476E4u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-30832));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B476E4u) goto L_08B476E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B476E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B476EC;
    }
L_08B476EC:
    ctx.gpr[21] = (0u | 10u);
    goto L_08B476F0;
L_08B476F0:
    aot_gpr_31 = (0x08B476F8u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(228));
    goto L_08B45294;
L_08B476F8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    aot_gpr_31 = (0x08B47704u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    goto L_08B44F3C;
L_08B47704:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08B47724;
      }
      goto L_08B47714;
    }
L_08B47714:
    aot_gpr_31 = (0x08B4771Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4771Cu) goto L_08B4771C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4771C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4772C;
      }
      goto L_08B47724;
    }
L_08B47724:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_08B476F0;
      }
      goto L_08B4772C;
    }
L_08B4772C:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4773C;
      }
      goto L_08B47734;
    }
L_08B47734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B4773C;
    }
L_08B4773C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B476C0;
      }
      goto L_08B47744;
    }
L_08B47744:
    aot_gpr_31 = (0x08B4774Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 433u, 0x08A8E2ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4774Cu) goto L_08B4774C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4774C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08B4775Cu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 433u, 0x08A8E2ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B4775Cu) goto L_08B4775C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B4775C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08B47868;
      }
      goto L_08B47764;
    }
L_08B47764:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5336)));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_31 = (0x08B47774u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(388));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 526u, 0x08A8EB48u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47774u) goto L_08B47774;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47774:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B477AC;
      }
      goto L_08B4777C;
    }
L_08B4777C:
    aot_gpr_31 = (0x08B47784u);
    // nop
    goto L_08B44F70;
L_08B47784:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u | 191u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B477A0;
      }
      goto L_08B47794;
    }
L_08B47794:
    aot_gpr_4 = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
      if (branch_taken) {
          goto L_08B47838;
      }
      goto L_08B477A0;
    }
L_08B477A0:
    aot_gpr_4 = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
      if (branch_taken) {
          goto L_08B47838;
      }
      goto L_08B477AC;
    }
L_08B477AC:
    ctx.gpr[20] = (0u | 0u);
    goto L_08B477B0;
L_08B477B0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(388));
    aot_gpr_31 = (0x08B477BCu);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(44));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0207_entry, 207u, 520u, 0x08B4237Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B477BCu) goto L_08B477BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B477BC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_gpr_4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B477E4;
      }
      goto L_08B477CC;
    }
L_08B477CC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08B477F8;
      }
      goto L_08B477DC;
    }
L_08B477DC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08B477EC;
      }
      goto L_08B477E4;
    }
L_08B477E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B477EC;
    }
L_08B477EC:
    aot_gpr_5 = (0u | 24u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B47838;
      }
      goto L_08B477F8;
    }
L_08B477F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    ctx.gpr[7] = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2288));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) <= 0;
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B47838;
      }
      goto L_08B47830;
    }
L_08B47830:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B477B0;
      }
      goto L_08B47838;
    }
L_08B47838:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B47868;
      }
      goto L_08B47848;
    }
L_08B47848:
    aot_gpr_31 = (0x08B47850u);
    // nop
    goto L_08B44F70;
L_08B47850:
    aot_gpr_4 = (0u | 191u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B47868;
      }
      goto L_08B4785C;
    }
L_08B4785C:
    aot_gpr_4 = (0u | 24u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(44), aot_gpr_4);
    ctx.gpr[17] = (0u | 191u);
    goto L_08B47868;
L_08B47868:
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(386), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B47880;
      }
      goto L_08B47874;
    }
L_08B47874:
    aot_gpr_5 = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08B47888;
      }
      goto L_08B47880;
    }
L_08B47880:
    aot_gpr_5 = (16672u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    goto L_08B47888;
L_08B47888:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(386));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_gpr_31 = (0x08B478B0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B478B0u) goto L_08B478B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B478B0:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(386))))));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B478BC;
    }
L_08B478BC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_4 = (ctx.gpr[19] | aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B478CC;
    }
L_08B478CC:
    ctx.gpr[20] = (0u | 0u);
    goto L_08B478D0;
L_08B478D0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 << 3u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(8))))));
    aot_gpr_4 = (aot_gpr_4 & 15u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4795C;
    }
    goto L_08B47900;
L_08B47900:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(30040)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    aot_gpr_4 = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 16u));
    if (aot_gpr_4 == aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B4795C;
    }
    goto L_08B4794C;
L_08B4794C:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_gpr_4 << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
      if (branch_taken) {
          goto L_08B478D0;
      }
      goto L_08B4795C;
    }
L_08B4795C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_5 << 3u);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6))))));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[20]);
    aot_gpr_5 = (aot_gpr_5 << 16u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 16u));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (aot_gpr_4 & 16383u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
        goto L_08B479D0;
    }
    goto L_08B479B4;
L_08B479B4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 7u);
      if (branch_taken) {
          goto L_08B479F0;
      }
      goto L_08B479D0;
    }
L_08B479D0:
    aot_gpr_5 = (ctx.gpr[20] << 2u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2))))));
    aot_gpr_4 = (aot_gpr_4 & 56u);
    aot_gpr_4 = (aot_gpr_4 >> 3u);
    ctx.gpr[21] = (aot_gpr_4 << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_08B479F0;
L_08B479F0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B479F8;
    }
L_08B479F8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B47A18;
      }
      goto L_08B47A08;
    }
L_08B47A08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B47A18;
L_08B47A18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (0u | 6u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B47A70;
      }
      goto L_08B47A28;
    }
L_08B47A28:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x08B47A34u);
    aot_gpr_4 = (0u | 1584u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47A34u) goto L_08B47A34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47A34:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B47A50;
      }
      goto L_08B47A40;
    }
L_08B47A40:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B47A4Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0149_entry, 149u, 581u, 0x08A5A7FCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47A4Cu) goto L_08B47A4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47A4C:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B47A50;
L_08B47A50:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47CA8;
      }
      goto L_08B47A5C;
    }
L_08B47A5C:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08B47A68u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 381u, 0x08ADD6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47A68u) goto L_08B47A68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47A68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5500), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08B47CA8;
      }
      goto L_08B47A70;
    }
L_08B47A70:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B47A90;
      }
      goto L_08B47A80;
    }
L_08B47A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B47A90;
L_08B47A90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (0u | 8u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B47AEC;
      }
      goto L_08B47AA0;
    }
L_08B47AA0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47ACC;
      }
      goto L_08B47AAC;
    }
L_08B47AAC:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x08B47AB8u);
    aot_gpr_4 = (0u | 1632u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47AB8u) goto L_08B47AB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47AB8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B47AD4;
      }
      goto L_08B47AC4;
    }
L_08B47AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47AE4;
      }
      goto L_08B47ACC;
    }
L_08B47ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47AD4;
    }
L_08B47AD4:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B47AE0u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0089_entry, 89u, 304u, 0x08969648u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47AE0u) goto L_08B47AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47AE0:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B47AE4;
L_08B47AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47CA8;
      }
      goto L_08B47AEC;
    }
L_08B47AEC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B47B0C;
      }
      goto L_08B47AFC;
    }
L_08B47AFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B47B0C;
L_08B47B0C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B47B68;
      }
      goto L_08B47B1C;
    }
L_08B47B1C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47B48;
      }
      goto L_08B47B28;
    }
L_08B47B28:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x08B47B34u);
    aot_gpr_4 = (0u | 1184u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47B34u) goto L_08B47B34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47B34:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B47B50;
      }
      goto L_08B47B40;
    }
L_08B47B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47B60;
      }
      goto L_08B47B48;
    }
L_08B47B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47B50;
    }
L_08B47B50:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B47B5Cu);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0039_entry, 39u, 689u, 0x088A2F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47B5Cu) goto L_08B47B5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47B5C:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B47B60;
L_08B47B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47CA8;
      }
      goto L_08B47B68;
    }
L_08B47B68:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B47B88;
      }
      goto L_08B47B78;
    }
L_08B47B78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B47B88;
L_08B47B88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (0u | 9u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B47BE4;
      }
      goto L_08B47B98;
    }
L_08B47B98:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47BC4;
      }
      goto L_08B47BA4;
    }
L_08B47BA4:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x08B47BB0u);
    aot_gpr_4 = (0u | 1984u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47BB0u) goto L_08B47BB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47BB0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B47BCC;
      }
      goto L_08B47BBC;
    }
L_08B47BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47BDC;
      }
      goto L_08B47BC4;
    }
L_08B47BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47BCC;
    }
L_08B47BCC:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B47BD8u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 406u, 0x08B199C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47BD8u) goto L_08B47BD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47BD8:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B47BDC;
L_08B47BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47CA8;
      }
      goto L_08B47BE4;
    }
L_08B47BE4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08B47C04;
      }
      goto L_08B47BF4;
    }
L_08B47BF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (ctx.gpr[17] << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_08B47C04;
L_08B47C04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(84)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08B47C60;
      }
      goto L_08B47C14;
    }
L_08B47C14:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47C40;
      }
      goto L_08B47C20;
    }
L_08B47C20:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x08B47C2Cu);
    aot_gpr_4 = (0u | 1184u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47C2Cu) goto L_08B47C2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47C2C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B47C48;
      }
      goto L_08B47C38;
    }
L_08B47C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47C58;
      }
      goto L_08B47C40;
    }
L_08B47C40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 247u, 0x08B496F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47C48;
    }
L_08B47C48:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x08B47C54u);
    aot_gpr_6 = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0039_entry, 39u, 689u, 0x088A2F88u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47C54u) goto L_08B47C54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47C54:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B47C58;
L_08B47C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47CA8;
      }
      goto L_08B47C60;
    }
L_08B47C60:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_31 = (0x08B47C6Cu);
    aot_gpr_4 = (0u | 1920u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47C6Cu) goto L_08B47C6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47C6C:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_gpr_4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08B47C8C;
      }
      goto L_08B47C78;
    }
L_08B47C78:
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (0u | 1u);
    aot_gpr_31 = (0x08B47C88u);
    ctx.gpr[7] = (0u | 1u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47C88u) goto L_08B47C88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47C88:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08B47C8C;
L_08B47C8C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47CA8;
      }
      goto L_08B47C98;
    }
L_08B47C98:
    aot_gpr_4 = (2237u << 16u);
    aot_gpr_31 = (0x08B47CA4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-28736));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0182_entry, 182u, 381u, 0x08ADD6ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47CA4u) goto L_08B47CA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47CA4:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5500), ctx.gpr[2]);
    goto L_08B47CA8;
L_08B47CA8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(336), static_cast<std::uint16_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 23 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 24 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B47CE0;
      }
      goto L_08B47CC8;
    }
L_08B47CC8:
    aot_gpr_5 = (0u | 13u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B47CFC;
      }
      goto L_08B47CD4;
    }
L_08B47CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47F74;
      }
      goto L_08B47CDC;
    }
L_08B47CDC:
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < 24 ? 1u : 0u);
    goto L_08B47CE0;
L_08B47CE0:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_4) < 25 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B47F08;
      }
      goto L_08B47CE8;
    }
L_08B47CE8:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B47E14;
      }
      goto L_08B47CF0;
    }
L_08B47CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B47F74;
      }
      goto L_08B47CF8;
    }
L_08B47CF8:
    aot_gpr_4 = (0u | 1u);
    goto L_08B47CFC;
L_08B47CFC:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47DAC;
      }
      goto L_08B47D54;
    }
L_08B47D54:
    aot_gpr_4 = (16704u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16768u << 16u);
    aot_gpr_31 = (0x08B47D68u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47D68u) goto L_08B47D68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47D68:
    aot_fpr_12 = aot_fpr_22 - aot_fpr_20;
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (0u | 1u);
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B47DE0;
      }
      goto L_08B47DAC;
    }
L_08B47DAC:
    aot_gpr_31 = (0x08B47DB4u);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 584u, 0x08B0E5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47DB4u) goto L_08B47DB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47DB4:
    aot_gpr_4 = (ctx.gpr[2] << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B47DD4u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 555u, 0x08B0E454u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47DD4u) goto L_08B47DD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47DD4:
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B47DE0;
L_08B47DE0:
    aot_gpr_4 = (0u | 193u);
    { const bool branch_taken = ctx.gpr[17] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B47E04;
      }
      goto L_08B47DEC;
    }
L_08B47DEC:
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(550), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(549), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(554), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(553), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(0u));
    goto L_08B47E04;
L_08B47E04:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 9u, 0x08B480E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47E14;
    }
L_08B47E14:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(538))))));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_6 = (0u + static_cast<std::uint32_t>(-9));
    aot_gpr_5 = (aot_gpr_5 & aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 3u);
    aot_gpr_4 = (aot_gpr_5 | aot_gpr_4);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2320)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B47EC4;
      }
      goto L_08B47E6C;
    }
L_08B47E6C:
    aot_gpr_4 = (16704u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16768u << 16u);
    aot_gpr_31 = (0x08B47E80u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47E80u) goto L_08B47E80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47E80:
    aot_fpr_12 = aot_fpr_22 - aot_fpr_20;
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (0u | 1u);
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08B47EF8;
      }
      goto L_08B47EC4;
    }
L_08B47EC4:
    aot_gpr_31 = (0x08B47ECCu);
    aot_gpr_4 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 584u, 0x08B0E5E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47ECCu) goto L_08B47ECC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47ECC:
    aot_gpr_4 = (ctx.gpr[2] << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_31 = (0x08B47EECu);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 650u, 0x08B0EB4Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47EECu) goto L_08B47EEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47EEC:
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08B47EF8;
L_08B47EF8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(617))))));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 9u, 0x08B480E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47F08;
    }
L_08B47F08:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (16704u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16768u << 16u);
    aot_gpr_31 = (0x08B47F24u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47F24u) goto L_08B47F24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47F24:
    aot_fpr_12 = aot_fpr_22 - aot_fpr_20;
    aot_gpr_4 = (0u | 2u);
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(aot_gpr_4));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_31 = (0x08B47F60u);
    aot_mem.aot_direct_store32(ctx.gpr[22] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0194_entry, 194u, 575u, 0x08B0E56Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47F60u) goto L_08B47F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47F60:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[22] + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(ctx.gpr[2]));
    aot_gpr_4 = (aot_gpr_4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 9u, 0x08B480E8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47F74;
    }
L_08B47F74:
    aot_gpr_4 = (16656u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16736u << 16u);
    aot_gpr_31 = (0x08B47F88u);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47F88u) goto L_08B47F88;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47F88:
    aot_fpr_12 = aot_fpr_22 - aot_fpr_20;
    aot_gpr_4 = (0u | 3u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_5 << 24u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_5) >> 24u));
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08B47FF0;
      }
      goto L_08B47FB8;
    }
L_08B47FB8:
    aot_gpr_4 = (16704u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16784u << 16u);
    aot_gpr_31 = (0x08B47FCCu);
    aot_fpr_22 = std::bit_cast<float>(aot_gpr_4);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08B47FCCu) goto L_08B47FCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08B47FCC:
    aot_fpr_12 = aot_fpr_22 - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 << 24u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 24u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 3u, 0x08B48034u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08B47FF0;
    }
L_08B47FF0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(44)));
    aot_gpr_5 = (0u | 1u);
    if (aot_gpr_4 != aot_gpr_5) {
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
        (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 4u, 0x08B48038u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
    }
    (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0209_entry, 209u, 1u, 0x08B48000u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0208(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0208_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_208(Runtime &runtime) {
    runtime.register_generated_unit(208u, 0x08B44000u, 16384u, &recomp_unit_0208, &recomp_unit_0208_entry);
    runtime.register_function(0x08B44000u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44024u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4405Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4406Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44078u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44080u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44098u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44108u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44114u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44120u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4412Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44138u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44168u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44190u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B441A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B441A8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B441BCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B441C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B441CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B441D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44208u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4423Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44240u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44248u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44250u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44258u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44260u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44268u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44270u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B442A4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B442B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B442B8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B442C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B442D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B442DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B442ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44304u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4435Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44370u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B443A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44414u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44460u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44470u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44484u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44490u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4449Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44510u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4452Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44538u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44548u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44570u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4458Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44594u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4459Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B445B8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B445C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B445F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44680u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44690u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44698u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B446B0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B446C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B446D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B446DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B446F0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B446FCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44704u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44718u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4471Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4472Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44730u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44780u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B447A8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B447B8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B447C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B447E8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B447F0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44808u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44844u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B448A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B448F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44924u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44934u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4493Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4494Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44954u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4496Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44974u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44998u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B449B0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B449C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B449CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B449E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B449ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B449F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44A44u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44A6Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44A80u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44AA8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44AB0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44AC8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44AE4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44AFCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44B14u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44B1Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44B5Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44B9Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44BA4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44BB0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44BB8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44BC0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44C0Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44C20u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44C68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44C74u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44C78u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44CA4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44CDCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44D18u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44D28u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44D70u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44E2Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44E40u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44E48u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44E4Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44E7Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44EB0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F00u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F0Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F10u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F3Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F64u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F70u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F88u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F90u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44F98u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44FB8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44FC4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44FCCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44FD8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44FE0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44FE8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44FF0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B44FF8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45000u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45008u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45010u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45018u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45020u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45028u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45030u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45038u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45040u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45048u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45050u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45064u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45084u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4508Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45094u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4509Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450A4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450BCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450E4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B450FCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45104u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4510Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45114u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4511Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45124u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4512Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45140u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4515Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45164u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4516Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45174u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4517Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45180u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B451B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B451C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B451C8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B451D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B451D8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B451E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B451F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45214u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4521Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45220u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45234u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45260u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45268u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45270u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45278u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45280u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45284u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45294u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B452C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B452D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45304u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45314u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45324u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4532Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45348u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45368u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45380u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45394u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B453ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B453C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B453E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B453F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45414u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4541Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4542Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45438u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4544Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45488u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45494u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4549Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B454A4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B454ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B454B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B454BCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B454C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B454CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B454DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B454E8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45500u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45510u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4551Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45524u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45530u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45548u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45560u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45570u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45578u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45580u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45588u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45590u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455BCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455E8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B455F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45608u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45624u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45634u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45640u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4565Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45664u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45670u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45688u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45698u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456A8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456B0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456B8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456D8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456E8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456F0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B456F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45700u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45714u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4571Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45744u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4574Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45768u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45770u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4577Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4578Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45798u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B457A4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B457BCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B457C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B457CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B457D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B457D8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B457F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4582Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45838u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45840u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4585Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45864u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45870u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45878u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45894u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B458A8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B458D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B458DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B458ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B458F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B458FCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45904u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4590Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4591Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45924u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4592Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45938u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45940u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4595Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45964u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4596Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B459A8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B459B0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B459E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45A10u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45A40u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45A48u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45A50u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45A60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45A70u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45A80u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45A90u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45AA4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45AC0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45AC8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45AF4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45AFCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B0Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B18u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B28u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B40u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B48u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B50u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B58u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B74u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B78u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B84u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B8Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45B90u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45BBCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45BC8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45BD0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45BD4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45BDCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45BF4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C04u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C0Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C14u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C1Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C30u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C38u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C54u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C58u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C6Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C7Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C80u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C88u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45C9Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45CB4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45CB8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45CC4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D00u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D08u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D0Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D24u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D2Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D34u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D3Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D44u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D4Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D54u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D84u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45D8Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45DA0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45DB4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45DC0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45DD0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45DE8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45DFCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E04u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E0Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E50u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E58u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E70u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E78u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E80u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E8Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E94u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45E9Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45EA4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45EBCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45EC4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45ED0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45ED8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45EE4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45EF0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45EF8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F0Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F1Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F28u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F34u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F3Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F40u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F48u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F50u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F58u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F74u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F7Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45F98u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45FA0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45FACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45FD0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B45FE4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46024u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46054u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46060u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46068u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46084u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4608Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B460A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B460ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B460C8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B460DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B460E4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B460ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4612Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46144u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4614Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46158u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46160u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4617Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46184u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B461ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B461E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B461F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46224u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46238u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46240u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46258u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B462A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B462B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B462C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B462D8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B462F0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B462FCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46304u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4630Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46334u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4633Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46344u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4636Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46374u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4637Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46398u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B463A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B463A8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B463D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B463D8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B463E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46410u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46418u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46420u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46444u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4644Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46454u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46474u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46484u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B464ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B464B8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B464CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B464D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B464DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B464F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46508u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4652Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B465DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B465E8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B465FCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4661Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46628u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4663Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4665Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46668u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46678u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46698u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B466A4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B466B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B466C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B466D8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B466E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B466F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46704u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46718u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46728u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46734u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4676Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46798u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B467ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B467BCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46834u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B468B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B468C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B468CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B468E0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B468F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46900u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4690Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46924u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4692Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46938u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4695Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46964u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46974u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4697Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4698Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46994u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4699Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B469B0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B469B8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B469C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B469C8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B469ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46A14u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46A20u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46A44u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46A6Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46A94u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46B20u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46B34u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46B50u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46B7Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46B8Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46B98u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46BA4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46BB0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46BB8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46BC0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46BC8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46BD8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46BE4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46BFCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C10u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C18u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C20u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C2Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C3Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C44u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C70u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C78u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C84u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46C9Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46CA4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46CACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46CB4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46CC0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46CCCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46CE0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46CF0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46CF8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46D00u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46D08u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46D18u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46D20u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46D5Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46D60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46D68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46DA8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46DE4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46DECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46DF4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46DFCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46E30u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46E6Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46E78u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46E8Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46E98u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46EA0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46EA8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46EB0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46EB8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46EC4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46ED4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46EDCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46EE4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46EECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46F24u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46F60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46F9Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46FA8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B46FB0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47000u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4700Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47014u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4701Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47024u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47030u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47034u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4703Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47044u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4704Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47054u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47058u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47060u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47068u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47078u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47084u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47090u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47094u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B470A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B470B0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B470C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B470C8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B470D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B470DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47114u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4711Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4712Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47134u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47140u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4714Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47154u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4715Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47168u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4716Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47194u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B471C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B471C8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B471D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B471DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47210u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4722Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47234u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4725Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47268u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47270u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4728Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B472B8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B472D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B472ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B472F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4731Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47328u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47330u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4734Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47378u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47398u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B473A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B473C8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B473D4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B473ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B473F4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47414u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4741Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47444u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47450u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47468u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47478u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B474B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B474C4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B474F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47500u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47508u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47514u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4754Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47550u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4758Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47594u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47604u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47610u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47618u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47620u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47634u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4763Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47644u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4766Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47678u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47688u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47690u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47698u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476A4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476B8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476C0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476C8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476E4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476F0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B476F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47704u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47714u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4771Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47724u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4772Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47734u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4773Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47744u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4774Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4775Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47764u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47774u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4777Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47784u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47794u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477A0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477ACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477B0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477BCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477DCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477E4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477ECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B477F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47830u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47838u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47848u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47850u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4785Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47868u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47874u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47880u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47888u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B478B0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B478BCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B478CCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B478D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47900u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4794Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B4795Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B479B4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B479D0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B479F0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B479F8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A08u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A18u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A28u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A34u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A40u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A4Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A50u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A5Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A70u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A80u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47A90u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AA0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AB8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AC4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47ACCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AD4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AE0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AE4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47AFCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B0Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B1Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B28u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B34u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B40u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B48u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B50u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B5Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B78u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B88u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47B98u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BA4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BB0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BBCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BC4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BCCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BD8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BDCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BE4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47BF4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C04u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C14u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C20u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C2Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C38u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C40u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C48u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C54u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C58u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C6Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C78u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C88u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C8Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47C98u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CA4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CA8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CC8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CD4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CDCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CE0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CE8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CF0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CF8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47CFCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47D54u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47D68u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47DACu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47DB4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47DD4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47DE0u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47DECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47E04u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47E14u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47E6Cu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47E80u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47EC4u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47ECCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47EECu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47EF8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47F08u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47F24u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47F60u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47F74u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47F88u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47FB8u, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47FCCu, &recomp_unit_0208, "recomp_unit_0208");
    runtime.register_function(0x08B47FF0u, &recomp_unit_0208, "recomp_unit_0208");
}
} // namespace psprecomp
