#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0145[4093] = {
    1, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0,
    14, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0,
    22, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0,
    0, 0, 39, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0,
    0, 51, 0, 52, 0, 53, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0,
    63, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 68, 69, 0, 0, 70, 0, 71, 0, 72, 0, 73,
    0, 74, 75, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0,
    82, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94,
    95, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0,
    0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0,
    0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0, 0, 0, 121,
    0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 127, 0, 0, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0,
    0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160,
    0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0,
    0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0,
    191, 192, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0,
    198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0,
    208, 0, 0, 0, 209, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226,
    0, 227, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0,
    0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 245, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0, 269, 0,
    0, 270, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 276, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 285, 0, 286,
    0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311,
    0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0,
    0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 323, 0, 324, 0, 325, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0,
    330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 333, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0,
    341, 0, 0, 0, 342, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 348, 0, 0, 349, 0, 350, 0, 351, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358,
    359, 0, 360, 0, 0, 361, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 369, 0, 370, 0,
    0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0,
    378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 394, 0, 395,
    0, 396, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 400, 0, 401, 402, 0, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406,
    0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 412, 413, 0, 0, 414, 0, 415, 0, 0, 416, 0, 417, 418, 0,
    0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425,
    0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 433, 0, 0, 0, 0, 434, 0,
    0, 0, 435, 436, 0, 437, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 443, 0, 444, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0,
    454, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0,
    458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477,
    478, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 482, 483, 0, 0, 0, 0, 0, 484, 485, 0, 486, 0, 0, 487, 0, 0, 0, 0, 0,
    488, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0,
    0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0,
    0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0,
    0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 528, 0, 529, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0,
    532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 535, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0,
    539, 0, 0, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0,
    0, 0, 545, 0, 0, 546, 547, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 0, 554,
    0, 0, 0, 555, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 561, 0, 0, 0, 0, 562, 0, 0, 0,
    563, 564, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 570, 0, 571, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 581, 0, 582,
    0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 590, 0, 591, 0,
    0, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0,
    607, 0, 608, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 618, 0, 619, 620,
    0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629,
    0, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0,
    0, 0, 638, 0, 0, 639, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 654, 0, 0,
    655, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0,
    0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0,
    0, 665, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673,
    0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0,
    679, 0, 0, 680, 0, 0, 0, 0, 0, 681, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0,
    687, 0, 688, 689, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0,
    0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0,
    713, 0, 714, 0, 0, 715, 0, 716, 0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 723,
};
void recomp_unit_0145_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A48000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0145[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A48000;
    case 2u: goto L_08A4800C;
    case 3u: goto L_08A4801C;
    case 4u: goto L_08A48040;
    case 5u: goto L_08A48050;
    case 6u: goto L_08A4805C;
    case 7u: goto L_08A48070;
    case 8u: goto L_08A48084;
    case 9u: goto L_08A48098;
    case 10u: goto L_08A480A8;
    case 11u: goto L_08A480D4;
    case 12u: goto L_08A480E0;
    case 13u: goto L_08A480F0;
    case 14u: goto L_08A48100;
    case 15u: goto L_08A48118;
    case 16u: goto L_08A48120;
    case 17u: goto L_08A48130;
    case 18u: goto L_08A48144;
    case 19u: goto L_08A48150;
    case 20u: goto L_08A48160;
    case 21u: goto L_08A48174;
    case 22u: goto L_08A48180;
    case 23u: goto L_08A4818C;
    case 24u: goto L_08A4819C;
    case 25u: goto L_08A481B4;
    case 26u: goto L_08A481C0;
    case 27u: goto L_08A481C8;
    case 28u: goto L_08A481D4;
    case 29u: goto L_08A481E4;
    case 30u: goto L_08A481F8;
    case 31u: goto L_08A48208;
    case 32u: goto L_08A48240;
    case 33u: goto L_08A4824C;
    case 34u: goto L_08A4825C;
    case 35u: goto L_08A482C8;
    case 36u: goto L_08A48344;
    case 37u: goto L_08A4835C;
    case 38u: goto L_08A48368;
    case 39u: goto L_08A48388;
    case 40u: goto L_08A4838C;
    case 41u: goto L_08A483A8;
    case 42u: goto L_08A483B8;
    case 43u: goto L_08A483C4;
    case 44u: goto L_08A483D8;
    case 45u: goto L_08A483E8;
    case 46u: goto L_08A4842C;
    case 47u: goto L_08A48480;
    case 48u: goto L_08A48498;
    case 49u: goto L_08A484AC;
    case 50u: goto L_08A484F0;
    case 51u: goto L_08A48504;
    case 52u: goto L_08A4850C;
    case 53u: goto L_08A48514;
    case 54u: goto L_08A48518;
    case 55u: goto L_08A485A8;
    case 56u: goto L_08A485B4;
    case 57u: goto L_08A485F0;
    case 58u: goto L_08A48618;
    case 59u: goto L_08A48624;
    case 60u: goto L_08A48640;
    case 61u: goto L_08A4864C;
    case 62u: goto L_08A48668;
    case 63u: goto L_08A48680;
    case 64u: goto L_08A48684;
    case 65u: goto L_08A4868C;
    case 66u: goto L_08A48694;
    case 67u: goto L_08A486B8;
    case 68u: goto L_08A486D4;
    case 69u: goto L_08A486D8;
    case 70u: goto L_08A486E4;
    case 71u: goto L_08A486EC;
    case 72u: goto L_08A486F4;
    case 73u: goto L_08A486FC;
    case 74u: goto L_08A48704;
    case 75u: goto L_08A48708;
    case 76u: goto L_08A48710;
    case 77u: goto L_08A4871C;
    case 78u: goto L_08A48734;
    case 79u: goto L_08A48758;
    case 80u: goto L_08A4876C;
    case 81u: goto L_08A48778;
    case 82u: goto L_08A48780;
    case 83u: goto L_08A48788;
    case 84u: goto L_08A4879C;
    case 85u: goto L_08A487A8;
    case 86u: goto L_08A487C8;
    case 87u: goto L_08A487DC;
    case 88u: goto L_08A48820;
    case 89u: goto L_08A48828;
    case 90u: goto L_08A48848;
    case 91u: goto L_08A48860;
    case 92u: goto L_08A48868;
    case 93u: goto L_08A48870;
    case 94u: goto L_08A4887C;
    case 95u: goto L_08A48880;
    case 96u: goto L_08A4888C;
    case 97u: goto L_08A488B0;
    case 98u: goto L_08A488C4;
    case 99u: goto L_08A488D0;
    case 100u: goto L_08A488D8;
    case 101u: goto L_08A488E4;
    case 102u: goto L_08A48904;
    case 103u: goto L_08A48918;
    case 104u: goto L_08A48920;
    case 105u: goto L_08A4892C;
    case 106u: goto L_08A48934;
    case 107u: goto L_08A48950;
    case 108u: goto L_08A48964;
    case 109u: goto L_08A48974;
    case 110u: goto L_08A48984;
    case 111u: goto L_08A48994;
    case 112u: goto L_08A489CC;
    case 113u: goto L_08A489E8;
    case 114u: goto L_08A489F0;
    case 115u: goto L_08A489F8;
    case 116u: goto L_08A48A2C;
    case 117u: goto L_08A48A48;
    case 118u: goto L_08A48A58;
    case 119u: goto L_08A48A64;
    case 120u: goto L_08A48A6C;
    case 121u: goto L_08A48A7C;
    case 122u: goto L_08A48A8C;
    case 123u: goto L_08A48AA0;
    case 124u: goto L_08A48AB4;
    case 125u: goto L_08A48AE0;
    case 126u: goto L_08A48AE8;
    case 127u: goto L_08A48AF0;
    case 128u: goto L_08A48B04;
    case 129u: goto L_08A48B24;
    case 130u: goto L_08A48B30;
    case 131u: goto L_08A48B48;
    case 132u: goto L_08A48B58;
    case 133u: goto L_08A48B68;
    case 134u: goto L_08A48B70;
    case 135u: goto L_08A48B88;
    case 136u: goto L_08A48BA8;
    case 137u: goto L_08A48BB8;
    case 138u: goto L_08A48BE0;
    case 139u: goto L_08A48C1C;
    case 140u: goto L_08A48C24;
    case 141u: goto L_08A48C34;
    case 142u: goto L_08A48C3C;
    case 143u: goto L_08A48C54;
    case 144u: goto L_08A48C78;
    case 145u: goto L_08A48C8C;
    case 146u: goto L_08A48C94;
    case 147u: goto L_08A48C9C;
    case 148u: goto L_08A48CAC;
    case 149u: goto L_08A48CB4;
    case 150u: goto L_08A48CC8;
    case 151u: goto L_08A48CFC;
    case 152u: goto L_08A48D1C;
    case 153u: goto L_08A48D2C;
    case 154u: goto L_08A48D54;
    case 155u: goto L_08A48D90;
    case 156u: goto L_08A48D98;
    case 157u: goto L_08A48DA0;
    case 158u: goto L_08A48DA8;
    case 159u: goto L_08A48DF4;
    case 160u: goto L_08A48DFC;
    case 161u: goto L_08A48E18;
    case 162u: goto L_08A48E48;
    case 163u: goto L_08A48E60;
    case 164u: goto L_08A48E8C;
    case 165u: goto L_08A48EA0;
    case 166u: goto L_08A48EAC;
    case 167u: goto L_08A48EC4;
    case 168u: goto L_08A48F08;
    case 169u: goto L_08A48F14;
    case 170u: goto L_08A48F24;
    case 171u: goto L_08A48F34;
    case 172u: goto L_08A48F44;
    case 173u: goto L_08A48F70;
    case 174u: goto L_08A48F9C;
    case 175u: goto L_08A48FA4;
    case 176u: goto L_08A48FB8;
    case 177u: goto L_08A48FC4;
    case 178u: goto L_08A48FF4;
    case 179u: goto L_08A49004;
    case 180u: goto L_08A49014;
    case 181u: goto L_08A49024;
    case 182u: goto L_08A49030;
    case 183u: goto L_08A49050;
    case 184u: goto L_08A49060;
    case 185u: goto L_08A49088;
    case 186u: goto L_08A490C4;
    case 187u: goto L_08A4910C;
    case 188u: goto L_08A49150;
    case 189u: goto L_08A49168;
    case 190u: goto L_08A49170;
    case 191u: goto L_08A49180;
    case 192u: goto L_08A49184;
    case 193u: goto L_08A4919C;
    case 194u: goto L_08A491A4;
    case 195u: goto L_08A491B4;
    case 196u: goto L_08A491E8;
    case 197u: goto L_08A491F8;
    case 198u: goto L_08A49200;
    case 199u: goto L_08A4921C;
    case 200u: goto L_08A49230;
    case 201u: goto L_08A49238;
    case 202u: goto L_08A49240;
    case 203u: goto L_08A49244;
    case 204u: goto L_08A492D4;
    case 205u: goto L_08A492E0;
    case 206u: goto L_08A4931C;
    case 207u: goto L_08A4936C;
    case 208u: goto L_08A49380;
    case 209u: goto L_08A49390;
    case 210u: goto L_08A49398;
    case 211u: goto L_08A493A0;
    case 212u: goto L_08A493B8;
    case 213u: goto L_08A493C8;
    case 214u: goto L_08A4940C;
    case 215u: goto L_08A49424;
    case 216u: goto L_08A49428;
    case 217u: goto L_08A49440;
    case 218u: goto L_08A49448;
    case 219u: goto L_08A49458;
    case 220u: goto L_08A4948C;
    case 221u: goto L_08A4949C;
    case 222u: goto L_08A494B8;
    case 223u: goto L_08A494C4;
    case 224u: goto L_08A494D4;
    case 225u: goto L_08A494F4;
    case 226u: goto L_08A494FC;
    case 227u: goto L_08A49504;
    case 228u: goto L_08A4950C;
    case 229u: goto L_08A49514;
    case 230u: goto L_08A49520;
    case 231u: goto L_08A49528;
    case 232u: goto L_08A49544;
    case 233u: goto L_08A4955C;
    case 234u: goto L_08A49564;
    case 235u: goto L_08A4956C;
    case 236u: goto L_08A49588;
    case 237u: goto L_08A49594;
    case 238u: goto L_08A495AC;
    case 239u: goto L_08A495B4;
    case 240u: goto L_08A495BC;
    case 241u: goto L_08A495CC;
    case 242u: goto L_08A495DC;
    case 243u: goto L_08A495E8;
    case 244u: goto L_08A496A0;
    case 245u: goto L_08A4971C;
    case 246u: goto L_08A49720;
    case 247u: goto L_08A4972C;
    case 248u: goto L_08A4974C;
    case 249u: goto L_08A49760;
    case 250u: goto L_08A497A0;
    case 251u: goto L_08A497B4;
    case 252u: goto L_08A497BC;
    case 253u: goto L_08A497CC;
    case 254u: goto L_08A497D0;
    case 255u: goto L_08A497E8;
    case 256u: goto L_08A497F0;
    case 257u: goto L_08A49800;
    case 258u: goto L_08A49834;
    case 259u: goto L_08A49844;
    case 260u: goto L_08A49868;
    case 261u: goto L_08A49874;
    case 262u: goto L_08A49894;
    case 263u: goto L_08A4989C;
    case 264u: goto L_08A498B0;
    case 265u: goto L_08A498C8;
    case 266u: goto L_08A498D0;
    case 267u: goto L_08A498E4;
    case 268u: goto L_08A498F0;
    case 269u: goto L_08A498F8;
    case 270u: goto L_08A49904;
    case 271u: goto L_08A49918;
    case 272u: goto L_08A49924;
    case 273u: goto L_08A49938;
    case 274u: goto L_08A49940;
    case 275u: goto L_08A4995C;
    case 276u: goto L_08A49960;
    case 277u: goto L_08A499A4;
    case 278u: goto L_08A49A18;
    case 279u: goto L_08A49A24;
    case 280u: goto L_08A49A30;
    case 281u: goto L_08A49A38;
    case 282u: goto L_08A49A40;
    case 283u: goto L_08A49A5C;
    case 284u: goto L_08A49A68;
    case 285u: goto L_08A49A74;
    case 286u: goto L_08A49A7C;
    case 287u: goto L_08A49A84;
    case 288u: goto L_08A49A8C;
    case 289u: goto L_08A49A94;
    case 290u: goto L_08A49A9C;
    case 291u: goto L_08A49AA4;
    case 292u: goto L_08A49AA8;
    case 293u: goto L_08A49AB0;
    case 294u: goto L_08A49ACC;
    case 295u: goto L_08A49AD4;
    case 296u: goto L_08A49ADC;
    case 297u: goto L_08A49AEC;
    case 298u: goto L_08A49AF8;
    case 299u: goto L_08A49B8C;
    case 300u: goto L_08A49BA4;
    case 301u: goto L_08A49C0C;
    case 302u: goto L_08A49C38;
    case 303u: goto L_08A49C44;
    case 304u: goto L_08A49C60;
    case 305u: goto L_08A49C78;
    case 306u: goto L_08A49C94;
    case 307u: goto L_08A49CB4;
    case 308u: goto L_08A49CE4;
    case 309u: goto L_08A49CEC;
    case 310u: goto L_08A49CF4;
    case 311u: goto L_08A49CFC;
    case 312u: goto L_08A49D04;
    case 313u: goto L_08A49D1C;
    case 314u: goto L_08A49D40;
    case 315u: goto L_08A49D78;
    case 316u: goto L_08A49D94;
    case 317u: goto L_08A49DB0;
    case 318u: goto L_08A49DBC;
    case 319u: goto L_08A49DC4;
    case 320u: goto L_08A49DE4;
    case 321u: goto L_08A49DF0;
    case 322u: goto L_08A49E08;
    case 323u: goto L_08A49E18;
    case 324u: goto L_08A49E20;
    case 325u: goto L_08A49E28;
    case 326u: goto L_08A49E2C;
    case 327u: goto L_08A49E54;
    case 328u: goto L_08A49E60;
    case 329u: goto L_08A49E70;
    case 330u: goto L_08A49E80;
    case 331u: goto L_08A49E88;
    case 332u: goto L_08A49EA4;
    case 333u: goto L_08A49EA8;
    case 334u: goto L_08A49EB0;
    case 335u: goto L_08A49ECC;
    case 336u: goto L_08A49ED8;
    case 337u: goto L_08A49EE0;
    case 338u: goto L_08A49EE8;
    case 339u: goto L_08A49EF0;
    case 340u: goto L_08A49EF8;
    case 341u: goto L_08A49F00;
    case 342u: goto L_08A49F10;
    case 343u: goto L_08A49F18;
    case 344u: goto L_08A49F24;
    case 345u: goto L_08A49F34;
    case 346u: goto L_08A49F44;
    case 347u: goto L_08A49F54;
    case 348u: goto L_08A49F58;
    case 349u: goto L_08A49F64;
    case 350u: goto L_08A49F6C;
    case 351u: goto L_08A49F74;
    case 352u: goto L_08A49FAC;
    case 353u: goto L_08A49FB8;
    case 354u: goto L_08A49FC4;
    case 355u: goto L_08A49FD0;
    case 356u: goto L_08A49FE0;
    case 357u: goto L_08A49FEC;
    case 358u: goto L_08A49FFC;
    case 359u: goto L_08A4A000;
    case 360u: goto L_08A4A008;
    case 361u: goto L_08A4A014;
    case 362u: goto L_08A4A020;
    case 363u: goto L_08A4A028;
    case 364u: goto L_08A4A034;
    case 365u: goto L_08A4A03C;
    case 366u: goto L_08A4A044;
    case 367u: goto L_08A4A054;
    case 368u: goto L_08A4A064;
    case 369u: goto L_08A4A070;
    case 370u: goto L_08A4A078;
    case 371u: goto L_08A4A098;
    case 372u: goto L_08A4A0A0;
    case 373u: goto L_08A4A0B8;
    case 374u: goto L_08A4A0C0;
    case 375u: goto L_08A4A0D0;
    case 376u: goto L_08A4A0E0;
    case 377u: goto L_08A4A0F0;
    case 378u: goto L_08A4A100;
    case 379u: goto L_08A4A110;
    case 380u: goto L_08A4A120;
    case 381u: goto L_08A4A130;
    case 382u: goto L_08A4A138;
    case 383u: goto L_08A4A140;
    case 384u: goto L_08A4A168;
    case 385u: goto L_08A4A174;
    case 386u: goto L_08A4A1B0;
    case 387u: goto L_08A4A200;
    case 388u: goto L_08A4A214;
    case 389u: goto L_08A4A220;
    case 390u: goto L_08A4A228;
    case 391u: goto L_08A4A240;
    case 392u: goto L_08A4A264;
    case 393u: goto L_08A4A26C;
    case 394u: goto L_08A4A274;
    case 395u: goto L_08A4A27C;
    case 396u: goto L_08A4A284;
    case 397u: goto L_08A4A28C;
    case 398u: goto L_08A4A2A0;
    case 399u: goto L_08A4A2A8;
    case 400u: goto L_08A4A2B4;
    case 401u: goto L_08A4A2BC;
    case 402u: goto L_08A4A2C0;
    case 403u: goto L_08A4A2CC;
    case 404u: goto L_08A4A2D4;
    case 405u: goto L_08A4A2E8;
    case 406u: goto L_08A4A2FC;
    case 407u: goto L_08A4A30C;
    case 408u: goto L_08A4A31C;
    case 409u: goto L_08A4A32C;
    case 410u: goto L_08A4A334;
    case 411u: goto L_08A4A340;
    case 412u: goto L_08A4A348;
    case 413u: goto L_08A4A34C;
    case 414u: goto L_08A4A358;
    case 415u: goto L_08A4A360;
    case 416u: goto L_08A4A36C;
    case 417u: goto L_08A4A374;
    case 418u: goto L_08A4A378;
    case 419u: goto L_08A4A388;
    case 420u: goto L_08A4A39C;
    case 421u: goto L_08A4A3A8;
    case 422u: goto L_08A4A3B0;
    case 423u: goto L_08A4A3C8;
    case 424u: goto L_08A4A3EC;
    case 425u: goto L_08A4A3FC;
    case 426u: goto L_08A4A414;
    case 427u: goto L_08A4A41C;
    case 428u: goto L_08A4A434;
    case 429u: goto L_08A4A440;
    case 430u: goto L_08A4A448;
    case 431u: goto L_08A4A450;
    case 432u: goto L_08A4A4E0;
    case 433u: goto L_08A4A4E4;
    case 434u: goto L_08A4A4F8;
    case 435u: goto L_08A4A508;
    case 436u: goto L_08A4A50C;
    case 437u: goto L_08A4A514;
    case 438u: goto L_08A4A518;
    case 439u: goto L_08A4A528;
    case 440u: goto L_08A4A540;
    case 441u: goto L_08A4A544;
    case 442u: goto L_08A4A550;
    case 443u: goto L_08A4A58C;
    case 444u: goto L_08A4A594;
    case 445u: goto L_08A4A598;
    case 446u: goto L_08A4A5D0;
    case 447u: goto L_08A4A5D8;
    case 448u: goto L_08A4A5F0;
    case 449u: goto L_08A4A630;
    case 450u: goto L_08A4A63C;
    case 451u: goto L_08A4A650;
    case 452u: goto L_08A4A660;
    case 453u: goto L_08A4A670;
    case 454u: goto L_08A4A680;
    case 455u: goto L_08A4A684;
    case 456u: goto L_08A4A6E8;
    case 457u: goto L_08A4A6F0;
    case 458u: goto L_08A4A700;
    case 459u: goto L_08A4A740;
    case 460u: goto L_08A4A754;
    case 461u: goto L_08A4A764;
    case 462u: goto L_08A4A7BC;
    case 463u: goto L_08A4A844;
    case 464u: goto L_08A4A8AC;
    case 465u: goto L_08A4A8B4;
    case 466u: goto L_08A4A8C0;
    case 467u: goto L_08A4A924;
    case 468u: goto L_08A4A92C;
    case 469u: goto L_08A4A93C;
    case 470u: goto L_08A4A9AC;
    case 471u: goto L_08A4A9C0;
    case 472u: goto L_08A4A9C8;
    case 473u: goto L_08A4A9D4;
    case 474u: goto L_08A4A9E0;
    case 475u: goto L_08A4A9E8;
    case 476u: goto L_08A4A9F4;
    case 477u: goto L_08A4A9FC;
    case 478u: goto L_08A4AA00;
    case 479u: goto L_08A4AA18;
    case 480u: goto L_08A4AA20;
    case 481u: goto L_08A4AA2C;
    case 482u: goto L_08A4AA34;
    case 483u: goto L_08A4AA38;
    case 484u: goto L_08A4AA50;
    case 485u: goto L_08A4AA54;
    case 486u: goto L_08A4AA5C;
    case 487u: goto L_08A4AA68;
    case 488u: goto L_08A4AA80;
    case 489u: goto L_08A4AA8C;
    case 490u: goto L_08A4AAA8;
    case 491u: goto L_08A4AAB4;
    case 492u: goto L_08A4AAC0;
    case 493u: goto L_08A4AAD0;
    case 494u: goto L_08A4AAD8;
    case 495u: goto L_08A4AAF4;
    case 496u: goto L_08A4AB0C;
    case 497u: goto L_08A4AB14;
    case 498u: goto L_08A4AB28;
    case 499u: goto L_08A4AB44;
    case 500u: goto L_08A4AB4C;
    case 501u: goto L_08A4AB54;
    case 502u: goto L_08A4AB64;
    case 503u: goto L_08A4AB74;
    case 504u: goto L_08A4AB94;
    case 505u: goto L_08A4ABA4;
    case 506u: goto L_08A4AC20;
    case 507u: goto L_08A4AC34;
    case 508u: goto L_08A4AC3C;
    case 509u: goto L_08A4AC4C;
    case 510u: goto L_08A4AC54;
    case 511u: goto L_08A4AC6C;
    case 512u: goto L_08A4ACA0;
    case 513u: goto L_08A4ACB0;
    case 514u: goto L_08A4AD2C;
    case 515u: goto L_08A4AD3C;
    case 516u: goto L_08A4ADC0;
    case 517u: goto L_08A4ADC8;
    case 518u: goto L_08A4ADF4;
    case 519u: goto L_08A4AE38;
    case 520u: goto L_08A4AE4C;
    case 521u: goto L_08A4AE5C;
    case 522u: goto L_08A4AE6C;
    case 523u: goto L_08A4AE78;
    case 524u: goto L_08A4AE94;
    case 525u: goto L_08A4AE9C;
    case 526u: goto L_08A4AEA4;
    case 527u: goto L_08A4AEB0;
    case 528u: goto L_08A4AEB8;
    case 529u: goto L_08A4AEC0;
    case 530u: goto L_08A4AECC;
    case 531u: goto L_08A4AEE0;
    case 532u: goto L_08A4AF00;
    case 533u: goto L_08A4AF10;
    case 534u: goto L_08A4AF20;
    case 535u: goto L_08A4AF28;
    case 536u: goto L_08A4AF30;
    case 537u: goto L_08A4AF48;
    case 538u: goto L_08A4AF70;
    case 539u: goto L_08A4AF80;
    case 540u: goto L_08A4AF90;
    case 541u: goto L_08A4AF98;
    case 542u: goto L_08A4AFA0;
    case 543u: goto L_08A4AFF0;
    case 544u: goto L_08A4AFF8;
    case 545u: goto L_08A4B008;
    case 546u: goto L_08A4B014;
    case 547u: goto L_08A4B018;
    case 548u: goto L_08A4B028;
    case 549u: goto L_08A4B03C;
    case 550u: goto L_08A4B04C;
    case 551u: goto L_08A4B054;
    case 552u: goto L_08A4B05C;
    case 553u: goto L_08A4B068;
    case 554u: goto L_08A4B07C;
    case 555u: goto L_08A4B08C;
    case 556u: goto L_08A4B094;
    case 557u: goto L_08A4B09C;
    case 558u: goto L_08A4B0A4;
    case 559u: goto L_08A4B0BC;
    case 560u: goto L_08A4B0D8;
    case 561u: goto L_08A4B0DC;
    case 562u: goto L_08A4B0F0;
    case 563u: goto L_08A4B100;
    case 564u: goto L_08A4B104;
    case 565u: goto L_08A4B10C;
    case 566u: goto L_08A4B120;
    case 567u: goto L_08A4B138;
    case 568u: goto L_08A4B13C;
    case 569u: goto L_08A4B148;
    case 570u: goto L_08A4B184;
    case 571u: goto L_08A4B18C;
    case 572u: goto L_08A4B190;
    case 573u: goto L_08A4B1C0;
    case 574u: goto L_08A4B1C8;
    case 575u: goto L_08A4B1E0;
    case 576u: goto L_08A4B208;
    case 577u: goto L_08A4B224;
    case 578u: goto L_08A4B23C;
    case 579u: goto L_08A4B264;
    case 580u: goto L_08A4B26C;
    case 581u: goto L_08A4B274;
    case 582u: goto L_08A4B27C;
    case 583u: goto L_08A4B288;
    case 584u: goto L_08A4B2A4;
    case 585u: goto L_08A4B2AC;
    case 586u: goto L_08A4B2B4;
    case 587u: goto L_08A4B2BC;
    case 588u: goto L_08A4B2C8;
    case 589u: goto L_08A4B2E4;
    case 590u: goto L_08A4B2F0;
    case 591u: goto L_08A4B2F8;
    case 592u: goto L_08A4B30C;
    case 593u: goto L_08A4B31C;
    case 594u: goto L_08A4B324;
    case 595u: goto L_08A4B32C;
    case 596u: goto L_08A4B334;
    case 597u: goto L_08A4B340;
    case 598u: goto L_08A4B368;
    case 599u: goto L_08A4B370;
    case 600u: goto L_08A4B398;
    case 601u: goto L_08A4B3A0;
    case 602u: goto L_08A4B3A8;
    case 603u: goto L_08A4B3BC;
    case 604u: goto L_08A4B3C4;
    case 605u: goto L_08A4B3F0;
    case 606u: goto L_08A4B3F8;
    case 607u: goto L_08A4B400;
    case 608u: goto L_08A4B408;
    case 609u: goto L_08A4B410;
    case 610u: goto L_08A4B41C;
    case 611u: goto L_08A4B428;
    case 612u: goto L_08A4B448;
    case 613u: goto L_08A4B450;
    case 614u: goto L_08A4B48C;
    case 615u: goto L_08A4B4D8;
    case 616u: goto L_08A4B4E0;
    case 617u: goto L_08A4B4E8;
    case 618u: goto L_08A4B4F0;
    case 619u: goto L_08A4B4F8;
    case 620u: goto L_08A4B4FC;
    case 621u: goto L_08A4B508;
    case 622u: goto L_08A4B524;
    case 623u: goto L_08A4B52C;
    case 624u: goto L_08A4B534;
    case 625u: goto L_08A4B53C;
    case 626u: goto L_08A4B544;
    case 627u: goto L_08A4B554;
    case 628u: goto L_08A4B574;
    case 629u: goto L_08A4B57C;
    case 630u: goto L_08A4B584;
    case 631u: goto L_08A4B590;
    case 632u: goto L_08A4B5B0;
    case 633u: goto L_08A4B5B8;
    case 634u: goto L_08A4B5CC;
    case 635u: goto L_08A4B5D4;
    case 636u: goto L_08A4B5DC;
    case 637u: goto L_08A4B5E8;
    case 638u: goto L_08A4B608;
    case 639u: goto L_08A4B614;
    case 640u: goto L_08A4B618;
    case 641u: goto L_08A4B624;
    case 642u: goto L_08A4B64C;
    case 643u: goto L_08A4B654;
    case 644u: goto L_08A4B65C;
    case 645u: goto L_08A4B694;
    case 646u: goto L_08A4B6C4;
    case 647u: goto L_08A4B6F4;
    case 648u: goto L_08A4B724;
    case 649u: goto L_08A4B754;
    case 650u: goto L_08A4B784;
    case 651u: goto L_08A4B7B4;
    case 652u: goto L_08A4B7E0;
    case 653u: goto L_08A4B7EC;
    case 654u: goto L_08A4B7F4;
    case 655u: goto L_08A4B800;
    case 656u: goto L_08A4B808;
    case 657u: goto L_08A4B81C;
    case 658u: goto L_08A4B86C;
    case 659u: goto L_08A4B890;
    case 660u: goto L_08A4B8B8;
    case 661u: goto L_08A4B8E4;
    case 662u: goto L_08A4B940;
    case 663u: goto L_08A4B970;
    case 664u: goto L_08A4B978;
    case 665u: goto L_08A4B984;
    case 666u: goto L_08A4B99C;
    case 667u: goto L_08A4B9A4;
    case 668u: goto L_08A4B9C0;
    case 669u: goto L_08A4BA34;
    case 670u: goto L_08A4BA3C;
    case 671u: goto L_08A4BA5C;
    case 672u: goto L_08A4BA64;
    case 673u: goto L_08A4BA7C;
    case 674u: goto L_08A4BA84;
    case 675u: goto L_08A4BAA4;
    case 676u: goto L_08A4BAC4;
    case 677u: goto L_08A4BADC;
    case 678u: goto L_08A4BAE4;
    case 679u: goto L_08A4BB00;
    case 680u: goto L_08A4BB0C;
    case 681u: goto L_08A4BB24;
    case 682u: goto L_08A4BB28;
    case 683u: goto L_08A4BB5C;
    case 684u: goto L_08A4BBA8;
    case 685u: goto L_08A4BBE8;
    case 686u: goto L_08A4BBF8;
    case 687u: goto L_08A4BC00;
    case 688u: goto L_08A4BC08;
    case 689u: goto L_08A4BC0C;
    case 690u: goto L_08A4BC24;
    case 691u: goto L_08A4BC2C;
    case 692u: goto L_08A4BC38;
    case 693u: goto L_08A4BC40;
    case 694u: goto L_08A4BC58;
    case 695u: goto L_08A4BC80;
    case 696u: goto L_08A4BCC4;
    case 697u: goto L_08A4BCE4;
    case 698u: goto L_08A4BCF8;
    case 699u: goto L_08A4BD04;
    case 700u: goto L_08A4BD24;
    case 701u: goto L_08A4BD38;
    case 702u: goto L_08A4BD44;
    case 703u: goto L_08A4BD4C;
    case 704u: goto L_08A4BD70;
    case 705u: goto L_08A4BDAC;
    case 706u: goto L_08A4BE10;
    case 707u: goto L_08A4BE2C;
    case 708u: goto L_08A4BE54;
    case 709u: goto L_08A4BE70;
    case 710u: goto L_08A4BE7C;
    case 711u: goto L_08A4BF60;
    case 712u: goto L_08A4BF78;
    case 713u: goto L_08A4BF80;
    case 714u: goto L_08A4BF88;
    case 715u: goto L_08A4BF94;
    case 716u: goto L_08A4BF9C;
    case 717u: goto L_08A4BFAC;
    case 718u: goto L_08A4BFB4;
    case 719u: goto L_08A4BFCC;
    case 720u: goto L_08A4BFD4;
    case 721u: goto L_08A4BFE0;
    case 722u: goto L_08A4BFE8;
    case 723u: goto L_08A4BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A48000:
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A48050;
      }
      goto L_08A4800C;
    }
L_08A4800C:
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.g31 = (0x08A4801Cu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4801Cu) goto L_08A4801C;
    return;
L_08A4801C:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A480E0;
      }
      goto L_08A48040;
    }
}
L_08A48040:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A480E0;
      }
      goto L_08A48050;
    }
L_08A48050:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A481F8;
      }
      goto L_08A4805C;
    }
L_08A4805C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 16u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A481F8;
      }
      goto L_08A48070;
    }
}
L_08A48070:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A481F8;
      }
      goto L_08A48084;
    }
}
L_08A48084:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A481F8;
      }
      goto L_08A48098;
    }
}
L_08A48098:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(532))))));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A480D4;
      }
      goto L_08A480A8;
    }
L_08A480A8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (16320u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A480D4;
}
}
L_08A480D4:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08A481F8;
      }
      goto L_08A480E0;
    }
L_08A480E0:
    ctx.gpr[17] = (0u | 200u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48160;
      }
      goto L_08A480F0;
    }
L_08A480F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A48160;
      }
      goto L_08A48100;
    }
L_08A48100:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1364)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(22))))));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(23))))));
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48144;
      }
      goto L_08A48118;
    }
}
L_08A48118:
    hot_regs.g31 = (0x08A48120u);
    ctx.gpr[21] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48120u) goto L_08A48120;
    return;
L_08A48120:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g31 = (0x08A48130u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48130u) goto L_08A48130;
    return;
L_08A48130:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1756), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(640), ctx.gpr[21]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48150;
      }
      goto L_08A48144;
    }
}
L_08A48144:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A48150u);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48150u) goto L_08A48150;
    return;
L_08A48150:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + g17);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1728), g4);
    g17 = (g17 + static_cast<std::uint32_t>(200));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_08A48160;
}
L_08A48160:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[19] = (0u | 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A481F8;
      }
      goto L_08A48174;
    }
}
L_08A48174:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A48180u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48180u) goto L_08A48180;
    return;
L_08A48180:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A481E4;
      }
      goto L_08A4818C;
    }
L_08A4818C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2276)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A481E4;
      }
      goto L_08A4819C;
    }
L_08A4819C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1364)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(22))))));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(23))))));
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A481C8;
      }
      goto L_08A481B4;
    }
}
L_08A481B4:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A481C0u);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A481C0u) goto L_08A481C0;
    return;
L_08A481C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A481D4;
      }
      goto L_08A481C8;
    }
L_08A481C8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A481D4u);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A481D4u) goto L_08A481D4;
    return;
L_08A481D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + g17);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1728), g4);
    g17 = (g17 + static_cast<std::uint32_t>(200));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_08A481E4;
}
L_08A481E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A48174;
      }
      goto L_08A481F8;
    }
}
L_08A481F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 11u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A483E8;
      }
      goto L_08A48208;
    }
L_08A48208:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08A48240u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48240u) goto L_08A48240;
    return;
L_08A48240:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A483E8;
      }
      goto L_08A4824C;
    }
L_08A4824C:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4835C;
      }
      goto L_08A4825C;
    }
L_08A4825C:
    ctx.gpr[17] = (2246u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2032)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(2032));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(544));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(560), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(564), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(568), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(560));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A482C8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A482C8u) goto L_08A482C8;
    return;
L_08A482C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2032)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(576));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A48344u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48344u) goto L_08A48344;
    return;
L_08A48344:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g4 << 16u);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    g4 = (static_cast<std::int32_t>(g16) < 4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A4825C;
      }
      goto L_08A4835C;
    }
}
L_08A4835C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(970))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4838C;
      }
      goto L_08A48368;
    }
L_08A48368:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), hot_regs.g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(268)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4838C;
      }
      goto L_08A48388;
    }
}
L_08A48388:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(336), ctx.gpr[23]);
    goto L_08A4838C;
L_08A4838C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A483E8;
      }
      goto L_08A483A8;
    }
}
L_08A483A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(473)));
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A483C4;
      }
      goto L_08A483B8;
    }
}
L_08A483B8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(478))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A483E8;
      }
      goto L_08A483C4;
    }
L_08A483C4:
    hot_regs.g4 = (17224u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A483D8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A483D8u) goto L_08A483D8;
    return;
L_08A483D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A483E8;
}
L_08A483E8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(988)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(992)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(996)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1000)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1004)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1008)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1012)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1016)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1020)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1024)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1028)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1032)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1036)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1040)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(1056));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4842C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-688));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(620), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(628), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(632), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(640), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(644), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(648), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(652), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(656), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(660), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(664), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(668), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(672), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(676), hot_regs.g31);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A48498;
      }
      goto L_08A48480;
    }
}
L_08A48480:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08A48498;
}
L_08A48498:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[30] = (0u | 0u);
    hot_regs.g31 = (0x08A484ACu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A484ACu) goto L_08A484AC;
    return;
L_08A484AC:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    g4 = (g18 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f14)) && f12 == f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A4850C;
      }
      goto L_08A484F0;
    }
}
}
L_08A484F0:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(f14)) && hot_regs.f13 == f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A4850C;
      }
      goto L_08A48504;
    }
}
L_08A48504:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A48518;
      }
      goto L_08A4850C;
    }
L_08A4850C:
    hot_regs.g31 = (0x08A48514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48514u) goto L_08A48514;
    return;
L_08A48514:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A48518;
L_08A48518:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17204u << 16u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    f14 = std::bit_cast<float>(g4);
    f12 = f12 / f14;
    g4 = (15502u << 16u);
    g4 = (g4 | 64012u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f13 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f14));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    hot_regs.f15 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16256u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A485B4;
      }
      goto L_08A485A8;
    }
}
}
L_08A485A8:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A485F0;
      }
      goto L_08A485B4;
    }
L_08A485B4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A485F0;
}
}
L_08A485F0:
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
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08A48624;
    }
    goto L_08A48618;
}
}
L_08A48618:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = 0u == 0u;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A48624;
      }
      goto L_08A48624;
    }
}
L_08A48624:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f12 = f12;
        goto L_08A4864C;
    }
    goto L_08A48640;
}
}
L_08A48640:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = 0u == 0u;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4864C;
      }
      goto L_08A4864C;
    }
}
L_08A4864C:
{
    float f12 = hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A48684;
      }
      goto L_08A48668;
    }
}
L_08A48668:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A48684;
      }
      goto L_08A48680;
    }
L_08A48680:
    ctx.gpr[23] = (0u | 1u);
    goto L_08A48684;
L_08A48684:
    hot_regs.g31 = (0x08A4868Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4868Cu) goto L_08A4868C;
    return;
L_08A4868C:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A486D8;
      }
      goto L_08A48694;
    }
L_08A48694:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6272)));
    f12 = hot_regs.f13 - f12;
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08A486B8;
    }
    goto L_08A486B8;
}
L_08A486B8:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2256)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-6272), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A486D8;
      }
      goto L_08A486D4;
    }
}
L_08A486D4:
    ctx.gpr[22] = (0u | 1u);
    goto L_08A486D8;
L_08A486D8:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08A486E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A486E4u) goto L_08A486E4;
    return;
L_08A486E4:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A48708;
      }
      goto L_08A486EC;
    }
L_08A486EC:
    hot_regs.g31 = (0x08A486F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A486F4u) goto L_08A486F4;
    return;
L_08A486F4:
    hot_regs.g31 = (0x08A486FCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 707u, 0x089476BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A486FCu) goto L_08A486FC;
    return;
L_08A486FC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48708;
      }
      goto L_08A48704;
    }
L_08A48704:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A48708;
L_08A48708:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48934;
      }
      goto L_08A48710;
    }
L_08A48710:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48758;
      }
      goto L_08A4871C;
    }
L_08A4871C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (8192u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48758;
      }
      goto L_08A48734;
    }
}
L_08A48734:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g6 = (0u | 1u);
    g6 = (g6 & 1u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-513));
    g5 = (g5 & hot_regs.g7);
    g6 = (g6 << 9u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A48758;
}
L_08A48758:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A487DC;
      }
      goto L_08A4876C;
    }
}
L_08A4876C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A48778u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48778u) goto L_08A48778;
    return;
L_08A48778:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A487C8;
      }
      goto L_08A48780;
    }
L_08A48780:
    hot_regs.g31 = (0x08A48788u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48788u) goto L_08A48788;
    return;
L_08A48788:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (8192u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A487C8;
      }
      goto L_08A4879C;
    }
}
L_08A4879C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A487A8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A487A8u) goto L_08A487A8;
    return;
L_08A487A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(72)));
    g5 = (0u | 1u);
    g5 = (g5 & 1u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & hot_regs.g6);
    g5 = (g5 << 9u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A487C8;
}
L_08A487C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A4876C;
      }
      goto L_08A487DC;
    }
}
L_08A487DC:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g2 = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A48820u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48820u) goto L_08A48820;
    return;
L_08A48820:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48880;
      }
      goto L_08A48828;
    }
L_08A48828:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48880;
      }
      goto L_08A48848;
    }
}
L_08A48848:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (8192u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48880;
      }
      goto L_08A48860;
    }
}
L_08A48860:
    hot_regs.g31 = (0x08A48868u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48868u) goto L_08A48868;
    return;
L_08A48868:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48880;
      }
      goto L_08A48870;
    }
L_08A48870:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A48880;
      }
      goto L_08A4887C;
    }
L_08A4887C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A48880;
L_08A48880:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A488B0;
      }
      goto L_08A4888C;
    }
L_08A4888C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g6 = (0u | 0u);
    g6 = (g6 & 1u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-513));
    g5 = (g5 & hot_regs.g7);
    g6 = (g6 << 9u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A488B0;
}
L_08A488B0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48918;
      }
      goto L_08A488C4;
    }
}
L_08A488C4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A488D0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A488D0u) goto L_08A488D0;
    return;
L_08A488D0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48904;
      }
      goto L_08A488D8;
    }
L_08A488D8:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A488E4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A488E4u) goto L_08A488E4;
    return;
L_08A488E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(72)));
    g5 = (0u | 0u);
    g5 = (g5 & 1u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & hot_regs.g6);
    g5 = (g5 << 9u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A48904;
}
L_08A48904:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A488C4;
      }
      goto L_08A48918;
    }
}
L_08A48918:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4892C;
      }
      goto L_08A48920;
    }
L_08A48920:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A49960;
      }
      goto L_08A4892C;
    }
L_08A4892C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4949C;
      }
      goto L_08A48934;
    }
L_08A48934:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48F14;
      }
      goto L_08A48950;
    }
}
L_08A48950:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48F14;
      }
      goto L_08A48964;
    }
}
L_08A48964:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48994;
      }
      goto L_08A48974;
    }
}
L_08A48974:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(476)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48994;
      }
      goto L_08A48984;
    }
}
L_08A48984:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(860)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48E60;
      }
      goto L_08A48994;
    }
}
L_08A48994:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1934)));
    hot_regs.f12 = std::bit_cast<float>(g4);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    g4 = (17096u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f20 = hot_regs.f13 - f20;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2076)));
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A48A2C;
      }
      goto L_08A489CC;
    }
}
}
L_08A489CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48A2C;
      }
      goto L_08A489E8;
    }
}
L_08A489E8:
    hot_regs.g31 = (0x08A489F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A489F0u) goto L_08A489F0;
    return;
L_08A489F0:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A48A2C;
      }
      goto L_08A489F8;
    }
L_08A489F8:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(3200));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(3220)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(3216)));
    f20 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6400)));
    { const float fs = f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(3261))))));
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(3261), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A48A7C;
      }
      goto L_08A48A2C;
    }
}
}
L_08A48A2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48A6C;
      }
      goto L_08A48A48;
    }
}
L_08A48A48:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(816));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A48A58u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48A58u) goto L_08A48A58;
    return;
L_08A48A58:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A48A64u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 14u, 0x089380CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48A64u) goto L_08A48A64;
    return;
L_08A48A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48A7C;
      }
      goto L_08A48A6C;
    }
L_08A48A6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08A48A7C;
}
L_08A48A7C:
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x08A48A8Cu);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48A8Cu) goto L_08A48A8C;
    return;
L_08A48A8C:
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A48AA0u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 115u, 0x08A40A5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48AA0u) goto L_08A48AA0;
    return;
L_08A48AA0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f22 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = f12;
        goto L_08A48AB4;
    }
    goto L_08A48AB4;
}
L_08A48AB4:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = hot_regs.f13 / hot_regs.f22;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A48AE0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48AE0u) goto L_08A48AE0;
    return;
L_08A48AE0:
    hot_regs.g31 = (0x08A48AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48AE8u) goto L_08A48AE8;
    return;
L_08A48AE8:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A48C78;
      }
      goto L_08A48AF0;
    }
L_08A48AF0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f20) || std::isnan(f12)) && hot_regs.f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A48C78;
      }
      goto L_08A48B04;
    }
}
L_08A48B04:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6404)));
    f13 = f13 / hot_regs.f22;
    ctx.set_fpu_condition((f12 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08A48B24;
    }
    goto L_08A48B24;
}
L_08A48B24:
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g31 = (0x08A48B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48B30u) goto L_08A48B30;
    return;
L_08A48B30:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(3168)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6408)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g31 = (0x08A48B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48B48u) goto L_08A48B48;
    return;
L_08A48B48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 8192u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48B68;
      }
      goto L_08A48B58;
    }
}
L_08A48B58:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16076u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const float fs = f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
    goto L_08A48B68;
}
}
L_08A48B68:
    hot_regs.g31 = (0x08A48B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48B70u) goto L_08A48B70;
    return;
L_08A48B70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A48C1C;
      }
      goto L_08A48B88;
    }
}
L_08A48B88:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (48665u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15897u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.g31 = (0x08A48BA8u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48BA8u) goto L_08A48BA8;
    return;
L_08A48BA8:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A48BB8u);
    ctx.fpr[26] = hot_regs.f22 + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48BB8u) goto L_08A48BB8;
    return;
L_08A48BB8:
    hot_regs.f13 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f22 = hot_regs.f22 + hot_regs.f13;
    hot_regs.g4 = (48716u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A48BE0u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48BE0u) goto L_08A48BE0;
    return;
L_08A48BE0:
    hot_regs.f12 = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A48C1Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48C1Cu) goto L_08A48C1C;
    return;
L_08A48C1C:
    hot_regs.g31 = (0x08A48C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48C24u) goto L_08A48C24;
    return;
L_08A48C24:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(3168));
    hot_regs.g5 = (ctx.gpr[16] & 255u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A48C3C;
      }
      goto L_08A48C34;
    }
L_08A48C34:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A48C54;
      }
      goto L_08A48C3C;
    }
L_08A48C3C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 255u);
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g5 = (g6 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08A48C54;
    }
    goto L_08A48C54;
}
L_08A48C54:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    f13 = std::bit_cast<float>(g5);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g5 = (16840u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    f13 = f13 / hot_regs.f14;
    f12 = f12 + f13;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A48D90;
      }
      goto L_08A48C78;
    }
}
}
L_08A48C78:
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A48D90;
      }
      goto L_08A48C8C;
    }
L_08A48C8C:
    hot_regs.g31 = (0x08A48C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48C94u) goto L_08A48C94;
    return;
L_08A48C94:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A48CFC;
      }
      goto L_08A48C9C;
    }
L_08A48C9C:
    hot_regs.g4 = (16040u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 62915u);
    hot_regs.g31 = (0x08A48CACu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48CACu) goto L_08A48CAC;
    return;
L_08A48CAC:
    hot_regs.g31 = (0x08A48CB4u);
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 115u, 0x08A40A5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48CB4u) goto L_08A48CB4;
    return;
L_08A48CB4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f22 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = f12;
        goto L_08A48CC8;
    }
    goto L_08A48CC8;
}
L_08A48CC8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16040u << 16u);
    g4 = (g4 | 62915u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f14;
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    f12 = f12 + f13;
    { const float fs = f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
    goto L_08A48CFC;
}
}
L_08A48CFC:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (48716u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A48D1Cu);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48D1Cu) goto L_08A48D1C;
    return;
L_08A48D1C:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A48D2Cu);
    ctx.fpr[26] = hot_regs.f22 + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48D2Cu) goto L_08A48D2C;
    return;
L_08A48D2C:
    hot_regs.f13 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f22 = hot_regs.f22 + hot_regs.f13;
    hot_regs.g4 = (48588u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A48D54u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48D54u) goto L_08A48D54;
    return;
L_08A48D54:
    hot_regs.f12 = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A48D90u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48D90u) goto L_08A48D90;
    return;
L_08A48D90:
    hot_regs.g31 = (0x08A48D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48D98u) goto L_08A48D98;
    return;
L_08A48D98:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A48DA8;
      }
      goto L_08A48DA0;
    }
L_08A48DA0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A48DA8;
L_08A48DA8:
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(hot_regs.g2));
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8422), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A48DF4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48DF4u) goto L_08A48DF4;
    return;
L_08A48DF4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A48E18;
      }
      goto L_08A48DFC;
    }
L_08A48DFC:
    ctx.gpr[30] = (0u | 1u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x08A48E18u);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 169u, 0x08A51450u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48E18u) goto L_08A48E18;
    return;
L_08A48E18:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A48E48u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 220u, 0x08A41030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48E48u) goto L_08A48E48;
    return;
L_08A48E48:
{
    std::uint32_t g28 = ctx.gpr[28];
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(8422), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(8072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4949C;
      }
      goto L_08A48E60;
    }
}
L_08A48E60:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A48E8Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48E8Cu) goto L_08A48E8C;
    return;
L_08A48E8C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(724)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x08A48EA0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48EA0u) goto L_08A48EA0;
    return;
L_08A48EA0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A48EACu);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48EACu) goto L_08A48EAC;
    return;
L_08A48EAC:
    hot_regs.g7 = (ctx.gpr[17] << 6u);
    hot_regs.g7 = (hot_regs.g2 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A48EC4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 239u, 0x088619ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48EC4u) goto L_08A48EC4;
    return;
L_08A48EC4:
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A48F08u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48F08u) goto L_08A48F08;
    return;
L_08A48F08:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4949C;
      }
      goto L_08A48F14;
    }
L_08A48F14:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 275u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A48F44;
      }
      goto L_08A48F24;
    }
L_08A48F24:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 263u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A48F44;
      }
      goto L_08A48F34;
    }
L_08A48F34:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 173u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A49200;
      }
      goto L_08A48F44;
    }
L_08A48F44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49030;
      }
      goto L_08A48F70;
    }
}
L_08A48F70:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A48F9Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48F9Cu) goto L_08A48F9C;
    return;
L_08A48F9C:
    hot_regs.g31 = (0x08A48FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48FA4u) goto L_08A48FA4;
    return;
L_08A48FA4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A48FB8u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 135u, 0x08A50F48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48FB8u) goto L_08A48FB8;
    return;
L_08A48FB8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A48FC4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A48FC4u) goto L_08A48FC4;
    return;
L_08A48FC4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 263u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A49004;
      }
      goto L_08A48FF4;
    }
L_08A48FF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49030;
      }
      goto L_08A49004;
    }
}
L_08A49004:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 173u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A49024;
      }
      goto L_08A49014;
    }
L_08A49014:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15769u << 16u);
    g4 = (g4 | 39322u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49030;
      }
      goto L_08A49024;
    }
}
L_08A49024:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08A49030;
}
L_08A49030:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (48716u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A49050u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49050u) goto L_08A49050;
    return;
L_08A49050:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A49060u);
    ctx.fpr[26] = hot_regs.f22 + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49060u) goto L_08A49060;
    return;
L_08A49060:
    hot_regs.f13 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f22 = hot_regs.f22 + hot_regs.f13;
    hot_regs.g4 = (48588u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A49088u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49088u) goto L_08A49088;
    return;
L_08A49088:
    hot_regs.f12 = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A490C4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A490C4u) goto L_08A490C4;
    return;
L_08A490C4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4910Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4910Cu) goto L_08A4910C;
    return;
L_08A4910C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), ctx.gpr[18]);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A49150u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49150u) goto L_08A49150;
    return;
L_08A49150:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 28u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A49170;
      }
      goto L_08A49168;
    }
L_08A49168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 4u);
      if (branch_taken) {
          goto L_08A49184;
      }
      goto L_08A49170;
    }
L_08A49170:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 34u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A49184;
      }
      goto L_08A49180;
    }
L_08A49180:
    ctx.gpr[17] = (0u | 2u);
    goto L_08A49184;
L_08A49184:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    hot_regs.g7 = (0u | 4u);
    hot_regs.g31 = (0x08A4919Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 345u, 0x089EE640u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4919Cu) goto L_08A4919C;
    return;
L_08A4919C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A491F8;
      }
      goto L_08A491A4;
    }
L_08A491A4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[16] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A491F8;
      }
      goto L_08A491B4;
    }
L_08A491B4:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A491E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A491E8u) goto L_08A491E8;
    return;
L_08A491E8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g16 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A491B4;
      }
      goto L_08A491F8;
    }
}
L_08A491F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4949C;
      }
      goto L_08A49200;
    }
L_08A49200:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f14)) && f12 == f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A49238;
      }
      goto L_08A4921C;
    }
}
L_08A4921C:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(f14)) && hot_regs.f13 == f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A49238;
      }
      goto L_08A49230;
    }
}
L_08A49230:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A49244;
      }
      goto L_08A49238;
    }
L_08A49238:
    hot_regs.g31 = (0x08A49240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49240u) goto L_08A49240;
    return;
L_08A49240:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A49244;
L_08A49244:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17204u << 16u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    f14 = std::bit_cast<float>(g4);
    f12 = f12 / f14;
    g4 = (15502u << 16u);
    g4 = (g4 | 64012u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f13 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(f14));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    hot_regs.f15 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (16256u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A492E0;
      }
      goto L_08A492D4;
    }
}
}
L_08A492D4:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A4931C;
      }
      goto L_08A492E0;
    }
L_08A492E0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(432)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(436)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A4931C;
}
}
L_08A4931C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(436)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[16];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x08A4936Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 413u, 0x08A4230Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4936Cu) goto L_08A4936C;
    return;
L_08A4936C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A493C8;
      }
      goto L_08A49380;
    }
}
L_08A49380:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(468)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A493C8;
      }
      goto L_08A49390;
    }
}
L_08A49390:
    hot_regs.g31 = (0x08A49398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49398u) goto L_08A49398;
    return;
L_08A49398:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A493B8;
      }
      goto L_08A493A0;
    }
L_08A493A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 64u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A493C8;
      }
      goto L_08A493B8;
    }
}
L_08A493B8:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A493C8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 85u, 0x08A5071Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A493C8u) goto L_08A493C8;
    return;
L_08A493C8:
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(hot_regs.g2));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g31 = (0x08A4940Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 354u, 0x08A41D28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4940Cu) goto L_08A4940C;
    return;
L_08A4940C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8423), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 28u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A49428;
      }
      goto L_08A49424;
    }
L_08A49424:
    ctx.gpr[17] = (0u | 4u);
    goto L_08A49428;
L_08A49428:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    hot_regs.g7 = (0u | 4u);
    hot_regs.g31 = (0x08A49440u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 345u, 0x089EE640u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49440u) goto L_08A49440;
    return;
L_08A49440:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4949C;
      }
      goto L_08A49448;
    }
L_08A49448:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4949C;
      }
      goto L_08A49458;
    }
L_08A49458:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4948Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4948Cu) goto L_08A4948C;
    return;
L_08A4948C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A49458;
      }
      goto L_08A4949C;
    }
}
L_08A4949C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49528;
      }
      goto L_08A494B8;
    }
}
L_08A494B8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49528;
      }
      goto L_08A494C4;
    }
L_08A494C4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A494FC;
      }
      goto L_08A494D4;
    }
L_08A494D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49504;
      }
      goto L_08A494F4;
    }
}
L_08A494F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49528;
      }
      goto L_08A494FC;
    }
L_08A494FC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A49960;
      }
      goto L_08A49504;
    }
L_08A49504:
    hot_regs.g31 = (0x08A4950Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4950Cu) goto L_08A4950C;
    return;
L_08A4950C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49528;
      }
      goto L_08A49514;
    }
L_08A49514:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (0x08A49520u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 762u, 0x089AB910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49520u) goto L_08A49520;
    return;
L_08A49520:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49564;
      }
      goto L_08A49528;
    }
L_08A49528:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4956C;
      }
      goto L_08A49544;
    }
}
L_08A49544:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4955Cu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4955Cu) goto L_08A4955C;
    return;
L_08A4955C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A495AC;
      }
      goto L_08A49564;
    }
L_08A49564:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A49960;
      }
      goto L_08A4956C;
    }
L_08A4956C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A495AC;
      }
      goto L_08A49588;
    }
}
L_08A49588:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A495AC;
      }
      goto L_08A49594;
    }
L_08A49594:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A495ACu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A495ACu) goto L_08A495AC;
    return;
L_08A495AC:
    hot_regs.g31 = (0x08A495B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A495B4u) goto L_08A495B4;
    return;
L_08A495B4:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A495DC;
      }
      goto L_08A495BC;
    }
L_08A495BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A495DC;
      }
      goto L_08A495CC;
    }
}
L_08A495CC:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A495DCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 318u, 0x08A41AACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A495DCu) goto L_08A495DC;
    return;
L_08A495DC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49720;
      }
      goto L_08A495E8;
    }
L_08A495E8:
    hot_regs.g4 = (0u | 41u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(488), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9638)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(490), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(492));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(504));
    ctx.gpr[8] = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (hot_regs.g7 + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(516));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(491), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(616), ctx.gpr[21]);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(526), static_cast<std::uint16_t>(ctx.gpr[10]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[10]);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    rt.memory().aot_store_word_left(hot_regs.g7 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g7 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    ctx.gpr[21] = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A496A0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 456u, 0x08A427C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A496A0u) goto L_08A496A0;
    return;
L_08A496A0:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(524), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(528))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[22] & 255u);
    hot_regs.g5 = (hot_regs.g5 & 1u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(528))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[23] & 255u);
    hot_regs.g5 = (hot_regs.g5 & 1u);
    hot_regs.g5 = (hot_regs.g5 << 1u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(488));
    hot_regs.g31 = (0x08A4971Cu);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4971Cu) goto L_08A4971C;
    return;
L_08A4971C:
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(616)));
    goto L_08A49720;
L_08A49720:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49760;
      }
      goto L_08A4972C;
    }
L_08A4972C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49760;
      }
      goto L_08A4974C;
    }
}
L_08A4974C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    g5 = (g5 << 24u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08A49760;
}
L_08A49760:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[10] = (0u < ctx.gpr[22] ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (0u < ctx.gpr[23] ? 1u : 0u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    hot_regs.g31 = (0x08A497A0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 470u, 0x08A42880u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A497A0u) goto L_08A497A0;
    return;
L_08A497A0:
    ctx.gpr[21] = (0u | 1u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 28u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A497BC;
      }
      goto L_08A497B4;
    }
L_08A497B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 4u);
      if (branch_taken) {
          goto L_08A497D0;
      }
      goto L_08A497BC;
    }
L_08A497BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 34u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A497D0;
      }
      goto L_08A497CC;
    }
L_08A497CC:
    ctx.gpr[21] = (0u | 2u);
    goto L_08A497D0;
L_08A497D0:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g7 = (0u | 4u);
    hot_regs.g31 = (0x08A497E8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 345u, 0x089EE640u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A497E8u) goto L_08A497E8;
    return;
L_08A497E8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49844;
      }
      goto L_08A497F0;
    }
L_08A497F0:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[16] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49844;
      }
      goto L_08A49800;
    }
L_08A49800:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(544));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A49834u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49834u) goto L_08A49834;
    return;
L_08A49834:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g16 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A49800;
      }
      goto L_08A49844;
    }
}
L_08A49844:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[10] = (g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A49868u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_08A499A4;
}
L_08A49868:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4995C;
      }
      goto L_08A49874;
    }
L_08A49874:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4995C;
      }
      goto L_08A49894;
    }
}
L_08A49894:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4995C;
      }
      goto L_08A4989C;
    }
L_08A4989C:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A498D0;
      }
      goto L_08A498B0;
    }
L_08A498B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (8192u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A498D0;
      }
      goto L_08A498C8;
    }
}
L_08A498C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A49938;
      }
      goto L_08A498D0;
    }
L_08A498D0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[19] = (0u | 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49938;
      }
      goto L_08A498E4;
    }
}
L_08A498E4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A498F0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A498F0u) goto L_08A498F0;
    return;
L_08A498F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49924;
      }
      goto L_08A498F8;
    }
L_08A498F8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A49904u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49904u) goto L_08A49904;
    return;
L_08A49904:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(472)));
    hot_regs.g5 = (8192u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49924;
      }
      goto L_08A49918;
    }
}
L_08A49918:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49938;
      }
      goto L_08A49924;
    }
L_08A49924:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A498E4;
      }
      goto L_08A49938;
    }
}
L_08A49938:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4995C;
      }
      goto L_08A49940;
    }
L_08A49940:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(608)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4995Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    goto L_08A4842C;
}
L_08A4995C:
    hot_regs.g2 = (0u | 1u);
    goto L_08A49960;
L_08A49960:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(620)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(624)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(628)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(632)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(636)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(640)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(644)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(648)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(652)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(656)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(660)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(664)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(668)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(672)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(676)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A499A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1044), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1048), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1052), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1080), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1084), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1088), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1092), hot_regs.g31);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[23] = (hot_regs.g7 | 0u);
    ctx.gpr[21] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[11] & 255u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g5);
    hot_regs.g31 = (0x08A49A18u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49A18u) goto L_08A49A18;
    return;
L_08A49A18:
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49A30;
      }
      goto L_08A49A24;
    }
L_08A49A24:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A49A30u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 503u, 0x08A42E70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49A30u) goto L_08A49A30;
    return;
L_08A49A30:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B3A0;
      }
      goto L_08A49A38;
    }
L_08A49A38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49A68;
      }
      goto L_08A49A40;
    }
L_08A49A40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49A68;
      }
      goto L_08A49A5C;
    }
}
L_08A49A5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A49A84;
      }
      goto L_08A49A68;
    }
L_08A49A68:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08A49A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49A74u) goto L_08A49A74;
    return;
L_08A49A74:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A49A8C;
      }
      goto L_08A49A7C;
    }
L_08A49A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49AA8;
      }
      goto L_08A49A84;
    }
L_08A49A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B450;
      }
      goto L_08A49A8C;
    }
L_08A49A8C:
    hot_regs.g31 = (0x08A49A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49A94u) goto L_08A49A94;
    return;
L_08A49A94:
    hot_regs.g31 = (0x08A49A9Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 707u, 0x089476BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49A9Cu) goto L_08A49A9C;
    return;
L_08A49A9C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49AA8;
      }
      goto L_08A49AA4;
    }
L_08A49AA4:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A49AA8;
L_08A49AA8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49AB0;
    }
L_08A49AB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49ACC;
    }
}
L_08A49ACC:
    hot_regs.g31 = (0x08A49AD4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49AD4u) goto L_08A49AD4;
    return;
L_08A49AD4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49ADC;
    }
L_08A49ADC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49AEC;
    }
L_08A49AEC:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49AF8;
    }
L_08A49AF8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2076)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (15820u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g5 = (15820u << 16u);
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49B8C;
    }
L_08A49B8C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49BA4;
    }
}
L_08A49BA4:
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g6);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16051u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 13107u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49C38;
      }
      goto L_08A49C0C;
    }
L_08A49C0C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
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
    g5 = (ctx.vfpu_scalar_bits_ct<64u>());
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A49C44;
      }
      goto L_08A49C38;
    }
}
L_08A49C38:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16457u << 16u);
    g5 = (g5 | 4059u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    goto L_08A49C44;
}
L_08A49C44:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16201u << 16u);
    g5 = (g5 | 4059u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g5 = (16006u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A49CB4;
      }
      goto L_08A49C60;
    }
}
L_08A49C60:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 2706u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A49C94;
      }
      goto L_08A49C78;
    }
}
L_08A49C78:
    hot_regs.f14 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g5 = (16192u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A49CB4;
      }
      goto L_08A49C94;
    }
L_08A49C94:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    f13 = f13 / hot_regs.f12;
    g5 = (16253u << 16u);
    g5 = (g5 | 28836u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A49D04;
      }
      goto L_08A49CB4;
    }
}
}
L_08A49CB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(460)));
    hot_regs.g6 = (64u << 16u);
    g5 = (g5 | hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(460), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(1772), g5);
    g5 = (16672u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A49CF4;
      }
      goto L_08A49CE4;
    }
}
L_08A49CE4:
    hot_regs.g31 = (0x08A49CECu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20328)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49CECu) goto L_08A49CEC;
    return;
L_08A49CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49CF4;
    }
L_08A49CF4:
    hot_regs.g31 = (0x08A49CFCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-20324)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49CFCu) goto L_08A49CFC;
    return;
L_08A49CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A49D1C;
      }
      goto L_08A49D04;
    }
L_08A49D04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(460)));
    g6 = (65472u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(460), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(1772), 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A49D1C;
}
L_08A49D1C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A49D40u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 584u, 0x08827CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49D40u) goto L_08A49D40;
    return;
L_08A49D40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A49D78u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 324u, 0x088AA4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49D78u) goto L_08A49D78;
    return;
L_08A49D78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(ctx.gpr[16]));
    hot_regs.g4 = g4;
        goto L_08A49DC4;
    }
    goto L_08A49D94;
}
L_08A49D94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(ctx.gpr[16]));
    hot_regs.g4 = g4;
        goto L_08A49DC4;
    }
    goto L_08A49DB0;
}
L_08A49DB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    if (hot_regs.g4 == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_08A49DC4;
    }
    goto L_08A49DBC;
L_08A49DBC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1036), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08A49DC4;
L_08A49DC4:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 14u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A49E2C;
      }
      goto L_08A49DE4;
    }
}
L_08A49DE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A49E2C;
      }
      goto L_08A49DF0;
    }
L_08A49DF0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1040), ctx.gpr[16]);
    ctx.gpr[20] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08A49E08u);
    ctx.gpr[16] = (ctx.gpr[16] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 419u, 0x089D273Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49E08u) goto L_08A49E08;
    return;
L_08A49E08:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A49E18u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49E18u) goto L_08A49E18;
    return;
L_08A49E18:
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1040)));
      if (branch_taken) {
          goto L_08A49E28;
      }
      goto L_08A49E20;
    }
L_08A49E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A49E2C;
      }
      goto L_08A49E28;
    }
L_08A49E28:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A49E2C;
L_08A49E2C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    g16 = (g4 | ctx.gpr[20]);
    g16 = (0u < g16 ? 1u : 0u);
    g4 = (0u | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A49E88;
      }
      goto L_08A49E54;
    }
}
L_08A49E54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A49E80;
    }
    goto L_08A49E60;
}
L_08A49E60:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(736));
    hot_regs.g31 = (0x08A49E70u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49E70u) goto L_08A49E70;
    return;
L_08A49E70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(736)));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A49E80;
}
L_08A49E80:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(182)));
      if (branch_taken) {
          goto L_08A49EA8;
      }
      goto L_08A49E88;
    }
L_08A49E88:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A49EA8;
      }
      goto L_08A49EA4;
    }
}
L_08A49EA4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1360)));
    goto L_08A49EA8;
L_08A49EA8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAD8;
      }
      goto L_08A49EB0;
    }
L_08A49EB0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 6u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4AAD8;
      }
      goto L_08A49ECC;
    }
}
L_08A49ECC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1360)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A49F10;
      }
      goto L_08A49ED8;
    }
L_08A49ED8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49EE8;
      }
      goto L_08A49EE0;
    }
L_08A49EE0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F10;
      }
      goto L_08A49EE8;
    }
L_08A49EE8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAD8;
      }
      goto L_08A49EF0;
    }
L_08A49EF0:
    hot_regs.g31 = (0x08A49EF8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 319u, 0x0890D46Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49EF8u) goto L_08A49EF8;
    return;
L_08A49EF8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAD8;
      }
      goto L_08A49F00;
    }
L_08A49F00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4AAD8;
      }
      goto L_08A49F10;
    }
L_08A49F10:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A49F24;
      }
      goto L_08A49F18;
    }
L_08A49F18:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_08A49F58;
      }
      goto L_08A49F24;
    }
L_08A49F24:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_08A49F54;
    }
    goto L_08A49F34;
}
L_08A49F34:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(737));
    hot_regs.g31 = (0x08A49F44u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49F44u) goto L_08A49F44;
    return;
L_08A49F44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(96), hot_regs.g2);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(737)));
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
    goto L_08A49F54;
}
L_08A49F54:
    ctx.gpr[16] = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(180)));
    goto L_08A49F58;
L_08A49F58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 57u);
    { const bool branch_taken = ctx.gpr[16] == g4;
    g4 = (0u | 58u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4A8B4;
      }
      goto L_08A49F64;
    }
}
L_08A49F64:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A4A8B4;
      }
      goto L_08A49F6C;
    }
L_08A49F6C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A4A8B4;
      }
      goto L_08A49F74;
    }
L_08A49F74:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    f12 = f12 - hot_regs.f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    f14 = f14 - hot_regs.f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A49FC4;
      }
      goto L_08A49FAC;
    }
}
}
L_08A49FAC:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g31 = (0x08A49FB8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49FB8u) goto L_08A49FB8;
    return;
L_08A49FB8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1036)));
      if (branch_taken) {
          goto L_08A4A000;
      }
      goto L_08A49FC4;
    }
L_08A49FC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[23] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1036)));
      if (branch_taken) {
          goto L_08A49FEC;
      }
      goto L_08A49FD0;
    }
L_08A49FD0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(738));
    hot_regs.g31 = (0x08A49FE0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49FE0u) goto L_08A49FE0;
    return;
L_08A49FE0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(738)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A49FEC;
L_08A49FEC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(184)));
    hot_regs.g31 = (0x08A49FFCu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 605u, 0x08906CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A49FFCu) goto L_08A49FFC;
    return;
L_08A49FFC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    goto L_08A4A000;
L_08A4A000:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A450;
      }
      goto L_08A4A008;
    }
L_08A4A008:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A4A034;
      }
      goto L_08A4A014;
    }
L_08A4A014:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A4A020u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 36u, 0x088E43E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A020u) goto L_08A4A020;
    return;
L_08A4A020:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A034;
      }
      goto L_08A4A028;
    }
L_08A4A028:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A4A034u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 108u, 0x089387ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A034u) goto L_08A4A034;
    return;
L_08A4A034:
    hot_regs.g31 = (0x08A4A03Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A03Cu) goto L_08A4A03C;
    return;
L_08A4A03C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A064;
      }
      goto L_08A4A044;
    }
L_08A4A044:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 8192u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4A064;
      }
      goto L_08A4A054;
    }
}
L_08A4A054:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    g4 = (g4 & 2048u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4A0C0;
      }
      goto L_08A4A064;
    }
}
L_08A4A064:
    hot_regs.g5 = (ctx.gpr[23] & 255u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A4A0A0;
      }
      goto L_08A4A070;
    }
L_08A4A070:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (hot_regs.g4 | 0u);
    goto L_08A4A078;
L_08A4A078:
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[30]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.gpr[8] = (ctx.gpr[16] & 255u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4A098u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A098u) goto L_08A4A098;
    return;
L_08A4A098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3EC;
      }
      goto L_08A4A0A0;
    }
L_08A4A0A0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (0u | 255u);
    g30 = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(24)));
    g30 = (g30 << 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g30 = (g5 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[30] = g30;
        goto L_08A4A0B8;
    }
    goto L_08A4A0B8;
}
L_08A4A0B8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08A4A078;
      }
      goto L_08A4A0C0;
    }
L_08A4A0C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4A26C;
      }
      goto L_08A4A0D0;
    }
}
L_08A4A0D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 23u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A140;
      }
      goto L_08A4A0E0;
    }
L_08A4A0E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 22u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A140;
      }
      goto L_08A4A0F0;
    }
L_08A4A0F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 21u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A140;
      }
      goto L_08A4A100;
    }
L_08A4A100:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 37u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A130;
      }
      goto L_08A4A110;
    }
L_08A4A110:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 34u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A130;
      }
      goto L_08A4A120;
    }
L_08A4A120:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 20u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A26C;
      }
      goto L_08A4A130;
    }
L_08A4A130:
    hot_regs.g31 = (0x08A4A138u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A138u) goto L_08A4A138;
    return;
L_08A4A138:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A26C;
      }
      goto L_08A4A140;
    }
L_08A4A140:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4A174;
      }
      goto L_08A4A168;
    }
}
L_08A4A168:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A4A1B0;
      }
      goto L_08A4A174;
    }
L_08A4A174:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A4A1B0;
}
}
L_08A4A1B0:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = (49312u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x08A4A200u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A200u) goto L_08A4A200;
    return;
L_08A4A200:
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 1500u);
    hot_regs.g31 = (0x08A4A214u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A214u) goto L_08A4A214;
    return;
L_08A4A214:
    hot_regs.g5 = (ctx.gpr[23] & 255u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A4A228;
      }
      goto L_08A4A220;
    }
L_08A4A220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4A240;
      }
      goto L_08A4A228;
    }
L_08A4A228:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (0u | 255u);
    g30 = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(24)));
    g30 = (g30 << 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g30 = (g5 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[30] = g30;
        goto L_08A4A240;
    }
    goto L_08A4A240;
}
L_08A4A240:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[30]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.gpr[8] = (ctx.gpr[16] & 255u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4A264u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A264u) goto L_08A4A264;
    return;
L_08A4A264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A3EC;
      }
      goto L_08A4A26C;
    }
L_08A4A26C:
    hot_regs.g31 = (0x08A4A274u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 327u, 0x08911284u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A274u) goto L_08A4A274;
    return;
L_08A4A274:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A39C;
      }
      goto L_08A4A27C;
    }
L_08A4A27C:
    hot_regs.g31 = (0x08A4A284u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A284u) goto L_08A4A284;
    return;
L_08A4A284:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A32C;
      }
      goto L_08A4A28C;
    }
L_08A4A28C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3164)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4A39C;
      }
      goto L_08A4A2A0;
    }
}
L_08A4A2A0:
    hot_regs.g31 = (0x08A4A2A8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 281u, 0x088E2A9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A2A8u) goto L_08A4A2A8;
    return;
L_08A4A2A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4A2C0;
    }
    goto L_08A4A2B4;
}
L_08A4A2B4:
    hot_regs.g31 = (0x08A4A2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A2BCu) goto L_08A4A2BC;
    return;
L_08A4A2BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4A2C0;
L_08A4A2C0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A4A2CCu);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 600u, 0x0893E5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A2CCu) goto L_08A4A2CC;
    return;
L_08A4A2CC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A2FC;
      }
      goto L_08A4A2D4;
    }
L_08A4A2D4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A4A2E8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 175u, 0x089089B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A2E8u) goto L_08A4A2E8;
    return;
L_08A4A2E8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (16640u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A4A2FC;
}
L_08A4A2FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 28u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A31C;
      }
      goto L_08A4A30C;
    }
L_08A4A30C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(2500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3164), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4A39C;
      }
      goto L_08A4A31C;
    }
}
L_08A4A31C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(1000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3164), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4A39C;
      }
      goto L_08A4A32C;
    }
}
L_08A4A32C:
    hot_regs.g31 = (0x08A4A334u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 281u, 0x088E2A9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A334u) goto L_08A4A334;
    return;
L_08A4A334:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4A34C;
    }
    goto L_08A4A340;
}
L_08A4A340:
    hot_regs.g31 = (0x08A4A348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A348u) goto L_08A4A348;
    return;
L_08A4A348:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4A34C;
L_08A4A34C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A4A358u);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 600u, 0x0893E5E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A358u) goto L_08A4A358;
    return;
L_08A4A358:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A39C;
      }
      goto L_08A4A360;
    }
L_08A4A360:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4A378;
    }
    goto L_08A4A36C;
}
L_08A4A36C:
    hot_regs.g31 = (0x08A4A374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A374u) goto L_08A4A374;
    return;
L_08A4A374:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4A378;
L_08A4A378:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x08A4A388u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 635u, 0x0893E914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A388u) goto L_08A4A388;
    return;
L_08A4A388:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (16640u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A4A39C;
}
L_08A4A39C:
    hot_regs.g5 = (ctx.gpr[23] & 255u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A4A3B0;
      }
      goto L_08A4A3A8;
    }
L_08A4A3A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4A3C8;
      }
      goto L_08A4A3B0;
    }
L_08A4A3B0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    g5 = (0u | 255u);
    g30 = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(24)));
    g30 = (g30 << 2u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g30 = (g5 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[30] = g30;
        goto L_08A4A3C8;
    }
    goto L_08A4A3C8;
}
L_08A4A3C8:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[30]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    ctx.gpr[8] = (ctx.gpr[16] & 255u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4A3ECu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A3ECu) goto L_08A4A3EC;
    return;
L_08A4A3EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1360)));
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A41C;
      }
      goto L_08A4A3FC;
    }
L_08A4A3FC:
    hot_regs.g4 = (0u | 12u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4A414u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A414u) goto L_08A4A414;
    return;
L_08A4A414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A434;
      }
      goto L_08A4A41C;
    }
L_08A4A41C:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4A434u);
    ctx.gpr[8] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A434u) goto L_08A4A434;
    return;
L_08A4A434:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A448;
      }
      goto L_08A4A440;
    }
L_08A4A440:
    hot_regs.g31 = (0x08A4A448u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 780u, 0x0890F68Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A448u) goto L_08A4A448;
    return;
L_08A4A448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A630;
      }
      goto L_08A4A450;
    }
L_08A4A450:
    hot_regs.g4 = (0u | 32u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(192), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9637)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(212));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[1]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (2237u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g6 == 0u) {
    hot_regs.g6 = (2237u << 16u);
        goto L_08A4A518;
    }
    goto L_08A4A4E0;
L_08A4A4E0:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(752), static_cast<std::uint8_t>(0u));
    goto L_08A4A4E4;
L_08A4A4E4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    g7 = (g7 < hot_regs.g4 ? 1u : 0u);
    g7 = (g7 & 255u);
    if (g7 != 0u) {
    g6 = (g6 + static_cast<std::uint32_t>(12));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
        goto L_08A4A508;
    }
    goto L_08A4A4F8;
}
L_08A4A4F8:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (g6 | 0u);
    g6 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A4A50C;
      }
      goto L_08A4A508;
    }
}
L_08A4A508:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_08A4A50C;
L_08A4A50C:
    if (hot_regs.g6 != 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(752), static_cast<std::uint8_t>(0u));
        goto L_08A4A4E4;
    }
    goto L_08A4A514;
L_08A4A514:
    hot_regs.g6 = (2237u << 16u);
    goto L_08A4A518;
L_08A4A518:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-28736));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(104)));
    if (hot_regs.g5 == g6) {
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g6 = g6;
        goto L_08A4A544;
    }
    goto L_08A4A528;
}
L_08A4A528:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(753), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    g4 = (g4 < hot_regs.g6 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(748), hot_regs.g5);
    hot_regs.g4 = g4;
        goto L_08A4A550;
    }
    goto L_08A4A540;
}
L_08A4A540:
    hot_regs.g4 = (2237u << 16u);
    goto L_08A4A544;
L_08A4A544:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(748), hot_regs.g5);
    hot_regs.g4 = g4;
    goto L_08A4A550;
}
L_08A4A550:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(748)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(744), g4);
    g4 = (2237u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(764), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(764)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(740), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(744)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(740)));
    g4 = (g4 ^ hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(744)));
    hot_regs.g4 = g4;
        goto L_08A4A594;
    }
    goto L_08A4A58C;
}
L_08A4A58C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A4A598;
      }
      goto L_08A4A594;
    }
L_08A4A594:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    goto L_08A4A598;
L_08A4A598:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(g4));
    g1 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 8u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(198), static_cast<std::uint8_t>(g1));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(203), static_cast<std::uint8_t>(ctx.gpr[16]));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(202), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(199), static_cast<std::uint8_t>(g4));
    g1 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 8u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(200), static_cast<std::uint8_t>(g1));
    g4 = (ctx.gpr[23] & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4A5D8;
      }
      goto L_08A4A5D0;
    }
}
L_08A4A5D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4A5F0;
      }
      goto L_08A4A5D8;
    }
L_08A4A5D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (0u | 255u);
    g30 = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(24)));
    g30 = (g30 << 2u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g30 = (g4 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
        goto L_08A4A5F0;
    }
    goto L_08A4A5F0;
}
L_08A4A5F0:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(201), static_cast<std::uint8_t>(ctx.gpr[30]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(204));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g31 = (0x08A4A630u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A630u) goto L_08A4A630;
    return;
L_08A4A630:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A8AC;
      }
      goto L_08A4A63C;
    }
L_08A4A63C:
    ctx.gpr[16] = (0u | 8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 23u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A680;
      }
      goto L_08A4A650;
    }
L_08A4A650:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 22u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A680;
      }
      goto L_08A4A660;
    }
L_08A4A660:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 21u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A680;
      }
      goto L_08A4A670;
    }
L_08A4A670:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 37u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A684;
      }
      goto L_08A4A680;
    }
L_08A4A680:
    ctx.gpr[16] = (0u | 32u);
    goto L_08A4A684;
L_08A4A684:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (15395u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4A6E8u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A6E8u) goto L_08A4A6E8;
    return;
L_08A4A6E8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A754;
      }
      goto L_08A4A6F0;
    }
L_08A4A6F0:
    ctx.gpr[23] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A754;
      }
      goto L_08A4A700;
    }
L_08A4A700:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 7u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4A740u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A740u) goto L_08A4A740;
    return;
L_08A4A740:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    g23 = (g23 & 255u);
    hot_regs.g4 = (static_cast<std::int32_t>(g23) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08A4A700;
      }
      goto L_08A4A754;
    }
}
L_08A4A754:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 35u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4A8AC;
      }
      goto L_08A4A764;
    }
L_08A4A764:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    hot_regs.g4 = (0u | 81u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4A7BCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A7BCu) goto L_08A4A7BC;
    return;
L_08A4A7BC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (48716u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g4 = (0u | 81u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4A844u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A844u) goto L_08A4A844;
    return;
L_08A4A844:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (0u | 81u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4A8ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A8ACu) goto L_08A4A8AC;
    return;
L_08A4A8AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA80;
      }
      goto L_08A4A8B4;
    }
L_08A4A8B4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-1040)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA80;
      }
      goto L_08A4A8C0;
    }
L_08A4A8C0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (15395u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A4A924u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A924u) goto L_08A4A924;
    return;
L_08A4A924:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9C0;
      }
      goto L_08A4A92C;
    }
L_08A4A92C:
    ctx.gpr[22] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4A9C0;
      }
      goto L_08A4A93C;
    }
L_08A4A93C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15897u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    hot_regs.g4 = (0u | 7u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4A9ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A9ACu) goto L_08A4A9AC;
    return;
L_08A4A9AC:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (g22 + static_cast<std::uint32_t>(1));
    g22 = (g22 & 255u);
    hot_regs.g4 = (static_cast<std::int32_t>(g22) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08A4A93C;
      }
      goto L_08A4A9C0;
    }
}
L_08A4A9C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA80;
      }
      goto L_08A4A9C8;
    }
L_08A4A9C8:
    hot_regs.g4 = (0u | 58u);
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A4AA80;
      }
      goto L_08A4A9D4;
    }
L_08A4A9D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08A4A9E0u);
    hot_regs.g5 = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 211u, 0x0886D4F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A9E0u) goto L_08A4A9E0;
    return;
L_08A4A9E0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA20;
      }
      goto L_08A4A9E8;
    }
L_08A4A9E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4AA00;
    }
    goto L_08A4A9F4;
}
L_08A4A9F4:
    hot_regs.g31 = (0x08A4A9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4A9FCu) goto L_08A4A9FC;
    return;
L_08A4A9FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4AA00;
L_08A4AA00:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (16640u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A4AA18u);
    hot_regs.g7 = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AA18u) goto L_08A4AA18;
    return;
L_08A4AA18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08A4AA54;
      }
      goto L_08A4AA20;
    }
L_08A4AA20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08A4AA38;
    }
    goto L_08A4AA2C;
}
L_08A4AA2C:
    hot_regs.g31 = (0x08A4AA34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AA34u) goto L_08A4AA34;
    return;
L_08A4AA34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08A4AA38;
L_08A4AA38:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    hot_regs.g6 = (16640u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A4AA50u);
    hot_regs.g7 = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AA50u) goto L_08A4AA50;
    return;
L_08A4AA50:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    goto L_08A4AA54;
L_08A4AA54:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AA80;
      }
      goto L_08A4AA5C;
    }
L_08A4AA5C:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g31 = (0x08A4AA68u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AA68u) goto L_08A4AA68;
    return;
L_08A4AA68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (g4 | 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
    goto L_08A4AA80;
}
L_08A4AA80:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAD0;
      }
      goto L_08A4AA8C;
    }
L_08A4AA8C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1252)));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A4AAD0;
      }
      goto L_08A4AAA8;
    }
}
L_08A4AAA8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AAD0;
      }
      goto L_08A4AAB4;
    }
L_08A4AAB4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2192)));
    { const bool branch_taken = ctx.gpr[21] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A4AAD0;
      }
      goto L_08A4AAC0;
    }
L_08A4AAC0:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1748), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(1744), 0u);
    hot_regs.g31 = (0x08A4AAD0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 598u, 0x0890A484u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AAD0u) goto L_08A4AAD0;
    return;
L_08A4AAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B208;
      }
      goto L_08A4AAD8;
    }
L_08A4AAD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    g5 = (g4 + static_cast<std::uint32_t>(-1));
    g5 = (g5 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4B208;
      }
      goto L_08A4AAF4;
    }
}
L_08A4AAF4:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(6912)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4AB0C:
    hot_regs.g31 = (0x08A4AB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AB14u) goto L_08A4AB14;
    return;
L_08A4AB14:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6340)));
    hot_regs.g31 = (0x08A4AB28u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6344)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AB28u) goto L_08A4AB28;
    return;
L_08A4AB28:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (hot_regs.g2 >> 31u);
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AB4C;
      }
      goto L_08A4AB44;
    }
}
L_08A4AB44:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A4AB4C;
      }
      goto L_08A4AB4C;
    }
L_08A4AB4C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC3C;
      }
      goto L_08A4AB54;
    }
L_08A4AB54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    g4 = (static_cast<std::int32_t>(g4) < 13 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AC3C;
      }
      goto L_08A4AB64;
    }
}
L_08A4AB64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    g4 = (static_cast<std::int32_t>(g4) < 17 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AC3C;
      }
      goto L_08A4AB74;
    }
}
L_08A4AB74:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(344));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08A4AB94u);
    hot_regs.g6 = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AB94u) goto L_08A4AB94;
    return;
L_08A4AB94:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AC34;
      }
      goto L_08A4ABA4;
    }
L_08A4ABA4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 68u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4AC20u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AC20u) goto L_08A4AC20;
    return;
L_08A4AC20:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g16 & 255u);
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A4ABA4;
      }
      goto L_08A4AC34;
    }
}
L_08A4AC34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AE38;
      }
      goto L_08A4AC3C;
    }
L_08A4AC3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1036)));
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AC54;
      }
      goto L_08A4AC4C;
    }
}
L_08A4AC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4AC6C;
      }
      goto L_08A4AC54;
    }
L_08A4AC54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (0u | 255u);
    g30 = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(24)));
    g30 = (g30 << 2u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g30 = (g4 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
        goto L_08A4AC6C;
    }
    goto L_08A4AC6C;
}
L_08A4AC6C:
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[30]);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A4ACA0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 71u, 0x08B0452Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4ACA0u) goto L_08A4ACA0;
    return;
L_08A4ACA0:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[16] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AD3C;
      }
      goto L_08A4ACB0;
    }
L_08A4ACB0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(576));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(612), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(608));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4AD2Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AD2Cu) goto L_08A4AD2C;
    return;
L_08A4AD2C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g16 < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A4ACB0;
      }
      goto L_08A4AD3C;
    }
}
L_08A4AD3C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(552), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4ADC8;
      }
      goto L_08A4ADC0;
    }
L_08A4ADC0:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    goto L_08A4ADC8;
L_08A4ADC8:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(528));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(544));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4ADF4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4ADF4u) goto L_08A4ADF4;
    return;
L_08A4ADF4:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 68u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A4AE38u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AE38u) goto L_08A4AE38;
    return;
L_08A4AE38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AE94;
      }
      goto L_08A4AE4C;
    }
}
L_08A4AE4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 2048u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AE94;
      }
      goto L_08A4AE5C;
    }
}
L_08A4AE5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(460)));
    g4 = (g4 & 512u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AE94;
      }
      goto L_08A4AE6C;
    }
}
L_08A4AE6C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[21] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A4AE94;
      }
      goto L_08A4AE78;
    }
L_08A4AE78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(460), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(15000));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(1764), g4);
    hot_regs.g4 = g4;
    goto L_08A4AE94;
}
L_08A4AE94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B208;
      }
      goto L_08A4AE9C;
    }
L_08A4AE9C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AEB0;
      }
      goto L_08A4AEA4;
    }
L_08A4AEA4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4AEB0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 503u, 0x08A42E70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AEB0u) goto L_08A4AEB0;
    return;
L_08A4AEB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B208;
      }
      goto L_08A4AEB8;
    }
L_08A4AEB8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AECC;
      }
      goto L_08A4AEC0;
    }
L_08A4AEC0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4AECCu);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 503u, 0x08A42E70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AECCu) goto L_08A4AECC;
    return;
L_08A4AECC:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AFF8;
      }
      goto L_08A4AEE0;
    }
}
L_08A4AEE0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(460)));
    g4 = (17095u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4AFF8;
      }
      goto L_08A4AF00;
    }
}
L_08A4AF00:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4AF20;
      }
      goto L_08A4AF10;
    }
}
L_08A4AF10:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4AF28;
      }
      goto L_08A4AF20;
    }
}
L_08A4AF20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A4AF28;
}
L_08A4AF28:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4AF70;
      }
      goto L_08A4AF30;
    }
L_08A4AF30:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4AF70;
      }
      goto L_08A4AF48;
    }
L_08A4AF48:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2049));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 11u);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08A4AF70u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 463u, 0x08A66048u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AF70u) goto L_08A4AF70;
    return;
L_08A4AF70:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4AF90;
      }
      goto L_08A4AF80;
    }
}
L_08A4AF80:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4AF98;
      }
      goto L_08A4AF90;
    }
}
L_08A4AF90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08A4AF98;
}
L_08A4AF98:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B04C;
      }
      goto L_08A4AFA0;
    }
L_08A4AFA0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(640), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (49280u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(640));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(624));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(624)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(628)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(632)));
    hot_regs.g31 = (0x08A4AFF0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4AFF0u) goto L_08A4AFF0;
    return;
L_08A4AFF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B04C;
      }
      goto L_08A4AFF8;
    }
L_08A4AFF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(473)));
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_08A4B018;
    }
    goto L_08A4B008;
}
L_08A4B008:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(478))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B04C;
      }
      goto L_08A4B014;
    }
L_08A4B014:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_08A4B018;
L_08A4B018:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (1024u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4B04C;
      }
      goto L_08A4B028;
    }
}
L_08A4B028:
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4B03Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 482u, 0x0882BFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B03Cu) goto L_08A4B03C;
    return;
L_08A4B03C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A4B04C;
}
L_08A4B04C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B208;
      }
      goto L_08A4B054;
    }
L_08A4B054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B208;
      }
      goto L_08A4B05C;
    }
L_08A4B05C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B094;
      }
      goto L_08A4B068;
    }
L_08A4B068:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08A4B07Cu);
    ctx.gpr[23] = (ctx.gpr[16] + hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B07Cu) goto L_08A4B07C;
    return;
L_08A4B07C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A4B08Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B08Cu) goto L_08A4B08C;
    return;
L_08A4B08C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B09C;
      }
      goto L_08A4B094;
    }
L_08A4B094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A4B09C;
      }
      goto L_08A4B09C;
    }
L_08A4B09C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B208;
      }
      goto L_08A4B0A4;
    }
L_08A4B0A4:
    hot_regs.g4 = (0u | 10u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(656), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9645)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(658), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x08A4B0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B0BCu) goto L_08A4B0BC;
    return;
L_08A4B0BC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (2237u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-28736));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(104)));
    g6 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A4B10C;
      }
      goto L_08A4B0D8;
    }
}
L_08A4B0D8:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1004), static_cast<std::uint8_t>(0u));
    goto L_08A4B0DC;
L_08A4B0DC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    g7 = (g7 < hot_regs.g4 ? 1u : 0u);
    g7 = (g7 & 255u);
    if (g7 != 0u) {
    g6 = (g6 + static_cast<std::uint32_t>(12));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
        goto L_08A4B100;
    }
    goto L_08A4B0F0;
}
L_08A4B0F0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (g6 | 0u);
    g6 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A4B104;
      }
      goto L_08A4B100;
    }
}
L_08A4B100:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_08A4B104;
L_08A4B104:
    if (hot_regs.g6 != 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1004), static_cast<std::uint8_t>(0u));
        goto L_08A4B0DC;
    }
    goto L_08A4B10C;
L_08A4B10C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2237u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-28736));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(104)));
    if (hot_regs.g5 == g6) {
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g6 = g6;
        goto L_08A4B13C;
    }
    goto L_08A4B120;
}
L_08A4B120:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1005), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    g4 = (g4 < hot_regs.g6 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1000), hot_regs.g5);
    hot_regs.g4 = g4;
        goto L_08A4B148;
    }
    goto L_08A4B138;
}
L_08A4B138:
    hot_regs.g4 = (2237u << 16u);
    goto L_08A4B13C;
L_08A4B13C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1000), hot_regs.g5);
    hot_regs.g4 = g4;
    goto L_08A4B148;
}
L_08A4B148:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1000)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(996), g4);
    g4 = (2237u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28736));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(1016), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1016)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(992), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(996)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(992)));
    g4 = (g4 ^ hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(996)));
    hot_regs.g4 = g4;
        goto L_08A4B18C;
    }
    goto L_08A4B184;
}
L_08A4B184:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A4B190;
      }
      goto L_08A4B18C;
    }
L_08A4B18C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    goto L_08A4B190;
L_08A4B190:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(659), static_cast<std::uint8_t>(g4));
    g1 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 8u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(660), static_cast<std::uint8_t>(g1));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1036)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(661), static_cast<std::uint8_t>(g4));
    g1 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 8u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(662), static_cast<std::uint8_t>(g1));
    g4 = (hot_regs.g5 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4B1C8;
      }
      goto L_08A4B1C0;
    }
}
L_08A4B1C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A4B1E0;
      }
      goto L_08A4B1C8;
    }
L_08A4B1C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (0u | 255u);
    g30 = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(24)));
    g30 = (g30 << 2u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g30 = (g4 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
        goto L_08A4B1E0;
    }
    goto L_08A4B1E0;
}
L_08A4B1E0:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(663), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 8u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(664), static_cast<std::uint8_t>(ctx.gpr[1]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(665), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(656));
    hot_regs.g31 = (0x08A4B208u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B208u) goto L_08A4B208;
    return;
L_08A4B208:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    g5 = (g4 + static_cast<std::uint32_t>(-1));
    g5 = (g5 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4B398;
      }
      goto L_08A4B224;
    }
}
L_08A4B224:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(6944)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4B23C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    hot_regs.g4 = (0u | 72u);
    hot_regs.g31 = (0x08A4B264u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B264u) goto L_08A4B264;
    return;
L_08A4B264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B398;
      }
      goto L_08A4B26C;
    }
L_08A4B26C:
    hot_regs.g31 = (0x08A4B274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B274u) goto L_08A4B274;
    return;
L_08A4B274:
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4B288;
      }
      goto L_08A4B27C;
    }
L_08A4B27C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), g4);
    hot_regs.g4 = g4;
    goto L_08A4B288;
}
L_08A4B288:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 62u);
    hot_regs.g31 = (0x08A4B2A4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B2A4u) goto L_08A4B2A4;
    return;
L_08A4B2A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B398;
      }
      goto L_08A4B2AC;
    }
L_08A4B2AC:
    hot_regs.g31 = (0x08A4B2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B2B4u) goto L_08A4B2B4;
    return;
L_08A4B2B4:
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4B2C8;
      }
      goto L_08A4B2BC;
    }
L_08A4B2BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), g4);
    hot_regs.g4 = g4;
    goto L_08A4B2C8;
}
L_08A4B2C8:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 61u);
    hot_regs.g31 = (0x08A4B2E4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B2E4u) goto L_08A4B2E4;
    return;
L_08A4B2E4:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A4B2F0u);
    hot_regs.g5 = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B2F0u) goto L_08A4B2F0;
    return;
L_08A4B2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B398;
      }
      goto L_08A4B2F8;
    }
L_08A4B2F8:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (0u | 62u);
    if (ctx.gpr[20] != 0u) {
    hot_regs.g6 = (0u | 61u);
        goto L_08A4B30C;
    }
    goto L_08A4B30C;
L_08A4B30C:
    hot_regs.g7 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g31 = (0x08A4B31Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B31Cu) goto L_08A4B31C;
    return;
L_08A4B31C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B398;
      }
      goto L_08A4B324;
    }
L_08A4B324:
    hot_regs.g31 = (0x08A4B32Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B32Cu) goto L_08A4B32C;
    return;
L_08A4B32C:
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4B340;
      }
      goto L_08A4B334;
    }
L_08A4B334:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9328)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9328), g4);
    hot_regs.g4 = g4;
    goto L_08A4B340;
}
L_08A4B340:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    hot_regs.g4 = (0u | 73u);
    hot_regs.g31 = (0x08A4B368u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B368u) goto L_08A4B368;
    return;
L_08A4B368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B398;
      }
      goto L_08A4B370;
    }
L_08A4B370:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(672), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(676), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(680), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    hot_regs.g4 = (0u | 74u);
    hot_regs.g31 = (0x08A4B398u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B398u) goto L_08A4B398;
    return;
L_08A4B398:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B3F0;
      }
      goto L_08A4B3A0;
    }
L_08A4B3A0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B3C4;
      }
      goto L_08A4B3A8;
    }
L_08A4B3A8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4B3BCu);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 324u, 0x088AA4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B3BCu) goto L_08A4B3BC;
    return;
L_08A4B3BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B3F0;
      }
      goto L_08A4B3C4;
    }
L_08A4B3C4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(688), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(688));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A4B3F0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 324u, 0x088AA4A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B3F0u) goto L_08A4B3F0;
    return;
L_08A4B3F0:
    hot_regs.g31 = (0x08A4B3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B3F8u) goto L_08A4B3F8;
    return;
L_08A4B3F8:
    { const bool branch_taken = ctx.gpr[19] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A4B448;
      }
      goto L_08A4B400;
    }
L_08A4B400:
    hot_regs.g31 = (0x08A4B408u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B408u) goto L_08A4B408;
    return;
L_08A4B408:
    hot_regs.g31 = (0x08A4B410u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B410u) goto L_08A4B410;
    return;
L_08A4B410:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A4B41Cu);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B41Cu) goto L_08A4B41C;
    return;
L_08A4B41C:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08A4B428u);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B428u) goto L_08A4B428;
    return;
L_08A4B428:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 240u);
    hot_regs.g6 = (0u | 128u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A4B448u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 955u, 0x0898BB44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B448u) goto L_08A4B448;
    return;
L_08A4B448:
    hot_regs.g31 = (0x08A4B450u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 290u, 0x08A4182Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B450u) goto L_08A4B450;
    return;
L_08A4B450:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1044)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1048)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1052)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1076)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1080)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1084)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1088)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1092)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4B48C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-352));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(316), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(332), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(340), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(348), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[21] = (hot_regs.g6 | 0u);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08A4B4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B4D8u) goto L_08A4B4D8;
    return;
L_08A4B4D8:
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g2;
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A4B4FC;
      }
      goto L_08A4B4E0;
    }
L_08A4B4E0:
    hot_regs.g31 = (0x08A4B4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B4E8u) goto L_08A4B4E8;
    return;
L_08A4B4E8:
    hot_regs.g31 = (0x08A4B4F0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 707u, 0x089476BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B4F0u) goto L_08A4B4F0;
    return;
L_08A4B4F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B4FC;
      }
      goto L_08A4B4F8;
    }
L_08A4B4F8:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A4B4FC;
L_08A4B4FC:
    hot_regs.g4 = (0u | 13u);
    if (ctx.gpr[23] != hot_regs.g4) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_08A4B618;
    }
    goto L_08A4B508;
L_08A4B508:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[16]));
    hot_regs.g4 = g4;
        goto L_08A4B618;
    }
    goto L_08A4B524;
}
L_08A4B524:
    hot_regs.g31 = (0x08A4B52Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B52Cu) goto L_08A4B52C;
    return;
L_08A4B52C:
    if (hot_regs.g2 == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_08A4B618;
    }
    goto L_08A4B534;
L_08A4B534:
    hot_regs.g31 = (0x08A4B53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B53Cu) goto L_08A4B53C;
    return;
L_08A4B53C:
    hot_regs.g31 = (0x08A4B544u);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B544u) goto L_08A4B544;
    return;
L_08A4B544:
    ctx.gpr[18] = (0u | 36u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A4B554u);
    hot_regs.g5 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B554u) goto L_08A4B554;
    return;
L_08A4B554:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 << 5u);
    hot_regs.g5 = (hot_regs.g2 << 2u);
    g4 = (g4 - hot_regs.g5);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != ctx.gpr[18];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4B5B0;
      }
      goto L_08A4B574;
    }
}
L_08A4B574:
    hot_regs.g31 = (0x08A4B57Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B57Cu) goto L_08A4B57C;
    return;
L_08A4B57C:
    hot_regs.g31 = (0x08A4B584u);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B584u) goto L_08A4B584;
    return;
L_08A4B584:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A4B590u);
    hot_regs.g5 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B590u) goto L_08A4B590;
    return;
L_08A4B590:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 << 5u);
    hot_regs.g5 = (hot_regs.g2 << 2u);
    g4 = (g4 - hot_regs.g5);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4B5CC;
      }
      goto L_08A4B5B0;
    }
}
L_08A4B5B0:
    hot_regs.g31 = (0x08A4B5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B5B8u) goto L_08A4B5B8;
    return;
L_08A4B5B8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 36u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08A4B5CCu);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 600u, 0x0891B7DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B5CCu) goto L_08A4B5CC;
    return;
L_08A4B5CC:
    hot_regs.g31 = (0x08A4B5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B5D4u) goto L_08A4B5D4;
    return;
L_08A4B5D4:
    hot_regs.g31 = (0x08A4B5DCu);
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B5DCu) goto L_08A4B5DC;
    return;
L_08A4B5DC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A4B5E8u);
    hot_regs.g5 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 51u, 0x089082A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B5E8u) goto L_08A4B5E8;
    return;
L_08A4B5E8:
    hot_regs.g4 = (hot_regs.g2 << 5u);
    hot_regs.g5 = (hot_regs.g2 << 2u);
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1396));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x08A4B608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B608u) goto L_08A4B608;
    return;
L_08A4B608:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A4B614u);
    hot_regs.g5 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 28u, 0x0890816Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B614u) goto L_08A4B614;
    return;
L_08A4B614:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08A4B618;
L_08A4B618:
    hot_regs.g4 = (0u | 32u);
    { const bool branch_taken = ctx.gpr[23] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A4B81C;
      }
      goto L_08A4B624;
    }
L_08A4B624:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[23] = (0u | 18u);
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4B7F4;
      }
      goto L_08A4B64C;
    }
}
L_08A4B64C:
    hot_regs.g31 = (0x08A4B654u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B654u) goto L_08A4B654;
    return;
L_08A4B654:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4B7F4;
      }
      goto L_08A4B65C;
    }
L_08A4B65C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g30 = ctx.gpr[30];
    g30 = (2236u << 16u);
    g30 = (g30 + static_cast<std::uint32_t>(32304));
    g4 = (aot_mem.aot_load8(g30 + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + g30);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 34u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_08A4B7B4;
      }
      goto L_08A4B694;
    }
}
L_08A4B694:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[30]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 7u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4B7B4;
      }
      goto L_08A4B6C4;
    }
}
L_08A4B6C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[30]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 8u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4B7B4;
      }
      goto L_08A4B6F4;
    }
}
L_08A4B6F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[30]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 42u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4B7B4;
      }
      goto L_08A4B724;
    }
}
L_08A4B724:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[30]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 39u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4B7B4;
      }
      goto L_08A4B754;
    }
}
L_08A4B754:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[30]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 40u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4B7B4;
      }
      goto L_08A4B784;
    }
}
L_08A4B784:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[30]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 45u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A4B7EC;
      }
      goto L_08A4B7B4;
    }
}
L_08A4B7B4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (0u - hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[30] + static_cast<std::uint32_t>(128));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g31 = (0x08A4B7E0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B7E0u) goto L_08A4B7E0;
    return;
L_08A4B7E0:
    ctx.gpr[30] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A4B808;
      }
      goto L_08A4B7EC;
    }
L_08A4B7EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A4BB28;
      }
      goto L_08A4B7F4;
    }
L_08A4B7F4:
    hot_regs.g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x08A4B800u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B800u) goto L_08A4B800;
    return;
L_08A4B800:
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    goto L_08A4B808;
L_08A4B808:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      if (branch_taken) {
          goto L_08A4B940;
      }
      goto L_08A4B81C;
    }
L_08A4B81C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[30] = (0u | 1u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A4B890;
      }
      goto L_08A4B86C;
    }
L_08A4B86C:
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4B890u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B890u) goto L_08A4B890;
    return;
L_08A4B890:
{
    float f12 = hot_regs.f12;
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A4B8E4;
      }
      goto L_08A4B8B8;
    }
}
L_08A4B8B8:
    hot_regs.g4 = (16153u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A4B8E4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B8E4u) goto L_08A4B8E4;
    return;
L_08A4B8E4:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A4B940;
L_08A4B940:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), ctx.gpr[20]);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08A4B970u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B970u) goto L_08A4B970;
    return;
L_08A4B970:
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_08A4BA84;
      }
      goto L_08A4B978;
    }
L_08A4B978:
    hot_regs.g4 = (0u | 12u);
    { const bool branch_taken = ctx.gpr[23] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A4B9A4;
      }
      goto L_08A4B984;
    }
L_08A4B984:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4B99Cu);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 49u, 0x08880644u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4B99Cu) goto L_08A4B99C;
    return;
L_08A4B99C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAA4;
      }
      goto L_08A4B9A4;
    }
L_08A4B9A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4BAA4;
      }
      goto L_08A4B9C0;
    }
}
L_08A4B9C0:
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (16076u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x08A4BA34u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BA34u) goto L_08A4BA34;
    return;
L_08A4BA34:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA64;
      }
      goto L_08A4BA3C;
    }
L_08A4BA3C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A4BA5Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 101u, 0x088809F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BA5Cu) goto L_08A4BA5C;
    return;
L_08A4BA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BA7C;
      }
      goto L_08A4BA64;
    }
L_08A4BA64:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4BA7Cu);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 49u, 0x08880644u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BA7Cu) goto L_08A4BA7C;
    return;
L_08A4BA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BAA4;
      }
      goto L_08A4BA84;
    }
L_08A4BA84:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A4BAA4u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 101u, 0x088809F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BAA4u) goto L_08A4BAA4;
    return;
L_08A4BAA4:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8068), 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4BAE4;
      }
      goto L_08A4BAC4;
    }
}
L_08A4BAC4:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4BADCu);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BADCu) goto L_08A4BADC;
    return;
L_08A4BADC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BB24;
      }
      goto L_08A4BAE4;
    }
L_08A4BAE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4BB24;
      }
      goto L_08A4BB00;
    }
}
L_08A4BB00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BB24;
      }
      goto L_08A4BB0C;
    }
L_08A4BB0C:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4BB24u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 24u, 0x0898019Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BB24u) goto L_08A4BB24;
    return;
L_08A4BB24:
    hot_regs.g2 = (ctx.gpr[30] | 0u);
    goto L_08A4BB28;
L_08A4BB28:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A4BB5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), hot_regs.g31);
    ctx.gpr[19] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A4BBA8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 733u, 0x08B1FD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BBA8u) goto L_08A4BBA8;
    return;
L_08A4BBA8:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const std::uint32_t vfpu_address = g19 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g19 = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g19 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    f20 = std::bit_cast<float>(0u);
    hot_regs.g4 = (17204u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(48));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f20)) && f12 == f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A4BC00;
      }
      goto L_08A4BBE8;
    }
}
}
L_08A4BBE8:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f20)) && hot_regs.f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A4BC00;
      }
      goto L_08A4BBF8;
    }
L_08A4BBF8:
{
    float f22 = hot_regs.f22;
    { const bool branch_taken = 0u == 0u;
    { const float fs = hot_regs.f20; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A4BC0C;
      }
      goto L_08A4BC00;
    }
}
L_08A4BC00:
    hot_regs.g31 = (0x08A4BC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BC08u) goto L_08A4BC08;
    return;
L_08A4BC08:
{
    float f22 = hot_regs.f22;
    { const float fs = ctx.fpr[0]; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
    goto L_08A4BC0C;
}
L_08A4BC0C:
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = hot_regs.f22 / hot_regs.f12;
    hot_regs.g31 = (0x08A4BC24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BC24u) goto L_08A4BC24;
    return;
L_08A4BC24:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g2;
    ctx.gpr[20] = (2236u << 16u);
      if (branch_taken) {
          goto L_08A4BCC4;
      }
      goto L_08A4BC2C;
    }
L_08A4BC2C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32304));
    hot_regs.g31 = (0x08A4BC38u);
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 124u, 0x08999134u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BC38u) goto L_08A4BC38;
    return;
L_08A4BC38:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BC58;
      }
      goto L_08A4BC40;
    }
L_08A4BC40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3262))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4BCC4;
      }
      goto L_08A4BC58;
    }
}
L_08A4BC58:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A4BC80u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 25u, 0x08A1C148u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BC80u) goto L_08A4BC80;
    return;
L_08A4BC80:
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BE2C;
      }
      goto L_08A4BCC4;
    }
L_08A4BCC4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    hot_regs.g5 = (16128u << 16u);
    { const bool branch_taken = g4 == 0u;
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4BDAC;
      }
      goto L_08A4BCE4;
    }
}
L_08A4BCE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4BDAC;
      }
      goto L_08A4BCF8;
    }
}
L_08A4BCF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BDAC;
      }
      goto L_08A4BD04;
    }
L_08A4BD04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A4BD4C;
      }
      goto L_08A4BD24;
    }
}
L_08A4BD24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(816));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08A4BD38u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 608u, 0x089F3910u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BD38u) goto L_08A4BD38;
    return;
L_08A4BD38:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08A4BD44u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BD44u) goto L_08A4BD44;
    return;
L_08A4BD44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BD70;
      }
      goto L_08A4BD4C;
    }
L_08A4BD4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2076)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08A4BD70;
}
L_08A4BD70:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BE10;
      }
      goto L_08A4BDAC;
    }
L_08A4BDAC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (15502u << 16u);
    g4 = (g4 | 64012u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f22; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f13 = std::bit_cast<float>(g4);
    g4 = (48896u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f13 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A4BE10;
}
}
L_08A4BE10:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08A4BE2C;
}
L_08A4BE2C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08A4BE54u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 649u, 0x08872C78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BE54u) goto L_08A4BE54;
    return;
L_08A4BE54:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4BE70u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 234u, 0x08A411C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BE70u) goto L_08A4BE70;
    return;
L_08A4BE70:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A4BF78;
      }
      goto L_08A4BE7C;
    }
L_08A4BE7C:
    hot_regs.g4 = (0u | 42u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9641)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(148));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    ctx.gpr[8] = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (hot_regs.g7 + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(172));
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    hot_regs.g2 = (ctx.gpr[10] + static_cast<std::uint32_t>(8));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(ctx.gpr[3]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), ctx.gpr[3]);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    rt.memory().aot_store_word_left(hot_regs.g7 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g7 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(ctx.gpr[8] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[8] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    rt.memory().aot_store_word_left(ctx.gpr[11] + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(ctx.gpr[11] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(hot_regs.g2 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g2 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A4BF60u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 456u, 0x08A427C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BF60u) goto L_08A4BF60;
    return;
L_08A4BF60:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(184), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A4BF78u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 186u, 0x08ADC9FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BF78u) goto L_08A4BF78;
    return;
L_08A4BF78:
    hot_regs.g31 = (0x08A4BF80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BF80u) goto L_08A4BF80;
    return;
L_08A4BF80:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g2;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 5u, 0x08A4C030u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4BF88;
    }
L_08A4BF88:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[20] = (0u | 9u);
    goto L_08A4BF94;
L_08A4BF94:
    hot_regs.g31 = (0x08A4BF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BF9Cu) goto L_08A4BF9C;
    return;
L_08A4BF9C:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(1914)));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 5u, 0x08A4C030u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4BFAC;
    }
L_08A4BFAC:
    hot_regs.g31 = (0x08A4BFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BFB4u) goto L_08A4BFB4;
    return;
L_08A4BFB4:
    ctx.gpr[18] = (ctx.gpr[16] << 2u);
    hot_regs.g4 = (hot_regs.g2 + ctx.gpr[18]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1784)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 4u, 0x08A4C024u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4BFCC;
    }
L_08A4BFCC:
    hot_regs.g31 = (0x08A4BFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BFD4u) goto L_08A4BFD4;
    return;
L_08A4BFD4:
    hot_regs.g4 = (hot_regs.g2 + ctx.gpr[18]);
    hot_regs.g31 = (0x08A4BFE0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1784)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BFE0u) goto L_08A4BFE0;
    return;
L_08A4BFE0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 4u, 0x08A4C024u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08A4BFE8;
    }
L_08A4BFE8:
    hot_regs.g31 = (0x08A4BFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A4BFF0u) goto L_08A4BFF0;
    return;
L_08A4BFF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1784)));
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    ctx.pc = 0x08A4C000u; return;}

}

void recomp_unit_0145(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0145_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_145(Runtime &runtime) {
    runtime.register_generated_unit(145u, 0x08A48000u, 16384u, &recomp_unit_0145, &recomp_unit_0145_entry);
    runtime.register_function(0x08A48000u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4800Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4801Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48040u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48050u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4805Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48070u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48084u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48098u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A480F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48100u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48118u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48120u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48130u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48144u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48150u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48160u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48174u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48180u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4818Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4819Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A481F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48208u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48240u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4824Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4825Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A482C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48344u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4835Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48368u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48388u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4838Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A483E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4842Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48480u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48498u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A484ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A484F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48504u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4850Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48514u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48518u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A485F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48618u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48624u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48640u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4864Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48668u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48680u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48684u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4868Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48694u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A486FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48704u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48708u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48710u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4871Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48734u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48758u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4876Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48778u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48780u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48788u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4879Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A487DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48820u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48828u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48848u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48860u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48868u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48870u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4887Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48880u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4888Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A488E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48904u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48918u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48920u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4892Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48934u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48950u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48964u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48974u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48984u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48994u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A489F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48A8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48AF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48B88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48BE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48C9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48CFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48D98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48DFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48E8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48EA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48EACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48EC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48F9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A48FF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49004u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49014u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49024u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49030u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49050u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49060u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49088u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A490C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4910Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49150u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49168u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49170u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49180u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49184u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4919Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A491F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49200u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4921Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49230u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49238u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49240u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49244u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A492E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4931Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4936Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49380u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49390u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49398u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A493C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4940Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49424u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49428u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49440u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49448u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49458u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4948Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4949Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A494FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49504u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4950Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49514u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49520u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49528u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49544u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4955Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49564u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4956Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49588u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49594u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A495E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A496A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4971Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49720u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4972Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4974Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49760u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A497F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49800u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49834u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49844u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49868u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49874u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49894u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4989Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A498F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49904u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49918u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49924u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49938u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49940u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4995Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49960u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A499A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A84u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49A9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49ACCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49ADCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49AF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49B8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49BA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49C94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49CFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D1Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49D94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DBCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49DF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49E88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49ECCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49ED8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49EF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49F74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A49FFCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A000u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A008u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A014u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A020u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A028u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A034u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A03Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A044u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A054u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A064u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A070u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A078u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A098u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A0F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A100u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A110u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A120u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A130u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A138u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A140u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A168u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A174u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A1B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A200u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A214u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A220u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A228u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A240u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A264u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A26Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A274u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A27Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A284u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A28Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A2FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A30Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A31Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A32Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A334u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A340u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A348u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A34Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A358u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A360u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A36Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A374u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A378u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A388u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A39Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A3FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A414u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A41Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A434u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A440u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A448u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A450u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A4F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A508u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A50Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A514u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A518u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A528u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A540u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A544u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A550u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A58Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A594u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A598u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5D0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A5F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A630u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A63Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A650u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A660u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A670u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A680u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A684u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A6F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A700u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A740u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A754u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A764u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A7BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A844u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A8C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A924u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A92Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A93Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4A9FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA18u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA50u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA68u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AA8Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAD0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAD8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AAF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB14u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB74u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AB94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ABA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AC6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ACB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AD3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADC8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4ADF4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE6Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AE9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEB0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEB8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEC0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AECCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AEE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF20u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF30u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF48u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF90u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AF98u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFA0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFF0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4AFF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B008u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B014u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B018u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B028u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B03Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B04Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B054u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B05Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B068u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B07Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B08Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B094u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B09Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B0F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B100u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B104u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B10Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B120u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B138u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B13Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B148u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B184u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B18Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B190u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B1E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B208u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B224u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B23Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B264u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B26Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B274u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B27Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B288u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2ACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2C8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B2F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B30Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B31Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B324u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B32Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B334u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B340u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B368u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B370u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B398u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3A0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3A8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3BCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B3F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B400u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B408u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B410u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B41Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B428u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B448u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B450u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B48Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4D8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4F0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4F8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B4FCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B508u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B524u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B52Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B534u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B53Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B544u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B554u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B574u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B57Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B584u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B590u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5B0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5CCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5D4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5DCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B5E8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B608u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B614u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B618u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B624u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B64Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B654u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B65Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B694u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6C4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B6F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B724u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B754u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B784u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7B4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7E0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7ECu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B7F4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B800u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B808u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B81Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B86Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B890u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8B8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B8E4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B940u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B970u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B978u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B984u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B99Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9A4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4B9C0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA34u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA3Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA64u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BA84u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAA4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BADCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BAE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB28u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BB5Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBA8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BBF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC00u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC08u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC0Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC40u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC58u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BC80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCC4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCE4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BCF8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD04u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD24u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD38u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD44u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD4Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BD70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BDACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE10u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE2Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE54u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE70u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BE7Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF60u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF78u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF80u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF88u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF94u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BF9Cu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFACu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFB4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFCCu, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFD4u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFE0u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFE8u, &recomp_unit_0145, "recomp_unit_0145");
    runtime.register_function(0x08A4BFF0u, &recomp_unit_0145, "recomp_unit_0145");
}
} // namespace psprecomp
